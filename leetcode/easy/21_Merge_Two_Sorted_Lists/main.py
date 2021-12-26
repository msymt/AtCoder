# Definition for singly-linked list.
# class ListNode:
#     def __init__(self, val=0, next=None):
#         self.val = val
#         self.next = next
class Solution:
    def mergeTwoLists(self, list1: Optional[ListNode], list2: Optional[ListNode]) -> Optional[ListNode]:
        tmp = ans = ListNode(0)
        while list1 and list2:
            if list1.val < list2.val:
                # ans.nextにlist1を追加し，list1を次の要素にする
                ans.next = list1
                list1 = list1.next
            else:
                # ans.nextにlist2を追加し，list2を次の要素にする
                ans.next = list2
                list2 = list2.next
            # 次の要素へ
            ans = ans.next
        # 最後に余った要素を追加
        ans.next = list1 or list2
        # tmp: ListNode{val: 0, next: ListNode{val: 1, next: ListNode{val: 1, next: ListNode{val: 2, next: ListNode{val: 3, next: ListNode{val: 4, next: ListNode{val: 4, next: None}}}}}}}
        return tmp.next