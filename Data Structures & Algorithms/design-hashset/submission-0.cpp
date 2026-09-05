class MyHashSet {
private:
    vector<vector<int>> buckets;
    int size = 1009;

    int hash(int key) {
        return key % size;
    }

public:
    MyHashSet() {
        buckets.resize(size);
    }

    void add(int key) {
        int index = hash(key);

        if (find(buckets[index].begin(), buckets[index].end(), key)
            == buckets[index].end()) {
            buckets[index].push_back(key);
        }
    }

    void remove(int key) {
        int index = hash(key);

        auto it = find(buckets[index].begin(), buckets[index].end(), key);

        if (it != buckets[index].end()) {
            buckets[index].erase(it);
        }
    }

    bool contains(int key) {
        int index = hash(key);

        return find(buckets[index].begin(), buckets[index].end(), key)
            != buckets[index].end();
    }
};