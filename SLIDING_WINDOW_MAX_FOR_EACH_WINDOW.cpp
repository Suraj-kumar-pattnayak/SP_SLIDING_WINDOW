class Solution {
public:
    vector<int> maxSlidingWindow(vector<int>& nums, int k) {

      //TLE FOR BIG OUTPUT, logic ok
        // BF WITH TWO POINTER, SLIDING WINDOW
        // TC -> O(n*k);
      if (nums.size() == 1) return vector<int>{nums[0]};

      vector<int>ans;
        for(int lp =0;lp<nums.size()-k+1; lp++)
        {  int Element = nums[lp];
            for(int rp = lp+1; rp<lp+k; rp++) {Element = max(Element, nums[rp]); }

            ans.push_back(Element);
        }
        return ans;
    }
};


      // can go with SLIDING + DEQUE