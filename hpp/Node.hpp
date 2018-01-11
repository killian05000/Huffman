#include <iostream>
#include <cstring>

using namespace std;

class Node
{

private:

  Node *parent;
  Node *left;
  Node *right;
  string key;
  size_t value;

public:


  Node(string _key,Node* _parent = nullptr);
  ~Node();

  inline void setParent(Node *f){parent=f;}
  inline void setLeft(Node *s){left=s;}
  inline void setRight(Node *s){right=s;}
  inline void setKey(string _key){key=_key;}
  inline void setValue(size_t _value){value=_value;}

  inline Node* getParent(){return parent;}
  inline Node* getLeft(){return left;}
  inline Node* getRight(){return right;}
  inline string getKey(){return key;}
  inline size_t getValue(){return value;}

  const bool isRoot();
  const bool isIntern();
  const bool isExtern();
  const bool isEmpty();

};
