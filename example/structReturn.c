struct  abc{
    int a[3];
    int b;
};


struct abc funcA(){
    struct abc x;
    x.a[0] = 10;
    x.a[1] = 70;
    x.a[2] = 30;

    x.b = 100;
 
    /*
    int i;
   for(i = 0; i<3; i++){
        write_string("param.a[");
        write_int(i);
        write_string("] : ");
        write_int(param.a[i]);
        write_string("\n");
    }

    write_string("param.b : ");
    write_int(param.b);
    write_string("\n");

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
    /*
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
    */
 

}
