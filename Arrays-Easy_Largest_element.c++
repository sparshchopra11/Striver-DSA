#include <iostream>
#include <vector>
using namespace std;

class Solution {
public:
    int largestElement(vector<int>& nums) {
        int largest = nums[0];
        int size = nums.size();
        for(int i=1 ; i<size ; i++){
            if(nums[i]>largest){
                largest = nums[i];
            }
        }
        return largest;   
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
    int result = obj.largestElement(nums);

    cout << "Result: " << result << endl;

    return 0;
}

