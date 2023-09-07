// Online C compiler to run C program online
#include <stdio.h>
int mul(char a, char b)
{
    return ((a - 48)*(b - 48));
}

int main() {
    char a = '7';
    char b = '4';
    // Write C code here
    printf("%c%c", mul(a,b)/10 + 48,mul(a, b)%10 + 48);

    return 0;
}
