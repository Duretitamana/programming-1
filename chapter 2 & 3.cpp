    Jimma University
Jimma institute of technology 
    Programming II Individual Assignment
    Name: Dureti Tamena
    DEP’T: Information science
    ID: Ru 0684/14
    
    
    
    
    
    
    
                                       Submitted to:
   						April 2023

                                                    
DEMONSTRATION ON CHAPTER TWO
Introduction to C++ Programming
A computer program is a sequence of instructions written using a Computer Programming Language to perform a specified task by the computer. 
A computer program is also called computer software, which can range from two lines to millions of lines of instructions.  Computer program instructions are also called program source code and computer programming is also called program coding.  A computer without a computer program is just a dump box; it is programs that make computers active.
C++ programs contain a basic building block named a statement.
A statement could be an instruction or combination of instructions.
Preprocessor directives (#)-Preprocessor directives processed by preprocessor before compiling and begin with #. Example, #include <iostream.h> Tells preprocessor to include the input/output stream header file <iostream.h>
C++ identifiers
The C++ identifier is a name used to identify a variable, function, class, module, or any other user-defined item.It consists of a letter followed by any sequence of letters, digits, and underscores. 
C++ comments
Program comments are totally ignored by the compiler and are only intended for human readers.C++ provides two types of comment delimiters: Single-line comment and Multi-line comment.
Variables
A variable is a symbolic name for a memory location in which data can be stored and subsequently recalled. Variables are used for holding data values so that they can be changed and utilized in various computations in a program.
Characters
Character variables (type char) are typically 1 byte, enough to hold 256 values. A char can be interpreted as a small number (0-255) or as a member of the ASCII set. 
Constants
C++ introduces the concept of a named constant that is just like a variable, except that its value cannot be changed. The qualifier const tells the compiler that a name represents a constant. Any data type, built-in or user-defined, may be defined as const. 

Operators
C++ provides operators for composing expressions
arithmetic
relational
logical
It also provides operators which produce useful side-effects
assignment
increment
decrement
Assignment Operators
The assignment operator is used for storing a value at some memory location (typically denoted by a variable).  Its left operand should be an value(left value), and its right operand may be an arbitrary expression. 
C++ Bitwise OR Operator
 The bitwise OR | operator returns 1 if at least one of the operands is 1. Otherwise, it returns 0. The following truth table demonstrates the working of the bitwise OR operator. Let a and b be two operands that can only take binary values i.e. 1 or 0.

Exercise from chapter 2

1. #include <iostream>
using namespace std;
int main()
{
    int x,y,z,result;
    cout<<"please enter three numbers to multiply\n";
    cin>>x>>y>>z;
    result=x*y*z;
    cout<<"The product is:"<<result;
    return 0;
}
2. #include<iostream>
using namespace std;
int main()
{
   float x,y,sum,diff,pro,que;
   cout<<"Enter two numbers to add\n";
   cin>>x>>y;
   sum=x+y;
   cout<<"The sum of two numbers is= "<<sum;

   cout<<"Enter two numbers to substract\n";
   cin>>x>>y;
   diff=x-y;
    cout<<"The difference of two numbers is= "<<diff;
   cout<<"Enter two numbers to multiply\n";
   cin>>x>>y;
   pro=x*y;
    cout<<"The product of two numbers is= "<<pro;
   cout<<"Enter two numbers to divide\n";
   cin>>x>>y;
   que=(x/y);
    cout<<"The quetionent of two numbers is= "<<que;
    return 0;
} 
3. #include <iostream>
using namespace std;
int main()
{
   float r,C;pi=3.14;
   cout<<"Please enter the radius of the circle:\n";
   cin>>r;
   C=2*pi*r;
    cout<<"The circumference of a circle is: \n"<<C;
return 0; }



    DEMONSTRATION ON CHAPTER THREE
    CONTROL  STATEMENTS
C++ provides control structures that serve to specify what has to be done by our program, when and under which circumstances. With the introduction of control structures we are going to have to introduce a new concept: the compound statement or block.
A block is a group of statements which are separated by semicolons (;) like all C++ statements, but grouped together in a block enclosed in braces: { }
Conditional or Selection Statements
It is a decision making structures require that the programmer specify one or more conditions to be evaluated or tested by the program, along with a statement or statements to be executed if the condition is determined to be true, and optionally, other statements to be executed if the condition is determined to be false.
if statement: An ‘if’ statement consists of a Boolean expression followed by one or more statements.
if...else statement :An ‘if’ statement can be followed by an optional ‘else’ statement, which executes when the Boolean expression is false.
if...else if...else Statement :An if statement can be followed by an optional else if...else statement, which is very usefull to test various conditions using single if...else if statement.
Switch statement: a ‘switch’ statement allows a variable to be tested for equality against a list of values. Each value is called a case, and the variable being switched on is checked for each case.
    Iteration or Looping Statements
Loops have as purpose to repeat a statement a certain number of times or while a condition is fulfilled. There are number of iteration (looping) control structure those are as follows: 
1. while loop 
2. do…while loop 
3. fore loop
 4. nested loop
while loop: Repeats a statement or group of statements while a given condition is true. It tests the condition before executing the loop body.
Syntax The syntax of a while loop in C++ is:
              while(condition)
                { statement(s); }
for loop: Execute a sequence of statements multiple times and abbreviates the code that manages the loop variable.
Syntax The syntax of a for loop in C++ is:
          for ( init; condition; increment )
               { statement(s); }
do...while loop: Like a ‘while’ statement, except that it tests the condition at the end of the loop body. 
      Syntax The syntax of a do...while loop in C++ is: 
        do { 
              statement(s);
              }while( condition );
The break statement: A break statement may appear inside a loop (while, do, or for) or a switch statement. It causes a jump out of these constructs, and hence terminates them. A break statement only applies to the loop or switch immediately enclosing it. It is an error to use the break statement outside a loop or a switch.
The continue statement: continue statement causes the loop to skip the rest of its body and immediately retest its condition prior to reiterating. For the for loop, continue causes the conditional test and increment portions of the loop to execute. 

Exercise from chapter 3
1. #include <iostream>
  using namespace std;
   int main()
{
int sum=0;
    for(int i=0;i<100;i++)
    {
        sum=sum+i;
    }
       cout<<sum;
return 0;
}
2. #include <iostream>
using namespace std;
int main()
{
   cout<<"The numbers from 0-100 that are divisible by 2,3 and 5 are: ";
   for(int i=0;i<100;i++)
   {
        if((i%2==0)&&(i%3==0)&&(i%5==0))
     cout<<i<<" ";
   }
    return 0;
}

3. #include <iostream>
using namespace std;
int main()
{
    int n,fact=1;
    cout<<"enter the number\n";
    cin>>n;
    for(int i=n;i>=1;i--)
    {
    fact=fact*i;
    }
    cout<<"The factorial of the given number is:\n"<<fact;
    return 0;
}
4. #include <iostream>
using namespace std;
int main()
{
     float sum=0;
     int num=1;
      while(num<=10)
      {
          sum+=num;
          num++;
      }
        float average;
        average=sum/10;
        cout<<"The average of numbers from 0-10 is: "<<average<<endl;
    return 0;
}

