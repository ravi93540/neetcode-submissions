class Solution {
public:
    int numRescueBoats(vector<int>& people, int limit) {
        int n=people.size();
        int start=0,finish=n-1;
        sort(people.begin(),people.end());
        int ans=0;
        while(start<=finish)
        {
            if(people[start]+people[finish]<=limit)
            {
                ans++;
                start++;
                finish--;
            }
            else {
                ans++;
                finish--;
            }

        }
        return ans;
    }
};