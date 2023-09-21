;hello_holberton.asm    print a string using printf
;Assemble:				nasm -f elf64 101-hello_holberton.asm
;Link:					gcc -no-pie -std=gnu89 101-hello_holberton.o -o hello
;Run:					./hello
;Output:				cat hello_64.out

; Equivalent C code
; // hello_holberton.c
; #include <stdio.h>
; int main()
; {
;   char str[] = "Hello, Holberton\n";
;   printf("%s\n",str);
;   return 0;
; }

; Declare needed C  functions
extern	printf			; the C function, to be called

section .data					; Data section, initialized variables
msg:	db "Hello, Holberton", 0	; C string needs 0 at the end to terminate. i.e '\0'
fmt:    db "%s", 10, 0          ; The printf format, "\n",'0'

section .text					; Code section.

global main		; the standard gcc entry point
main:					; the program label for the entry point
push	rbp		; set up stack frame, must be alligned

mov	rdi,fmt
mov	rsi,msg
mov	rax,0		; or can be  xor  rax,rax
call    printf		; Call C function

pop	rbp		; restore stack

mov	rax,0		; normal, no error, return value
ret			; return

