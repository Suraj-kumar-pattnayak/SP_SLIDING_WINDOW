class Solution {
public:
    bool checkInclusion(string s1, string s2) {
        if(s1.size() > s2.size()) return false;
        //sliding W  // TC -> O(n) SC -> O(1)
        vector<int>s1_counts(26,0);
        vector<int>s2_counts(26,0);
        //initial window

        for(int i=0; i<s1.size(); i++){

            s1_counts[s1[i] - 'a']++;
            s2_counts[s2[i] - 'a']++;
        }
        if(s1_counts == s2_counts) return true;
        //window shift
        for(int i= s1.size(); i<s2.size(); i++){
          s2_counts[s2[i] - 'a']++;     //adding rightmost char to sliding w
          s2_counts[s2[i-s1.size()] - 'a']--;  // remoiving leftmost of sliding w
          if( s1_counts == s2_counts) return true;
        }

        return false;
    }
};