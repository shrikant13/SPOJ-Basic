#include<iostream>
using namespace std;
int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        int n,x,y;
        cin>>n>>x>>y;
        int i=1;
        while(x*i<n)
        {
            if((x*i)%y!=0)

                cout<<x*i<<" ";
                i++;
        }
        cout<<endl;

    }
    return 0;
}
