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

	k = 3;

	while(1){
		/*write_int(k);
		write_string("\n");
        */
        if(k<0){
            break;
        }
		k--;
	}
    /*
	write_int(k);
	write_string("\n");
    outprint(k);
    */
}
