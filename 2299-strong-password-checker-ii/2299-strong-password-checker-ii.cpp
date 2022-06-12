class Solution {
    typedef long long ll;
public:
    bool strongPasswordCheckerII(string password) {
        ll n=password.size();
        string ss="!@#$%^&*()-+",s=password;
        // cout<<ss;
        if(n<8){
            // cout<<"hue0";
            return false;
        }
        else{
            for(ll i=0;i<n-1;i++){
                if(password[i]==password[i+1]){
                    // cout<<"hue1";
                    return false;
                }
            }
            map<ll,ll>m;
            m[0]=0;
            m[1]=0;
            m[2]=0;
            m[3]=0;
            for(ll i=0;i<n;i++){
                if(s[i]<='z' and s[i]>='a'){
                    m[0]++;
                }
                if(s[i]<='Z' and s[i]>='A'){
                    m[1]++;
                }
                if(s[i]<='9' and s[i]>='0'){
                    m[2]++;
                }
                for(ll j=0;j<ss.size();j++){
                    if(s[i]==ss[j]){
                        m[3]++;
                        // cout<<"hue3";
                        break;
                    }
                }
            }
            if(m[0]>0 and m[1]>0 and m[2]>0 and m[3]>0 ){
                return true;
            }
            else{
                return false;
            }
        }
    }
};