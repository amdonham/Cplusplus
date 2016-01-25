/*
 * This data structure is a node class to store data for linked lists.
 */

using namespace std;

class Node{
public:
	int getVal();
	void setVal(int num);
	void setNext(Node *node);
	bool hasNext();
	Node* getNext();
	//Node();
	//Node(const Node& orig);
	//virtual ~Node();
private:
	int value;
	Node* next;


};

int Node::getVal(){return value;}
void Node::setVal(int num){value = num;}
void Node::setNext(Node *node){next = node;}
bool Node::hasNext(){if(next){return true;} else{return false;}}
Node* Node::getNext(){return next;}
