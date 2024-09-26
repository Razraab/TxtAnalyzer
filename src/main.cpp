#include <iostream>
#include "document.hpp"
#include "analyzer.hpp"

int main(int argc, char* argv[])
{
    if(argc > 1)
    {
        string path = argv[1];
        string term = ".txt";
        unsigned end = path.length() - term.length();
        if (path.compare(end, term.length(), term) == 0)
        {
            string input;
            vector<string> args;
            Document doc(path);
            Analyzer analyzer(doc.read());
            while(true)
            {
                getline(std::cin, input);
                args = split(input, " ");
                for(ExecuteOperation* operation : analyzer.operations)
                {
                    if(operation->name == args[0])
                    {
                        operation->args = args;
                        string result = operation->operate();
                        std::cout << result << std::endl;
                        break;
                    }
                }
            }
        }
    }
    return 1;
}
