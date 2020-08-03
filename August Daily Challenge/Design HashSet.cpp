/*Design a HashSet without using any built-in hash table libraries.

To be specific, your design should include these functions:

add(value): Insert a value into the HashSet. 
contains(value) : Return whether the value exists in the HashSet or not.
remove(value): Remove a value in the HashSet. If the value does not exist in the HashSet, do nothing.*/


class MyHashSet {
public:
    vector <int> st;
    /** Initialize your data structure here. */
    MyHashSet() {
        
    }
    
    void add(int key) {
        st.push_back(key);
    }
    
    void remove(int key) {
        for(int i = 0; i<st.size(); i++){
            int temp = 0;
            while(st[i] == key){
                temp = st[i];
                st[i] = st[st.size()-1];
                st[st.size()-1] = temp;
                st.pop_back();
            }
            
        }
    }
    
    /** Returns true if this set contains the specified element */
    bool contains(int key) {
        int flag = 0;
        for(int i = 0; i<st.size(); i++){
            if(st[i] == key)
                flag++;
        }
        if(flag != 0)
            return true;
        else 
            return false;
        
    }
};

/**
 * Your MyHashSet object will be instantiated and called as such:
 * MyHashSet* obj = new MyHashSet();
 * obj->add(key);
 * obj->remove(key);
 * bool param_3 = obj->contains(key);
 */
