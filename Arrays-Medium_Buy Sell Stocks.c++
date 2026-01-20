#include <iostream>
#include <vector>
using namespace std;

class Solution {
public:
    //    this is my approach i just did track the indexing of buy and sell which are not required at all only profit must be tracked 
    // int maxProfit(vector<int>& prices) {
    //     int size = prices.size();
    //     int buy = 0;
    //     int sell = 0;
    //     int old_profit = 0;
    //     for(int i = 0 ; i<size ; i++){
    //         if(prices[i] > prices[sell]){
    //             sell = i;
    //             if((prices[sell] - prices[buy]) > old_profit){
    //                 old_profit = (prices[sell] - prices[buy]);
    //             }
    //         }
    //         else if(prices[i] < prices[buy]){
    //             buy = sell = i;

    //         }
    //         else{
    //             continue;
    //         }
    //     }
    //     return old_profit;
    // }
    int maxProfit(vector<int>& prices){
        int size = prices.size();
        int max_profit = 0;
        int min_prize = 0;
        for(int i=1 ; i<size ; i++){
            if(prices[i] < prices[min_prize]){
                min_prize = i;
            }
            if((prices[i] - prices[min_prize]) > max_profit){
                max_profit = (prices[i] - prices[min_prize]);
            }
        }
        return max_profit;
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
    int max_profit = obj.maxProfit(nums);
    cout<<"the max profit made is :----> "<<max_profit<<endl;
    return 0;
}

