int global1;

int aa(void){
    return 3-3;
}
int* outprint(int* j){
    int a;
    int b;
    global1 = 3;
    a =1;
    b = 2;
    write_int(a);
	write_string("\n");
    write_int(b);
	write_string("\n");
    write_int(global1);
	write_string("\n");
	*j = *j + 10;
    a = aa();
    write_int(a);
	write_string("\n");
    return j;
}

int main(){
	int i;
	int k;
	int *l;

	k = 10;
	l = &k;

/*	i = outprint(l);*/
	i = outprint(outprint(l));
	write_int(k);
	write_string("\n");
}
