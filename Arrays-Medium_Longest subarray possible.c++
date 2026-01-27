#include <iostream>
#include <vector>
using namespace std;

class Solution {
public:
    int longest_subarray(vector<int>& nums , int k){
        int size = nums.size();
        int current_sum = 0 , counter = 0 ,last_longest = 0 ;
        for(int i=0 ; i<size ; i++){
            current_sum = current_sum + nums[i];
            counter++;
            if(current_sum > k){
                while(current_sum > k){
                    current_sum = current_sum - nums[i-counter+1];
                    counter--;
                }
            }
            if(current_sum == k){
                if(last_longest < counter){
                    last_longest = counter;
                }
            }
        }
        return last_longest;
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
    cout<<"please enter the sum for which you have to find the longest subarray :-----> ";
    int k = 0;
    cin>>k;
    Solution obj;
    int longest_subarray = obj.longest_subarray(nums,k);
    cout<<"the longest subarray possible is :---> "<<longest_subarray<<endl;
    
}

