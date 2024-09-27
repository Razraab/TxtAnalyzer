#include "analyzer.hpp"

Analyzer::Analyzer(string text) : text(text)
{
    operations = vector<ExecuteOperation*>
    {
        new GetTextCountOperation(text), new GetWordLengthOperation(text),
        new GetSuggestionLengthOperation(text)
    };
}

Analyzer::~Analyzer()
{
    for(ExecuteOperation* operation : operations) { delete operation; }
}

string Analyzer::getText() const 
{ 
    return text; 
}
