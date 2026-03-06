class Solution {
public:
    string mergeAlternately(string word1, string word2) {
       string temp="";
       int i=0;
       int j=0;
        while(i<word1.size() && j<word2.size()){
            temp+=word1[i];
            temp+=word2[j];
            i++;
            j++;
        }
       
        while(i <word1.size()){
            temp+=word1[i];
            i++;
            }
        while(j <word2.size()){
            temp+=word2[j];
            j++;
        }
        return temp; 
    }
  
};
