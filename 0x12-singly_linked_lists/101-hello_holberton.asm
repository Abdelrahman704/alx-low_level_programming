global main

extern printf

section .data
	fmt db "Hello, Holberton\n", 0

section .text

main:
    push rbp
    mov rbp, rsp

    lea rdi, [fmt]
    xor eax, eax
    call printf

    mov rsp, rbp
    pop rbp
    mov eax, 0
    ret
