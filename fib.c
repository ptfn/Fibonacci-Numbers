#include <stdio.h>

int fib(int n);

int main()
{
    printf("Number Fib:%d\n",fib(40));
    return 0;
}

int fib(int n){
    if(n <= 2) return n;
    else return(fib(n-1)+ fib(n-2));
}