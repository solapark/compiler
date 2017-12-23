	push_const EXIT
	push_reg fp
	push_reg sp
	pop_reg fp
	jump main
EXIT:
	exit
aa:
aa_start:
	push_reg fp
	push_const -1
	add
	push_const -1
	add
	push_const 100
	assign
	jump aa_final
aa_final:
	push_reg fp
	pop_reg sp
	pop_reg fp
	pop_reg pc
aa_end:
outprint:
	shift_sp 2
outprint_start:
    push_const Lglob+0
	push_reg sp
	fetch
	push_const 3
	assign
	fetch
	shift_sp -1
	push_reg fp
	push_const 2
	add
	push_reg sp
	fetch
	push_const 1
	assign
	fetch
	shift_sp -1
	push_reg fp
	push_const 3
	add
	push_reg sp
	fetch
	push_const 2
	assign
	fetch
	shift_sp -1
	push_reg fp
	push_const 2
	add
	fetch
	write_int
str_0. string "\n"
    push_const str_0
	write_string
	push_reg fp
	push_const 3
	add
	fetch
	write_int
str_1. string "\n"
    push_const str_1
	write_string
    push_const Lglob+0
	fetch
	write_int
str_2. string "\n"
    push_const str_2
	write_string
	push_reg fp
	push_const 2
	add
	push_reg sp
	fetch
	shift_sp 1
	push_const label_0
	push_reg fp
	push_reg fp
	push_const 2
	add
	fetch
	push_reg sp
	push_const -1
	add
	pop_reg fp
	jump aa
label_0:
	assign
	fetch
	shift_sp -1
	push_reg fp
	push_const 2
	add
	fetch
	write_int
str_3. string "\n"
    push_const str_3
	write_string
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
	shift_sp 4
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
	push_reg fp
	push_const 4
	add
	push_reg sp
	fetch
	shift_sp 1
	push_const label_1
	push_reg fp
	shift_sp 1
	push_const label_2
	push_reg fp
	shift_sp 1
	push_const label_3
	push_reg fp
	push_reg fp
	push_const 3
	add
	fetch
	push_reg sp
	push_const -1
	add
	pop_reg fp
	jump outprint
label_3:
	push_reg sp
	push_const -1
	add
	pop_reg fp
	jump outprint
label_2:
	push_reg sp
	push_const -1
	add
	pop_reg fp
	jump outprint
label_1:
	assign
	fetch
	shift_sp -1
	push_reg fp
	push_const 4
	add
	fetch
	fetch
	write_int
str_4. string "\n"
    push_const str_4
	write_string
main_final:
	push_reg fp
	pop_reg sp
	pop_reg fp
	pop_reg pc
main_end:
Lglob.  data 1
