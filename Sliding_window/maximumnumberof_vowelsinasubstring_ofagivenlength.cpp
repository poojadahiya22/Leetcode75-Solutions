class Solution {
public:
    int maxVowels(string s, int k) {
        int current = 0;
        for (int i = 0; i < k; i++) {
            if (s[i] == 'a' || s[i] == 'e' || s[i] == 'i' || s[i] == 'o' ||
                s[i] == 'u')
                current++;
        }

        int maxCount = current;

        for (int j = k; j < s.size(); j++) {

            if (s[j - k] == 'a' || s[j - k] == 'e' || s[j - k] == 'i' ||
                s[j - k] == 'o' || s[j - k] == 'u')
                current--;
            if (s[j] == 'a' || s[j] == 'e' || s[j] == 'i' || s[j] == 'o' ||
                s[j] == 'u')
                current++;

            if (current > maxCount)
                maxCount = current;
        }

        return maxCount;
    }
};
  
