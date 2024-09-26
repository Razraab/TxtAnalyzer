#ifndef ANALYZER_H
#define ANALYZER_H

#include "exeop.hpp"
#include <map>

class Analyzer
{
public:
    vector<ExecuteOperation*> operations;
    Analyzer(string text);
    ~Analyzer();
    string getText() const;
private:
    string text;
};

#endif