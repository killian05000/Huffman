#include "../hpp/Node.hpp"

Node::Node(string _key,Node* _parent):key(_key),value(0),left(nullptr),right(nullptr)
{}

Node::~Node()
{
  delete parent;
  delete left;
  delete right;
}

size_t Node::getValue()
{
  return value;
}

void Node::setValue(size_t _value)
{
  value = _value;
}

const bool Node::isRoot()
{
  return(parent==nullptr);
}

const bool Node::isIntern()
{
  return((left != nullptr) || (right != nullptr));
}

const bool Node::isExtern()
{
  return((left == nullptr) && (right == nullptr));
}

const bool Node::isEmpty()
{
  return(value==0); // change the default value
}
