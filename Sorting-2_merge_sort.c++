#include <iostream>
using namespace std;
void merge_sort(int arr[] , int low , int high );
void merge(int arr[] , int low , int high , int mid);
int main(){
    cout<<"please tell the numbers you want to sort through the quick sort :----->";
    int num = 0;
    cin>>num;
    int arr[100];
    for(int i=0 ; i<num ; i++){
        cout<<"please enter the "<<i+1<<" position number :--->";
        cin>>arr[i];
    }
    merge_sort(arr , 0 , num-1);
    cout<<"printing the sorted list of the numbers :------>"<<endl;
    for(int s=0 ; s<num ;s++){
        cout<<arr[s]<<" ";
    }
}
void merge_sort(int arr[] , int low , int high ){
    if(low < high){
        int mid = (low + high) / 2;
        merge_sort(arr , low , mid );
        merge_sort(arr , mid+1 , high);
        merge(arr , low , high , mid);
    }
}
void merge( int arr[] , int low , int high , int mid ){
    int ptr1 = low;
    int i = 0;
    int ptr2 = mid+1;
    int arr_temp[100];
    while(ptr1 < mid+1 && ptr2 < high +1){
        if(arr[ptr1] <= arr[ptr2] ){
            arr_temp[i] = arr[ptr1];
            ptr1++;
        }
        else{
            arr_temp[i] = arr[ptr2];
            ptr2++;
        }
        i++;
    }
    if(ptr1 > mid){
        while(ptr2 < high + 1){
            arr_temp[i] = arr[ptr2];
            i++;
            ptr2++;
        }
    }
    if(ptr2 > high){
        while(ptr1 < mid +1 ){
            arr_temp[i] = arr[ptr1];
            i++;
            ptr1++;
        }
    }
    int temp = 0;
    while(low <= high && temp <i ){
        arr[low] = arr_temp[temp];
        low++;
        temp++;
    }
}