# 0x0C-more_malloc_free

## Automatic and dynamic allocation, malloc and free

The malloc function is used to allocate a certain amount of memory during the execution of a program. It will request a block of memory from the heap. If the request is granted, the operating system will reserve the requested amount of memory and malloc will return a pointer to the reserved space.

When the amount of memory is not needed anymore, you must return it to the operating system by calling the function free.

##### Special case: string literals

One special case we have seen so far is the memory used to store strings that we put within double quotes (") in our programs.

## Why would I need dynamic allocation?

What happens when we do not know in advance how much memory you need and we will only know this at runtime, after compilation?

For instance, imagine we have to create a program that will store all the words contained in a file in an array. That file is passed as an argument to our program. There is no way we could know in advance how many words the file will contain. We can not declare a big array like char `*words[1024];` and assume that there will never be more than 1024 words in the file. That’s when malloc and friends come to the rescue, and will permit us to allocate dynamically the amount of memory we need.

### Dynamic allocation
#### Malloc

The malloc function allocates a specific number of bytes in memory and returns a pointer to the allocated memory. This memory will have read and write permissions.
- Library: `#include <stdlib.h>`
- Prototype: `void *malloc(size_t size);`
- where `void *` means it is a pointer to the type of your choice
- and `size` is the number of bytes your need to allocate

If we know the number of vars of a certain data type to store, using the 'szieof(expression)' function, we can determine the size of our variable and use it in our memory allocation:

```
int *p;
int n = 5; //assuming 5 integers to be stored
p = malloc(n * sizeof(*p));
p[0] = 2;
p[1] = 6; 
...
```

#### Calloc

Similar to malloc, calloc is used for memory allocation. the main differences are that there are 2 parameters in the function call, and that calloc initializes the values in the allocated memory to zero:

- Prototype: `void *calloc(size_t n, size_t size);`
- @n: is the number of vars to store

so instead of multiplying n * sizeof(exp), calloc does it for us.

#### Realloc

Realloc is used to reallocate memory space. Say we initially allocate 20 bytes of space using malloc for storing 5 integers and later decide there is a need for a larger array or a smaller one. Realloc works as follows:

- Prototype: 'void *realloc(void* ptr, size_t size);`
- use: 
```
*arr = (int*)realloc(arr, 2*n*sizeof(int));
```
We can also use realloc to match the behavior of malloc and free
```
*arr = (int*)realloc(NULL, n*sizeof(int)); //equivalent to malloc
*arr = (int*)realloc(arr, 0)); //equivalent to free
``

#### Free

When the allocated memory is not needed anymore, you must return it to the
operating system by calling the function free.
```
void free(void *ptr);
```
The free() function frees the memory space pointed to by ptr, which must have been returned by a previous call to malloc(), calloc() or realloc().
use 
```
free(ptr);
```
