#include <iostream>
#include <vector>
using namespace std;

class Solution {
public:
        /* this was the my approach of thinking */
    // void sortColors(vector<int>& nums) {
    //     int size = nums.size();
    //     int counter_red = 0;
    //     int counter_white = 0;
    //     int counter_blue = 0;
    //     for(int i=0 ; i<size ; i++){
    //         if(nums[i] == 0){
    //             counter_red++;
    //         }
    //         else if(nums[i] == 1){
    //             counter_white++;
    //         }
    //         else{
    //             counter_blue++;
    //         }
    //     }
    //     int temp = 0;
    //     while(counter_red != 0 ){
    //         nums[temp] = 0;
    //         temp++;
    //         counter_red--;
    //     }
    //     while(counter_white != 0 ){
    //         nums[temp] = 1;
    //         temp++;
    //         counter_white--;
    //     }    
    //     while(counter_blue != 0 ){
    //         nums[temp] = 2;
    //         temp++;
    //         counter_blue--;
    //     }        
    // }

    void sortColors(vector<int>& nums) {
        int size = nums.size();
        int low = 0;
        int med = 0;
        int high = size-1;
        while(med <= high){
            if(nums[med] == 0){
                swap(nums[low] , nums[med]);
                med++;
                low++;
            }
            else if(nums[med] == 1){
                med++;
            }
            else {
                swap(nums[high] , nums[med]);
                high--;
            }
        }
    }
    void swap(int &x , int &y){
        int temp = x;
        x = y ;
        y = temp;
    }
};

int main() {
    int n;
    cout << "Enter number of elements:-----> ";
    cin >> n;
    vector<int> nums(n);
    cout << "Enter elements:----->\n";
    for(int i = 0; i < n; i++) {
        cout<<"please enter the "<<i+1<<" element:----->";
        cin >> nums[i];
    }
    Solution obj;
    obj.sortColors(nums);
    cout<<"the sorted array is :----->   ";
    int size = nums.size();
    for(int i = 0 ; i<size ; i++){
        cout<<nums[i]<<" ";
    }
    return 0;
}

