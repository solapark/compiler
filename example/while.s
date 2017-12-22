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
	push_const 3
	assign
	fetch
	shift_sp -1
label_0:
	push_reg fp
	push_const 1
	add
	fetch
	push_const 0
	greater
    branch_false label_1
	push_reg fp
	push_const 1
	add
	push_reg sp
	fetch
	push_reg sp
	fetch
	fetch
	push_const 1
	sub
	assign
	fetch
	push_const 1
	sub
	shift_sp -1
    jump label_0
label_1:
main_final:
	push_reg fp
	pop_reg sp
	pop_reg fp
	pop_reg pc
main_end:
Lglob.  data 0
