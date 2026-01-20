#include <iostream>
#include <vector>
using namespace std;

class Solution {
public:
    int majorityElement(vector<int>& nums) {
        int size = nums.size();
        int temp = 0 , counter = 0;
        int stop = size / 2;
        for(int i=0 ; i<size ; i++){
            if(temp == nums[i]){
                continue;
            }
            else{
                temp = nums[i];
                counter = 0;
                for(int j=1 ; j<size ; j++){
                    if(nums[j] == temp){
                        counter++;
                        if(counter == stop){
                            return nums[j];
                        }
                    }
                }
            }
        }
        return 0;
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
    int majority_one = obj.majorityElement(nums);
    cout<<"The majority element present in that is :---> "<<majority_one<<endl;
    
    return 0;
}

