class Solution {
public:
    void sortColors(vector<int>& nums) {
        vector<int> temp1;
        vector<int> temp2;
        vector<int> temp3;
        for(int i=0;i<nums.size();i++)
        {
            if(nums[i]==0)
            temp1.push_back(0);
            else if(nums[i]==1)
            temp2.push_back(1);
            else
            temp3.push_back(2);
        }
        nums.clear();
        for(int i=0;i<temp1.size();i++)
        nums.push_back(0);
        for(int i=temp1.size();i<temp1.size()+temp2.size();i++)
        nums.push_back(1);
         for(int i=temp1.size()+temp2.size();i<temp1.size()+temp2.size()+temp3.size();i++)
        nums.push_back(2);

    }
};