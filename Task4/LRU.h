#include <list>
template<typename D>
class LRUcontainer{
	list<D> buffer;
	int size;
	int max;
	LRUcontainer():size(0),max(n){int n}
	~LRUcontainer(){}
	void read(D d){
		list<D>::iterator it = find(buffer.begin(), buffer.end(),d); 
		if(it!=buffer.end()){
			buffer.push_front(d);
			++size;
		}
		else{
			buffer.remove(it);
			buffer.push_front(d);
		}
		if(size>max){
			buffer.pop_back();
		}
	}
}