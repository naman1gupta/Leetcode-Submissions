class Solution {
public:
    int mostWordsFound(vector<string>& sentences) {
        int mx=0;
        for(int i=0;i<sentences.size();i++){
            int cnt=0;
            for(int j=0;j<sentences[i].size();j++){
                if(sentences[i][j]==' '){
                    cnt++;
                }
            }
            if(mx<cnt){
                mx=cnt;
            }
        }
        return (mx+1);
    }
};