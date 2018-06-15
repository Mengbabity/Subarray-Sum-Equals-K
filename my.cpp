class Solution {
public:
    int subarraySum(vector<int>& nums, int k) {
        int n=nums.size();
        if(n==0)
            return 0;
        int res=0;
        
        for(int i=0;i<n;i++)
        {
            int tmp=nums[i];
            if(tmp==k)
                res++;
            for(int j=i+1;j<n;j++)
            {
                tmp+=nums[j];
                if(tmp==k)
                {
                    res++;
                    if(tmp+nums[j+1]==k && j+1<n)
                        continue;
                    else
                        break;
                }
            }
        }
        
        return res;
    }
};
