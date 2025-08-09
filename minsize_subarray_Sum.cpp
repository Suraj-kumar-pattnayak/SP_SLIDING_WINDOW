#include<iostream>
#include<vector>
using namespace std;
class Solution {
public:
    int minSubArrayLen(int target, vector<int>& nums) {
        
        //two pointer
        int min_window = INT_MAX;
        int sum =0, lp =0;
        for(int rp=0; rp<nums.size(); rp++){   // TC -> O(N)

            sum += nums[rp];
            while( sum >= target){
                min_window = min(min_window , rp-lp+1);
                sum -= nums[lp];
                lp++;
            }
        }
        return min_window != INT_MAX ? min_window : 0;
    }
};


int main(){
    vector<int>nums = {2,3,1,2,4,3};
    Solution S1;
    cout<< S1.minSubArrayLen(7, nums);
    return 0;
}