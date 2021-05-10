; int ft_strcmp(const char *s1, const char *s2);

%define s1 rdi
%define s2 rsi

section .text
		global _ft_strcmp
		_ft_strcmp:
			mov rax, 0                 ; rax = 0
			mov dh, byte [s2 + rax]    ; dh = (byte) argument2[rax] (value)
			cmp byte [s1 + rax], dh    ; compare dh and argument1[rax] (value)
			jmp _cmp                   ; jump to _cmp

		_cmp:
			ja  _above                 ; cmp above jump s1 > s2
			jb  _below                 ; cmp below jump s1 < s2
			cmp dh, 0                  ; operand dh = 8bit
			je  _equal                 ; cmp equal jump s1 = s2
			inc rax
			mov dh, byte [s2 + rax]    ; dh = (byte) argument2[rax] (value)
			cmp byte [s1 + rax], dh    ; compare dh and argument1[rax] (value)
			jmp _cmp                   ; jump to _cmp
		_above:
			mov rax, 1
			ret              ; return rax = 1
		_equal:
			mov rax, 0
			ret              ; return rax = 0
		_below:
			mov rax, -1
			ret              ; return rax = -1

