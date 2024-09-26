#include "document.hpp"
#include "exeop.hpp"    
#include <stdlib.h>
#include <iostream>


string GetTextCountOperation::operate() const
{
    return to_string(text.length());
}

string GetWordLengthOperation::operate() const
{
    if(args.size() == 2)
    {
        vector<string> words = split(text, " ");
        int index = static_cast<int>(atoi(args[1].c_str()));

        if(words.size() > index) return to_string(words[index].length());
        else return "There is no word with this index";
    }
    return "Indicate the index of the word";
}