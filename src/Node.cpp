#include "../hpp/Node.hpp"

Node::Node(char _key,size_t _value,Node* _parent)
    :parent(_parent),left(nullptr),right(nullptr),key(_key),value(0)
{}

Node::~Node()
{
  delete parent;
  delete left;
  delete right;
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

void Node::display()
{
  cout << "Key = " << key << " and value = " << value << endl;

}
