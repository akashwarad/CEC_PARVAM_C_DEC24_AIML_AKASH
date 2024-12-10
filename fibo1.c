#include<stido.h.>
int fib(int n){
    if(n == 0 || n == 1)
     return n;
     else
     return fib (n: n-1)+fib(n:n-2);
}
int main()
{
    for(int i =0; i < 10; i++)
    {
        printf("%d" , fib(n:i))
    }
    return 0;
}