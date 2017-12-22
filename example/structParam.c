struct  abc{
    int a[3];
    int b;
};


void funcA(struct abc param){
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



    /*
       return param;
      */
}

int main() {
    struct abc x;
    struct abc y;
    int i;

    x.a[0] = 10;
    x.a[1] = 70;
    x.a[2] = 30;

    x.b = 100;
    
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

    funcA(x);

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


}
