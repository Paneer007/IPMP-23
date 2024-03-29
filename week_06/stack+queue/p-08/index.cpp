#include<bits/stdc++.h>
using namespace std;
class LRUCache{
    int m_capacity;
    unordered_map<int,list<pair<int,int>>::iterator>m_map;
    list<pair<int,int>>m_list;
    public:
        LRUCache(int capacity){
            this->m_capacity= capacity;
        }
        int get (int key){
            auto found_iter = m_map.find(key);
            if(found_iter == m_map.end()){
                return -1;
            }
            m_list.splice(m_list.begin(),m_list,found_iter->second);
            return found_iter->second->second;
        }
        void put(int key, int value){
            auto found_iter = m_map.find(key);
            if(found_iter != m_map.end()){
                m_list.splice(m_list.begin(),m_list,found_iter->second);
                found_iter->second->second=value;
                return;
            }
            if(m_map.size()==m_capacity){
                int key_to_del = m_list.back().first;
                m_list.pop_back();
                m_map.erase(key_to_del);
            }
            m_list.emplace_front(key,value);
            m_map[key]=m_list.begin();
        }
};
int main(){

    return 0;
}