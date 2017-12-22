struct aaa{
    int a[3];
    int* b;
};

struct  abc{
    struct aaa def[3];
    int a[3];
    int b;
};

struct abc funcA(struct abc param){
    return param;
}

int main() {
    struct abc x;
    struct abc y;
    int i;
    int a;
    
    a= 10;

    y.def[1].a[0] = 1;
    y.def[1].a[1] = 2;
    y.def[1].a[2] = 3;
    y.def[1].b = &a;
    y.a[0] = 50;
    y.a[1] = 100;
    y.a[2] = 150;
    y.b = 200;
    x = y;
/*    x = funcA(y);*/
   for(i = 0; i<3; i++){
        write_string("x.def[1].a[");
        write_int(i);
        write_string("] : ");
        write_int(x.def[1].a[i]);
        write_string("\n");
    }
   write_string("*(x.def[1].b) : ");
   write_int(*x.def[1].b);
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

 
}
