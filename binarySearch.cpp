#include<iostream>
using namespace std;
int binarySearch(int arr[],int size, int key){
int s=0, e=size-1;
int mid = (s+e)/2;
while(s<=e){
    if(arr[mid]==key){
        return mid;
    }
    else if(key>arr[mid]){
        s=mid+1;

    }
    else{
        e=mid-1;
    }
    mid = (s+e)/2;
    
}
return -1;
}
int main(){
    int evenArray[7]={2,4,6,8,16,18,20};
    int oddArray[7]={1,3,5,7,9,13,19};
    int evenIndex =  binarySearch(evenArray,7,20);
    int oddIndex =  binarySearch(oddArray,7,13);
    cout<<" The index of 8 is: "<<evenIndex<<endl;
    cout<<" The index of 3 is: "<<oddIndex<<endl;

}
