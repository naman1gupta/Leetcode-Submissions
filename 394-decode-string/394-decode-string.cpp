
class Solution {
string repeat(string str, int times) {
        string res = "";
        for (int i=0; i<times; i++)
            res += str;
        return res;
    }
    public:
    
    string decodeString(string s) {
        int i=0;
        while (i < s.size()) {
            if (s[i] != ']') {
                i++;
                continue;
            }

            int j = i;
            while (s[j] != '['){
                j--;
            }
            string letters_to_repeat = s.substr(j+1, i-j-1);
            int k = j;
            j--;
            while ((j > 0) &&(isdigit(s[j])))
                j--;
            
            if (j != 0) j++;
            int times_to_repeat = stoi(s.substr(j, k-j));
            
            s.replace(j, i-j+1, repeat(letters_to_repeat, times_to_repeat));
            i = j+letters_to_repeat.size()*times_to_repeat;
        }
        return s;
    }
};