#include <iostream>
#include <vector>
using namespace std;

class Solution {
public:
    bool isSorted(vector<int>& nums){
        int size = nums.size();
        if(size < 1){
            return false;
        }
        if(size == 1 ){
            return true;
        }
        int temp = nums[0];
        for(int i=1 ; i<size ; i++){
            if(temp > nums[i]){
                return false;
            }
            temp = nums[i];
        }
        return true;    
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
    if(obj.isSorted(nums) == false){
        cout<<"the array is not sorted"<<endl;
    }
    else{
        cout<<"the array is sorted"<<endl;
    }

    return 0;
}

