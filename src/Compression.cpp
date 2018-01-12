#include "../hpp/Fonction.hpp"


void Compression(istream &is,std::map<char,string> &ok)
{
  cout << "Debut compression ..." << endl;
  for(std::map<char,string>::iterator ia = ok.begin(); ia != ok.end(); ++ia)
  {
        std::cout << ia->first << " => " << ia->second << '\n';
  }

}
