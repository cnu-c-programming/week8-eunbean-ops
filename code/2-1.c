# include <stdio.h>

int main(){

    char arr[]= "hello";
    char *p= "helllo";

    arr[0]= 'H';
    printf("%s\n", arr);

    //p[0]= 'H';
    printf("%s\n", p);

    return 0;
}
