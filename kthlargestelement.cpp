#include <bits/stdc++.h>
using namespace std;

class KthLargest {
public:
    multiset<int> st;
    int k;

    KthLargest(int k, vector<int>& nums) {
        this->k = k;
        for (int x : nums) {
            st.insert(x);

            if (st.size() > k) {
                st.erase(st.begin());
            }
        }
    }
    int add(int val) {
        st.insert(val);

        if (st.size() > k) {
            st.erase(st.begin());
        }

        return *st.begin();
    }
};