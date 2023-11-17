#include <stdio.h>
#include <windows.h>
#include <stdlib.h>
#include <string.h>

#define MAX_COMMAND_LENGTH 1024



int main() {
    char command[MAX_COMMAND_LENGTH];
    STARTUPINFO si;
    PROCESS_INFORMATION pi;

    while(1){
        printf("MyShell> ");


        //Read command from user
        if(!fgets(command, MAX_COMMAND_LENGTH, stdin)){
            break; // Exit on EOF
        }

        // Remove the newline character at the end of command
        size_t length = strlen(command);
        if (length > 0 && command[length - 1] == '\n') {
            command[length - 1] = '\0';
        }



        // Exit the shell on "exit" command
        if(strcmp(command, "exit")  == 0){
            break;
        }

        ZeroMemory(&si, sizeof(si));
        si.cb = sizeof(si);
        ZeroMemory(&pi, sizeof(pi));

        // Execute the command
        if(!CreateProcess(NULL, command, NULL, NULL, FALSE, 0, NULL, NULL, &si, &pi)){
            fprintf(stderr, "Command execution failed with error %d\n", GetLastError());
        } else{
            //Wait for the command to complete
            WaitForSingleObject(pi.hProcess, INFINITE);

            // Close process and thread handles
            CloseHandle(pi.hProcess);
            CloseHandle(pi.hThread);
        }

    }
    return 0;
}
