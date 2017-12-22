struct  abc{
    int a[3];
    int b;
};

struct abc funcA(struct abc param){
    return param;
}

int main() {
    struct abc x;
    struct abc y;

    y.a[0] = 50;
    y.a[1] = 100;
    y.a[2] = 150;
    y.b = 200;
    x = y;
/*    x = funcA(y);*/

    write_string("x.b : ");
    write_int(x.b);
    write_string("\n");
    write_string("x.a[1] : ");
    write_int(x.a[1]);
    write_string("\n");


}
