#include <iostream>
#include <string>

using namespace std;


class Solution 
{
    public:
        int maximum69Number (int num) 
        {
            // Declare variables.
            string num_string = to_string(num);
            
            for ( int i = 0; i < num_string.length(); i++ )
            {
                if ( num_string[i] == '6' )
                {
                    num_string[i] = '9';
                    break;
                }
            }
            
            return stoi(num_string);
        }
};