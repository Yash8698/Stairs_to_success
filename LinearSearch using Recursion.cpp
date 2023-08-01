#include <bits/stdc++.h>
using namespace std;

void print(int arr[], int n){
    cout<<"The size of array is "<< n<<endl;

    for(int i=0; i<n; i++){
        cout<<arr[i]<<" ";
    }cout<<endl;
}

bool linearSearch(int arr[], int size, int k){
    //Base Case

    print(arr, size);
    if(size==0)
    return false;

    //Recursive function
    if(arr[0]==k){
        return true;
    }
    else{
        bool ans=linearSearch(arr+1, size-1, k);
        return ans;
    }
}
int main() {
    // Write C++ code here
    //std::cout << "Hello world!";
    int arr[10]={5,10,12,14,16,18,19,21,23,25};
    int k=27;
    int size=10;

    bool ans = linearSearch(arr, size, k);

    if(ans){
        cout<<"Present"<<endl;
    }
    else{
        cout<<"Absent"<<endl;
    }

    return 0;
}
