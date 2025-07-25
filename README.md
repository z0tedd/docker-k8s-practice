# docker-k8s-practice

# University Practice Project

## Overview

This repository contains several tasks completed as part of university practice, focusing on C++ development, Docker containerization, and build systems using CMake.

## Project Structure

The project consists of multiple tasks, each in its own directory:

- `task1`: Empty dir
- `task2`: A simple C++ application with Docker support
- `task3`: A more complex C++ project using CMake and Drogon framework
- `task4`: Another C++ project with additional components
- `task4`: A Kubernetes deployment configuration with previous project
- `task6`: C++ with tests and Github Actions CI/CD

## Task 2 - Simple C++ Application

### Description

A basic console application that asks for the user's name and greets them.

### Requirements

- C++ compiler
- CMake (version 3.16 or higher)
- vcpkg package manager

### Build Instructions

```bash
cd task2
mkdir build && cd build
cmake -DCMAKE_EXPORT_COMPILE_COMMANDS=ON ..
make
```

### Run the Application

```bash
./hello-server
```

## Task 3 - C++ Project with CMake

### Description

A more complex C++ project demonstrating the use of CMake for build management. This task includes:

- Proper directory structure for source and build files
- CMakeLists.txt for build configuration
- Integration with vcpkg for dependency management
- Docker support for containerization

### Requirements

- C++ compiler supporting C++17
- CMake (version 3.16 or higher)
- vcpkg package manager
- Drogon framework (managed via vcpkg)

### Build Instructions

```bash
cd task3
mkdir build && cd build
cmake -DCMAKE_TOOLCHAIN_FILE=${VCPKG_ROOT}/scripts/buildsystems/vcpkg.cmake ..
make
```

### Containerization

A Dockerfile is provided to containerize the application. To build the Docker image:

```bash
docker build -t my-hello-server .
```

To run the container:

```bash
docker run -it my-hello-server
```

## Contributing

If you'd like to contribute to this project, please follow these steps:

1. Fork the repository
2. Create a new branch for your feature/fix
3. Make your changes and test thoroughly
4. Submit a pull request with a clear description of your changes

## License

This project is licensed under the GNU General Public License - see the LICENSE file for details.

## Acknowledgments

- Thanks to the university for providing this learning opportunity

