class MyHashMap {
public:
    // ios_base::sync_with_stdio(false);// it is showing compile error so don't use this
    // cin.tie(NULL);
    // cout.tie(NULL);
    int data[1000001];
    MyHashMap() {
        // fill(data,data+1000000,-1);
        // this will fill of array data from index-0 to 1000000 with value -1.
        memset(data,-1,sizeof(data));
    }
    
    void put(int key, int value) {
        data[key]=value;
    }
    
    int get(int key) {
        return data[key];
    }
    
    void remove(int key) {
        data[key]=-1;
    }
};

/**
 * Your MyHashMap object will be instantiated and called as such:
 * MyHashMap* obj = new MyHashMap();
 * obj->put(key,value);
 * int param_2 = obj->get(key);
 * obj->remove(key);
 */
