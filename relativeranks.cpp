/*
soummo sanjay deb
roll -> 2407023
*/
#include <bits/stdc++.h>
using namespace std;

class Solution {
public:
    vector<string> findRelativeRanks(vector<int>& score) {

        int n = score.size();
        multiset<int, greater<int>> st;
        unordered_map<int, int> mp;

        // store score and index
        for (int i = 0; i < n; i++) {

            st.insert(score[i]);
            mp[score[i]] = i;
        }
        vector<string> ans(n);

        int rank = 1;
        for (int x : st) {

            int idx = mp[x];

            if (rank == 1) {
                ans[idx] = "Gold Medal";
            }
            else if (rank == 2) {
                ans[idx] = "Silver Medal";
            }
            else if (rank == 3) {
                ans[idx] = "Bronze Medal";
            }
            else {
                ans[idx] = to_string(rank);
            }

            rank++;
        }

        return ans;
    }
};