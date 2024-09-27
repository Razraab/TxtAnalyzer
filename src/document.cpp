#include "document.hpp"

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