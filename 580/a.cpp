#include <cstdio>
#include <cstdlib>
#include <cstring>
#include <algorithm>
#include <bitset>
#include <deque>
#include <iostream>
#include <iterator>
#include <list>
#include <map>
#include <queue>
#include <set>
#include <sstream>
#include <stack>
#include <string>
#include <vector>
using namespace std;
int main()
{
	int n,x,i,p=0,c=0;
	scanf("%d",&n);
	int a[n],k=-1;
	for(i=0;i<n;i++){
		scanf("%d",&x);
		//cout<<k<<" "<<x<<" "<<p<<endl;
		if(x>=k){
			p++;
		}
		else {
			p=1;
		}
		c=max(c,p);
		k=x;
	}
	printf("%d\n", c);
	return 0;
}