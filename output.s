	push_const EXIT
	push_reg fp
	push_reg sp
	pop_reg fp
	jump main
EXIT:
	exit
outprint:
outprint_start:
	push_reg fp
	push_const 1
	add
	fetch
	push_reg sp
	fetch
	push_reg fp
	push_const 1
	add
	fetch
	fetch
	push_const 10
	add
	assign
	fetch
	shift_sp -1
outprint_final:
	push_reg fp
	pop_reg sp
	pop_reg fp
	pop_reg pc
outprint_end:
main:
	shift_sp 3
main_start:
	push_reg fp
	push_const 2
	add
	push_reg sp
	fetch
	push_const 10
	assign
	fetch
	shift_sp -1
	push_reg fp
	push_const 3
	add
	push_reg sp
	fetch
	push_reg fp
	push_const 2
	add
	assign
	fetch
	shift_sp -1
main_final:
	push_reg fp
	pop_reg sp
	pop_reg fp
	pop_reg pc
main_end:
