section .data
    hello: db "Hello, Holberton", 0Ah, 0
    
section .text
    global main
    
    extern printf
    
main:
    ; print Hello, Holberton using printf
    push    qword hello
    call    printf
    
    ; return 0
    mov     eax, 0
    ret

