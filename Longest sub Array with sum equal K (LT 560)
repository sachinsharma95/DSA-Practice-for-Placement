qyestion link leetcode 560 :::

https://practice.geeksforgeeks.org/problems/longest-sub-array-with-sum-k0809/1?utm_source=youtube&utm_medium=collab_striver_ytdescription&utm_campaign=longest-sub-array-with-sum-k

/// code 
class Solution{
    public:
    int lenOfLongSubarr(int A[],  int N, int K) 
    { 
        int sum = 0;
        int length = 0 ;
        unordered_map<int ,int>mp;
         mp.insert({0, -1});
        for(int i = 0; i<N;i++){
            sum = sum+A[i];
            
           
        if(mp.find(sum-K)!= mp.end()){
                length = max(length,i-mp[sum-K]);
                
            }
           mp.insert({sum, i});
            }
            
        
        return length;
    }
    
    };
