#include<bits/stdc++.h>

using namespace std;

int isPrime(int n)
{
    int i;
    for(i=2; i<n; i++)
        if (n%i==0) return 0;
    return 1;
}


int isPrime_root(int n)
{
    int i;
    if(n==1) return 1;
    for(i=2; i*i<=n; i++)
        if (n%i==0) return 0;
    return 1;
}

int isPrime_sieve(int arr[],int n)
{

    for(int j=2; j<sqrt(n); j++)
    {
        if( arr[j]==0)
            for(int k=2*j; k<=n; k+=j)
                arr[k]=1;
    }
    for(int i=1; i<=n; i++)
        if(arr[i]==0) cout<<i<<" "  ;
    cout<<"\n";

}


int main()
{
    int n;
    clock_t start_time, end_time;
    cin>>n;

    ///linear
    cout<<"Linear:\n";
    start_time=clock();
    for(int i=1;i<=n;i++)
        if  (isPrime(i)) cout<<i<<" ";
    end_time=clock();
    cout<<"\ntime taken: "<<1000*( double)(end_time-start_time)/CLOCKS_PER_SEC
    <<" milliseconds\n\n";


    ///square root
    cout<<"Square root:\n";
    start_time=clock();
     for(int i=1;i<=n;i++)
        if  (isPrime_root(i)) cout<<i<<" ";
    end_time=clock();
    cout<<"\ntime taken: "<<1000*( double)(end_time-start_time)/CLOCKS_PER_SEC
    <<" milliseconds\n\n";


    ///Sieve of Eratosthenes
    int arr[n+1]={0};
    cout<<"sieve of Eratosthenes:\n";
    start_time=clock();
    isPrime_sieve(arr,n);
    end_time=clock();
    cout<<"\ntime taken: "<<1000*( double)(end_time-start_time)/CLOCKS_PER_SEC
    <<" milliseconds\n\n";


    return 0;
}












