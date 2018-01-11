#include "hpp/Node.hpp"

Node::Node(string _key,Node* _father):key(_key),value(0),sonL(nullptr),sonR(nullptr)
{}

Node::~Node()
{
  delete father;
  delete sonL;
  delete sonR;
}
