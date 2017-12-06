/* pointer operation */

int main(void) {
	int a[10];
	int *b;
	char c[20];
	char *d;

	a = b;	/* LHS_NOT_VAR error */
	a[0] = 0;
	c[5] = 'a';	

	b = &a;		/* NOT_SAME_TYPE error */
	b = &a[10];
	b = &b;		/* NOT_SAME_TYPE error */
	b = &*(a+5);/* NOT_INT error */
	b = &(b++);	/* NOT_INT error */

	d = b;		/* NOT_SAME_TYPE error */
	d = c;      /* NOT_SAME_TYPE error*/

	c[1] = a[2]; /* NOT_SAME_TYPE error */
	
	if (b == d) { 
		return 'a';
	}

	return 0;
}

