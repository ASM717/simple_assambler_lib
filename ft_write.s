; ssize_t ft_write(int fildes, const void *buf, size_t nbyte);

section .text
		extern ___error         ; error for mac/errno for linux
		global _ft_write
		_ft_write:
			mov rax, 0x2000004  ; syscall write on mac
			syscall             ; syscall kernel write rdi = fildes, rsi = buf, rdx = nbyte
			jc _error           ; syscall change CF flag
			ret                 ; return rax
		_error:
			push rdi            ; push to the stack
			mov rdi, rax
			call ___error
			mov [rax], rdi
			pop rdi
			mov rax, -1
			ret                 ; return rax
