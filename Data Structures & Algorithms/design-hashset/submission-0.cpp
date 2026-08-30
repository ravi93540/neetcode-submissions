class MyHashSet {
    private:
    vector<bool>v;
public:
    MyHashSet() :v(1000001,false) {
        
    }
    
    void add(int key) {
        if(v[key]==false)
        v[key]=true;
    }
    
    void remove(int key) {
        if(v[key]==true)
        v[key]=false;
    }
    
    bool contains(int key) {
        return v[key];
    }
};

/**
 * Your MyHashSet object will be instantiated and called as such:
 * MyHashSet* obj = new MyHashSet();
 * obj->add(key);
 * obj->remove(key);
 * bool param_3 = obj->contains(key);
 */