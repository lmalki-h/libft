	.section	__TEXT,__text,regular,pure_instructions
	.build_version macos, 10, 15	sdk_version 10, 15
	.globl	_ft_strncmp             ## -- Begin function ft_strncmp
	.p2align	4, 0x90
_ft_strncmp:                            ## @ft_strncmp
	.cfi_startproc
## %bb.0:
	pushq	%rbp
	.cfi_def_cfa_offset 16
	.cfi_offset %rbp, -16
	movq	%rsp, %rbp
	.cfi_def_cfa_register %rbp
	movq	%rdi, -16(%rbp)
	movq	%rsi, -24(%rbp)
	movq	%rdx, -32(%rbp)
	movq	$0, -40(%rbp)
LBB0_1:                                 ## =>This Inner Loop Header: Depth=1
	movq	-40(%rbp), %rax
	cmpq	-32(%rbp), %rax
	jae	LBB0_7
## %bb.2:                               ##   in Loop: Header=BB0_1 Depth=1
	movq	-16(%rbp), %rax
	movq	-40(%rbp), %rcx
	movsbl	(%rax,%rcx), %edx
	movq	-24(%rbp), %rax
	movq	-40(%rbp), %rcx
	movsbl	(%rax,%rcx), %esi
	subl	%esi, %edx
	cmpl	$0, %edx
	jne	LBB0_5
## %bb.3:                               ##   in Loop: Header=BB0_1 Depth=1
	movq	-16(%rbp), %rax
	movq	-40(%rbp), %rcx
	movsbl	(%rax,%rcx), %edx
	cmpl	$0, %edx
	je	LBB0_5
## %bb.4:                               ##   in Loop: Header=BB0_1 Depth=1
	movq	-24(%rbp), %rax
	movq	-40(%rbp), %rcx
	movsbl	(%rax,%rcx), %edx
	cmpl	$0, %edx
	jne	LBB0_6
LBB0_5:
	movq	-16(%rbp), %rax
	movq	-40(%rbp), %rcx
	movzbl	(%rax,%rcx), %edx
	movq	-24(%rbp), %rax
	movq	-40(%rbp), %rcx
	movzbl	(%rax,%rcx), %esi
	subl	%esi, %edx
	movl	%edx, -4(%rbp)
	jmp	LBB0_8
LBB0_6:                                 ##   in Loop: Header=BB0_1 Depth=1
	movq	-40(%rbp), %rax
	addq	$1, %rax
	movq	%rax, -40(%rbp)
	jmp	LBB0_1
LBB0_7:
	movl	$0, -4(%rbp)
LBB0_8:
	movl	-4(%rbp), %eax
	popq	%rbp
	retq
	.cfi_endproc
                                        ## -- End function

.subsections_via_symbols
