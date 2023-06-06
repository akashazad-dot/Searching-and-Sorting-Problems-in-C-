class Solution{
    public:
    int kthElement(int arr1[], int arr2[], int n, int m, int k)
    {
        vector<int>arr3;
        for(int i=0;i<n;i++){
            arr3.push_back(arr1[i]);
        }
        
        for(int i=0;i<m;i++){
            arr3.push_back(arr2[i]);
        }
        
        sort(arr3.begin(),arr3.end());
        
        return arr3[k-1];
        
    }
