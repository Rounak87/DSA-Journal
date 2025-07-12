class Solution {
public:
    vector<int> nextGreaterElements(vector<int>& nums) {

        
        stack<int> st;
        int n=nums.size();
        vector<int> nge(n,-1);


        for(int i=2*n-1;i>=0;i--){

            int ind=i%n;

            while(!st.empty() &&st.top()<=nums[ind]){
                st.pop();
            }

            if(i<n){
                if(st.empty()){
                    nge[ind]=-1;
                }
                else{
                    nge[ind]=st.top();
                }
            }
            st.push(nums[ind]);
        }
        

            

        return nge;
 
    
        
    }
};