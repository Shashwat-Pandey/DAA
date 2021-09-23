#include<iostream>
using namespace std;

int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        int n;
        cin>>n;
        int arr[n];
        for(int i=0;i<n;i++)
        {
            cin>>arr[i];
        }
        int flag=0;
        for(int i=0;i<n;i++)
        {
            for(int j=i+1;j<n;j++)
            {
                for(int k=j+1;k<n;k++)
                {
                    if(arr[i]+arr[j]==arr[k])
                    {
                        cout<<endl<<i<<" "<<j<<" "<<k<<" ";
                        flag=1;
                        break;
                    }
                }
                if(flag)
                {
                    break;
                }
            }
            if(flag)
            {
                break;
            }
        }
        if(flag==0)
        {
            cout<<"No such pair found"<<endl;
        }
    }
    return 0;
}