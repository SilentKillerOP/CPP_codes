#include <stdio.h>
// #include <conio.h>

int fiboo(int n ){
    if (n == 0){
        return 0 ;
    }
    if (n == 1){
        return 1;
    }
    else return fiboo(n-1)+fiboo(n-2);
}

int main()
{
    int a = 0;
    printf("%d\n" ,fiboo(30));
    return 0;
}