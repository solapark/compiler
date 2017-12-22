	push_const EXIT
	push_reg fp
	push_reg sp
	pop_reg fp
	jump main
EXIT:
	exit
funcA:
	shift_sp 1
funcA_start:
str_0. string "param.a : "
    push_const str_0
	write_string
	push_reg fp
	push_const 1
	add
	fetch
	write_int
str_1. string "\n"
    push_const str_1
	write_string
str_2. string "param.b : "
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
	shift_sp 5
main_start:
	push_reg fp
	push_const 1
	add
	push_reg sp
	fetch
	push_const 100
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
	push_const 3000
	assign
	fetch
	shift_sp -1
str_4. string "x.a : "
    push_const str_4
	write_string
	push_reg fp
	push_const 1
	add
	fetch
	write_int
str_5. string "\n"
    push_const str_5
	write_string
str_6. string "x.b : "
    push_const str_6
	write_string
	push_reg fp
	push_const 1
	add
	push_const 1
	add
	fetch
	write_int
str_7. string "\n"
    push_const str_7
	write_string
	push_reg fp
	push_const 3
	add
	push_reg sp
	fetch
	shift_sp 1
	push_const label_0
	push_reg fp
	push_reg fp
	push_const 1
	add
	push_reg sp
	fetch
	push_const 1
	add
	fetch
	shift_sp -1
	fetch
	shift_sp -1
	shift_sp 2
	push_reg sp
	push_const -2
	add
	pop_reg fp
	jump funcA
label_0:
	push_reg fp
	push_const 3
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
	push_const 4
	add
	push_reg sp
	push_const -1
	add
	fetch
	push_const 1
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
