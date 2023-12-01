	.file	"preprocessor2.c"
	.globl	_No
	.data
	.align 4
_No:
	.long	11
	.def	___main;	.scl	2;	.type	32;	.endef
	.section .rdata,"dr"
LC1:
	.ascii "value of No :%d\12\0"
LC2:
	.ascii "area of :%f\12\0"
LC3:
	.ascii "count is :%d\12\0"
	.text
	.globl	_main
	.def	_main;	.scl	2;	.type	32;	.endef
_main:
LFB10:
	.cfi_startproc
	pushl	%ebp
	.cfi_def_cfa_offset 8
	.cfi_offset 5, -8
	movl	%esp, %ebp
	.cfi_def_cfa_register 5
	andl	$-16, %esp
	subl	$32, %esp
	call	___main
	flds	LC0
	fstps	28(%esp)
	movl	$120, 24(%esp)
	movl	_No, %eax
	movl	%eax, 4(%esp)
	movl	$LC1, (%esp)
	call	_printf
	flds	28(%esp)
	fstpl	4(%esp)
	movl	$LC2, (%esp)
	call	_printf
	movl	24(%esp), %eax
	movl	%eax, 4(%esp)
	movl	$LC3, (%esp)
	call	_printf
	movl	$0, %eax
	leave
	.cfi_restore 5
	.cfi_def_cfa 4, 4
	ret
	.cfi_endproc
LFE10:
	.section .rdata,"dr"
	.align 4
LC0:
	.long	1134362624
	.ident	"GCC: (MinGW.org GCC-6.3.0-1) 6.3.0"
	.def	_printf;	.scl	2;	.type	32;	.endef
