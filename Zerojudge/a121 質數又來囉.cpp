#include <iostream>
#include <cmath>
using namespace std;

int main()
{
    int a,b,n;
    bool k;
    while(cin>>a>>b)
    {
        n=0;
        for(int i=a; i<=b; i++)
        {
            k=true;
            for(int j=2; j<=sqrt(i); j++)
            {
                if(i%j==0)
                {
                    k=false;
                    break;
                }
            }
            if(k)
            {
                n=n+1;
            }
        }
        if(a==1)
        {
            cout<<n-1<<endl;
        }
        else
            cout<<n<<endl;
    }
    return 0;
}
