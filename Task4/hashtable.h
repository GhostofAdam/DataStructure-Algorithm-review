template<typename K,typename V>
struct entry{
	K k;
	V v;
};
class HashMap{
	int M;
	int size;
	vector<list<struct entry>> &hashmap;
	Hashmap(int n):M(n),size(0){
		hashmap=new vector<list<struct entry>>(n);
	}
	~HashMap(){delete hashmap;}
	int hash_f(K k){
		
	}
	V get(K k){
		int t=hash_f(s);
		list<struct entry>::iterator it = find(hashmap[t].begin(), hashmap[t].end(),v); 
		return (*it).v
	}
	bool put(K k,V v){
		int t=hash_f(s);
		list<struct entry>::iterator it = find(hashmap[t].begin(), hashmap[t].end(),v); 
		if(it==hashmap[t].end()) return false;
		else{
		struct entry t;
		t.k=k;t.v=v;
		hashmap[t].push_back(t);
		return true;
		}
	}
	bool remove(string s,int v){
		int t=hash_f(s);
		list<int>::iterator it = find(hashmap[t].begin(), hashmap[t].end(),v);
		if(it==hashmap[t].end()) return false;
		else{
		hashmap[t].remove(it);
		return true;
		}
	}
}
