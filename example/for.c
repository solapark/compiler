int main(){
    int i;
    int j;
    i = 0;

    for(i=0; i<10; i++){
        int a;
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
    /*
    write_int(i);
    write_string("\n");
    */

}
