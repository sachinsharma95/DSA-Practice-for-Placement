question Link: https://practice.geeksforgeeks.org/problems/element-appearing-once2552/0?company[]=Qualcomm&company[]=Qualcomm&difficulty[]=1&page=1&query=company[]Qualcommdifficulty[]1page1company[]Qualcomm&utm_source=youtube&utm_medium=collab_striver_ytdescription&utm_campaign=element-appearing-once


// code 

class Solution{
public:	
	int search(int A[], int N){
	    //code
	    unordered_map<int ,int > mp;
	    // count frequqncy 
	    for(int i = 0 ;i <N;i++){
	        mp[A[i]]++;
	    }
	    int minfrequency  = INT_MAX;
	    int value  = INT_MIN;
	    
	    for(auto x : mp){
	       int num = x.first;
	       int freq = x.second;
	    
	    if(freq< minfrequency){
	       minfrequency =  freq;
	        value= num;
	    }
	    else if (freq==minfrequency && value <num){
	        value= num;
	    }
	    }
	   return value; 
	}
};
