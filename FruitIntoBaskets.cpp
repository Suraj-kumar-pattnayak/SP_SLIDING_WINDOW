#include<bits/stdc++.h>
using namespace std;
int main(){
    vector<int>fruits = {1,2,3,2,2};


    unordered_map<int, int>myMap;
        int left = 0, right = 0, max_window = 0;

        while(right < fruits.size())
        {
          // if size is full and new ele arrives
          // shrink the window
          while (myMap.size()  == 2  &&  
          myMap.find(fruits[right]) == myMap.end()){  

            myMap[fruits[left]]--;
            if(myMap[fruits[left]]  == 0){
             myMap.erase(fruits[left]);
            }
            left++;

          }

          max_window = max(max_window , right - left + 1);
          myMap[fruits[right]]++;
          right++;
        }
      cout<<max_window;
    return 0;
}


//Leetcode  => 904. Fruit Into Baskets

// Link  =>  https://leetcode.com/problems/fruit-into-baskets/submissions/1684999144/