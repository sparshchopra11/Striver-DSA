#include <iostream>
#include <vector>
#include <climits>
using namespace std;

class Solution {
public:
    int SecondlargestElement(vector<int>& nums) {
        int size = nums.size();
        if(size < 2){
            return -1;
        }
        int largest = nums[0];
        int second_largest = INT_MIN;
        for(int i=1 ; i<size ; i++){
            if(nums[i]>largest){
                second_largest = largest;
                largest = nums[i];
            }
            else if(second_largest < nums[i] && nums[i] < largest){
                second_largest = nums[i];
            }
        }
        if(second_largest == INT_MIN){
            return -1;
        }
        return second_largest;
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
    int result = obj.SecondlargestElement(nums);
    if(result == -1){
        cout<<"no second largest element exist in the array"<<endl;
    }
    else{
    cout << "The second largest element is : " << result << endl;
    }

    return 0;
}

