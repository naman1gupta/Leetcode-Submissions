#define endl "\n";
#define PI 3.1415926535

#define SORT(v)  sort(v.begin(), v.end())
#define SORTR(v) sort(v.rbegin(), v.rend())
#define MAX(v) *max_element(v.begin(), v.end())
#define MIN(v) *min_element(v.begin(), v.end())

typedef long long int ll;

const ll N = 3e5 + 10;
const ll mod = 1e9 + 7;
const ll MAXX = 1e6 + 5;
const ll nn=1e5 + 1;

ll XOR(ll x, ll y){
   return (x | y) & (~x | ~y);
}
bool cmp(const pair<int,int> &a,const pair<int,int> &b) {
	return (a.second < b.second);
}
/*~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~
								DON'T MAKE CHANGES BEFORE THIS LINE!
~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~*/
ll binaryToDecimal(string n){
	string num = n;
	ll dec_value = 0;
 
	// Initializing base value to 1, i.e 2^0
	ll base = 1;
 
	ll len = num.length();
	for (ll i = len - 1; i >= 0; i--) {
		if (num[i] == '1')
			dec_value += base;
		base = base * 2;
	}
 
	return dec_value;
}
string decimalToBinary(ll n){
	//finding the binary form of the number and
	//coneverting it to string.
	string s = bitset<64> (n).to_string();
	
	//Finding the first occurance of "1"
	//to strip off the leading zeroes.
	const auto loc1 = s.find('1');
	
	if(loc1 != string::npos)
		return s.substr(loc1);
	
	return "0";
}
bool com(const pair<ll,ll> &a, const pair<ll,ll> &b){
	if(a.first!=b.first) return a.first < b.first;
	else return a.second > b.second;
}


ll BinExpIter(ll a,ll b){
	ll ans=1;
	while(b){
		if(b&1){
			ans=ans*a;
		}
		a=a*a;
		b>>=1;
	}
	return ans;
}

ll BinExpRecur(ll a,ll b){
	if(b==0) return 1;
	ll res = BinExpRecur(a,b/2);
	if(b&1){
		return a*res*res;
	}
	else{
		return res*res;
	}
}


void findDivisors(int n)
{
	int div[N];                   //HERE!!
	memset(div, 0, sizeof div);
	for(int i = 1; i <= n; i++)
	{
		for(int j = 1; j * i <= n; j++)
			div[i * j]++;
	}
}
	
void sieve(int n)   //O(nlog(logn))
{
	vector<int> primes;      //HERE!!
	bool iscomp[N];          //HERE!!
	for(int i = 2; i <= n; ++i)
	{
		if(!iscomp[i])
			primes.push_back(i);
		for(int j = 0; j < primes.size() && i * primes[j] <= n; ++j)
		{
			iscomp[i * primes[j]] = true;
			if(i % primes[j] == 0)
				break;
		}
	}
}
	
int mpow(int base, int exp, int md = mod)
{
	int result = 1;
	base %= md;
	
	if(base==0) return 0;
	
	while(exp>0)
	{
		if(exp&1)
			result = (result*base)%md;
		base = (base*base)%md;
		exp>>=1;
	}
	return result;
}
	
int gcd(int a, int b)
{
	if(b==0)    return a;
	return gcd(b, a%b);
}
	
int lcm(int a, int b)
{
	return a*(b/gcd(a,b));
}
	
int ncr(int n,int r)
{
	vector<int> fac(N),inv(N);
	return fac[n] * (inv[r] * inv[n-r] % mod) % mod;
	return fac[n] * (mpow(fac[r],mod-2) * mpow(fac[n-r],mod-2) % mod ) % mod;
}
	
int highestPowerOf2(int n)
{
	return (n & (~(n - 1)));
}
	
ll count_digit(ll number)
{
	return int32_t(log10(number) + 1);
}
	
int sum_digit(int n)
{
	int sum = 0;
	while (n != 0)
	{
		sum = sum + n % 10;
		n = n / 10;
	}
	return sum;
}
	
int sum_digit(string str)
{
	int sum = 0;
	for (int i = 0; i < str.length(); i++)
	{
		sum = sum + str[i] - 48;
	}
	return sum;
}
	
string dec2bin(int n)
{
	const int size=sizeof(n)*8;
	string s = "00000000000000000000000000000000";
	for (int a=0;a<32;a++)
	{
		if(n==0)
			return s;
		else
		{
			if(n%2!=0)
				s[31-a]='1';
			n/=2;
		}
	}
	return s;
}




class Solution {
public:
    int fib(int n) {
        ll fibb[n+2];
        fibb[0]=0;
		fibb[1]=1;
		
		for(ll i=2;i<=n;i++){
			fibb[i]=fibb[i-1]+fibb[i-2];
		}
        // ll fibbn = (fibb[n-1] + fibb[n-2]);
		return fibb[n];
    }
};

