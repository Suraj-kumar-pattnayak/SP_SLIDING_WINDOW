#include<bits/stdc++.h>
using namespace std;
int main(){
    vector<int>nums = {0,0,1,1,0,0,1,1,1,0,1,1,0,0,0,1,1,1,1};
    int k = 3;
// Output: 10
    int left =0, right = 0, cur_window = 0, max_window =0;

        while(right < nums.size())  // we dont have to incre everytime
        {
          if(nums[right] == 1){
            right++;
            cur_window = right - left;
            max_window = max(max_window , cur_window);
          }
          else if(nums[right] == 0 && k > 0){
            k--;
            right++;
            cur_window = right - left;
            max_window = max(max_window , cur_window);
          }

          else if(nums[right] == 0 && k == 0){

              //check if left is 0 or not
              if(nums[left] == 0){
                left++;
                right++;
                cur_window = right - left;
                max_window = max(max_window , cur_window);
              }
              else if(nums[left] == 1){
                while(nums[left] == 1){
                  left++;
                }
                left++;
                right++;
                cur_window = right - left;
                max_window = max(max_window , cur_window);
              }
          }
        }
        cout<<max_window;
    return 0;
}



//Leetcode  => 1004. Max Consecutive Ones III

// Link  =>  https://leetcode.com/problems/max-consecutive-ones-iii/submissions/1684931567/







    //   int left = 0, right = 0, NoOfZero = 0, max_window = 0;

    //   while(right < nums.size())
    //   {
    //     if(nums[right] == 0){
    //       NoOfZero++;
    //     }

    //     // Shrink window , jabtak zeros > k, for 0 nad 1 both
    //     while(NoOfZero > k){
    //         if(nums[left] == 0) NoOfZero--;
    //         left++;
    //     }

    //     max_window = max(max_window, right - left + 1);
    //     right++;
    //   }

    //   return max_window;