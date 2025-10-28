#include<iostream>
using namespace std;


// Definition for singly-linked list
struct ListNode {
    int val;
    ListNode *next;
    ListNode() : val(0), next(nullptr) {}
    ListNode(int x) : val(x), next(nullptr) {}
    ListNode(int x, ListNode *next) : val(x), next(next) {}
};


ListNode* reverseList(ListNode* head) {
    ListNode* prev = NULL;
    ListNode* curr = head;
    ListNode* next;
    if(curr == NULL){
        next == NULL;
    }else{
        next = curr->next;
    }
    while(curr != NULL){
        curr->next = prev;
        prev = curr;
        if(next == NULL){
            return curr;
        }else{
            curr = next;
            next = curr->next;   
        }
    }
    return curr;
}