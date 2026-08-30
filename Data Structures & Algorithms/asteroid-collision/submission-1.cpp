class Solution {
public:
    vector<int> asteroidCollision(vector<int>& asteroids) {
        vector<int> ans;
        for(int i=0;i<asteroids.size();i++)
        {
            
                while(!ans.empty() && asteroids[i]<0 && ans.back()>0)
                {
                int diff=asteroids[i]+ans.back();
                if(diff<0)
                {
                    ans.pop_back();
                }
                else if(diff>0)
                {
                    asteroids[i]=0;
                    
                }
                else
                {
                    asteroids[i]=0;
                    ans.pop_back();
                }
            }
            if(asteroids[i]!=0)
            ans.push_back(asteroids[i]);
        }
        
        return ans;
    }
};