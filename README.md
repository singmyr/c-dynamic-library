# Example of a dynamic library in C

Build tools  

* CMake
* Ninja

## Build library

Inside the **library** directory  
`cmake . -B build -GNinja && cmake --build build`

## Build executable

Inside the **executable** directory  
`cmake . -B build -GNinja && cmake --build build`  
and then execute it  
`./build/main`

## Result

The output should be  
`pong`

### Disclaimer

No focus on error handling
