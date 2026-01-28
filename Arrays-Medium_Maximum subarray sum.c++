#include <iostream>
#include <vector>
using namespace std;

class Solution {
public:
    int maxSubArray(vector<int>& nums) {
        int size = nums.size();
        int previous = nums[0];
        int current = 0;
        for(int i=0 ; i<size ;i++){
            current = 0;
            current = nums[i];
            if(current > previous){
                previous = current;
            }
            for(int j=i+1 ; j<size ;j++){
                current = current + nums[j];
                if(current > previous){
                    previous = current;
                }
            }
        }  
        return previous; 
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
    int sum = obj.maxSubArray(nums);
    cout<<"the maximum sum possible is :---->  "<<sum<<endl;
    
}

