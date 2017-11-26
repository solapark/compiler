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

    struct temp {
	int a;
	int b;
    };

    struct notStr str1;

    if(1){
	int a;
	int b;
	int ddd;
    }

    ddd=1;

    a = b;
    a = e;	/* error */
    a = 1;
   return 0;
}
