# 0x0A-argc_argv

## Comand line Arguments
Command-line arguments are very useful. After all, C functions wouldn't be very useful if you couldn't ever pass arguments to them -- adding the ability to pass arguments to programs makes them that much more useful. In fact, all the arguments you pass on the command line end up as arguments to the main function in your program. 

**argc** - argument count (number of arguments passed to the program)

**argv** - argument vector (1-D array of argument strings). The first argument argv[0] is always the name of the program, thus argc >= 1.

```
#include <stdio.h>

int main (int argc, char *argv[])
{

  return 0;
}
```

**Note:** `*argv[] == **argv`
