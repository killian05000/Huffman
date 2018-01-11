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
/*
void Tree::insertN(string _name,Node *n)
{

  if(root == nullptr)//Si pas de racine
  {
    root = new Node(_name);
  }
  else //Si oui chercher sa place
  {
    if(n == nullptr) //Regarde si on ne met rien il est forcement root
    {
      n = root;
    }

    if(_name.compare(n->getKey()) > 0) //fils gauche
    {

      if(n->getSonL() == nullptr)
      {
          n->setSonL(new Node(_name,n));
      }
      else if(n->getSonL() != nullptr)
      {
        n = n->getSonL();
        insertN(_name,n);
      }

      }
    else if(_name.compare(n->getKey()) == 0)//Même key
    {
      n->setValue(n->getValue()+1);
    }
    else //fils droit
    {

      if(n->getSonR() == nullptr)
      {
          n->setSonR(new Node(_name,n));
      }
      else if(n->getSonR() != nullptr)
      {
        n = n->getSonR();
        insertN(_name,n);
      }

    }

  }

}*/

/*void calcule(Noeud* n)
{

  string valeur = n->getValeur();

}*/
/*
void Tree::removeN(string _name)
{

}*/
