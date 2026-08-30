class TimeMap {
    unordered_map<string,vector<pair<string,int>>> mp;
    
public:
  
    TimeMap() {
        // Constructor
    }
    
    void set(string key, string value, int timestamp) {
        mp[key].push_back({value,timestamp});
    }
    
    string get(string key, int timestamp) {
       if(mp.find(key)==mp.end())
       return "";
       else
       {
        vector<pair<string,int>> temp=mp[key];
        int curr=0;
        string ans="";
        for(int i=0;i<temp.size();i++)
        {
            if(temp[i].second==timestamp)
            return temp[i].first;
            else if(temp[i].second<timestamp)
            {
                if(temp[i].second>curr)
                {
                    curr=temp[i].second;
                    ans=temp[i].first;
                }
            }
        }
        return ans;
       }
       
    }
};
