class Solution {
public:
    bool checkInclusion(string s1, string s2) {
        int len1 = s1.length();
        int len2 = s2.length();
        if (len1 > len2) return false;

        map<char, int> mp1;
        map<char, int> mp2;
        int i = 0, j = 0;
        for (i = 0; i < len1; i++){
            mp1[s1[i]]++;
            mp2[s2[i]]++;
        }
        int cnt = 0;
        for (char i = 'a'; i <= 'z'; i++) {
            if (mp1[i] == mp2[i])
                cnt++;
        }
        while (i < len2){
            if (cnt == 26) return true;
            char lo = s2[j], hi = s2[i];
            mp2[hi]++;
            if (mp2[hi] == mp1[hi])
                cnt++;
            else if (mp2[hi] == mp1[hi]+1)
                cnt--;

            mp2[lo]--;
            if (mp2[lo] == mp1[lo])
                cnt++;
            else if (mp2[lo] == mp1[lo]-1)
                cnt--;

            i++;
            j++;
        }


        return cnt == 26;
    }
};