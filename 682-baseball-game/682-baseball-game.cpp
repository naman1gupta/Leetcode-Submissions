typedef long long ll;

class Solution {
public:
    int calPoints(vector<string>& ops) {
        ll n=ops.size();
        // ll opss[n+10];
        vector<int>opss;
        string s;
        // for(ll i=0;i<n+10;i++){
        //     opss[i]=0;
        // }
        ll sum=0;
        // opss.size() -1
        for(ll i=0;i<n;i++){
            // cout<<ops[i];
            if(ops[i]=="+"){
                sum+=((opss[opss.size() -1])+(opss[opss.size() -2]));
                if((i-2)>=0){
                   opss.push_back((opss[opss.size() -1])+(opss[opss.size() -2]));
                }
                else{
                  opss[i]=(opss[opss.size() -1]);
                }
                
                
            }
            else if(ops[i]=="D"){
                sum+=(2*(opss[opss.size() -1]));
                opss.push_back(2*opss[opss.size() -1]);
            }
            else if(ops[i]=="C"){
                sum-=(opss[opss.size() -1]);
                opss.pop_back();
                // if((i-2)>=0){
                //     opss[i]=opss[i-2];
                // }
                // else{
                //   opss[i]=0; 
                // }
            }
            else{
                // opss[i]=ops[i]-'0';
                s=ops[i];
                opss.push_back(stoll(s, nullptr, 10));
                // opss[i]=(s[0]-'0');
                // cout<<opss[i]<<' ';
                sum+=(opss[opss.size() -1]);
            }
        }
        // for(ll i=0;i<n;i++){
        //     cout<<opss[i]<<' ';
        // }
        return sum;
    }
};