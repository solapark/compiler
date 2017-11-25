/* variable redefine */
int a ;
int *x;
int *k;
int *j;
int y;

int main() {
    int a;
    char a; /* error */
    int b;
    int b;  /* error */
    int c;
    char d;

    a = b;
    a = e;	/* error */

   return 0;
}
