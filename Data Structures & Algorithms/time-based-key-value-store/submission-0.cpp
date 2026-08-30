class TimeMap {
public:
    unordered_map<string, vector<pair<int, string>>> store;

    TimeMap() {
        // Constructor
    }
    
    void set(string key, string value, int timestamp) {
        store[key].emplace_back(timestamp, value);
    }
    
    string get(string key, int timestamp) {
        if (store.find(key) == store.end()) return "";

        const auto& vec = store[key];
        int left = 0, right = vec.size() - 1;
        string result = "";

        while (left <= right) {
            int mid = left + (right - left) / 2;
            if (vec[mid].first <= timestamp) {
                result = vec[mid].second; // candidate
                left = mid + 1; // search for a later timestamp
            } else {
                right = mid - 1;
            }
        }

        return result;
    }
};
