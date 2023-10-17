vector<int> twoSum(vector<int>& nums, int target) {
        vector<int> arr;
    sort(nums.begin(),nums.end());
        for(int i=0;i<nums.size();i++)
        {
            int search=(target-nums[i]);
            int left=0,right=nums.size()-1;
            while(left<=right)
            {
                int mid=(right+left)/2;

                if(search>nums[mid])
                {
                    left=mid+1;
                }
                if(search<nums[mid])
                {
                    right=mid-1;
                }
                if(search==nums[mid])
                {
                    arr.push_back(i);
                    arr.push_back(mid);
                }
            }

        }
        return arr;
}
