#include "exeop.hpp"
#include "general.hpp"
#include <iostream>
#include <stdlib.h>

string GetTextCountOperation::operate() const
{
    return to_string(text.length());
}

string GetWordLengthOperation::operate() const
{
    if(args.size() == 2)
    {  
        string temp = text;
        remove_all_punct(temp);
        vector<string> words = split(temp, " ");
        int index = static_cast<int>(atoi(args[1].c_str()));

        if(words.size() > index) return to_string(words[index].length());
        else return "There is no word with this index";
    }
    return "Indicate the index of the word";
}

void log(vector<string> v) { for(string s : v) { std::cout << s << std::endl; } }

string GetSuggestionLengthOperation::operate() const
{
    if(args.size() == 2)
    {
        string temp = text;
        vector<string> sugs = split(temp, ".!?");

        for(string sug : sugs) { cout << sug << endl; }
        int index = static_cast<int>(atoi(args[1].c_str()));

        if(sugs.size() > index) return to_string(sugs[index].length());
        else return "There is no suggestion with this index";
    }
    return "Indicate the index of the suggestion";
}