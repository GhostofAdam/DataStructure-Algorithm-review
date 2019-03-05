class Solution{
public:
	vector<int> SelectionSort(vector<int>&a){
		vector<int> res(a);
		for(int i=0;i<res.size();++i){
			int min=i;
			for(int j=i+1;j<res.size();++j)
				if(a[j]<a[min]) min=j;
			if(min!=i){
				int t=a[min];
				a[min]=a[i];
				a[i]=t;
			}
		}
		return res;
	}
}