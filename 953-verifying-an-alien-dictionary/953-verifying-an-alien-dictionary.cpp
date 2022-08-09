class Solution {
public:
    bool isAlienSorted(vector<string>& words, string order) {
        map<char,int>mp;
        for(int i=0;i<order.size();i++){
            mp[order[i]]=i;
        }
        // cout<<mp[words[0][0]];
        for(int i=0;i<words.size()-1;i++){
            for(int j=0;j<words[i].size();j++){
                if(mp[words[i][j]] > mp[words[i+1][j]]){
                    // cout<<mp[words[i][j]]<<' '<<mp[words[i+1][j]]<<endl;
                    // cout<<"hue";
                    return false;
                }
                else if((mp[words[i][j]] == mp[words[i+1][j]]) && ((j == words[i+1].size()-1) && (j != words[i].size()-1))){
                    // cout<<"gop";    
                    return false;
                }
                else if(mp[words[i][j]] < mp[words[i+1][j]]){
                    break;
                }
            }
        }
        return true;
    }
};