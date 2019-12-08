	.syntax unified
	.arch armv7-a
	.eabi_attribute 27, 3
	.fpu vfpv3-d16
	.eabi_attribute 20, 1
	.eabi_attribute 21, 1
	.eabi_attribute 23, 3
	.eabi_attribute 24, 1
	.eabi_attribute 25, 1
	.eabi_attribute 26, 2
	.eabi_attribute 30, 6
	.eabi_attribute 34, 1
	.eabi_attribute 18, 4
	.thumb
	.text
	.align	2
	.global	t2019
	.thumb
	.thumb_func
	.type	t2019, %function
.data
corner: .word 0, 8, 2, 6
in: .word 1, 7, 3, 5

t2019:
	LDR r10,=corner
	LDR r9,=in
	mov r7, #4
	ldr r5, [r0, #16]
	cmp r5, #0
	beq L2
	mov r8, #0
L1:
	cmp r8, #4
	beq L4
	mul r6, r8, r7
	ldr r6, [r10, r6]
	mul r6, r6, r7
	ldr r6, [r0, r6]
	cmp r6, #0
	beq L5
	add r8, r8, #1
	b L1
L5:
	mul r6, r8, r7
	ldr r0, [r10, r6]
	bx	lr
L4:
	mov r8, #0
L6:
	cmp r8, #4
	beq L7
	mul r6, r8, r7
	ldr r6, [r9, r6]
	mul r6, r6, r7
	ldr r6, [r0, r6]
	cmp r6, #0
	beq L8
	add r8, r8, #1
	b L6
L8:
	mul r6, r8, r7
	ldr r0, [r9, r6]
	bx	lr
L7:
	bx	lr
L2:
	mov r0, #4	
	bx	lr
	.size	t2019, .-t2019
	.ident	"GCC: (Ubuntu/Linaro 4.6.3-1ubuntu5) 4.6.3"
	.section	.note.GNU-stack,"",%progbits
