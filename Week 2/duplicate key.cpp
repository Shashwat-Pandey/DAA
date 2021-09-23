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
        int key;
        cin>>key;
        int mid,low=0,high=n-1;
        int f_idx,l_idx;
        while(low<=high)
        {
            mid= low+(high-low)/2;
            if(arr[mid]==key)
            {
                f_idx=mid;
                high=mid-1;
            }
            else if(arr[mid]<key)
            {
                low=mid+1;
            }
            else{
                high=mid-1;
            }
        }
        low=0;
        high=n-1;
        while(low<=high)
        {
            mid= low+(high-low)/2;
            if(arr[mid]==key)
            {
                l_idx=mid;
                low=mid+1;
            }
            else if(arr[mid]<key)
            {
                low=mid+1;
            }
            else{
                high=mid-1;
            }
        }
        if(f_idx==0||l_idx==0)
        {
            cout<<"Not Present";
        }
        else{
            cout<<"present "<<l_idx-f_idx+1<<"times";
        }
    }
    return 0;
}
