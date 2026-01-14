#include <iostream>
#include <vector>
using namespace std;

class Solution {
public:
    int missingNumber(vector<int>& nums) {
        int size = nums.size();
        int sum2 = 0;
        for(int i=0 ; i<size ; i++){
            sum2 = sum2 + nums[i];
        }
        int sum1 = ((size+1)*(size))/2;
        if(sum1 == sum2){
            return 0;
        }
        return sum1-sum2;
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
    int missing_one = obj.missingNumber(nums);
    cout<<"the missing number in the array is :----> "<<missing_one<<endl;
    
    return 0;
}

