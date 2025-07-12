class Solution {
public:
    int trap(vector<int>& height) {
        // int n=height.size();
        // vector<int> premax(n,1);
        // vector<int> sufmax(n,1);

        // premax[0]=height[0];
        // for(int i=1;i<n;i++){
        //     premax[i]=max(premax[i-1],height[i]);
        // }

        // sufmax[n-1]=height[n-1];
        
        // for(int i=n-2;i>=0;i--){
        //     sufmax[i]=max(sufmax[i+1],height[i]);
        // }
        // int ans=0;
        // for(int i=0;i<n;i++){
        // ans +=min(premax[i],sufmax[i])-height[i];
        // }
        // return ans;
        int n=height.size();
        int left=0;
        int right=n-1;
        int leftmax=0;
        int rightmax=0;
        int ans=0;


        while(left<right){

            leftmax=max(leftmax,height[left]);
            rightmax=max(rightmax,height[right]);

        

        if(leftmax<rightmax){
            ans+=leftmax-height[left];
            left++;
        }
        else{
            ans+=rightmax-height[right];
            right--;
        }

        }

        

       
        return ans;
    }
};