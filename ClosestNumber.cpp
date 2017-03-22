#include <iostream>
#include <math.h>
using namespace std;

int main()
{
    long int power,g,h;
    int c,inp1,inp2,test,a,b,x,y,dividend;
    cin >>test;
    for(int i=0;i<test;i++)
    {
        cin>>inp1;
        cin>>inp2;
        cin>>dividend;
        power = pow(inp1,inp2);
        x = power%dividend;
      
        y = power/dividend;
        
        if(x<(dividend-x))
        {
            cout<<((y*dividend))<<endl;
        }
        else
            {
            cout<<((y*dividend)+x)<<endl;
        }
    }

    return 0;
}
