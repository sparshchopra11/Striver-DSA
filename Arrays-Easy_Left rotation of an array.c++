#include <iostream>
#include <vector>
using namespace std;

class Solution {
public:
    void rotate(vector<int>& nums, int k) {
        int size = nums.size();
        k = k % size;
        reverse(nums,size-k , size-1);
        reverse(nums,0 ,size-k-1);
        reverse(nums,0,size-1);
    }
    void reverse(vector<int>& nums ,int low , int high){
       while(low < high){
        swap(nums[low] , nums[high]);
        low++;
        high--;
       }
    }
    void swap(int &x , int &y){
        int temp = x;
        x = y;
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
    int k = 0;
    cout<<"how many positions to right you want to rotate the array :---->";
    cin>>k;
    obj.rotate(nums,k);
    cout<<"the rotated array is :----->   ";
    int size = nums.size();
    for(int i = 0 ; i<size ; i++){
        cout<<nums[i]<<" ";
    }
    return 0;
}

