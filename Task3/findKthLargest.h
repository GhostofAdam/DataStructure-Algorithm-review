class Solution {
public:
	int K=0,res=0;
	void qsort(vector<int>&a, int lo,int hi){
		int flag=a[lo],i=lo,j=hi;
		while(i<j){
			while(i<j&&a[j]<=flag) --j;
			a[i]=a[j];
			while(i<j&&a[i]>=flag) ++i;
			a[j]=a[i];
		}
		a[i]=flag;
        if(i==K-1){this->res=a[i];return;}
		if(K<i+1) qsort(a,lo,i-1);
		else qsort(a,i+1,hi);
	}
    int findKthLargest(vector<int>& nums, int k) {
        this->K=k;
		vector<int> t(nums);
		qsort(t,0,t.size()-1);
		return this->res;
    }
};