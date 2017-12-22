struct  abc{
    /*int a[3];*/
    int a;
    int b;
};


struct abc funcA(struct abc param){
    int i;
    /*
   for(i = 0; i<3; i++){
        write_string("param.a[");
        write_int(i);
        write_string("] : ");
        write_int(param.a[i]);
        write_string("\n");
    }
    */

    write_string("param.a : ");
    write_int(param.a);
    write_string("\n");


    write_string("param.b : ");
    write_int(param.b);
    write_string("\n");


    return param;
}

int main() {
    struct abc x;
    struct abc y;
    int i;

    /*
    x.a[0] = 10;
    x.a[1] = 11;
    x.a[2] = 2;
    */
    x.a = 100;
    x.b = 3000;
    
    /*
   for(i = 0; i<3; i++){
        write_string("x.a[");
        write_int(i);
        write_string("] : ");
        write_int(x.a[i]);
        write_string("\n");
    }
    */

    write_string("x.a : ");
    write_int(x.a);
    write_string("\n");


    write_string("x.b : ");
    write_int(x.b);
    write_string("\n");

    y = funcA(x);
 
}
