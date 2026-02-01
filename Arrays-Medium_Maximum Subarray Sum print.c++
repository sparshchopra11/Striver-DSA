#include <iostream>
#include <vector>
#include <climits>
using namespace std;

class Solution {
public:
    vector<int> maxSubArray(vector<int>& nums){
        int size = nums.size();
        int highest_sum = INT_MIN;
        int start = 0 , end = 0;
        int current_sum = 0;
        for(int i=0 ; i<size ; i++){
            current_sum = current_sum + nums[i];
            end = i;
            if(current_sum > highest_sum){
                highest_sum = current_sum;
            }
            if(current_sum < 0 ){
                current_sum = 0;
                end = i + 1;
                start = i + 1;
            }
        }
        vector<int> final;
        int temp = end - start + 1;
        for(int i = 0 ; i < temp ; i++){
            final.push_back(nums[start]);
            start++;
        }
        return final;
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
    vector<int> final = obj.maxSubArray(nums);
    int size = final.size();
    for(int i =0 ; i< size ; i++){
        cout<<final[i]<<"  ";
    }
    
}

