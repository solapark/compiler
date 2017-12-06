/* function operation */

/*int func4(void);*/

int func1(int a, char b) {
	return 0;
}

int func2(void) {
	return 1;
}

void func3(int *a, int b) {
	int *c;

	c = a + b;
}

int func4(void);

int* func5(void);

int main(void) {
	int a;
	char b;

	int c;
	char d;

	int* e;
	char* f;

	a = 1;
	b = 'c';

	c = func1(a, b);
	c = func1(a, b, b); /* formal args error */
	d = func2(b); /* formal args error */
	d = func2();/* LHS != RHS error */
	
	func3(&a, c);
	func3(&b, a); /* formal args error */

	d = func1(a, b); /* LHS != RHS error */
	c = func3(&c, d); /* formal args error */
	func3(e, a);

	a = func4();

	e = func5();
	f = func5();
	return 0;
}
