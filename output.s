	push_const EXIT
	push_reg fp
	push_reg sp
	pop_reg fp
	jump main
EXIT:
	exit
funcA:
funcA_start:
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
	shift_sp 8
main_start:
	push_reg fp
	push_const 5
	add
	push_const 0
	add
	push_reg sp
	fetch
	push_const 50
	assign
	fetch
	shift_sp -1
	push_reg fp
	push_const 5
	add
	push_const 1
	add
	push_reg sp
	fetch
	push_const 100
	assign
	fetch
	shift_sp -1
	push_reg fp
	push_const 5
	add
	push_const 2
	add
	push_reg sp
	fetch
	push_const 150
	assign
	fetch
	shift_sp -1
	push_reg fp
	push_const 5
	add
	push_const 3
	add
	push_reg sp
	fetch
	push_const 200
	assign
	fetch
	shift_sp -1
	push_reg fp
	push_const 1
	add
	push_reg sp
	fetch
	push_reg fp
	push_const 5
	add
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
	push_const 4
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
	push_const 7
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
str_0. string "x.b : "
    push_const str_0
	write_string
	push_reg fp
	push_const 1
	add
	push_const 3
	add
	fetch
	write_int
str_1. string "\n"
    push_const str_1
	write_string
str_2. string "x.a[1] : "
    push_const str_2
	write_string
	push_reg fp
	push_const 1
	add
	push_const 1
	add
	fetch
	write_int
str_3. string "\n"
    push_const str_3
	write_string
main_final:
	push_reg fp
	pop_reg sp
	pop_reg fp
	pop_reg pc
main_end:
Lglob.  data 0
