#include <iostream>
#include <vector>
using namespace std;

class Solution {
public:
    int findMaxConsecutiveOnes(vector<int>& nums) {
        int size = nums.size();
        int counter = 0 , highest = 0;
        for(int i=0 ; i<size ; i++){
            if(nums[i] != 0){
                counter++;
                if(highest < counter){
                    highest = counter;
                }
            }
            else{
                counter = 0;
            }
        }
        return highest;
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
    int max = obj.findMaxConsecutiveOnes(nums);
    cout<<"the max number of consecutive ones in the array is :----> "<<max<<endl;
    
    return 0;
}

