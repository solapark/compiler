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
	push_reg fp
	push_const 1
	add
	fetch
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
	fetch
	push_reg fp
	push_const 3
	add
	fetch
	push_reg fp
	push_const 2
	add
	fetch
main_final:
	push_reg fp
	pop_reg sp
	pop_reg fp
	pop_reg pc
main_end:
