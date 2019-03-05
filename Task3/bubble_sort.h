class Soution{
public:
	vector<int> BubbleSort(vector<int>&a){
		vector<int> res(a);
		for(int i=0;i<res.size();++i)
			for(int j=0;j<res.size-i;++j)
				if(res[j]<res[j+1){int t=res[j];res[j]=res[j+1];res[j+1]=t;}
		return res;
	}
}