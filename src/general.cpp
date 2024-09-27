#include "general.hpp"

vector<string> split(const string& str, const string& delimeters) {
    vector<string> res;
    char* token = std::strtok(const_cast<char*>(str.c_str()), delimeters.c_str());        
    while (token != nullptr)
    {         
        res.push_back(token);            
        token = std::strtok(nullptr, delimeters.c_str());               
    }
    return res;
}

void remove_all_punct(string& str)
{
    str.erase(std::remove(str.begin(), str.end(), '.'), str.end());
    str.erase(std::remove(str.begin(), str.end(), ','), str.end());
    str.erase(std::remove(str.begin(), str.end(), ':'), str.end());
    str.erase(std::remove(str.begin(), str.end(), '-'), str.end());
    str.erase(std::remove(str.begin(), str.end(), '!'), str.end());
    str.erase(std::remove(str.begin(), str.end(), '?'), str.end());
}

string vector_to_string(vector<string> v)
{
    string str;
    for(string p : v) { str += p; }
    return str;
}

void concat_v(vector<string> &a, vector<string> &b)
{
    a.insert(
        a.end(),
        make_move_iterator(b.begin()),
        make_move_iterator(b.end())
    );
}