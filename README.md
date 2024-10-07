# Pointers

## Aim
To create a C++ program that demonstrates the use of pointers, including accessing the memory addresses of variables and performing pointer arithmetic.

## Software Used
- Dev C++

## Theory

<p>
  In C++, pointers are variables that store the memory address of another variable. Pointers are powerful tools that allow you to directly interact with memory, perform pointer arithmetic, and manipulate data at the memory level.
</p>

### Key Concepts

Pointer: A variable that stores the memory address of another variable.
<br>
Dereferencing: Accessing the value at the memory address stored in a pointer using the * operator.
<br>
Pointer Arithmetic: Performing operations on pointers, such as incrementing or decrementing, which changes the memory address the pointer refers to.

## Algorithm For Demonstrate Pointer Operations

Step 1: Start
<br>
Step 2: Declare variables:
<br>
a as an integer and initialize it with 10.
<br>
ch as a character.
<br>
f as a float.
<br>
Step 3: Declare pointers:
<br>
aptr as an integer pointer and assign it the address of a.
<br>
chptr as a character pointer and assign it the address of ch.
<br>
fptr as a float pointer and assign it the address of f.
<br>
Step 4: Display the memory addresses of a, ch, and f using the respective pointers.
<br>
Step 5: Display the value of a using the aptr pointer.
<br>
Step 6: Increment the aptr pointer and display the new memory address.
<br>
Step 7: Display the value at the new memory address (this might be a garbage value).
<br>
Step 8: Stop
<br>

## Output
![image](https://github.com/user-attachments/assets/ac470741-9aed-4aa8-a6ab-e7fbe84e08f9)


## Conclusion
<p>
  In this experiment, we created a C++ program to demonstrate the use of pointers for accessing memory addresses and performing pointer arithmetic. We observed how incrementing a pointer changes the memory address it points to, which may lead to accessing unexpected (or garbage) values.
</p>

## Algorithm For Pointer Array Traversal

Step 1: Start
<br> 
Step 2: Declare an integer variable n to store the number of elements in the array.
<br> 
Step 3: Prompt the user to enter the number of elements in the array and store the value in n.
<br> 
Step 4: Declare an integer array arr of size n to store the elements.
<br> 
Step 5: Use a for loop to iterate through the array and input each element from the user.
<br> 
Step 6: Declare an integer pointer ptr and assign it the address of the first element of the array (arr).
<br> 
Step 7: Display the memory address of the first element in the array using the ptr pointer.
<br> 
Step 8: Use a for loop to iterate through the array:
<br>
Display each element of the array by dereferencing the pointer ptr.
<br> 
Increment the pointer ptr to point to the next element in the array.
<br>
Step 9: Stop

## Output

![image](https://github.com/user-attachments/assets/0408dd0e-1572-4e9e-84f4-15cc3566e733)
