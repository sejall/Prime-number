#include <iostream>

using namespace std;

int main()
{
    int t;
    cin>>t;
    while(t--)
    {
         int n,s,a=0;
        cin>>n;
        int r=n;
        for(;n!=0;n=n/10)
        {
            s=n%10;
            a=a*10+s;

        }
        if(r==a)
            cout<<"wins"<<endl;
        else
            cout<<"losses"<<endl;

    }
    return 0;
}
