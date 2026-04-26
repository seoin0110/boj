#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int a[1001][1001] = {0, };
int b[1001] = {0, };
int d[1001] = {0, };
int q[10001] = {0, };
int front = 0;
int back = 1;
int n,m,v;
void dfs(int i){
	for(int j = 1; j <= n;j++){
		if(a[i][j]==0)
			continue;
		if(d[j]==1)
			continue;
		d[j] = 1;
		printf("%d ",j);
		dfs(j);
	}	
	return;
}

void bfs(int i){
	while(front!=back){
		int j = q[front];
		front++;
		for(int k = 1; k<=n;k++){
			if(a[j][k]==0)
				continue;
			if(b[k] ==1)
				continue;
			b[k] = 1;
			printf("%d ",k);
			q[back] = k;
			back++;
		}
	}
	return;
}

int main(){

	scanf("%d%d%d",&n,&m,&v);
	for(int i = 0; i < m;i++){
		int tm1,tm2;
		scanf("%d%d",&tm1,&tm2);
		a[tm1][tm2]=1;
		a[tm2][tm1]=1;
	}
	b[v] = 1;
	d[v] = 1;
	printf("%d ",v);
	dfs(v);
	printf("\n%d ",v);
	q[0] = v;
	bfs(v);
	printf("\n");
    return 0;
}
