	push_const EXIT
	push_reg fp
	push_reg sp
	pop_reg fp
	jump main
EXIT:
	exit
outprint:
	shift_sp 1
outprint_start:
	push_reg fp
	push_const 2
	add
	push_reg sp
	fetch
	push_const 3
	assign
	fetch
	shift_sp -1
label_0:
	push_reg fp
	push_const 2
	add
	fetch
	push_const 0
	greater
	branch_false label_1
	push_reg fp
	push_const 2
	add
	fetch
	write_int
str_0. string "\n"
    push_const str_0
	write_string
	push_reg fp
	push_const 2
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
	push_reg fp
	push_const 2
	add
	fetch
	write_int
str_1. string "\n"
    push_const str_1
	write_string
	push_reg fp
	push_const -1
	add
	push_const -1
	add
	push_reg fp
	push_const 1
	add
	fetch
	assign
	jump outprint_final
outprint_final:
	push_reg fp
	pop_reg sp
	pop_reg fp
	pop_reg pc
outprint_end:
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
label_2:
	push_reg fp
	push_const 1
	add
	fetch
	push_const 0
	greater
	branch_false label_3
	push_reg fp
	push_const 1
	add
	fetch
	write_int
str_2. string "\n"
    push_const str_2
	write_string
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
	jump label_2
label_3:
	push_reg fp
	push_const 1
	add
	fetch
	write_int
str_3. string "\n"
    push_const str_3
	write_string
	shift_sp 1
	push_const label_4
	push_reg fp
	push_reg fp
	push_const 1
	add
	fetch
	push_reg sp
	push_const -1
	add
	pop_reg fp
	jump outprint
label_4:
	shift_sp -1
main_final:
	push_reg fp
	pop_reg sp
	pop_reg fp
	pop_reg pc
main_end:
Lglob.  data 0
