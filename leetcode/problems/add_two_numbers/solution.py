# Definition for singly-linked list.
# class ListNode:
#     def __init__(self, val=0, next=None):
#         self.val = val
#         self.next = next
class Solution:    
    def addTwoNumbers(self, l1: Optional[ListNode], l2: Optional[ListNode], carry=0) -> Optional[ListNode]:
        sum_val = carry + l1.val + l2.val
        carry = sum_val // 10
        cur = ListNode(sum_val % 10)
        if l1.next != None or l2.next != None or carry != 0:
            if l1.next == None:
                l1.next = ListNode(0)
            if l2.next == None:
                l2.next = ListNode(0)
            cur.next = self.addTwoNumbers(l1.next, l2.next, carry)
        return cur
    