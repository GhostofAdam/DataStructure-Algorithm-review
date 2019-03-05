class Solution{
public:
	vector<int> InsertSort(vector<int>&a){
		vector<int> res(a);
		int i=0;
		for(int i=1;i<res.size();++i){
			int flag=res[i];
			int j=i;
			while(j>0&&res[j-1]>flag){ res[j]=res[j-1]; --j;}
			res[j]=flag;
		}
		return res;
	}
}