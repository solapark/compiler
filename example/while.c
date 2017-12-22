/*
void outprint(int j){
	int k;

	k = 3;

	while(k > 0){
		write_int(k);
		write_string("\n");
		k--;
	}
	write_int(k);
	write_string("\n");
    return j;
}
*/
int main(){
	int k;
    int a;

	k = 3;
    a = 1;

	while(1){
		write_int(k);
		write_string("\n");

        if(k<0){
            if(a == 1){
                write_string("a : ");
                write_int(a);
                write_string("\n");
                a = 0;
                write_string("continue\n");
                continue;
            }
            write_string("a : ");
            write_int(a);
            write_string("\n");

            write_string("break\n");
            break;
        }
		k--;
	}
    
	write_int(k);
	write_string("\n");
    /*
    outprint(k);
    */
   
}
