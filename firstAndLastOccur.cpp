#include<iostream>
using namespace std;
int leftOccur(int arr[],int size,int key){
    int ans =-1;
    int s =0,e=size-1;
    int mid =  s+(e-s)/2;
    while(s<=e){
        if(key==arr[mid]){
            ans = mid;
            e=mid-1;
        }
        else if(key<arr[mid]){
            e=mid-1;
        }
        else if(key>arr[mid]){
            s=mid+1;
        }
        mid = s+(e-s)/2;
    }
    return ans;
  
}
int rightOccur(int arr[],int size,int key){
    int ans =-1;
    int s =0,e=size-1;
    int mid =  s+(e-s)/2;
    while(s<=e){
        if(key==arr[mid]){
            ans = mid;
            s=mid+1;
        }
        else if(key>arr[mid]){
            s=mid+1;
        }
        else if(key<arr[mid]){
            e=mid-1;
        }
        mid = s+(e-s)/2;
    }
    return ans;
  
}
int main(){
    int even[10]={1,2,3,4,5,5,5,5,5,9};
    cout<< " The left most occurrence of 5 is at index "<<leftOccur(even,10,5)<<endl;
    cout<< " The right most occurrence of 5 is at index "<<rightOccur(even,10,5);

}