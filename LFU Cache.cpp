#include<bits/stdc++.h>
using namespace std;
class LFUCache {
    int cap;
    int mFreq;
    unordered_map<int,pair<int,int>> cache;
    unordered_map<int,list<int>> freq_map;
    unordered_map<int,list<int>::iterator> pos;
public:
    LFUCache(int cap) {
        this->cap = cap;
        mFreq = 0;
    }
    int get(int key) {
       if(cache.find(key) != cache.end()){
           int freq = cache[key].second;
           freq_map[freq].erase(pos[key]);
           freq++;
           freq_map[freq].push_front(key);
           pos[key] = freq_map[freq].begin();
           if(freq_map[mFreq].empty())
            mFreq++;
           return cache[key].first;
       }else    
        return -1;
    }
    void put(int key, int value) {
        if(cache.find(key) != cache.end()){
            cache[key].first = value;
            int freq = cache[key].second;
            freq_map[freq].erase(pos[key]);
            freq++;
            freq_map[freq].push_front(key);
            pos[key] = freq_map[freq].begin();
            if(freq_map[mFreq].empty())
                mFreq++;
            return;
        }
        if(cap == cache.size()){
            int key = freq_map[mFreq].back();
            cache.erase(key);
            pos.erase(key);
            freq_map[mFreq].pop_front();
        }
        cache[key] = {value, 1};
        freq_map[1].push_front(key);
        pos[key] = freq_map[1].begin();
        mFreq=1;
    }
};