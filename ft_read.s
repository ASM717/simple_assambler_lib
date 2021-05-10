; ssize_t ft_read(int fildes, void *buf, size_t nbyte);

section .text
		extern ___error
		global _ft_read
		_ft_read:
			mov rax, 0x2000003     ; syscall read on mac
			syscall                ; rdi = fildes, rsi = buf, rdx = nbyte
			jc _error              ; syscall change CF flag
			ret                    ; return rax
		_error:
			push rax
			call ___error
			pop qword [rax]        ; for errno qword 64bit
			mov rax, -1
			ret                    ; rax = -1
