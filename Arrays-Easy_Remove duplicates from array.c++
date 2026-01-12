#include <iostream>
#include <vector>
using namespace std;

class Solution {
public:
    int removeDuplicates(vector<int>& nums) {
        int write = 0;
        int size = nums.size();
        if(size < 1){
            return -1;
        }
        for(int i = 1 ; i<size ; i++){
            if(nums[i] == nums[write]){
                continue;
            }
            else{
                nums[write+1] = nums[i];
                write++;
            }
        }
        return write+1;
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
    int result = obj.removeDuplicates(nums);
    if(result == -1){
        cout<<"the array input is invalid"<<endl;
    }
    else{
        cout<<"the number of unique elements in the array after removal are:------> "<<result<<endl;
    }
    return 0;
}

