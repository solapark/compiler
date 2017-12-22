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
	push_reg fp
	push_const 5
	add
	push_reg sp
	fetch
	push_const 0
	assign
	fetch
	shift_sp -1
label_0:
	push_reg fp
	push_const 5
	add
	fetch
	push_const 3
	less
	branch_false label_1
	jump label_2
label_3:
	push_reg fp
	push_const 5
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
str_0. string "param.a["
    push_const str_0
	write_string
	push_reg fp
	push_const 5
	add
	fetch
	write_int
str_1. string "] : "
    push_const str_1
	write_string
	push_reg fp
	push_const 1
	add
	push_reg fp
	push_const 5
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
str_3. string "param.b : "
    push_const str_3
	write_string
	push_reg fp
	push_const 1
	add
	push_const 3
	add
	fetch
	write_int
str_4. string "\n"
    push_const str_4
	write_string
	push_reg fp
	push_const 1
	add
	push_const 3
	add
	push_reg sp
	fetch
	push_const 1
	negate
	assign
	fetch
	shift_sp -1
str_5. string "param.b : "
    push_const str_5
	write_string
	push_reg fp
	push_const 1
	add
	push_const 3
	add
	fetch
	write_int
str_6. string "\n"
    push_const str_6
	write_string
str_7. string "i : "
    push_const str_7
	write_string
	push_reg fp
	push_const 5
	add
	fetch
	write_int
str_8. string "\n"
    push_const str_8
	write_string
funcA_final:
	push_reg fp
	pop_reg sp
	pop_reg fp
	pop_reg pc
funcA_end:
main:
	shift_sp 9
main_start:
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
	push_const 9
	add
	push_reg sp
	fetch
	push_const 0
	assign
	fetch
	shift_sp -1
label_4:
	push_reg fp
	push_const 9
	add
	fetch
	push_const 3
	less
	branch_false label_5
	jump label_6
label_7:
	push_reg fp
	push_const 9
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
str_9. string "x.a["
    push_const str_9
	write_string
	push_reg fp
	push_const 9
	add
	fetch
	write_int
str_10. string "] : "
    push_const str_10
	write_string
	push_reg fp
	push_const 1
	add
	push_reg fp
	push_const 9
	add
	fetch
	add
	fetch
	write_int
str_11. string "\n"
    push_const str_11
	write_string
	jump label_7
label_5:
str_12. string "x.b : "
    push_const str_12
	write_string
	push_reg fp
	push_const 1
	add
	push_const 3
	add
	fetch
	write_int
str_13. string "\n"
    push_const str_13
	write_string
	shift_sp 1
	push_const label_8
	push_reg fp
	push_reg fp
	push_const 1
	add
	push_reg sp
	fetch
	push_const 1
	add
	push_reg sp
	fetch
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
	fetch
	shift_sp -1
	fetch
	shift_sp -1
	shift_sp 4
	push_reg sp
	push_const -4
	add
	pop_reg fp
	jump funcA
label_8:
	push_reg fp
	push_const 9
	add
	push_reg sp
	fetch
	push_const 0
	assign
	fetch
	shift_sp -1
label_9:
	push_reg fp
	push_const 9
	add
	fetch
	push_const 3
	less
	branch_false label_10
	jump label_11
label_12:
	push_reg fp
	push_const 9
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
	jump label_9
label_11:
str_14. string "x.a["
    push_const str_14
	write_string
	push_reg fp
	push_const 9
	add
	fetch
	write_int
str_15. string "] : "
    push_const str_15
	write_string
	push_reg fp
	push_const 1
	add
	push_reg fp
	push_const 9
	add
	fetch
	add
	fetch
	write_int
str_16. string "\n"
    push_const str_16
	write_string
	jump label_12
label_10:
str_17. string "x.b : "
    push_const str_17
	write_string
	push_reg fp
	push_const 1
	add
	push_const 3
	add
	fetch
	write_int
str_18. string "\n"
    push_const str_18
	write_string
main_final:
	push_reg fp
	pop_reg sp
	pop_reg fp
	pop_reg pc
main_end:
Lglob.  data 0
