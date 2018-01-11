#include <iostream>
#include "../hpp/Tree.hpp"
#include <fstream>
#include <string>
#include <unordered_map>
#include <map>
#include <vector>
#include <algorithm>

using namespace std;

bool myfunction (Node *i,Node *j) { return (i->getValue()<j->getValue()); }

void construction(vector<Node*> m)
{

  while(m.size() > 1)
  {

    Node *n = new Node(' ',m[1]->getValue()+m[0]->getValue());
    n->setLeft(m[0]);
    n->setRight(m[1]);

  }

}

int main()
{

  fstream is("Jules.txt",std::fstream::in);

  std::map<char,int> tab;
  std::map<int,int> freq;
  std::map<char,int>::key_compare mycomp = tab.key_comp();

  char a;

  while (is.good())
  {
    is >> a;
    tab[a] += 1;

  }

  char highest = tab.rbegin()->first;

  std::map<char,int>::iterator it = tab.begin();
  do
  {
    std::cout << it->first << " => " << it->second << '\n';
  } while ( mycomp((*it++).first, highest) );

  std::vector<Node*> nodes;
  it = tab.begin();

  for(unsigned int i = 0; i < tab.size();++i)
  {
    nodes.push_back(new Node(it->first,it->second));
    (*it++).first;
  }

  for(unsigned int i = 0; i < nodes.size();++i)
  {
    nodes[i]->display();
  }

  std::sort(nodes.begin(), nodes.end(), myfunction);

  for(unsigned int i = 0; i < nodes.size();++i)
  {
    nodes[i]->display();
  }




  return 0;
}
