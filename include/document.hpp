#ifndef DOCUMENT_H
#define DOCUMENT_H

#include <string>
#include <vector>
#include <fstream>

using namespace std;

vector<string> split(const string& text, const string& delim);

class Document
{
public:
    Document(string path);
    ~Document();
    Document(const Document&) = delete;
    Document& operator=(const Document&) = delete;
    string read();
private:
    string lastReadContent;
    ifstream* file;
};

#endif