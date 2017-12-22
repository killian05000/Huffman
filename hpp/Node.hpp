#include <iostream>
#include <cstring>

using namespace std;

class Node
{

private:

  Node *father;
  string key;
  size_t value;
  Node *sonL;
  Node *sonR;

public:


  Node(string _key,Node* _father = nullptr);
  ~Node();

  inline void setFather(Node *f){father=f;}
  inline void setSonL(Node *s){sonL=s;}
  inline void setSonR(Node *s){sonR=s;}
  inline void setKey(string _key){key=_key;}
  inline void setValue(size_t _value){value=_value;}
  inline string getKey(){return key;}
  inline size_t getValue(){return value;}
  inline Node* getFather(){return father;}
  inline Node* getSonL(){return sonL;}
  inline Node* getSonR(){return sonR;}

};
