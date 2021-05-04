; size_t ft_strlen(char *src)
%define src rdi

global	_ft_strlen ; директива global

section .text
_ft_strlen:
		xor rax, rax ;

.while:
		cmp byte[src + rax], 0 ;[value] \0
		je .return ;return rax
		inc rax ; rax +1
		jmp .while

.return:
		ret ;rax
