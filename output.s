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
	shift_sp 34
main_start:
	push_reg fp
	push_const 34
	add
	push_reg sp
	fetch
	push_const 10
	assign
	fetch
	shift_sp -1
	push_reg fp
	push_const 17
	add
	push_const 1
	push_const 4
	mul
	add
	push_const 0
	add
	push_reg sp
	fetch
	push_const 1
	assign
	fetch
	shift_sp -1
	push_reg fp
	push_const 17
	add
	push_const 1
	push_const 4
	mul
	add
	push_const 1
	add
	push_reg sp
	fetch
	push_const 2
	assign
	fetch
	shift_sp -1
	push_reg fp
	push_const 17
	add
	push_const 1
	push_const 4
	mul
	add
	push_const 2
	add
	push_reg sp
	fetch
	push_const 3
	assign
	fetch
	shift_sp -1
	push_reg fp
	push_const 17
	add
	push_const 1
	push_const 4
	mul
	add
	push_const 3
	add
	push_reg sp
	fetch
	push_reg fp
	push_const 34
	add
	assign
	fetch
	shift_sp -1
	push_reg fp
	push_const 17
	add
	push_const 12
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
	push_const 17
	add
	push_const 12
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
	push_const 17
	add
	push_const 12
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
	push_const 17
	add
	push_const 15
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
	push_const 17
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
	push_reg fp
	push_const 5
	add
	push_reg sp
	push_const -1
	add
	fetch
	push_const 4
	add
	fetch
	assign
	push_reg fp
	push_const 6
	add
	push_reg sp
	push_const -1
	add
	fetch
	push_const 5
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
	push_const 6
	add
	fetch
	assign
	push_reg fp
	push_const 8
	add
	push_reg sp
	push_const -1
	add
	fetch
	push_const 7
	add
	fetch
	assign
	push_reg fp
	push_const 9
	add
	push_reg sp
	push_const -1
	add
	fetch
	push_const 8
	add
	fetch
	assign
	push_reg fp
	push_const 10
	add
	push_reg sp
	push_const -1
	add
	fetch
	push_const 9
	add
	fetch
	assign
	push_reg fp
	push_const 11
	add
	push_reg sp
	push_const -1
	add
	fetch
	push_const 10
	add
	fetch
	assign
	push_reg fp
	push_const 12
	add
	push_reg sp
	push_const -1
	add
	fetch
	push_const 11
	add
	fetch
	assign
	push_reg fp
	push_const 13
	add
	push_reg sp
	push_const -1
	add
	fetch
	push_const 12
	add
	fetch
	assign
	push_reg fp
	push_const 14
	add
	push_reg sp
	push_const -1
	add
	fetch
	push_const 13
	add
	fetch
	assign
	push_reg fp
	push_const 15
	add
	push_reg sp
	push_const -1
	add
	fetch
	push_const 14
	add
	fetch
	assign
	push_reg fp
	push_const 16
	add
	push_reg sp
	push_const -1
	add
	fetch
	push_const 15
	add
	fetch
	assign
	shift_sp -3
	push_reg fp
	push_const 33
	add
	push_reg sp
	fetch
	push_const 0
	assign
	fetch
	shift_sp -1
label_0:
	push_reg fp
	push_const 33
	add
	fetch
	push_const 3
	less
	branch_false label_1
	jump label_2
label_3:
	push_reg fp
	push_const 33
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
	jump label_0
label_2:
str_0. string "x.def[1].a["
    push_const str_0
	write_string
	push_reg fp
	push_const 33
	add
	fetch
	write_int
str_1. string "] : "
    push_const str_1
	write_string
	push_reg fp
	push_const 1
	add
	push_const 1
	push_const 4
	mul
	add
	push_reg fp
	push_const 33
	add
	fetch
	add
	fetch
	write_int
str_2. string "\n"
    push_const str_2
	write_string
	jump label_3
label_1:
str_3. string "*(x.def[1].b) : "
    push_const str_3
	write_string
	push_reg fp
	push_const 1
	add
	push_const 1
	push_const 4
	mul
	add
	push_const 3
	add
	fetch
	fetch
	write_int
str_4. string "\n"
    push_const str_4
	write_string
	push_reg fp
	push_const 33
	add
	push_reg sp
	fetch
	push_const 0
	assign
	fetch
	shift_sp -1
label_4:
	push_reg fp
	push_const 33
	add
	fetch
	push_const 3
	less
	branch_false label_5
	jump label_6
label_7:
	push_reg fp
	push_const 33
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
	jump label_4
label_6:
str_5. string "x.a["
    push_const str_5
	write_string
	push_reg fp
	push_const 33
	add
	fetch
	write_int
str_6. string "] : "
    push_const str_6
	write_string
	push_reg fp
	push_const 1
	add
	push_const 12
	add
	push_reg fp
	push_const 33
	add
	fetch
	add
	fetch
	write_int
str_7. string "\n"
    push_const str_7
	write_string
	jump label_7
label_5:
str_8. string "x.b : "
    push_const str_8
	write_string
	push_reg fp
	push_const 1
	add
	push_const 15
	add
	fetch
	write_int
str_9. string "\n"
    push_const str_9
	write_string
main_final:
	push_reg fp
	pop_reg sp
	pop_reg fp
	pop_reg pc
main_end:
Lglob.  data 0
