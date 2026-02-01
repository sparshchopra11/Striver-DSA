#include <iostream>
#include <vector>
#include <climits>
using namespace std;

class Solution {
public:
    int maxSubArray(vector<int>& nums){
        int size = nums.size();
        int highest_sum = INT_MIN;
        int current_sum = 0;
        for(int i=0 ; i<size ; i++){
            current_sum = current_sum + nums[i];
            if(current_sum > highest_sum){
                highest_sum = current_sum;
            }
            if(current_sum < 0 ){
                current_sum = 0;
            }
        }
        return highest_sum;
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
    int highest = obj.maxSubArray(nums);
    cout<<"the highest sum possible is :--->  "<<highest<<endl;
    
}

