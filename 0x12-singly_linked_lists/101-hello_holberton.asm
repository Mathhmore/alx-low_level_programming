	section .text

	global main
main:
	mov eax,4
	mov ebx,1
	mov ecx,str
	mov edx,17
	int 80h

	mov eax,1
	mov rax,0
	ret

str:	db "Hello, Holberton", 10
