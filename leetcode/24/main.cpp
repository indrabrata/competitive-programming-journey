#include <bits/stdc++.h>
using namespace std;
struct ListNode
{
  int val;
  ListNode *next;
  ListNode() : val(0), next(nullptr) {}
  ListNode(int x) : val(x), next(nullptr) {}
  ListNode(int x, ListNode *next) : val(x), next(next) {}
};

class Solution
{
public:
  ListNode *swapPairs(ListNode *head)
  {
    if (head == nullptr)
    {
      return head;
    }
    else if (head->next == nullptr)
    {
      return head;
    }

    int counter = 1;
    ListNode *prevNode = nullptr;
    ListNode *currentNode = head;
    while (currentNode != nullptr)
    {
      if (counter % 2 == 0)
      {
        int temp = prevNode->val;
        prevNode->val = currentNode->val;
        currentNode->val = temp;
      }

      prevNode = currentNode;
      currentNode = currentNode->next;
      counter++;
    }

    return head;
  }
};

int main()
{
}