# OOP-LAB10
Calculating salary of visiting and permanent faculty using abstract concepts of OOP.
Create an abstract class Faculty with the fields name and ID. Provide a pure virtual function salary (). Derive a class Permanent Faculty from Faculty. The class has additional attributes years of service and basic pay. 
The salary of permanent faculty is computed as the sum of basic pay, medical allowance, and house rent. Medical allowance is 10% of basic pay and house rent is 25% of the basic pay. 
 
Derive another class visiting faculty from Faculty. The class has attributes per hour rate and number of hours taught. The salary of visiting faculty is computed by multiplying the per hour rate with the number of hours taught. 
 
Write a program to declare two pointers of class Faculty. Create an object each of visiting and permanent faculty, as sign their addresses to pointers of base class, set the value of data members and call the salary function for each. 
 
Exercise 10.2 
Modify the above program to declare an array of pointers to Faculty. Using dynamic memory allocation, create an object of permanent or visiting faculty as indicated by the user (get user choice). Once the user has entered data for faculty, call the salary method for each object and display the salary. 
