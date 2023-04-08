	.file	"BFS.c"
	.comm	_a, 1600, 5
	.comm	_q, 80, 5
	.comm	_visited, 80, 5
	.comm	_n, 4, 2
	.comm	_i, 4, 2
	.comm	_j, 4, 2
	.globl	_f
	.bss
	.align 4
_f:
	.space 4
	.globl	_r
	.data
	.align 4
_r:
	.long	-1
	.text
	.globl	_bfs
	.def	_bfs;	.scl	2;	.type	32;	.endef
_bfs:
LFB14:
	.cfi_startproc
	pushl	%ebp
	.cfi_def_cfa_offset 8
	.cfi_offset 5, -8
	movl	%esp, %ebp
	.cfi_def_cfa_register 5
	subl	$24, %esp
	movl	$1, _i
	jmp	L2
L4:
	movl	_i, %ecx
	movl	8(%ebp), %edx
	movl	%edx, %eax
	sall	$2, %eax
	addl	%edx, %eax
	sall	$2, %eax
	addl	%ecx, %eax
	movl	_a(,%eax,4), %eax
	testl	%eax, %eax
	je	L3
	movl	_i, %eax
	movl	_visited(,%eax,4), %eax
	testl	%eax, %eax
	jne	L3
	movl	_r, %eax
	addl	$1, %eax
	movl	%eax, _r
	movl	_r, %eax
	movl	_i, %edx
	movl	%edx, _q(,%eax,4)
L3:
	movl	_i, %eax
	addl	$1, %eax
	movl	%eax, _i
L2:
	movl	_i, %edx
	movl	_n, %eax
	cmpl	%eax, %edx
	jle	L4
	movl	_f, %edx
	movl	_r, %eax
	cmpl	%eax, %edx
	jg	L6
	movl	_f, %eax
	movl	_q(,%eax,4), %eax
	movl	$1, _visited(,%eax,4)
	movl	_f, %eax
	leal	1(%eax), %edx
	movl	%edx, _f
	movl	_q(,%eax,4), %eax
	movl	%eax, (%esp)
	call	_bfs
L6:
	nop
	leave
	.cfi_restore 5
	.cfi_def_cfa 4, 4
	ret
	.cfi_endproc
LFE14:
	.def	___main;	.scl	2;	.type	32;	.endef
	.section .rdata,"dr"
	.align 4
LC0:
	.ascii "\12 Enter the number of vertices:\0"
LC1:
	.ascii "%d\0"
	.align 4
LC2:
	.ascii "\12 Enter graph data in matrix form:\0"
LC3:
	.ascii "\12 Enter the starting vertex:\0"
	.align 4
LC4:
	.ascii "\12 The node which are reachable are:\0"
LC5:
	.ascii "%d\11\0"
	.align 4
LC6:
	.ascii "\12 Bfs is not possible. Not all nodes are reachable\0"
	.text
	.globl	_main
	.def	_main;	.scl	2;	.type	32;	.endef
_main:
LFB15:
	.cfi_startproc
	pushl	%ebp
	.cfi_def_cfa_offset 8
	.cfi_offset 5, -8
	movl	%esp, %ebp
	.cfi_def_cfa_register 5
	andl	$-16, %esp
	subl	$32, %esp
	call	___main
	movl	$LC0, (%esp)
	call	_printf
	movl	$_n, 4(%esp)
	movl	$LC1, (%esp)
	call	_scanf
	movl	$1, _i
	jmp	L8
L9:
	movl	_i, %eax
	movl	$0, _q(,%eax,4)
	movl	_i, %eax
	movl	$0, _visited(,%eax,4)
	movl	_i, %eax
	addl	$1, %eax
	movl	%eax, _i
L8:
	movl	_i, %edx
	movl	_n, %eax
	cmpl	%eax, %edx
	jle	L9
	movl	$LC2, (%esp)
	call	_puts
	movl	$1, _i
	jmp	L10
L13:
	movl	$1, _j
	jmp	L11
L12:
	movl	_i, %edx
	movl	_j, %ecx
	movl	%edx, %eax
	sall	$2, %eax
	addl	%edx, %eax
	sall	$2, %eax
	addl	%ecx, %eax
	sall	$2, %eax
	addl	$_a, %eax
	movl	%eax, 4(%esp)
	movl	$LC1, (%esp)
	call	_scanf
	movl	_j, %eax
	addl	$1, %eax
	movl	%eax, _j
L11:
	movl	_j, %edx
	movl	_n, %eax
	cmpl	%eax, %edx
	jle	L12
	movl	_i, %eax
	addl	$1, %eax
	movl	%eax, _i
L10:
	movl	_i, %edx
	movl	_n, %eax
	cmpl	%eax, %edx
	jle	L13
	movl	$LC3, (%esp)
	call	_printf
	leal	28(%esp), %eax
	movl	%eax, 4(%esp)
	movl	$LC1, (%esp)
	call	_scanf
	movl	28(%esp), %eax
	movl	%eax, (%esp)
	call	_bfs
	movl	$LC4, (%esp)
	call	_puts
	movl	$1, _i
	jmp	L14
L18:
	movl	_i, %eax
	movl	_visited(,%eax,4), %eax
	testl	%eax, %eax
	je	L15
	movl	_i, %eax
	movl	%eax, 4(%esp)
	movl	$LC5, (%esp)
	call	_printf
	jmp	L19
L15:
	movl	$LC6, (%esp)
	call	_printf
	jmp	L17
L19:
	movl	_i, %eax
	addl	$1, %eax
	movl	%eax, _i
L14:
	movl	_i, %edx
	movl	_n, %eax
	cmpl	%eax, %edx
	jle	L18
L17:
	nop
	leave
	.cfi_restore 5
	.cfi_def_cfa 4, 4
	ret
	.cfi_endproc
LFE15:
	.ident	"GCC: (MinGW.org GCC-6.3.0-1) 6.3.0"
	.def	_printf;	.scl	2;	.type	32;	.endef
	.def	_scanf;	.scl	2;	.type	32;	.endef
	.def	_puts;	.scl	2;	.type	32;	.endef
