class Solution 
{
    public:
    //Function to find the minimum number of swaps required to sort the array. 
	int binary(vector<int>&nums,int k){
	    int s=0;
	    int e=nums.size()-1;
	    while(s<=e){
	        int mid=s+(e-s)/2;
	        
	        if(nums[mid]==k){
	            return mid;
	        }
	        else if(nums[mid]<k){
	            s=mid+1;
	        }
	        else{
	            e=mid-1;
	        }
	    }
	}
	int minSwaps(vector<int>&nums)
	{
	    vector<int>v;
	    for(int i=0;i<nums.size();i++){
	        v.push_back(nums[i]);
	    }
	    sort(nums.begin(),nums.end());
	    int cnt=0;
	    
	    for(int i=0;i<nums.size();i++){
	        if(nums[i]!=v[i]){
	            int ind=binary(nums,v[i]);
	            swap(v[i],v[ind]);
	            cnt++;
	            i--;
	        }
	    }
	    return cnt;
	}
};
