struct  abc{
    int a[3];
    int b;
};


struct abc funcA(){
    struct abc x;
    int i;
    x.a[0] = 10;
    x.a[1] = 70;
    x.a[2] = 30;

    x.b = 100;
/* 
   for(i = 0; i<3; i++){
        write_string("x.a[");
        write_int(i);
        write_string("] : ");
        write_int(x.a[i]);
        write_string("\n");
    }

    write_string("x.b : ");
    write_int(x.b);
    write_string("\n");
    */
/*
    param.b = -1;

    write_string("param.b : ");
    write_int(param.b);
    write_string("\n");

    write_string("i : ");
    write_int(i);
    write_string("\n");
*/

  return x;
}

int main() {
    /*
    struct abc x;
    */
    struct abc y;
    int i;
    y.a[0] = -10;
    y.a[1] = -70;
    y.a[2] = -30;

    y.b = -100;
 
/*
    x.a[0] = 10;
    x.a[1] = 70;
    x.a[2] = 30;

    x.b = 100;
 */
    /*
    int i;
   for(i = 0; i<3; i++){
        write_string("x.a[");
        write_int(i);
        write_string("] : ");
        write_int(x.a[i]);
        write_string("\n");
    }

    write_string("x.b : ");
    write_int(x.b);
    write_string("\n");


    for(i = 0; i<3; i++){
        write_string("x.a[");
        write_int(i);
        write_string("] : ");
        write_int(x.a[i]);
        write_string("\n");
    }

    write_string("x.b : ");
    write_int(x.b);
    write_string("\n");
    */

    y = funcA();
    for(i = 0; i<3; i++){
        write_string("y.a[");
        write_int(i);
        write_string("] : ");
        write_int(y.a[i]);
        write_string("\n");
    }
    write_string("y.b : ");
    write_int(y.b);
    write_string("\n");

}
