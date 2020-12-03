#include<bits/stdc++.h>

using namespace std;

void fib(int n,int i,int fib1,int fib2)
{
    int t;
    if(i==n) printf("%d",fib2);

    else
    {
        t=fib1;
        fib1=fib1+fib2;
        fib2=t;
        i++;
        fib(n,i,fib1,fib2);
    }

}

int main()
{
    int n,sum=0;
    cin>>n;
    fib(n+1,1,0,1);

    return 0;
}












