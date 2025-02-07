class Solution {
public:

     int firstoccurence(vector<int>& nums, int target,int n){
            int first=-1;
            int left=0;int right=n-1;
            while(left<=right){
                int mid=(left+right)/2;

                if(nums[mid]==target){
                    first=mid;
                    right=mid-1;
                }
                else if(nums[mid]<target){
                    left=mid+1;
                }
                else{
                    right=mid-1;
                }
            }
            return first;
        }

        int lastoccurence(vector<int>& nums, int target,int n){
            int last=-1;
            int left=0;int right=n-1;
            while(left<=right){
                int mid=(left+right)/2;

                if(nums[mid]==target){
                    last=mid;
                    left=mid+1;
                }
                else if(nums[mid]<target){
                    left=mid+1;
                }
                else{
                    right=mid-1;
                }
            }
            return last;
        }




    vector<int> searchRange(vector<int>& nums, int target) {
        int n=nums.size();
        int first=firstoccurence(nums, target, n);
        if(first==-1){
            return {-1,-1};
        }
        int last=lastoccurence(nums, target, n);

        return {first,last};


       
    }
};