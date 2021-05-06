; size_t ft_strlen(char *src)
%define src rdi

section .text
		global _ft_strlen          ; direct global
_ft_strlen:
		xor rax, rax               ; zero rax
		.loop:
			cmp byte[src + rax], 0 ; [value] \0
			je .return             ; return rax
			inc rax                ; rax +1
			jmp .loop
		.return:
			ret                    ;rax
