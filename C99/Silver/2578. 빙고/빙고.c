#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main(){
	int n[26];
	int nn[26];
	int h[5];
	int g[5];
	int s1=0;
	int s2=0;
	int ans_flag = 0;
	int ans = 0;
	for(int i = 0; i < 5;i++){
		int k;
		for(int j = 0 ; j < 5;j++){
			scanf("%d",&k);
			n[k]= i;
			nn[k] = j;
		}
		h[i] = 0;
		g[i] = 0;
	}
	int jj;
	for(int i = 1;i <=25;i++){
		int nnn;
		scanf("%d",&nnn);
		int s,b;
		int sig = 0;
		if(ans_flag >= 3)continue;
		if(ans)continue;
		h[n[nnn]]++;
		g[nn[nnn]]++;
		if(n[nnn]==nn[nnn])s1++;
		if(n[nnn]==4-nn[nnn])s2++;
		if(h[n[nnn]]==5)
		{
			ans_flag++;
			h[n[nnn]] = 0;
		}
		if(g[nn[nnn]]==5)
		{
			ans_flag++;
			g[nn[nnn]] = 0;
		}
		if(s1==5)
		{
			ans_flag++;
			s1 = 0;
		}
		if(s2==5){
			ans_flag++;
			s2 = 0;
		}
		if(ans_flag>=3){
			ans = 1;
			jj = i;
		}
	}
	printf("%d",jj);
	return 0;
}
