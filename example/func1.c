int global1;

int aa(int a){
    return 100;
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
    a = aa(a);
    write_int(a);
	write_string("\n");
	*j = *j + 10;
   return j;
}

int main(){
	int i;
	int k;
	int *l;
    int *result;

	k = 10;
	l = &k;

    /*
	result = outprint(l);
    */
	result = outprint(&outprint(outprint(l)));
    /*
    k = aa(aa(k));
	write_int(k);
	write_string("\n");
    */

    write_int(*result);
	write_string("\n");

}
