#include <iostream>
#include <stack>

using namespace std;

class Solution {
public:
    bool isValid(string s) {
        stack<char> my_stack;

        for (int i = 0; i < s.length(); i++)
        {
            if (s[i] == '(' || s[i] == '[' || s[i] == '{')
            {
                my_stack.push(s[i]);
                continue;
            }

            else if (my_stack.empty())
            {
                return false;
            }

            switch(s[i])
            {
                case ')':
                    if (my_stack.top() == '(')
                    {
                        my_stack.pop();
                    }

                    else
                    {
                        return false;
                    }
                    break;

                case ']':
                    if (my_stack.top() == '[')
                    {
                        my_stack.pop();
                    }

                    else
                    {
                        return false;
                    }
                    break;

                case '}':
                    if (my_stack.top() == '{')
                    {
                        my_stack.pop();
                    }

                    else
                    {
                        return false;
                    }
                    break;
            }
        }

        if (!my_stack.empty())
        {
            return false;
        }

        return true;
    }
};