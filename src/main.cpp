#include "../hpp/Fonction.hpp"

int main(int argc,char *argv[])
{
  if(argc > 1)
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

  return 0;
}
