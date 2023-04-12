#include <iostream>
#include <string>

using namespace std;

class Solution {
public:
    int reverse(int x) {
        bool sign_changed = false;
        string str_x = to_string(x);
        string new_str = "";
        long long int new_x;

        if (x > 2147483647 || x < -2147483647)
        {
            return 0;
        }
        
        if (x < 0)
        {
            x *= -1;
            sign_changed = true;
        }

        for (int i = str_x.length() - 1; i >= 0; i--)
        {
            new_str += str_x[i];
        }

        new_x = stol(new_str);

        if (new_x > 2147483647)
        {
            return 0;
        }

        if (sign_changed == true)
        {
            new_x *= -1;
        }

        return new_x;
    }
};