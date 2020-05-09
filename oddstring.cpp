class Solution {
public:
    string generateTheString(int n) {
        String s;
        if (n%2 == 1){
            for(int x = 0; x < n; x++){
                s += 'a';
            }
        }
        else{
            for(int x = 0; x < n-1; x++){
                s += 'a';
            }
            s += 'h';
        }
        
        return s;
    }
};
