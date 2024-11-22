section .data
msg: DB 'Hello, World', 10
msgSize EQU $ - msg

global start

section .text

	start:				
	mov rax, 4			; function 4 in the system which is 'write'
	mov rbx, 1			; send it to stdout
	mov rcx, msg		; msg is stored on RCX
	mov rdx, msgSize	; size on RDX
	int 0x80
	mov rax, 1			; function 1 which is 'exit'
	mov rbx, 0			; return code
	int 0x80
