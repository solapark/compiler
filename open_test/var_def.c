/* variable redefine */
int a;

int main() {
    int a;
    char a; /* error */
    int b;
    int b;  /* error */
    int c;
    char d;
    int* e;
	int f[10];
	e++;
	++f;

    a = b;
    a = e;	/* error */
    a = 1;
    d = 3;
   return 0;
}
