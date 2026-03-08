class Solution {
public:
    int compress(vector<char>& chars) {
        int s = 0;
        int m = chars.size();
        int i=0;
      while(i < m) {
            char current = chars[i];
            int count = 0;
          while(i < m && chars[i] == current){
                i++;
                count++;
            }
            chars[s++] = current;
            if(count > 1){
                string num = to_string(count);
                for(int k = 0; k < num.size(); k++){
                    chars[s++] = num[k];
                }
            }
        }

        return s;
    }
};
