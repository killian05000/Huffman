#include <iostream>
#include <cstring>

using namespace std;

class Node
{

private:

  Node *father;
  char key;
  size_t value;
  Node *sonL;
  Node *sonR;

public:


  Node(char _key,size_t _value,Node* _father = nullptr);
  ~Node();

  inline void setFather(Node *f){father=f;}
  inline void setSonL(Node *s){sonL=s;}
  inline void setSonR(Node *s){sonR=s;}
  inline void setKey(char _key){key=_key;}
  inline void setValue(size_t _value){value=_value;}
  inline char getKey() const {return key;}
  inline size_t getValue() const{return value;}
  inline Node* getFather() const {return father;}
  inline Node* getSonL() const {return sonL;}
  inline Node* getSonR() const {return sonR;}

  inline Node& operator=(const Node& src) { father = src.father; key = src.key; value = src.value; sonL = src.sonL; sonR = src.sonR; return *this;}

  void affichage();

};
