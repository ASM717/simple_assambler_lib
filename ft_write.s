; ssize_t ft_write(int fildes, const void *buf, size_t nbyte);

section .text
		extern ___error
		global _ft_write
		_ft_write:
			mov rax, 0x2000004  ; syscall write on mac
			syscall             ; syscall kernel write rdi = fildes, rsi = buf, rdx = nbyte
			jc _error           ; syscall change CF flag
			ret                 ; return rax
		_error:
			push rax            ; push to the stack rax
			call ___error
			pop qword [rax]     ; pop from the stack
			mov rax, -1
			ret                 ; return rax
