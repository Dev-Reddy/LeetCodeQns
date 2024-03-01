class RandomizedSet
{
public:
    vector<int> index;
    unordered_map<int, int> m;
    RandomizedSet()
    {
    }

    bool insert(int val)
    {
        if (m.find(val) != m.end())
        {
            return false;
        }
        m[val] = index.size();
        index.push_back(val);
        return true;
    }

    bool remove(int val)
    {
        if (m.find(val) == m.end())
        {
            return false;
        }
        if (m[val] == index.size() - 1)
        {
            index.pop_back();
            m.erase(val);
        }
        else
        {
            int i = m[val];
            index[i] = index[index.size() - 1];
            m[index[i]] = i;
            m.erase(val);
            index.pop_back();
        }
        return true;
    }

    int getRandom()
    {
        return index[rand() % index.size()];
    }
};

/**
 * Your RandomizedSet object will be instantiated and called as such:
 * RandomizedSet* obj = new RandomizedSet();
 * bool param_1 = obj->insert(val);
 * bool param_2 = obj->remove(val);
 * int param_3 = obj->getRandom();
 */