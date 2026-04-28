class Solution {
public:
    int largestAltitude(vector<int>& gain) {
        int n,max=0,s=0;
        for(int i=0;i<gain.size();i++){
            s+=gain[i];
            
            if(s>max)
                max=s;
            
        }
        return max;
    }
};
