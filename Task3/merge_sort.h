class Solution{
public:
	void merge(vector<int>&a,int lo,int mid,int hi){
		vector<int>tmp(a.begin()+lo,a.begin()+hi);
		int i=0,j=mid-lo,k=0;
		while(i<_mid-lo&&j<hi-lo){
			if(tmp[i]<tmp[j]) a[k++]=tmp[i++];
			else a[k++]=tmp[j++];
		}
		while(i<_mid) a[k++]=tmp[i++];
		while(j<hi-lo) a[k++]=tmp[j++];
	}
	void merge_sort(vector<int>&a,int lo int hi){
		if(hi-lo<2) return;
		int mid=(lo+hi)>>1;
		merge_sort(a,lo,mid);
		merge_sort(a,mid,hi);
		merge(a,lo,mid,hi);
	}
	vector<int> MergeSort(vector<int>& a){
		vector<int> res(a);
		merge_sort(res,0,res.size());
		return res;
	}
}