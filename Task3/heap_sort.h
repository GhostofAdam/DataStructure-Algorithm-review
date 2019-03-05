class Solution{
public:
	vector<int> HeapSort(vector<int>&a){
	 priority_queue<int,vector<int>,greater<int>> heap;
	 vector<int> res(a);
	 for(int i=0;i<res.size();++i)
		heap.push(res[i]);
	 for(int i=0;i<res.size();++i){
		res.[i]=heap.top();
		heap.pop();
	 }
	}
}