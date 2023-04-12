#include <iostream>
#include <string>
#include <vector>

using namespace std;

struct ListNode {
    int val;
    ListNode *next;
    ListNode() : val(0), next(nullptr) {}
    ListNode(int x) : val(x), next(nullptr) {}
    ListNode(int x, ListNode *next) : val(x), next(next) {}
};

class Solution {
public:
    ListNode* addTwoNumbers(ListNode* l1, ListNode* l2) {
        ListNode *tempOne;
        ListNode *tempTwo;
        int count1 = 0;
        int count2 = 0;

        // Size of first list.
        tempOne = l1;
        while (tempOne != nullptr)
        {
            count1++;
            tempOne = tempOne->next;
        }

        // Size of second list.
        tempTwo = l2;
        while (tempTwo != nullptr)
        {
            count2++;
            tempTwo = tempTwo->next;
        }

        vector<int> temp_sum;
        vector<int> sum;
        int result;
        int remainder = 0;

        if (count1 >= count2)
        {
            tempOne = l1;
            tempTwo = l2;
        }

        else
        {
            tempOne = l2;
            tempTwo = l1;
        }

        while (tempOne != nullptr)
        {
            if (tempTwo != nullptr)
            {
                if (tempOne->val + tempTwo->val + remainder < 10)
                {
                    result = tempOne->val + tempTwo->val + remainder;
                    remainder = 0;
                    temp_sum.push_back(result);
                }

                else
                {
                    result = tempOne->val + tempTwo->val + remainder;
                    remainder = 1;
                    temp_sum.push_back(result - 10);
                }

                tempTwo = tempTwo->next;
            }

            else
            {
                if (tempOne->val + remainder < 10)
                {
                    result = tempOne->val + remainder;
                    remainder = 0;
                    temp_sum.push_back(result);
                }

                else
                {
                    result = tempOne->val + remainder;
                    remainder = 1;
                    temp_sum.push_back(result - 10);
                }
            }

            tempOne = tempOne->next;
        }

        if (remainder == 1)
        {
            temp_sum.push_back(remainder);
        }

        for (int i = temp_sum.size() - 1; i >= 0; i--)
        {
            sum.push_back(temp_sum[i]);
        }

        ListNode *head = new ListNode;
        head->val = (sum[sum.size() - 1]);
        head->next = nullptr;
        ListNode *iterate = head;

        for (int i = sum.size() - 2; i < sum.size(); i--)
        {
            ListNode *new_node = new ListNode;
            new_node->val = (sum[i]);
            new_node->next = nullptr;
            iterate->next = new_node;

            if (i == sum.size() - 2)
            {
                head = iterate;
            }

            iterate = iterate->next;
        }

        return head;
    }
};