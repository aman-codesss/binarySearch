#include<iostream>
using namespace std;
int peak(int arr[],int size){
    int s=0, e=size-1;
    int mid = s+(e-s)/2;
    while(s<e){
        if(arr[mid]<arr[mid+1]){
            s=mid+1;
        }
        else{
            e=mid;
        }
        mid =s+(e-s)/2;
    }
    return s;
}
int main(){
    int arr[7]={1,2,5,7,4,3,0};
    cout<<" The peak is at index: "<<peak(arr,7)<<endl;

}