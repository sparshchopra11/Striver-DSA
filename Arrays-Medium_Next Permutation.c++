#include <iostream>
#include <vector>
using namespace std;

class Solution
{
public:
    void nextPermutation(vector<int> &nums){
        int size = nums.size();
        int temp = size-2;
        if(size < 2){
            return;
        }
        while(nums[temp + 1] <= nums[temp]){
            temp--;
            if(temp < 0 ){
                break;
            }
        }
        if(temp < 0){
            int start = 0;
            int end = size-1;
            while(start < end){
                swap(nums[start] , nums[end]);
                start++;
                end--;
            }
            return;
        }
        int to_swap = temp;
        temp = size-1;
        while(temp > to_swap && nums[temp] <= nums[to_swap]){
            temp--;
            
        }
        swap(nums[to_swap] , nums[temp]);
        int start = to_swap + 1;
        int end = size-1;
        while(start < end){
            swap(nums[start] , nums[end]);
            start++;
            end--;
        }
    }    
    void swap(int &x , int &y){
        int temp = x;
        x = y;
        y = temp;
    }
};

int main()
{
    int n;
    cout << "Enter number of elements:-----> ";
    cin >> n;
    vector<int> nums(n);
    cout << "Enter elements:----->\n";
    for (int i = 0; i < n; i++)
    {
        cout << "please enter the " << i + 1 << " element:----->";
        cin >> nums[i];
    }
    Solution obj;
    obj.nextPermutation(nums);
    int size = nums.size();
    for(int i=0 ; i<size ; i++){
        cout<<nums[i]<<" ";
    }
}
