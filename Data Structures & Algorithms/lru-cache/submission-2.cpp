class LRUCache {
private:
int capacity;
list<pair<int,int>> cacheList;
unordered_map<int,list<pair<int,int>>::iterator> cacheMap;
public:
    LRUCache(int capacity) {
      this->capacity=capacity;
    }

    int get(int key) {
      if(cacheMap.find(key)==cacheMap.end())
      return -1;
      auto it=cacheMap[key];
      int val=it->second;
      cacheList.erase(it);
      cacheList.push_front({key,val});
      cacheMap[key]=cacheList.begin();
      return val;

    }

    void put(int key, int value) {
     if(cacheMap.find(key)!=cacheMap.end())
     {
      auto it=cacheMap[key];
      cacheList.erase(it);
     }
     else if(cacheList.size()==capacity)
     {
      int last=cacheList.back().first;
      cacheList.pop_back();
      cacheMap.erase(last);
     }
     cacheList.push_front({key,value});
     cacheMap[key]=cacheList.begin();

    }
};