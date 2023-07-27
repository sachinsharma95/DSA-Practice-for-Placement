# Q https://leetcode.com/problems/peak-index-in-a-mountain-array/submissions/


class Solution:
    def peakIndexInMountainArray(self, arr: List[int]) -> int:
#  linear approach 

        n = len(arr)
        mx = arr[0]
        index = 0
        for i in range(0,n):
            if(mx<arr[i]):
                mx = arr[i]
                index = i
        return index



# binary Search Approcah :
# class Solution {
# public:
#     int peakIndexInMountainArray(vector<int>& arr) {
#          int s= 0;
#         int e =arr.size()-1;
#         int mid  = s+(e-s)/2;
#         while(s<e)
#         {
#             if(arr[mid+1]>=arr[mid]){
#                 s=mid+1;
                
#             }
#             else{
#                 e=mid;
#             }
#             mid =s+(e-s)/2;
            
#         }
#         return s;
#     }
# };
        
