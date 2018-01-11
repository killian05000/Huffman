#include "hpp/Tree.hpp"

size_t Tree::NbrT = 0;

Tree::Tree(string _name):name(_name),root(nullptr),NbrN(0)
{
  ++NbrT;
}

//Arbre::Arbre(Arbre& _arbre):name()

Tree::~Tree()
{
  //delete tous les noeuds
}

void Tree::insertN(string _name)
{

  if(root == nullptr)
  {
    root = new Node(_name);
  }
  else
  {
    bool insert = false;
    size_t i = 0;
    Node *n = root;
    while(!insert || i > getNbrN())
    {
      if(_name.compare(n->getKey()) > 0) //fils gauche
      {

        if(n->getSonL() == nullptr)
        {
            n->setSonL(new Node(_name,n));
            insert = true;
        }
        else if(n->getSonL() != nullptr)
        {
          n = n->getSonL();
        }

      }
      else if(_name.compare(n->getKey()) == 0)
      {
        n->setValue(n->getValue()+1);
        insert = true;
      }
      else //fils droit
      {

        if(n->getSonR() == nullptr)
        {
            n->setSonR(new Node(_name,n));
            insert = true;
        }
        else if(n->getSonR() != nullptr)
        {
          n = n->getSonR();
        }

      }
      ++i;
    }

  }

}

/*void calcule(Noeud* n)
{

  string valeur = n->getValeur();

}*/

void Tree::removeN(string _name)
{

}
