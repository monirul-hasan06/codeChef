#include <bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        int n,i,j;
        cin>>n;
        int arr[n];
        for(i=0; i< n; i++)
        {
            cin>> arr[i];
        }
        int arr1[n];
        for(i= 0; i<n; i++)
        {
            arr1[i] = arr[i];
        }
        for(i=0; i<n; i++)
        {
            for(j=i+1; j<n; j++)
            if(arr[i]>arr[j])
            {
                int t;
                t = arr1[i];
                arr1[i] = arr1[j];
                arr1[j] = t;
            }
        }
            int count = 0;
            for(i=0; i<n; i++){
                if(arr[i] == arr1[i])
            {
                count++;
            }
            }
            if(count == n)
            {
                cout<<"Yes";
            }else
            {
                cout<<"No";
            }
    }
}