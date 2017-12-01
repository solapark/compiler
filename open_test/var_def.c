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

	e++;

    a = b;
    a = e;	/* error */
    a = 1;
   return 0;
}
