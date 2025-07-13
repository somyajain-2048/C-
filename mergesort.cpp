#include<iostream>
#include<vector>
using namespace std ;

void merge(int arr , int l ,int mid ,int r) {
    int an = mid - l +1 ;
    int bn = r - mid ;
    //  create 2 temp arrays
    int a[an] , int b[bn] ;
    for(int i = 0 ; i< an ;i++) {
        a[i] = arr[l+1] ;
    }
    for(int j = 0 ; j< bn ;j++){
        b[j] = arr[mid + 1 + j ] ;
    }
    int i = 0 , j = 0 ;
    int k = l ;
    while(i < an  && j <bn) {
        if(a[i] < b[j]) {
            arr[k++] = a[i++] ;
        }
        else{
            arr[k++] = b[j++] ;
        }
    }
    while( i < an) {
        arr[k++] = a[i++] ;
    }
    while(j < bn) {
        arr[k++] = b[j++] ;
    }
}
void mergesort(int arr[] , int l , int r) {
    if(b >= r) {
        return ;
    }
    int mid = (l + r) / 2 ;
    mergesort(arr , l ,mid) ;
    mergesort(arr , mid+1 , r) ;
    merge(arr , l ,mid , r);
}
int main() {
    int arr[] = {4,7,9,1,2,8,4} ;
    int n = size of arr / size of (arr[0]);

    mergesort(arr , 0 , n-1) ;
    for(int i = 0 ;i< n ;i++) {
        cout << arr[i]<<" " << endl ;
    }
    return 0;
}