#include <iostream>
#include<string>
#include <iostream>

using namespace std;

bool solution(string s)
{
    bool answer = true;
    int count = 0;

    for (int i = 0; i < s.size(); i++)
    {
        if (count < 0)
        {
            return false;
        }
        if (s[i] == '(')
        {
            count++;
        }
        else
        {
            count--;
        }
    }
    if (s[0] == '(' && s.back() == ')' && count == 0)
    {
        answer = true;
    }
    else
    {
        answer = false;
    }
    
    return answer;
}

int main()
{
    std::cout << "Hello World!\n";
}