#include <iostream>
#include "../hpp/Tree.hpp"
#include <fstream>
#include <string>
#include <unordered_map>
#include <map>
#include <vector>
#include <algorithm>

using namespace std;


std::map<char,string> Huffman(istream &is);
void Compression(istream &is,std::map<char,string> &ok);
