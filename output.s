	push_const EXIT
	push_reg fp
	push_reg sp
	pop_reg fp
	jump main
EXIT:
	exit
funcA:
	shift_sp 4
funcA_start:
	push_reg fp
	push_const 1
	add
	push_const 0
	add
	push_reg sp
	fetch
	push_const 10
	assign
	fetch
	shift_sp -1
	push_reg fp
	push_const 1
	add
	push_const 1
	add
	push_reg sp
	fetch
	push_const 70
	assign
	fetch
	shift_sp -1
	push_reg fp
	push_const 1
	add
	push_const 2
	add
	push_reg sp
	fetch
	push_const 30
	assign
	fetch
	shift_sp -1
	push_reg fp
	push_const 1
	add
	push_const 3
	add
	push_reg sp
	fetch
	push_const 100
	assign
	fetch
	shift_sp -1
	push_reg fp
	push_const -1
	add
	push_const -1
	add
	push_reg fp
	push_const 1
	add
	assign
	jump funcA_final
funcA_final:
	push_reg fp
	pop_reg sp
	pop_reg fp
	pop_reg pc
funcA_end:
main:
	shift_sp 4
main_start:
	push_reg fp
	push_const 1
	add
	push_reg sp
	fetch
	shift_sp 1
	push_const label_0
	push_reg fp
	push_reg sp
	pop_reg fp
	jump funcA
label_0:
	push_reg fp
	push_const 1
	add
	push_reg sp
	push_const -1
	add
	fetch
	push_const 0
	add
	fetch
	assign
	push_reg fp
	push_const 2
	add
	push_reg sp
	push_const -1
	add
	fetch
	push_const 1
	add
	fetch
	assign
	push_reg fp
	push_const 3
	add
	push_reg sp
	push_const -1
	add
	fetch
	push_const 2
	add
	fetch
	assign
	push_reg fp
	push_const 4
	add
	push_reg sp
	push_const -1
	add
	fetch
	push_const 3
	add
	fetch
	assign
	shift_sp -3
main_final:
	push_reg fp
	pop_reg sp
	pop_reg fp
	pop_reg pc
main_end:
Lglob.  data 0
