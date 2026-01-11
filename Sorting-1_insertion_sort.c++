#include <iostream>
using namespace std;
int main(){
    cout<<"please tell the numbers you want to sort through the insertion sort :----->";
    int num = 0;
    cin>>num;
    int arr[100];
    for(int i=0 ; i<num ; i++){
        cout<<"please enter the "<<i+1<<" position number :--->";
        cin>>arr[i];
    }
    int flag=0 , j=0;


    for(int i=0 ; i<num-1 ;i++){
        int temp = arr[i+1];
        bool swapping = false;
        for( j=i ; j>-1 ;j--){
            if(arr[j]>temp){
                arr[j+1]=arr[j];
                flag++;
                swapping = true;
            }
            else{
                break;
            }
        }
        if(swapping == true){
            arr[j+1] = temp;
        }
    }


    cout<<"printing the sorted list of the numbers :------>"<<endl;
    for(int s=0 ; s<num ;s++){
        cout<<arr[s]<<" ";
    }
    cout<<"the total number of swaping done is "<<flag<<endl;
}