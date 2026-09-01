#include <iostream>
#include <vector>
using namespace std;

class Solution {
public:
    bool isAnagram(string s, string t) {
        if (s.length() != t.length()) {
            return false;
        }

        sort(s.begin(), s.end());
        sort(t.begin(), t.end());
        return s == t;
    }
};
    int main()
    {

        string s = "car";
        string t = "rac";
        Solution sol;
        cout << sol.isAnagram(s, t);
    }
