class Solution{
    public:
    // arr[] : int input array of integers
    // k : the quadruple sum required
    vector<vector<int> > fourSum(vector<int> &arr, int k) {
        set<vector<int>> s;
        vector<vector<int>> ans;
        int n=arr.size();
        sort(arr.begin(),arr.end());
        for(int i=0;i<n;i++){
            for(int  j=i+1;j<n;j++){
                int start=j+1;
                int end=n-1;
                
                while(start<end){
                    int sum=arr[i]+arr[start]+arr[end]+arr[j];
                    if(sum==k){
                        vector<int> quadruple={arr[i],arr[j],arr[start],arr[end]};
                        s.insert(quadruple);
                        start++;
                        end--;
                    }
                    else if(sum>k){
                        end--;
                    }
                    else{
                        start++;
                    }
                }
            }
        }
        
        for(auto x:s){
            ans.push_back(x);
        }
        
        return ans;
    }
};
