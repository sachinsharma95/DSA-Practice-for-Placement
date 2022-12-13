Question link : https://leetcode.com/problems/single-number/description/  
question number Leetcode 136 
  
  // solution 
  
  
  class Solution {
public:
    int singleNumber(vector<int>& arr) {
     unordered_map<int, int> mp;
     int N = arr.size();
 
    // Find the frequency and store
    // in the map
    for (int i = 0; i < N; i++) {
        mp[arr[i]]++;
    }
 
    // Initialize minFreq to the maximum
    // value and minValue to the minimum
    int minFreq = INT_MAX;
    int maxValue = INT_MIN;
 
    // Traverse the map mp
    for (auto x : mp) {
 
        int num = x.first;
        int freq = x.second;
 
        // If freq < minFreq, then update
        // minFreq to freq and maxValue
        // to the current element
        if (freq < minFreq) {
            minFreq = freq;
            maxValue = num;
        }
 
        // If freq is equal to the minFreq
        // and current element > maxValue
        // then update maxValue to the
        // current element
        else if (freq == minFreq
                 && maxValue < num) {
            maxValue = num;
        }
    }
 
    // Return the resultant maximum value
    return maxValue;

    }
      
};  
