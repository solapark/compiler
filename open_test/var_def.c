/* variable redefine */
int a;

int main() {
    int a;
    char a; /* error */
    int b;
    int b;  /* error */
    int c;
    char d;

    a+b;
    a+d;

    a = b;
    a = e;	/* error */
    a = 1;
   return 0;
}
