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
    int flag=0 ;
    for(int i=0 ; i<num-1 ; i++){
        int min = i;
        for(int j=i+1 ; j<num ;j++){
            if(arr[min]>arr[j]){
                min = j;
            }
        }
        if(i != min){
            swap(arr[i],arr[min]);
            flag++;
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