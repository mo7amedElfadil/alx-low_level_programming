#0x10. C - Variadic functions

## stdarg.h

`stdarg.h a header in the C standard library of the C programming language that allows functions to accept an indefinite number of arguments. It provides facilities for stepping through a list of function arguments of unknown number and type.`

### Function prototype
```
int func(int n, ...);
```
Where:
* n: number of arguments passed
* ... (elipses): denote that multiple variables could be included

### stdarg Methods
#### va_list
va_list is a pointer to the argument list. Initialized as:
```
va_list ptr;
```
#### va_start
```
va_start(va_list ap, argN)
```
Where:
* *va_start*: enables access to variadic function arguments.
* *va_list*: the pointer to the last fixed argument in the variadic function
* *argN*: the last fixed argument in the variadic function.
Usage:
```
va_start(ptr, n);
```

#### va_arg
```
va_arg(va_list ap, type)
```
Where:
* *va_arg*: accesses the next variadic function argument.
* *va_list ap*: is the same as above i.e a pointer to argN
* *type*: indicates the data type  the *va_list ap* should expect (double, float, int etc.)

#### va_copy
```
va_copy(va_list dest, va_list src)
```
Where:
* *va_copy*: makes a copy of the variadic function arguments from src to dest.

#### va_end
```
va_end(va_list ap)
```
Where:
* *va_end*: ends the traversal of the variadic function arguments.

## Example using the stdarg.h library

##### The goal here is to determine the number of arguments passed to printf like function.
```
// Online C compiler to run C program online
#include <stdio.h>
#include <stdarg.h>
int func(char *n, ...)
{
    int i, c = 0;
    
    for (i = 0; n[i]; i++ )
        {
            if (n[i] == '%')
             c++;
        }
    va_list ptr;
    va_start(ptr, c);
    
    for (int i = 0; i < c; i++)
 
        // Accessing current variable
        // and pointing to next one
      printf("%d\n", va_arg(ptr, int));
 
    // Ending argument list traversal
    va_end(ptr);
  
    return (c);
}


int main() {
    // Write C code here
    int a= 22, b=33;
    printf("%i \n", func("this %i is %s 3", a, b));

    return 0;
}
```
