class Solution
{
    public:
    //Function to find the maximum money the thief can get.
    int FindMaxSum(int arr[], int n)
    {
        int first=0,second=0;
        for(int i=0;i<n;i++){
            int temp=first;
            first=max(second+arr[i],first);
            second=temp;
        }
        
        return first;
    }
};
