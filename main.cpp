#include<iostream>
#include <ctime>
typedef unsigned long long ull;

ull fib(ull n) 
{
    if(n==1)
        return 0;
    while(n!=1){
    if(n==2)
        return 1;
    else
        return fib(n-1) + fib(n-2);
    }
}

ull fibIter(ull a, ull b, ull count) {
    if(count==0)
        return b;
    else
        return fibIter(a + b, a, --count);
}

ull fib2(ull n) {
    return fibIter(0,1,n);
}

int main(){

std::cout<<fib(7);
    
return 0;
}
