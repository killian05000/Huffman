#include "hpp/Node.hpp"

Node::Node(char _key,size_t _value,Node* _father):father(_father),key(_key),value(_value),sonL(nullptr),sonR(nullptr)
{}

Node::~Node()
{
  delete father;
  delete sonL;
  delete sonR;
}

void Node::affichage()
{
  cout << "Key = " << key << " and value = " << value << endl;

}
