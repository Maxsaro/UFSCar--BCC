.text
_start:
    li a7, 64         # syscall write
    li a0, 1          # fd = 1 (stdout)
    la a1, msg        # endereço da string
    li a2, 24          # tamanho
    ecall

    li a0, 0         # valor de retorno
    li a7, 93        # syscall exit (Linux)
    ecall
.data
msg:
    .asciz "Heavy metal is the law!\n"