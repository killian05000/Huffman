#include "../hpp/Node.hpp"

Node::Node(char _key,size_t _value,Node* _parent)
    :parent(_parent),left(nullptr),right(nullptr),key(_key),value(_value)
{}

Node::~Node()
{
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

const bool Node::isEmptyLeft()
{
  return(left==nullptr); // change the default value
}

const bool Node::isEmptyRight()
{
  return(right==nullptr); // change the default value
}

void Node::display()
{
  cout << "Key = " << key << " and value = " << value << endl;

}

void Node::FindBit(map<char,string> &a, string path)
{
  if(isExtern())
  {
      a[key] = path;
  }
  else
  {
    if(!isEmptyLeft())
    {
      left->FindBit(a,path + "0");
    }

    if(!isEmptyRight())
    {
      right->FindBit(a,path + "1");
    }

  }

}
