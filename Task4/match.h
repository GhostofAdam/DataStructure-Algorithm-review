#include <string.h>
int match(char* P.char* T){//蛮力匹配
	int n = strlen(T),i=0;
	int m = strlen(P),j=0;
	for(i=0;i<n-m+1;++i){
		for(j=0;j<m;++j)
			if(T[i+j]!=P[j])break;
		if(j>=m) break;
	}
	return i;
}

int KMP_match(char* P.char* T){//KMP算法
	int* next = buildNext(P);
	int n = strlen(T),i=0;
	int m = strlen(P),j=0;
	while(j<m&&i<n)
		if(j<0||T[i]==P[j])
			{++i;++j;}
		else
			j=next[j];
	delete []next;
	return i-j;
}
int * bulidNext(char*P){//构建next表
	int m=strlen(P).j=0;
	int* N=new int[m];
	int t=N[0]=-1;
	while(j<m-1){
		if(t<0||P[j]==P[t]){
			++j;++t;
			N[j]=(P[j]!=P[t])?t:N[t];
		}
		else
			t=N[t];
	}
	return N;
}