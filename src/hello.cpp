#include <iostream>
#include <windows.h>

void HelloProc(char *pszString)
{
    std::cout << pszString << std::endl;
}

// #include"hellow.cpp"

int main()
{
    char *pszString = "Hello, World";
    HelloProc(pszString);

    return 0;
}
