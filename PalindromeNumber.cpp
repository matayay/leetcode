#include <iostream>
#include <string>

using namespace std;


class Solution 
{
    public:
        bool isPalindrome(int x) 
        {
            // Declare variables.
            string original = to_string(x);
            string reverse = original;
            int count = original.length() - 1;

            for ( int i = 0; i < original.length(); i++ )
            {
                reverse[i] = original[count - i];
            }

            if ( reverse == original )
            {
                return true;
            }

            return false;
        }
};