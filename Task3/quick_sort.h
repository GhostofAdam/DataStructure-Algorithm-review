class Solution{
public:
	void qsort(vector<int>&a, int lo,int hi){
		int flag=a[lo],i=lo,j=hi;
		while(i<j){
			while(i<j&&a[j]>=flag) --j;
			a[i]=a[j];
			while(i<j&&a[i]<=flag) ++i;
			a[j]=a[i];
		}
		a[i]=flag;
		qsort(a,lo,i-1);
		qsort(a,i+1,hi);
	}		
	vector<int> QuickSort(vector<int>&a){
		vector<int>res(a);
		qsort(res,0,res.size()-1);
		return res;
	}
}