#include<iostream>
#include<vector>
using namespace std;

bool isPossible(vector<int> arr, int n, int m, int mid) {
    int painterCount = 1;
    int boardSum = 0;
    //cout << "checking for mid "<< mid <<endl;
    
    for(int i = 0; i<n; i++) {
        if(boardSum + arr[i] <= mid) {
            boardSum += arr[i];
        }
        else
        {
            painterCount++;
            if(painterCount > m || arr[i] > mid ) {
            return false;
        }
            boardSum = arr[i];
        }
        if(painterCount > m) {
            return false;
        }
        //cout << " for i " << i << " Student "<< studentCount << " boardSum " << boardSum << endl;
    }
    return true;
}

int allocateBoards(vector<int> arr, int n, int m) {
    int s = 0;
    int sum = 0;
    
    for(int i = 0; i<n; i++) {
        sum += arr[i];
    }
    int e = sum;
    int ans = -1;
    int mid = s + (e-s)/2;
    
    while(s<=e)
    {
        if(isPossible(arr,n,m,mid)) {
            //cout<<" Mid returned TRUE" << endl;
            ans = mid;
            e = mid - 1;
        }
        else
        {
            s = mid + 1;
        }
        mid = s + (e-s)/2;
    }
    return ans;
}
int main(){
    vector<int> a={5,5,5,5};
    cout<<"Min time to paint the continuous board by painters is: "<<allocateBoards(a,4,2)<<endl;

}