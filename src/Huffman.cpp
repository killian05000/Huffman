#include "../hpp/Fonction.hpp"

bool myfunction (Node *i,Node *j) { return (i->getValue()<j->getValue()); }

void construction(vector<Node*> &m)
{
  sort(m.begin(), m.end(), myfunction);
  while(m.size() > 1)
  {

    Node *n = m[0];

    m[0] = new Node (' ',(n->getValue()+m[1]->getValue()));
    m[0]->setLeft(n);
    m[0]->setRight(m[1]);
    m.erase(m.begin()+1);

    sort(m.begin(), m.end(), myfunction);

  }

}

std::map<char,string> Huffman(istream &is)
{

  std::map<char,int> tab;
  std::map<char,int>::key_compare mycomp = tab.key_comp();
  std::map<char,string> fin;


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

  for(std::map<char,int>::iterator it = tab.begin(); it != tab.end(); ++it)
  {
    nodes.push_back(new Node(it->first,it->second));
  }

  construction(nodes);

  for(unsigned int i = 0; i < nodes.size();++i)
  {
    nodes[i]->display();
  }

  nodes[0]->FindBit(fin);

  for(std::map<char,string>::iterator ia = fin.begin(); ia != fin.end(); ++ia)
  {
        std::cout << ia->first << " => " << ia->second << '\n';
  }

  return fin;

}
