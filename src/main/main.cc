#include <iostream>
#include "src/lib/solution.h"
#include <vector>
using namespace std;

int main()
{
    Solution solution ;
    string s="test";
    cout<<"before reverse = "<< s <<endl;
    solution.StringReverse(s);
    //std::cout << solution.PrintHelloWorld() << std::endl;
    cout<<"after swap = "<< s <<endl;

    return EXIT_SUCCESS;
}