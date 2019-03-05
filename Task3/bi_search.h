class Solution{
public:
	int bi_search(const vector<int>&a,int v){//查找的借口还是防止改动吧
		int i=0,j=a.size();
		while(i<j){
			int mid=(i+j)>>1;
			if(v==a[mid) return mid;
			else if(v<a[mid]) j=mid;
			else i=mid;
		}
		return -1;//查询失败
	}
	int bi_fuzzy_search(const vector<int>&a,int v){//大于等于v的第一个元素
		int i=0,j=a.size();
		while(i<j){
			int mid=(i+j)>>1;
			if(v==a[mid) return mid;
			else if(v<a[mid]) j=mid;
			else i=mid;
		}
		while(i>=0&&a[i]>=v) --i;
		return i+1;
		
	}
}