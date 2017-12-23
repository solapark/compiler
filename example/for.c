int main(){
    int i;
    int j;
    int a;
    i = 0;

    for(i=0; i<4; i++){
        a = i;
       if(a == 3){
            continue;
        }
       else{
           a = 100;
       }
        write_int(a);
        write_string("\n");
 
    }
    write_int(i);
    write_string("\n");

}
/*
   100
   100
   100
   4
   */
