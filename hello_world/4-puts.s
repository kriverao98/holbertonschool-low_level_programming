	.section	__TEXT,__text,regular,pure_instructions
	.build_version macos, 11, 0	sdk_version 11, 1
	.globl	_main                   ## -- Begin function main
	.p2align	4, 0x90
_main:                                  ## @main
	.cfi_startproc
## %bb.0:
	pushq	%rbp
	.cfi_def_cfa_offset 16
	.cfi_offset %rbp, -16
	movq	%rsp, %rbp
	.cfi_def_cfa_register %rbp
	subq	$80, %rsp
	leaq	-64(%rbp), %rax
	movq	___stack_chk_guard@GOTPCREL(%rip), %rcx
	movq	(%rcx), %rcx
	movq	%rcx, -8(%rbp)
	movl	$0, -68(%rbp)
	movq	%rax, %rcx
	movq	%rcx, %rdi
	leaq	L___const.main.str1(%rip), %rsi
	movl	$53, %edx
	movq	%rax, -80(%rbp)         ## 8-byte Spill
	callq	_memcpy
	movq	-80(%rbp), %rdi         ## 8-byte Reload
	callq	_puts
	movq	___stack_chk_guard@GOTPCREL(%rip), %rcx
	movq	(%rcx), %rcx
	movq	-8(%rbp), %rdx
	cmpq	%rdx, %rcx
	jne	LBB0_2
## %bb.1:                               ## %SP_return
	xorl	%eax, %eax
	addq	$80, %rsp
	popq	%rbp
	retq
LBB0_2:                                 ## %CallStackCheckFailBlk
	callq	___stack_chk_fail
	ud2
	.cfi_endproc
                                        ## -- End function
	.section	__TEXT,__cstring,cstring_literals
	.p2align	4               ## @__const.main.str1
L___const.main.str1:
	.asciz	"\"Programming is like building a multilingual puzzle\n"

.subsections_via_symbols
