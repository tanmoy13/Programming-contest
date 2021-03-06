using namespace std;
#include<algorithm>
#include<iostream>
#include<sstream>
#include<string>
#include<vector>
#include<queue>
#include<stack>
#include<map>

#include<climits>
#include<cstring>
#include<cstdio>
#include<cmath>

#define For(i,a) for(int i=0;i<a;++i)
#define foreach(x,v) for(typeof (v).begin() x = (v).begin(); x!= (v).end(); x++)
#define all(x) x.begin(),x.end()
#define rall(x) x.rbegin(),x.rend()
#define D(x) cout<< #x " = "<<(x)<<endl
#define Dbg if(1)
#define MAXNODES 1000

const double pi=acos(-1);

struct point{
	int x,y;
	point() {}
	point(int X, int Y) : x(X), y(Y) {}
};


int main(){
	int numcas;cin>>numcas;
	for(int cid=1;cid<=numcas;++cid){
		int n,p,q;cin>>n>>p>>q;
		int eggs[n];
		for(int i=0;i<n;++i)cin>>eggs[i];
		int acum=0,i;
		for(i=0;i<p and i<n and acum + eggs[i]<=q;++i)acum+=eggs[i];
		
		cout<<"Case "<<cid<<": "<<i<<"\n";
	
	}
	return 0;
}
