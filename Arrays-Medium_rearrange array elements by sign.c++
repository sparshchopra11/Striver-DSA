#include <iostream>
#include <vector>
#include<climits>
using namespace std;

class Solution {
public:
    // vector<int> rearrangeArray(vector<int>& nums) {
    //     int size = nums.size();
    //     vector<int> negatives(size/2);
    //     vector<int> positives(size/2);
    //     int counterneg = 0 , counterpos = 0;
    //     for(int i = 0 ; i<size ; i++){
    //         if(nums[i] < 0){
    //             negatives[counterneg] = nums[i];
    //             counterneg++;
    //         }
    //         else{
    //             positives[counterpos] = nums[i];
    //             counterpos++;
    //         }
    //     }
    //     counterneg =  counterpos = 0 ;
    //     for(int i = 0; i<size ; i++){
    //         if(i % 2 == 0){
    //             nums[i] = positives[counterpos];
    //             counterpos++;
    //         }
    //         else{
    //             nums[i] = negatives[counterneg];
    //             counterneg++;
    //         }
    //     }
    //     return nums;
    // }

    // optimal approach is instead of doing this all you can directly put the element when found into the newer array
    vector<int> rearrangeArray(vector<int>& nums){
        int size = nums.size();
        vector<int> ans(size);
        int counter1 = 0 , counter2 = 1;
        for(int i = 0 ;i<size ; i++){
            if(nums[i] < 0){
                ans[counter2] = nums[i];
                counter2 += 2;
            }
            else{
                ans[counter1] = nums[i];
                counter1 += 2;
            }
        }
        return ans;
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
    vector<int> ans = obj.rearrangeArray(nums);

    cout << "\nRearranged array:\n";
    for(int i = 0; i < n; i++) {
        cout << ans[i] << " ";
    }

    return 0;    
}

