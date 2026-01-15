#include <iostream>
#include <vector>
using namespace std;

class Solution {
public:
    int singleNumber(vector<int>& nums) {
        int size = nums.size();
        int xor_final = 0;
        for(int i=0 ; i<size ; i++){
            xor_final = xor_final ^ nums[i];
        }
        return xor_final;
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
    int single_number = obj.singleNumber(nums);
    cout<<"the single number left is the :-----> "<<single_number<<endl;
    return 0;
}

