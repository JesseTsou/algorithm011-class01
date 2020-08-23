class Solution {
public:
    bool isIsomorphic(string s, string t) {
        unordered_map<char, char> map1;
        unordered_map<char, char> map2;
        if (s.size() != t.size())
            return false;

        bool res = true;
        for (int i = 0; i < s.size(); i ++)
        {
            if (map1[s[i]] == 0 && map2[t[i]] == 0)
            {
                map1[s[i]] = t[i];
                map2[t[i]] = s[i];
            }
            else
            {
                if (map1[s[i]] != t[i])
                {
                    res = false;
                    break;
                }
            }
        }
        return res;
    }
};
