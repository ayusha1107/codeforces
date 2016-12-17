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
	int a1,a2,p=0;
	cin>>a1>>a2;
	while(a1>0&&a2>0) {
		if(a1==1&&a2==1)
			break;
		if(a1>a2) {
			a1-=2;
			a2++;
		}
		else {
			a1++;
			a2-=2;
		}
		p++;
	}
	cout<<p<<endl;
}
