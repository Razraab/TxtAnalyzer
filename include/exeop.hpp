#ifndef EXECUTE_OPERATION_H
#define EXECUTE_OPERATION_H

#include <vector>
#include <string>

using namespace std;

class ExecuteOperation
{
public:
    string name;
    vector<string> args;
    ExecuteOperation(string text) : text(text) { }
    ExecuteOperation(string text, string name) : text(text), name(name) { }
    virtual string operate() const = 0;
protected:
    string text;
};

class GetTextCountOperation : public ExecuteOperation
{
public:
    GetTextCountOperation(string text) : ExecuteOperation(text, "gsc") { }
    string operate() const override;
};

class GetWordLengthOperation : public ExecuteOperation
{
public:
    GetWordLengthOperation(string text) : ExecuteOperation(text, "gwl") { }
    string operate() const override;
};

class GetSuggestionLengthOperation : public ExecuteOperation
{
public:
    GetSuggestionLengthOperation(string text) : ExecuteOperation(text, "gsl") { }
    string operate() const;
};

#endif