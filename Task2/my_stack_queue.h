//顺序栈
class orderStack{
	int *a;
	int max;
	int _top;
	orderStack(int n):_top(0),max(n){
		a = new int[n];
	}
	~orderStack(){ delete[] a;}
	int top(){ return a[_top]; }
	bool is_empty(){
		return !bool(_top);
	}
	bool is_full(){
		return _top<max;
	}
	void pop(){ 
		if(!is_empty()) --_top;
		else cout<<"already empty";
	}
	void push(int x){ 
		if(_top<max) a[_top++]=x;
		else cout<<"full!";
	}
}
//循环队列
class circularQueue{
	int *a;
	int head,tail,max;
	circularQueue(int n):head(0),tail(0),max(n){
		a=new int[n];
	}
	~circularQueue(){
		delete[] a;
	}
	bool is_empty(){
		return head==tail;
	}
	bool is_full(){
		return abs(head-tail)==max;
	}
	void push(int n){
		a[tail]=n;
		tail=(tail+1)%max;
	}
	void pop(){
		head=(head+1)%max;
	}
	int front(){
		return a[head];
	}
	
}
//链式栈
class chainStack{
	
}
//链式队列
class chainQueue{
	
}
