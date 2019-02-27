#include <vector>
#include <algorithm>
#include< queue > 
struct ListNode {
   int val;
   ListNode *next;
   ListNode *pred;
   ListNode(int x) : val(x), pred(NULL),next(NULL) {}
 };	
class List{
public:
	ListNode* head;
	ListNode* end;
	List(){
		head=new ListNode();
		end=new ListNode();
		head->next=end;
		end->pred=head;
	}
	~List(){
		while(head!=end){
			delete head;
			head=head->next;
		}
		delete end;
	}
	void insert(int v){
		ListNode*p=new ListNode(v);
		end->pred->next=p;
		p->pred=end->pred;
		p->next=end;
		end->pred=p;
	}
	void del(ListNode* n){
		n->pred->next=n->next;
		n->next->pred=n->pred;
		delete n;
	}
	void reverse(){
		ListNode*p=head->next;
		ListNode*t;
		while(p!=end){
			t=p->next;
			p->next=p->pred;
			p->pred=q;
			p=q;
		}
		head=t;
		head=end;
		end=t;
	}
	friend bool operator<(ListNode* a, ListNode* b){
	return a->val<b.val;
}
	vector<ListNode*> middle(){
		vector<ListNode*>res;
		ListNode*p=head;
		ListNode*q=end;
		while(1){
			p=p->next;
			q=q->pred;
			if(p==q){res.push_back(p);return res}
			else if(p->pred==q){
				res.push_back(p);
				res.push_back(q);
				return res;
			}
		}
	}
}

List merge(List&x,List&y){
	List res;
	priority_queue<int,vector<int>,greater<int>>heap;
	ListNode*p=x.head;
	ListNode*q=y.head;
	while(p!=x.end||q!=y.end){
		if(p!=x.end) {head.push(p.val);p=p->next;}
		if(q!=y.end) {head.push(q.val);q=q->next;}
	}
	while(!head.empty()){
		res.insert(head.top());
		head.pop();
	}
	return res;
}