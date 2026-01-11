#include <iostream>
using namespace std;
void quick_sort(int arr[] ,int low, int high);
int partition(int arr[] , int low , int high);
void swap(int &x , int &y);
int main(){
    cout<<"please tell the numbers you want to sort through the quick sort :----->";
    int num = 0;
    cin>>num;
    int arr[100];
    for(int i=0 ; i<num ; i++){
        cout<<"please enter the "<<i+1<<" position number :--->";
        cin>>arr[i];
    }
    quick_sort(arr , 0 , num-1);
    cout<<"printing the sorted list of the numbers :------>"<<endl;
    for(int s=0 ; s<num ;s++){
        cout<<arr[s]<<" ";
    }
}
void quick_sort(int arr[] ,int low, int high){
    int pivot = 0;
    if(low < high){
        pivot = partition(arr ,low , high);
        quick_sort(arr , low , pivot-1 );
        quick_sort(arr , pivot+1 , high);
    }
}
int partition(int arr[] , int low , int high){
    int start = low;
    int end = high;
    int pivot = arr[low];
    while(start < end){
        while(arr[start]<= pivot && start<high){
            start++;
        }
        while(arr[end] > pivot && end>low){
            end--;
        }
        if(start < end){
            swap(arr[start], arr[end]);
        }
    }
    swap(arr[end] , arr[low]);
    return end;
}
void swap(int &x , int &y){
    int temp = x;
    x = y ;
    y = temp;
}