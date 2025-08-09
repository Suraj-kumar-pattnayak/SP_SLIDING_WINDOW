#include <vector>
#include<iostream>
using namespace std;
class Solution {
public:
    double findMaxAverage(vector<int>& nums, int k) {

        int n= nums.size();
        double maxSum = INT_MIN, Sum = 0;
        int i =0, j =0;
        while(j < n){
            Sum += nums[j];

            if(j-i+1 < k) j++;

            else if(j-i+1 == k){
              maxSum = max(maxSum , Sum);

              Sum -= nums[i]; //remove previous,for adding new,in case of max window
              j++;
              i++;
            }
        }
        return maxSum / k;
    }
};

int main(){
    vector<int>v = {1,12,-5,-6,50,3};
    Solution test;
   double ans = test.findMaxAverage(v, 4);
    cout<<"ANS = "<<ans;
}