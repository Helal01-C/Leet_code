class Solution {
public:
    int lengthOfLongestSubstring(string s) {
    int freq[256] = {0};
    int left = 0;
    int ans  = 0;
    for(int i = 0; i <s.size(); i++)
    {
        freq[s[i]]++;
        while(freq[s[i]]>1)
        {
            freq[s[left]]--;
            left++;
        }
      ans = max(ans,i-left+1);
    }
    return ans;
    }
};