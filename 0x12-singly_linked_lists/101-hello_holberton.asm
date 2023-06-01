section .data
    hello db "Hello, Holberton", 0
    format db "%s", 10, 0

section .text
    extern printf

global main

main:
    mov rdi, format
    mov rsi, hello
    xor eax, eax
    call printf

    xor edi, edi
    mov eax, 60
