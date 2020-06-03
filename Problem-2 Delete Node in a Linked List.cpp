// Day 2 June LeetCode Challenge

// Problem 2 
// Write a function to delete a node (except the tail) in a singly linked list, given only access to that node.


// Input
// head = [7,4,9,2,1,3,6], node = 2

// Output
// [7,4,9,1,3,6]

// Explanation: You are given the fourth node with value 2, the linked list should become  7 -> 4 -> 9 -> 1-> 3 -> 6  after calling your function.



#include<bits/stdc++.h>
using namespace std;

class ListNode
{
    int data;
    ListNode* next;
	
    ListNode(int data)
    {
	this->data = data;
        next = nullptr;
    }
};



void deleteNode(ListNode* node) 
{
    if(node == nullptr || node->next == nullptr)
        return;
           
    ListNode* temp = node->next;
    node->data = node->next->data;
    node->next = node->next->next;
    delete temp;
        
}
