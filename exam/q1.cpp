#include<iostream>
#include<vector>
using namespace std;

int Maximum(vector<int> &a, int s, int e){

    while(s <= e){
        int mid = s + (e - s)/2;
        if(a[mid] > a[mid - 1] && a[mid] > a[mid +1])
             return a[mid];
            else if (a[mid] < a[mid + 1])
        return Maximum(a, mid + 1, e);

    else
        return Maximum(a, s, mid - 1);

    }
    
}

int main(){
    int n;
    cout<<"Enter number of elements in array : ";
    cin>>n;
    cout<<"Enter elements of array : ";
    vector<int> a(n);
    for(int i=0; i<n; i++){
        cin>>a[i];
    }
    int x = Maximum(a,0,(n-1));
    cout<<"maximum element in array is : "<<x;

    return 0;
}