; int ft_strcmp(const char *s1, const char *s2);

%define s1 rdi
%define s2 rsi

section .text
		global _ft_strcmp
		_ft_strcmp:
			mov rax, 0          ; zero rax
		_loop:
			mov r8, [s1 + rax]  ;rdi = s1
			mov r9, [s2 + rax]  ; rsi = s2
			inc rax             ; rax + 1
			OR r8, r8           ; and
			jz _short_equel
			cmp r8, r9
			je _loop
			jb _below
		_above:
			xor rax, rax        ; s1 bigger than s2
			inc rax
			ret                 ; rax = 1
		_below:
			xor rax, rax        ; s1 smaller than s2
			dec rax
			ret                 ; rax = -1
		_short_equel:
			OR r9, r9
			jnz _below          ; s1 shorter than s2
			xor rax, rax        ; s1 same as s2
			ret                 ; rax = 0
