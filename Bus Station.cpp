#include <iostream>
#include <math.h>
using namespace std;

int main()
{
    int arr[100000];
    int sum=0,N,i,bus_size=0,counta=0,temp=0,temp1=0;
    bool flag = 0;
    cin>>N;
    for(int i=0;i<N;i++)
    {
        cin>>arr[i];
        sum+=arr[i];
    }
    while(bus_size != sum)
    {
        flag = 0;
        bus_size+=arr[counta];
        temp = bus_size;
        temp1 = temp;
        for(i=counta+1;i<N;i++)
        {
            if(arr[i]<=temp)
            {
                temp -= arr[i];
                if(temp==0)
                {
                    temp = temp1;
                }

            }
            else
            {
                break;
            }
        }
        counta++;
            if((temp == temp1) && (i == N))
            {
                cout<<bus_size<<" ";
            }

    }
    return(0);

}
