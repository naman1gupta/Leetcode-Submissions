class Solution 
{
public:
    int ladderLength(string beginWord, string endWord, vector<string>& wordList) 
    {
        unordered_set<string>sett(wordList.begin(),wordList.end());
        
        if(sett.find(endWord)==sett.end())            return 0;
        

        queue<string>q;
        q.push(beginWord);
        int level=1;
        while(!q.empty())
        {
            int n=q.size();
            while(n)
            {
                string curr=q.front();
                q.pop();
                if(curr==endWord)
                {
                    return level;
                }
                for(int i=0;i<curr.length();i++)
                {
                    for(char c='a';c<='z';c++)
                    {
                        char x=curr[i];
                        curr[i]=c;
                        if(sett.find(curr)!=sett.end())
                        {
                            sett.erase(curr);
                            q.push(curr);
                        }
                        curr[i]=x;
                    }
                }
                n--;
            }
            level++;
        }
        return 0;
    }
};