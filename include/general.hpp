#ifndef __GENERAL_H
#define __GENERAL_H

#include <string>
#include <sstream>
#include <vector>

using namespace std;

void remove_all_punct(string& str);
vector<string> split(const string&, const string&);
string vector_to_string(vector<string>);
void concat_v(vector<string>&, vector<string>&);

#endif