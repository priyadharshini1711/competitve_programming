/*
Given an n array indicating the planted trees 1- planted and 0- Not planted  and the k number of tress to plant more print whether the given array of rows can be used to plant the k sampling such that no two sampling or trees can be adjacent to each other.
Input:
5 1
10001
Output 
Yes
Input 
5 2 
10001
Output:
NO
*/

#include <iostream>

using namespace std;

int main()
{
    int n;
    cin>>n;
    int k;
    cin>>k;
    int arr[n], plant[k];
    int i,j;
    for(i=0;i<n;i++){
        cin>>arr[i];
        if(i<k){
           plant[i] = 1; 
        }
    }
    j = 0;
    for(i=0;i<n-1;i++){
        if(i==0 )
        {
            if( arr[i] == 0 && arr[i+1] != 1){
           arr[i] = 1;
        plant[j] = 0;
        j++; 
        }} else {
        if(arr[i] == 0 && arr[i-1] != 1 && arr[i+1]!= 1){
            arr[i] = 1;
            plant[j] = 0;
            j++;
        }
        }
    }
    for(i=0;i<k;i++){
        if(plant[i] == 1){
            cout<<"No";
            return 0;
        }
    }
    cout<<"Yes";
    return 0;
}
