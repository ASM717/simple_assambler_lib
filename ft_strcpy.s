; ft_strcpy(char * dst, const char * src);

%define dst rdi
%define src rsi

section .text
		global _ft_strcpy
		_ft_strcpy:
			xor rcx, rcx
		_loop:
			cmp byte[src + rcx], 0
			jz _return ; ZF = 1
			mov bl, byte[src + rcx]
			mov byte[dst + rcx], bl
			inc rcx
			jmp _loop
		_return:
			mov byte[dst + rcx], 0
			mov rax, dst
			ret
