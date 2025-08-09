#include <iostream>
#include <vector>
using namespace std;

class Solution {
  public:
    int maximumSumSubarray(vector<int>& arr, int k) {
        // code here
        //sliding window, 
        int i = 0, j = 0;
        int maxSum =0, sum = 0;
        while(j<arr.size()){
            
            sum += arr[j];
            
            if(j-i+1 <k) j++;
            
            else if(j-i+1 == k){
                maxSum = max(maxSum, sum);
                sum -= arr[i];
                i++;
                j++;
            }
            
        }
        
        return maxSum;
    }
};


int main(){

    vector<int> v = {5,2,1,3,4};
    Solution sol;
    int res = sol.maximumSumSubarray(v, 2);
    cout<<"ANS = "<<res;
}
