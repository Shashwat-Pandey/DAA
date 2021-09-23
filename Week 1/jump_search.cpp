#include<bits/stdc++.h>
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
        int comparisions=0,flag=0;
        int key;
        cin>>key;
        int jump=sqrt(n);
        for(int i=0;i<n&&i+jump<n;i=i+jump)
        {
            if(arr[i]==key)
            {
                comparisions++;
                cout<<"Present "<<comparisions+1;
                flag=1;
                break;
            }
            else if(key>arr[i]&&key<=arr[i+jump])
            {
                for(int j=i+1;j<=i+jump;j++)
                {
                    if(arr[j]==key)
                    {
                        comparisions++;
                        cout<<"Present "<<comparisions+1;
                        flag=1;
                        break;
                    }
                    comparisions++;
                }
            }
            if(flag==1)
            {
                break;
            }
            comparisions++;
        }
        if(flag==0)
        {
            cout<<"Not Present "<<comparisions;
        }
    }
    return 0;
}