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
  ~Tree();

  inline string getName() const {return name;}
  inline size_t getNbrN() const {return NbrN;}
  inline size_t getNbrT() const {return NbrT;}

  //void insertN(string _name,Node *n = nullptr);
  //void removeN(string _name);

protected:

  //void calcul(Noeud *n);

};
