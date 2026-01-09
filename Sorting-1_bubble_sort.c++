#include <iostream>
using namespace std;
void swap(int &x , int &y);
int main(){
    cout<<"please tell the numbers you want to sort through the bubble sort :----->";
    int num = 0;
    cin>>num;
    int arr[100];
    for(int i=0 ; i<num ; i++){
        cout<<"please enter the "<<i+1<<" position number :--->";
        cin>>arr[i];
    }
    int flag=0 , temp=0;
    for(int i=0 ; i<num-1 ; i++){
        bool swapped = false;
        for(int j=0 ; j<num-i-1 ; j++){
            if(arr[j]>arr[j+1]){
                swap(arr[j],arr[j+1]);
                flag++;
                swapped = true;
            }
        }
        if(swapped == false){
            break;
        }
    }
    cout<<"printing the sorted list of the numbers :------>"<<endl;
    for(int s=0 ; s<num ;s++){
        cout<<arr[s]<<" ";
    }
    cout<<"the total number of swaping done is "<<flag<<endl;
}
void swap(int &x , int &y){
    int temp = x;
    x = y;
    y = temp;
};