; ft_strcpy(char * dst, const char * src);
%define dst rdi
%define src rsi

section .text
		global _ft_strcpy

_ft_strcpy:
		mov rcx, 0
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
