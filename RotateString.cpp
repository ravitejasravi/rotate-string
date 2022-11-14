class Solution {
public:
    int maximum69Number (int num) {
        
        string dup = to_string(num);

        for(int i = 0; i < dup.length(); i++)
            if(dup[i] == '6'){
                dup[i] = '9';
                break;
            }

        return stoi(dup);
    }
};