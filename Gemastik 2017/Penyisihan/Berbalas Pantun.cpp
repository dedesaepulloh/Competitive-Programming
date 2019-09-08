#include <bits/stdc++.h>

using namespace std;

const int N = 1e5 + 5;

long long A[N], B[N];

int main(){
	int n;
	scanf("%d", &n);
	
	long long jml = 0;
	
	for (int i = 0; i < n; i++){
		scanf("%lld", A + i);
		jml += n * A[i];
	}
	
	for (int i=0; i < n; i++){
		scanf("%lld", B + i);
		jml += n * B[i];
	}
	
	cout << jml <<endl;
	return 0;
}
