#include <iostream>
#include <math.h>
using namespace std;
int my_func(int x, int base)
{
    int i=0,k=0;
    for(int j=x;j>0;j=j/10)
    {
        i = i + (j%10)*(pow(base,k));
        k++;
    }
    return(i);

}
int main()
{
    int value[100000];
    int base[100000];
    int N,i,j;
    int countt = 0;
    cin>>N;
    for(i=0;i<N;i++)
    {
        cin>>base[i];
        cin>>value[i];
    }
    for(i=0;i<N;i++)
    {
        for(j=i+1;j<N;j++)
        {
         if((value[i] == my_func(value[j],base[j]))||(base[i] == my_func(value[j],base[j])))
         {
             countt++;
         }
        }
    }
    cout<<countt;
    return 0;
}
