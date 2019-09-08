#include <bits/stdc++.h>

using namespace std;

int main(){
	
	int N = 0;
	
	scanf("%d", &N);
	
	int A[N], B[N];
	
	for (int i = 0; i < N; i++){	
		scanf("%d", &A[i]);
	}
	
	for (int i = 0; i < N; i++){
		scanf("%d", &B[i]);
	}
	
	int jml = 0;
	
	for (int i = 0; i < N; i++){
		jml = jml + A[i] + B[i];
	}
	
	jml = jml * N;
		
	printf("%d\n", jml);
	
	return 0;
}
