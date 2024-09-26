#include "document.hpp"

vector<string> split(const string& s, const string& delim) {
    vector<string> tokens;
    size_t prev = 0, pos = 0;
    do
    {
        pos = s.find(delim, prev);
        if (pos == string::npos) pos = s.length();
        string token = s.substr(prev, pos-prev);
        if (!token.empty()) tokens.push_back(token);
        prev = pos + delim.length();
    }
    while (pos < s.length() && prev < s.length());
    return tokens;
}

Document::Document(string path)
{
    file = new ifstream;
    file->open(path);
}

Document::~Document()
{
    file->close();
    delete file;
}

string Document::read()
{
    lastReadContent = "";
    string line;
    if(file->is_open()) 
    {
        while(getline(*file, line)) { lastReadContent.append(line); }
    }
    return lastReadContent;
}