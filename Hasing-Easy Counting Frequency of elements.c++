#include <iostream>
#include <vector>
#include <climits>
#include <unordered_map>
using namespace std;

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
    

    // pre compute
    unordered_map<int , int> map;
    for(int i=0 ; i<n ;i++){
        map[nums[i]]++;
    }

    //final output 
    cout<<"please enter the number you want to find out the frequency :---->  ";
    int input;
    cin>>input;
    cout<<"the frequency of "<<input<<" is :---->  "<<map[input];

    return 0;
}

