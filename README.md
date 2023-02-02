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
| Insertion   | O(n)/O(1) for end | O(n)/O(1) for start&end | O(1)                 |
| Deletion    | O(n)/O(1) for end | O(n)/O(1) for start     | O(1)                 |


2. Usually for singly and doubly linked lists, we reference both the head and tail for speed considerations. What would be the cost if you only had your head referenced, and you wanted to push to the tail of either?  $O(?)$

O(n)



3. Name an example where an array is better than a linked list, and an example where a linked list is better than an array. Make sure to reference the big O as part of your reasoning. 



Note: Make sure look at your finished markdown in the browser hosted on github or via a markdown preview extension. To confirm the notation is showing up properly. 

## Important notes

* Your code **must compile and run** on the Khoury machines to earn credit. Make sure you test your programs on these machines, as this is where we grade your assignments.
* You must commit any additional files(if any) into your repository so we can test your code.
  * Points will be lost if you forget!
* Do not forget, once you have pushed your changes to your repo make sure that you **submit them to Gradescope before the assignment deadline!**

