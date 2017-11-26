/* variable redefine */
int a;
int ;
int main() {
    int a;
    char a; /* error */
    int b;
    int b;  /* error */
    int c;
    char d;

    if(1){
	int a;
	int b;
    }

    a = b;
    a = e;	/* error */
    a = 1;
   return 0;
}
