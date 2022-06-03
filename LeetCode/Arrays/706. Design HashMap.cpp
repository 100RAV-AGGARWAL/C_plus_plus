class MyHashMap {
    vector<int> map;
public:
    MyHashMap() {
        this->map = vector<int>(1e6+9, -1);
    }
    
    void put(int key, int value) {
        if(key > map.size()) {
            map.resize(key+1, -1);
        }
        map[key] = value;
    }
    
    int get(int key) {
        return map[key];
    }
    
    void remove(int key) {
        map[key] = -1;
    }
};

/**
 * Your MyHashMap object will be instantiated and called as such:
 * MyHashMap* obj = new MyHashMap();
 * obj->put(key,value);
 * int param_2 = obj->get(key);
 * obj->remove(key);
 */