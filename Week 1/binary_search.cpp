#include<iostream>
using namespace std;

int BinarySearch(int *arr,int l,int r,int key)
{
    if(l<=r)
    {
        int mid=(l+r)/2;
        if(arr[mid]==key)
        {
            return mid;
        }
        else if(arr[mid]<key)
        {
            return BinarySearch(arr,mid+1,r,key);
        }
        else
        {
            return BinarySearch(arr,l,mid-1,key);
        }
    }
    return (-1);
}
int main()
{
    int t;
    cin>>t;
    while(t>0)
    {
    int n;
    cout<<endl<<"Enter size of array : ";
    cin>>n;
    int arr[n];
    cout<<"\nEnter sorted array : ";
    for(int i=0;i<n;i++)
        {
            cin>>arr[i];
        }
    int key;
    cout<<endl<<"Enter the element to be searched : ";
    cin>>key;
    int res=BinarySearch(arr,0,n-1,key);
    if(res!=-1)
    {
        cout<<endl<<"Number present at "<<res+1;
    }
    if(res==(-1))
        cout<<endl<<"Number not present";
    
    t--;
    }

    return 0;

}
