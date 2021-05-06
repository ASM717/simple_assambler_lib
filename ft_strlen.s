; size_t ft_strlen(char *src)
%define src rdi

section .text
		global _ft_strlen          ; direct global
_ft_strlen:
		xor rax, rax               ; zero rax
		_loop:
			cmp byte[src + rax], 0 ; [value] \0
			je _return             ; return rax
			inc rax                ; rax +1
			jmp _loop
		_return:
			ret                    ;rax
