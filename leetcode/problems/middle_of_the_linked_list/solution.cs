/**
 * Definition for singly-linked list.
 * public class ListNode {
 *     public int val;
 *     public ListNode next;
 *     public ListNode(int val=0, ListNode next=null) {
 *         this.val = val;
 *         this.next = next;
 *     }
 * }
 */
public class Solution {
    public ListNode MiddleNode(ListNode head) {
        List<ListNode> lst = new List<ListNode>();
        while(head != null) {
            lst.Add(head);
            head = head.next;
        }
        return lst[lst.Count / 2]; 
    }
}