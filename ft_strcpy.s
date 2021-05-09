; ft_strcpy(char * dst, const char * src);

%define dst rdi
%define src rsi

section .text
		global _ft_strcpy
		_ft_strcpy:
			xor rax, rax
		_loop:
			cmp byte[src + rax], 0
			jz _return ; ZF = 1
			mov dh, byte[src + rax]
			mov byte[dst + rax], dh
			inc rax
			jmp _loop
		_return:
			mov byte[dst + rax], 0
			mov rax, dst
			ret
