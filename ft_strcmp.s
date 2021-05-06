; int ft_strcmp(const char *s1, const char *s2);
%define s1 rdi
%define s2 rsi

section .text
		global _ft_strcmp
_ft_strcmp:
		xor rax, rax ; zero rax
		_loop:
			mov dl, [s1 + rax]    ;rdi = s1
			mov dh, [s2 + rax]    ; rsi = s2
			inc rax
			test dl, dl           ;???
			jz _short_equel
			cmp dl, dh
			je _loop
			jb _below
		_above:
			xor rax, rax          ; s1 bigger than s2
			inc rax
			ret                   ; rax = 1
		_below:
			xor rax, rax          ; s1 smaller than s2
			dec rax
			ret                   ; rax = -1
		_short_equel:
			test dh, dh
			jnz _below      ; s1 shorter than s2
			xor rax, rax          ; s1 same as s2
			ret                   ; ECX = 0
