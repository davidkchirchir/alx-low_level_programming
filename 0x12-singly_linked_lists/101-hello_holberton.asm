section .data
    msg db "Hello, Holberton", 0Ah

section .text
    global _start

_start:
    mov rax, 0                  ; load syscall number for write (0) into rax
    mov rdi, 1                  ; load file descriptor for stdout (1) into rdi
    mov rsi, msg                ; load address of message into rsi
    mov rdx, 16                 ; load length of message into rdx
    syscall                     ; call write syscall to print message

    mov rax, 60                 ; load syscall number for exit (60) into rax
    xor rdi, rdi                ; load exit status 0 into rdi
    syscall                     ; call exit syscall

