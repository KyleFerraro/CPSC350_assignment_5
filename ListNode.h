#pragma once


template <typename type>
class ListNode {
public:
    type data;
    ListNode* next;
    ListNode* prev;
    ListNode(type d);
    ~ListNode();
};
