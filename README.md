# Simple Windows Shell in C

## Description
This project is a simple command-line interface shell implemented in C for Windows. It allows users to execute external commands from a basic prompt. 
This shell is a demonstration of system programming in Windows using the Win32 API.

## Features
- Basic command-line interface prompt.
- Ability to execute external commands.
- Simple and clear code structure.

## Getting Started

### Dependencies
- Windows Operating System.
- C compiler (e.g., GCC via MinGW-w64 or Microsoft Visual C).

### Installing
- Clone the repository to your local machine.
- Ensure you have a C compiler installed on your system.

### Compiling and Running
- Navigate to the directory where you cloned the repository.
- Compile the program using your C compiler. For example, with GCC, you would use `gcc shell.c -o myshell.exe`.
- Run the executable: `./myshell.exe`.

## Usage
After running the shell, you will see a prompt `MyShell> `. Here, you can type any external command supported by the Windows command line and press Enter to execute it. For example, `notepad.exe` will launch Notepad. Type `exit` and press Enter to exit the shell.

## Contributing
Contributions to improve this simple shell are welcome. Please feel free to fork the repository and submit pull requests.

## License
This project is licensed under the [MIT License](LICENSE).
