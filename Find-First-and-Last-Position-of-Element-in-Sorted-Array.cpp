#include<bits/stdc++.h>
using namespace std;

class Solution {
    //function for finding the first index of value
    int firstPosition(vector<int>&nums, int target){
        int n=nums.size();
        int low=0;
        int high=n-1;
        int firstPosition=n;
        while(low<=high){
            int mid=low+(high-low)/2;
            if(nums[mid]>=target){
                firstPosition=mid;
                high=mid-1;
            }
            else{
                low=mid+1;
            }
        }
        return firstPosition;
    }
public:
    vector<int> searchRange(vector<int>& nums, int target) {
        //  calling function for target to find target first index
        int first=firstPosition(nums,target);
        //  calling function for target+1 then subtracting 1 to find target last index
        int last=firstPosition(nums,target+1)-1;
        if(first<=last){
            return {first,last};
        }
        else{
            return {-1,-1};
        }
    }
};