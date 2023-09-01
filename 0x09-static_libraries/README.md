# 0x09-static_libraries


## C libraries
A **Library** (L), a tool supplied by compilers, is a file containing several object filesused as a single entity in a linking phase of a program.


### What are Static Libraries?
**Static Libraries** (SL) are collections of object files taht are linked into the program during the linking phase of compilation and aren't relevant during runtime - only the program's executable file is needed in order to run the program. 
**Note:** these are libraries programmers create to manage their projects. They include custom functions and help to avoid larger compilation and linking time, makefile pollution, and the linking of irrelevant portions of libraries. 
 

### What are Dynamic Libraries?
**Shared/Dynamic Libaries** (DL) are linked into the program in two stages:

-   First, during compile time, the linker verifies that all the symbols (functions, variables, etc) required by the program are either linked into the program or in one of its shared libraries.
-   The object files from the DL are not inserted into the executable. Instead, when the program is started, a program in the system (a dynamic loader) checks out which shared libraries were linked with the program, loads them in memory, and attaches them to the copy of the program in memory.

The complex phase of dynamic loading makes launching the program slightly slower, however it is out-weighed by a great advantage - if a 2nd program liked with the same shared library is executed, it can use the same copy of the shared library, thus saving a lot of memory. This is due to the fact that the L is linked by its memory **Address** as opposed to the entire library being copied.

The standard "C" library is normally a shared library and is used by all C programs, yet only one copy of the library is stored in memory at any given time.

The main drawback of this arrangement is if we re-compile the dynamic library and run a second copy of our program with the new library, the dynamic loader will find that a copy of the library is already stored in memory, thus attaching it to out program and not load the modified version from disk.


## Creating a Static "C" library using "ar" and "randlib"
`ar` or **archiver** is a program that archives files. Its uses:

-   create SLs
-   modify object files in SLs
-   list the name of object files in the library

**From the man page:**
`ar - create, modify, and extract from archives`

**To create a SL we can use:**
```
ar rc libutil.a util_file.o util_net.o util_math.o
```
which creates a SL named 'libutil.a' and puts copies for the subceeding object files.
If the L file exists already, the object files get added/replaced if they are newer than those inside. the `c` flag creates a library if it doesn't exist and the `r` flag replaces older object files in the library with the new object files.

**Note:** we can use the '-t' flag with ar to see the contents of our library

**Note:** we can also use "nm" to extract external symbol names from an executable.

**From the man page:** nm - list symbols from object files. If no object
       files are listed as arguments, nm assumes the file a.out.

After an archive is created or modified there is a need to index it, which is used by the compiler to speed up symbol-lookup inside the L and make sure the order of symbols in the L won't matter during compilation.

**To create or update the index:**
```
ranlib libutil.a
```
**From the man page:**  ranlib - generate an index to an archive

 **Note:** when an archive file's index generation date (stored inside the archive file) is older than the file's last modification date (stored in the file system), a compiler trying to use this library will complain its index is out of date, and abort. There are two ways to overcome the problem:

1. Use 'ranlib' to re-generate the index.
2. When copying the archive file to another location, use 'cp -p', instead of only 'cp'. The '-p' flag tells 'cp' to keep all attributes of the file, including its access permissions, owner (if "cp" is invoked by a superuser) and its last modification date. This will cause the compiler to think the index inside the file is still updated. This method is useful for makefiles that need to copy the library to another directory for some reason.

## Using a "C" Library in a program

After creating our archive, to use it in a program, we add the L name to the list of object file names given to the linker using the `-l` flag:
```
cc main.o -L. -lutil -o prog
```
which creates a program using the object file "main.o" and any symbols required from the "util" SL.
**Note:** the usage of the '-L' flag - this flag tells the linker that libraries might be found in the given directory ('.', refering to the current directory), in addition to the standard locations where the compiler looks for system libraries. 


## Now what is "ld"?
**From the man page:** ld - The GNU linker, also called the linkage editor or binder, combines object files, archives, and import files into one output object file, resolving external references. It produces an executable object file that can be run.
In addition, if you specify the ld command without the -s flag, you can use the output file as an InputFile parameter in another call to the ld command. By default, the ld command creates and places its output in the a.out file.

The output file of ld -r ... is an object file, not an ar archive, and specifying an output filename that looks like that of an ar archive doesn't make it one. Lets take the following example:
```
ld -r -o graphics.o *.o
```
"-r" Generates a relocatable output, i.e., generate an output file that
           can in turn serve as input to ld.  This is often called partial
           linking.
## TL:DR - The steps to follow to create a static library	
Given a set of functions in separate source ".c" code files the directory, with their prototypes in a main.h, use:
```
 gcc -c *.c
```
to produce an object file for each source code. Then:
```
ar rc mylib.a *.o
```
to create the static library. Then
```
ar -t mylib.a
```
to see the contents of our library. Then
```
 nm libmy.a
 ```
 list symbols (functions, variables, etc.) from library object files
