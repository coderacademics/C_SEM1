	.file	"first.c"
	.text
	.def	___main;	.scl	2;	.type	32;	.endef
	.section .rdata,"dr"
LC2:
	.ascii "Hello World\0"
	.text
	.globl	_main
	.def	_main;	.scl	2;	.type	32;	.endef
_main:
LFB13:
	.cfi_startproc
	pushl	%ebp
	.cfi_def_cfa_offset 8
	.cfi_offset 5, -8
	movl	%esp, %ebp
	.cfi_def_cfa_register 5
	andl	$-16, %esp
	subl	$48, %esp
	call	___main
	movl	$1000, 44(%esp)
	movl	$3, 40(%esp)
	flds	LC0
	fstps	36(%esp)
	movl	44(%esp), %eax
	imull	40(%esp), %eax
	movl	%eax, 28(%esp)
	fildl	28(%esp)
	fmuls	36(%esp)
	flds	LC1
	fdivrp	%st, %st(1)
	fstps	32(%esp)
	movl	$LC2, (%esp)
	call	_puts
	movl	$0, %eax
	leave
	.cfi_restore 5
	.cfi_def_cfa 4, 4
	ret
	.cfi_endproc
LFE13:
	.section .rdata,"dr"
	.align 4
LC0:
	.long	1091043328
	.align 4
LC1:
	.long	1120403456
	.ident	"GCC: (MinGW.org GCC Build-20200227-1) 9.2.0"
	.def	_puts;	.scl	2;	.type	32;	.endef
