#include<iostream>
using namespace std;

int main()
{
    int t;
    cin>>t;
    while(t>0)
    {
        int n;
        cin>>n;
        int arr[n];
        for(int i=0;i<n;i++)
        {
            cin>>arr[i];
        }
        int key;
        cin>>key;
        int flag=0,i;
        for(i=0;i<n;i++)
        {
            if(arr[i]==key)
            {
                flag=1;
                break;
            }
        }
        if(flag==1)
        {
            cout<<"Present at "<<i;
        }
        else
        {
            cout<<"Not Present";
        }
        t--;
    }
    return 0;
}