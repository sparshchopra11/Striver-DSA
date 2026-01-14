#include <iostream>
#include <vector>
using namespace std;

class Solution {
public:
    void moveZeroes(vector<int>& nums) {
        int size = nums.size();
        int ptr1 = 0 , i = 0;
        while(ptr1 < size){
            if(nums[ptr1] == 0){
                ptr1++;
                continue;
            }
            else{
                nums[i] = nums[ptr1];
            }
            i++;
            ptr1++;
        }
        while(i < size ){
            nums[i] = 0;
            i++;
        }
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
    obj.moveZeroes(nums);
    cout<<"printing the array :-----> ";
    int size = nums.size();
    for(int i=0 ; i<size ; i++){
        cout<<nums[i]<<" ";
    }
    return 0;
}

