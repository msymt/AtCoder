# Definition for singly-linked list.
# class ListNode:
#     def __init__(self, val=0, next=None):
#         self.val = val
#         self.next = next
class Solution:
    def sortList(self, head: Optional[ListNode]) -> Optional[ListNode]:
        list_numbers = []
        while head != None:
            list_numbers.append(head.val)
            head = head.next
        
        list_numbers = sorted(list_numbers)
        answer_list = ListNode(0)
        result = answer_list
        
        for number in list_numbers:
            answer_list.next = ListNode(number)
            answer_list = answer_list.next
        return result.next