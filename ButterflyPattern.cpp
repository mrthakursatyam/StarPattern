#include<iostream>
using namespace std;

int main()
{
    int n;
    cout<<"Note :- Number should be greater than 2\n";
    cout<<"Enter number : ";
    cin>>n;
    if(n<=2)
    {
        cout<<"\n*** Read the above note ***";
        exit(0);
    }
    cout<<"\n";

    int space;
    for(int i=1;i<=n;i++)
    {
        space=2*n-2*i;
        for(int j=1;j<=i;j++)
            cout<<"*";
        
        for(int j=space;j>0;j--)
            cout<<" ";

        for(int j=1;j<=i;j++)
            cout<<"*";
        cout<<"\n";
    }
    for(int i=n;i>0;i--)
    {
        space=2*n-2*i;
        for(int j=1;j<=i;j++)
            cout<<"*";
        
        for(int j=space;j>0;j--)
            cout<<" ";

        for(int j=1;j<=i;j++)
            cout<<"*";
        cout<<"\n";
    }


return 0;
}