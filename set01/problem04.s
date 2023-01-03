	.file	"problem04.c"
	.text
	.section	.rodata.str1.1,"aMS",@progbits,1
.LC0:
	.string	"Enter number:/n"
.LC1:
	.string	"%d"
	.text
	.p2align 4
	.globl	input
	.type	input, @function
input:
.LFB23:
	.cfi_startproc
	subq	$24, %rsp
	.cfi_def_cfa_offset 32
	leaq	.LC0(%rip), %rsi
	movl	$1, %edi
	movq	%fs:40, %rax
	movq	%rax, 8(%rsp)
	xorl	%eax, %eax
	call	__printf_chk@PLT
	leaq	4(%rsp), %rsi
	leaq	.LC1(%rip), %rdi
	xorl	%eax, %eax
	call	__isoc99_scanf@PLT
	movl	4(%rsp), %eax
	movq	8(%rsp), %rdx
	subq	%fs:40, %rdx
	jne	.L5
	addq	$24, %rsp
	.cfi_remember_state
	.cfi_def_cfa_offset 8
	ret
.L5:
	.cfi_restore_state
	call	__stack_chk_fail@PLT
	.cfi_endproc
.LFE23:
	.size	input, .-input
	.p2align 4
	.globl	add
	.type	add, @function
add:
.LFB24:
	.cfi_startproc
	addl	%esi, %edi
	movl	%edi, (%rdx)
	ret
	.cfi_endproc
.LFE24:
	.size	add, .-add
	.section	.rodata.str1.1
.LC2:
	.string	"The sum of %d and %d is %d"
	.text
	.p2align 4
	.globl	output
	.type	output, @function
output:
.LFB25:
	.cfi_startproc
	movl	%esi, %ecx
	movl	%edx, %r8d
	leaq	.LC2(%rip), %rsi
	movl	%edi, %edx
	xorl	%eax, %eax
	movl	$1, %edi
	jmp	__printf_chk@PLT
	.cfi_endproc
.LFE25:
	.size	output, .-output
	.section	.text.startup,"ax",@progbits
	.p2align 4
	.globl	main
	.type	main, @function
main:
.LFB26:
	.cfi_startproc
	pushq	%r12
	.cfi_def_cfa_offset 16
	.cfi_offset 12, -16
	pushq	%rbp
	.cfi_def_cfa_offset 24
	.cfi_offset 6, -24
	subq	$24, %rsp
	.cfi_def_cfa_offset 48
	movq	%fs:40, %rax
	movq	%rax, 8(%rsp)
	xorl	%eax, %eax
	call	input@PLT
	movl	%eax, %ebp
	xorl	%eax, %eax
	call	input@PLT
	leaq	4(%rsp), %rdx
	movl	%ebp, %edi
	movl	%eax, %esi
	movl	%eax, %r12d
	call	add@PLT
	movl	4(%rsp), %edx
	movl	%r12d, %esi
	movl	%ebp, %edi
	call	output@PLT
	movq	8(%rsp), %rax
	subq	%fs:40, %rax
	jne	.L11
	addq	$24, %rsp
	.cfi_remember_state
	.cfi_def_cfa_offset 24
	xorl	%eax, %eax
	popq	%rbp
	.cfi_def_cfa_offset 16
	popq	%r12
	.cfi_def_cfa_offset 8
	ret
.L11:
	.cfi_restore_state
	call	__stack_chk_fail@PLT
	.cfi_endproc
.LFE26:
	.size	main, .-main
	.ident	"GCC: (GNU) 10.3.0"
	.section	.note.GNU-stack,"",@progbits
