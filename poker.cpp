#include<bits/stdc++.h>

using namespace std;

int transformer(char s)
{
    if(s=='A') return 1;
    if(s=='K') return 2;
    if(s=='Q') return 3;
    if(s=='J') return 4;
    if(s=='2') return 5;
}

void insertion(int array[],int array_size,int whereToputin,int whatToPutIn)
{
    int i;
    for(i=array_size-2; i>=whereToputin; i--)
    {
        array[i+1]=array[i];
    }
    array[whereToputin]=whatToPutIn;
}

int Count(int a[])
{
    int c=0;
    for(int i=1; i<5; i++)
    {
        for(int j=i; j>=0; j--)
        {
            if(a[j]>a[i] && a[j-1]<=a[i])
            {
                int whatToPutin=a[i];
                int whereToputin=j;
                int sizeTosend=i+1;
                insertion(a,sizeTosend,whereToputin,whatToPutin);
                c++;
            }
        }
    }
    return c;
}
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int i,c,values[5];
    char hand[5];
    gets(hand);

    for(i=0;i<5;i++)
    {
        values[i]=transformer(hand[i]);
    }
    c=Count(values);

    cout<<c;

    return 0;
}

























