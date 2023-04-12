#include <iostream>
#include <string>

using namespace std;

class Solution {
public:
    int lengthOfLastWord(string s) 
    {
        int len = 0;
        int index;
        
        for ( int i = 0; i < s.length(); i++ )
        {
            if ( i == 0 && s[i] != ' ' )
            {
                index = i;
                continue;
            }
            
            if ( s[i] != ' ' && s[i-1] == ' ' )
            {
                index = i;
            }
        }
        
        for ( int i = index; i < s.length(); i++ )
        {
            if ( s[i] != ' ' )
            {
                len++;
            }
        }
        
        return len;
    }
};