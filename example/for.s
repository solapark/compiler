	push_const EXIT
	push_reg fp
	push_reg sp
	pop_reg fp
	jump main
EXIT:
	exit
main:
	shift_sp 1
main_start:
	push_reg fp
	push_const 1
	add
	push_reg sp
	fetch
	push_const 0
	assign
	fetch
label_0:
	push_reg fp
	push_const 1
	add
	fetch
	push_const 3
	less
	push_reg fp
	push_const 1
	add
	push_reg sp
	fetch
	push_reg sp
	fetch
	fetch
	push_const 1
	add
	assign
	fetch
	push_const 1
	sub
main_final:
	push_reg fp
	pop_reg sp
	pop_reg fp
	pop_reg pc
main_end:
Lglob.  data 0
