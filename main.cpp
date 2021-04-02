#include<iostream>
#include <ctime>
typedef unsigned long long ull;

ull fib(ull n) 
{
    if(n==1)
        return 0;
    if(n==2)
        return 1;
    else
        return fib(n-1) + fib(n-2);
}

for(int i = 0, n = 30; i < 7; i++, n+=2) {
   clock_t start = clock();
   ull result = fib(n);
   clock_t finish = clock();
   std::cout << (double)(finish-start)/CLOCKS_PER_SEC << std::endl;
}

import matplotlib.pyplot as plt

arr = [0.003624,
0.010466,
0.025308,
0.062046,
0.161961,
0.419963,
1.10293]

plt.plot(arr)
plt.ylabel('time,c')
plt.show()

ull fibIter(ull a, ull b, ull count) {
    if(count==0)
        return b;
    else
        return fibIter(a + b, a, --count);
}
// decorate
ull fib2(ull n) {
    return fibIter(0,1,n);
}
