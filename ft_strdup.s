; char *ft_strdup(const char *s1);

section .text
		global _ft_strdup
		extern _malloc
		extern _ft_strcpy
		extern _ft_strlen
		_ft_strdup:
			push rdi
			call _ft_strlen
			mov rax, 0
			inc rax
			add rdi, rax
			call _malloc
			mov rdi, rax
			pop rsi
			call _ft_strcpy
			ret
