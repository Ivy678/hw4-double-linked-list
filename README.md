# Homework 04: Doubly Linked List

Name: Zichuan Zhu

Github Account name: Ivy678

How many hours did it take you to complete this assignment (estimate)? 
6 hours.

Did you collaborate with any other students/TAs/Professors? If so, tell us who and in what capacity.  
- Ori, we discussed about the special condition for dll_push_back.
- Jack, we discussed about the dll_insert.
- Ask the TA about the double free problem.


Did you use any external resources (you do not have to cite in class material)? (Cite them below)  
- Baidu
- Google


(Optional) What was your favorite part of the assignment? 

(Optional) How would you improve the assignment? 

## Understanding Time Complexity

1. Using a markdown table and markdown/latex math, show the BigO for Arrays, Singly Linked Lists, Doubly Linked Lists (so total of 3). For the columns, you will look at the Average Case Time Complexity for Access, Search/Find,	Insertion, and Deletion. 

| BigO        | Arrays            | Singly Linked Lists     |  Doubly Linked Lists |
|-------------|-------------------|-------------------------|----------------------|
| Access      | O(1)              | O(n)                    | O(n)                 |
| Search/Find | O(n)              | O(n)                    | O(n)                 |
| Insertion   | O(n)              | O(n)                    | O(n)                 |
| Deletion    | O(n)              | O(n)                    | O(n)                 |


2. Usually for singly and doubly linked lists, we reference both the head and tail for speed considerations. What would be the cost if you only had your head referenced, and you wanted to push to the tail of either?  $O(?)$

If we only have a reference to the head of a singly linked list, to add an element to the tail, we would need to traverse the list from the head until the last node is reached, which takes O(n) time in the worst case where n is the number of elements in the list.

For a doubly linked list, if you only have a reference to the head, adding an element to the tail can be done in constant time O(1) by simply accessing the tail node through the head node's next pointers.



3. Name an example where an array is better than a linked list, and an example where a linked list is better than an array. Make sure to reference the big O as part of your reasoning.

- Example where an array is better than a linked list:

When random access to elements is frequently needed, arrays are better than linked lists as arrays provide O(1) time complexity for index based access, while linked list provides O(n) time complexity for the same.

- Example where a linked list is better than an array:

When frequent insertion and deletion operations are performed, linked lists are better than arrays as in linked list, inserting or deleting an element can be done in O(1) time complexity by updating the pointers, while in arrays, this operation requires O(n) time complexity as elements need to be shifted to change the size of an array.



Note: Make sure look at your finished markdown in the browser hosted on github or via a markdown preview extension. To confirm the notation is showing up properly. 

## Important notes

* Your code **must compile and run** on the Khoury machines to earn credit. Make sure you test your programs on these machines, as this is where we grade your assignments.
* You must commit any additional files(if any) into your repository so we can test your code.
  * Points will be lost if you forget!
* Do not forget, once you have pushed your changes to your repo make sure that you **submit them to Gradescope before the assignment deadline!**

