# 0x18-dynamic_libraries
The main difference from Static Libraries and Dynamic Libraries in Static, the linker makes a copy of all of the selected functions for the library to the executable file and in Dynamic it is not necessary. This means a difference in use of memory but also in risk of data corruption and in how easily the code is handled.

### Generate Object files
The way to create a Dynamic Library in Linux is with the `gcc` command using the `-c` option to generate the object files (.o) from the source files (.c) and the `-fPIC` to make the code position independent:
```
gcc -c -fPIC *.c
```

### Dynamic Library generation
To combine the previously generated object files into a dynamic library, we use `gcc` but with the `-shared` option. The `-o` option is to allow for specification of the library file name we want it to have:
```
gcc -shared -o libdynamic.so *.o
```

### To verify
To verify that the library has been created and has the correct funtions as dynamic symbols:
```
nm -D libdynamic.so
```
### How to use it
To use the the library with our main.c file, me must link it. Befor that we have to add the location of the library files into the environmental variable to know where to find the functions:
```
export LD_LIBRARY_PATH=.:$LD_LIBRARY_PATH
```
Then compile:
```
gcc -L . 0-main.c -l dynamic -o executable_name
```
Note that the name we gave to the library in this example was ‘dynamic’. Here we use the -L option to tell the program where to find the library, in this case . that refers to the current directory. The -l option is to tell the compiler to look for the library.

# Importing the library in Python
With Python we can import the libraries we create in C, all we have to do is import ctypes and use CDDLL just like this:
```
#!/usr/bin/python3
import ctypes
dl = ctypes.CDLL(‘./libdynamic.so’)
```
Then we can use your previously created functions as you want.

To call a function called putchar from our library, then we can call it as dl.putchar

