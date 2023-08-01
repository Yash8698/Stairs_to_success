#include <bits/stdc++.h>
using namespace std;

void print(int arr[], int n){
    cout<<"Size of array is "<<n<<endl;

    for(int i=0; i<n; i++){
        cout<<arr[i]<<" ";
    }cout<<endl;
}

int getSum(int *arr, int size ){

    // print(arr,size);
    //Base Case
    if(size==0){
        return 0;
    }

    if(size==1){
        return arr[0];
    }

    int  remain = getSum(arr+1, size-1);
    int  sum = arr[0] + remain;
    print(arr,size);
    cout<<"Sum is "<<sum<<endl;
    cout<<endl;
    return sum;
}

int main(){

    int arr[5]={1,5,7,8,9};
    int size=5;

    int ans= getSum(arr, size);
    cout<<"Sum of array element is "<<ans<<endl;
}
