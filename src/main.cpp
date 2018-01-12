#include "../hpp/Fonction.hpp"

int main(int argc,char *argv[])
{
<<<<<<< HEAD
  if(argc > 1)
=======
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
>>>>>>> 0e0f217ea10f4b35bde4dde9567a0b1f5cd86c18
  {
    if(std::string(argv[1]) == std::string("huff") && argc > 2)
    {
      cout << "lel";
      fstream is(std::string(argv[2]),std::fstream::in);
      Huffman(is);
    }

    if(std::string(argv[1]) == std::string("huffcomp") && argc > 2)
    {
      std::map<char,string> ok;
      fstream is(std::string(argv[2]),std::fstream::in);
      ok = Huffman(is);

      //fstream ls(std::string(argv[3]),std::fstream::in);
      Compression(is,ok);
    }

  }

<<<<<<< HEAD
=======


  
>>>>>>> 0e0f217ea10f4b35bde4dde9567a0b1f5cd86c18
  return 0;
}
