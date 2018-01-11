#include "Node.hpp"

class Tree
{

private:

  string name;
  Node *root;
  size_t NbrN;
  static size_t NbrT;

public:

  Tree(string _name);
  //Tree(Tree& _tree);
  ~Tree();

  inline string getName(){return name;}
  inline size_t getNbrN(){return NbrN;}
  inline size_t getNbrT(){return NbrT;}

  void insertN(string _name);
  void removeN(string _name);
  //void chercherN(string _name);

protected:

  //void calcul(Noeud *n);

};
