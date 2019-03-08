struct node{
	int n;
	struct node* next[26];
	node():n(0){
		for(int j=0;j<26;++j){
			next[j]=nullptr;
		}
	}
}

class Trie{
public:
	struct node* root;
	Trie(){
		root = new struct node();
	}
	~Tire(){
		
	}
	void insert(char* s){
		root->n+=1;
		struct node* p=root;
		for(int i=0;s[i]!='\0';++i){
			int t=s[i]-'a';
			if(p->next[t]!=nullptr)
				p->next[t]->n+=1;
			else
				p->next[t]=new struct node();
			p=p->next[t];
		}
	}
	int search(char* s){
		if(!root->n) return 0;
		struct node* p=root;
		for(int i=0;s[i]!='\0';++i){
			int t=s[i]-'a';
			if(p->next[t]!=nullptr) p=p->next[t];
			else return 0;

		}
		return p->n;
	}
}