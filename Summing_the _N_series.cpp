#include <iostream>

using namespace std;
int recurse(int a,int n)
{
    if(a==n)
    {
        return((2*a)-1);
    }
    else
    {
        return(((2*a)-1)+recurse(a+1,n));
    }

}
int main()
{
    int x,y=1;
    cin>>x;
    cout<<recurse(y,x);
    return 0;
}
