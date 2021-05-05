; ft_strcpy(char * dst, const char * src);
%define dst rdi
%define src rsi

global _ft_strcpy

section .text

_ft_strcpy:
		xor rcx, rcx
		.loop:
			cmp byte[src + rcx], 0
			je return
			mov bl, byte[src + rcx]
			mov byte[dst + rcx], bl
			inc rcx
			jmp .loop
		return:
			mov byte[dst + rcx], 0
			mov rax, dst
			ret
