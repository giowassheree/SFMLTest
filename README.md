# SFMLTest
Testing SFML on C++

This project demonstrates a basic SFML (Simple and Fast Multimedia Library) window application in C++.

## Features
- Creates an 800x600 window
- Displays a green circle
- Responds to keyboard input (ESC key to close)
- Frame rate limited to 60 FPS

## Prerequisites
- C++ compiler (g++ or clang++)
- SFML 2.5 or higher
- CMake 3.10 or higher (optional, for CMake build)

## Installation on Ubuntu/Debian

```bash
sudo apt-get update
sudo apt-get install libsfml-dev
```

## Building

### Using Make
```bash
make
```

### Using CMake
```bash
mkdir build
cd build
cmake ..
make
```

## Running

### If built with Make
```bash
./sfml_test
```

### If built with CMake
```bash
cd build
./sfml_test
```

Or simply use:
```bash
make run
```

## Controls
- **ESC**: Close the window
- **X button**: Close the window

## Clean Build Artifacts

```bash
make clean
```

For CMake builds:
```bash
rm -rf build/
```
