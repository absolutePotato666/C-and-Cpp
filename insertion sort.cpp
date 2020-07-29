#include<bits/stdc++.h>

using namespace std;

void insertion(int array[],int array_size,int whereToputin,int whatToPutIn)
{
    int i;
    for(i=array_size-2; i>=whereToputin; i--)
    {
        array[i+1]=array[i];
    }
    array[whereToputin]=whatToPutIn;
}

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int i,j,n,sizeTosend,whatToPutin,whereToputin;
    cin>>n;
    int a[n];
    for(i=0; i<n; i++) cin>>a[i];

    for(i=1; i<n; i++)
    {
        for(j=i; j>=0; j--)
        {
            if(a[j]>a[i] && a[j-1]<=a[i])
            {
                whatToPutin=a[i];
                whereToputin=j;
                sizeTosend=i+1;
                insertion(a,sizeTosend,whereToputin,whatToPutin);
            }
        }
    }

    for(i=0; i<n; i++) cout<<a[i]<<" ";

    return 0;
}

























