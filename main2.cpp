#include<iostream>
#include <ctime>

int fib(int n) 
{
    int i=0;
   while(i<64){
      n*=2;
   }
   return n;
}


int main(){
int n=1;
std::cout<<fib(n);
    
return 0;
}
