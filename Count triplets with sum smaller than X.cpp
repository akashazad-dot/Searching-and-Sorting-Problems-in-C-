class Solution{
	public:
	long long countTriplets(long long arr[], int n, long long sum)
	{
	    sort(arr,arr+n);
	    long long ans=0;
	        for(int i=0;i<n-2;i++){
	        int left=i+1,right=n-1;
	        
	        while(left<right){
	            int total=arr[i]+arr[left]+arr[right];
	            
	            if(total<sum){
	                ans=ans+(right-left);
	                left++;
	            }
	            else{
	                right--;
	            }
	        }
	    }
	    return ans;
	}
};
