Logical Operators

! = logical negation

&& = logical and

|| = logical or

Logical operators produce either 0 or 1 as their result. Logical operators treat any nonzero operand as a true value and any zero operand as a false value.

Logical Operators behave as follows:

- !expr has the value 1 if expr has the value 0.

- expr 1 && expr2 has the value 1 if the value expr1 and expr2 are both non-zero.










The if statement allows a program to choose between two alternatives by testing the values of an expression. 

        if (expression) statement
The parentheses around the expression are mandatory; they're part of the if statement, not part of the expression. Also note the word then doesn't come after the parentheses, as it would in some programming languages. The expression in the parenthese is evaluated first, then the statement after the parenthese is executed.

        if (line num == MAX_LINES)
            line_num = 0;
The statement line_num = -; is executed if the condition line_num == MAX_LINES is true(has a nonzero value.)

        if (0 < i && i < n) 
        Test whether 0 < i < n
        if (i < 0 || i >= n)
        Test the opposite condition(i is outside the range)
Compound Statements

This allows us to control if we want two or more statements.

        if (line_num == MAX_LINES) {
            line_num = 0;
            page_num++;
        }

The else Clause

An if statement may have an else clause:

        if (expression) statement else statement

The statement that follows the word else is executed if the expression in parentheses has the value 0.

        if (i > j)
            max = i;
        else
            max = j;
There are no restrictions on what kind of statements can appear inside an if statement. If statements can also be nested inside other if statements. 

        if (i > j)
            if (i > k)
                max = i;
            else 
                max = k;
        else
            if (j > k)
                max = j;
            else
                max = k;

Aligning each else with the matching if makes the nesting eaiser to see. If you still find the nesting confusing don't hesitate to add braces:

        if (i > j) {
            if ( i > k)
                max = i;
            else
                max = k;
        } else {
          if (j > k)
            max = j;
          else
            max = k;
        }

Adding braces add more structure like parentheses. Some programmers use as many braces as possible inside if statements. They include a pair of braces for every if clause and every else clause;

        if ( i > j) {
            if (i > k) {
                max = i;
            }   else {
                max = k;
            }
        }   else {
            if ( j > k) {
                max = j; 
            }   else {
                max = k;
            }
        }
        
Cascaded if Statements
We can test a series of conditions, and stop as soon as one of them is true. Casescaded if statements test whether n is less than 0, equal to 0, or greater than 0:

        if (n < 0)
            printf("n is less than 0\n);
        else
            if (n == 0)
                printf("n is equal to 0\n");
            else
                printf("n is greater than 0\n);

Although the second if is nested inside the first if statement, C programmers don't usually indent. Instead they align each else with the original if:

        if (n < 0)
            printf("n is less than 0\n);
        else if (n == 0)
            printf("n is equal to 0\n");
        else
            printf("n is greater than 0\n);

        
        
        if (expression)
            statement
        else if (expression)
            statement
        else if (expression)
            statement
        else 
            statement

A cascaded if statment is just an ordinary if statement that happens to have another if statement as its else clause( and that if statement has another if statement as its else clause).

The "Dangling else" Problem

The else clause belongs to the nearest if statement. Unless you enclose the inner if statement in braces:

    if (y != 0) {
        if (x != 0)
            result = x / y;
    } else
        printf("Error: y is equal to 0\n); 

The example illustrates the value of braces.

Conditional Expressions

C's if statement allows a program to perform one of two actions depending on the value of a condition. C also has an operator that allows an expression to produce one of two values depending on the value of the condition. The conditional operator consists of two symbols ( ? and :) which must be used together in the following way:

expr1 ? expr2 : expr 3

The conditional operator is unique among C operators in that it requires three operands instead of one or two. The conditonal expression above should be read as " if expr1 then expr2 else expr3" The expression is evaluated in stages: expr1 is evaluated first, is it's not zero, then expr2 is evaluated, and it's value is the value of the entire conditional expression. If expr1 is zero, then the value of expr3 is the value of the conditional.

Example illustrates the conditional operator

        int i, j, k;
        i = 1;
        j = 2;
        k = i > j ? i : j; /* k is now 2 */
        k = (i >= 0 ? i : 0) + j /* k is now 3 */

The conditional expression i > j ? i : j in the first assignment to k returns the value of either i or j, depending on which one is larger. Since i has value 1 and j has the value 2, the i > j comparison fails, and the value of the conditional is 2, which is assigned to k. In the second assignment to k, the i >- 0 compariso succeeds, the conditional expression has the value of 1, which is added to j to produce 3. The parentheses are necessary, because the precendence of the conditional operator is less than that of the other operators we have discussed so far. Conditional expression tend to make programs shorter, but harder to understand. One place that is tempting is the return statement.

        if (i > j)
            return i;
        else 
            return j;

Programmers would write

        return i > j ? i : j;

Calls of the printf can sometimes benefit from condition expressions. Instead of 

    if (i > j)
        printf("%d\n", i);
    else 
        printf("%d\n", j);

we could simple write

printf("%d\n", i > j ? i : j);

Conditional expressions are also common in certain kinds of marco definitions.

BOOLEAN TYPE

Boolean type can be declared by writing

        _Bool flag;

_Bool is an interger type (unsigned interger) so a _Bool variable is really just an integer variable in disguise. This variable can only be assigned 0 or 1. Storing any non-zero variable into a _Bool variable will cause the variable to be assigned 1:

        flag = 5 /* flag is assigned 1 */

In addition to defining the _Bool type, a new header, <stbool.h> makes it easier to work with Boolean values. This header provides a macro, bool, that stands for _Bool. If included we can write this

    bool flag; /* same as _Bool flag; */

Also supplies macros named true and false, which stand for 1 and 0.

        flag = false;

        flag = true;

Switch Statement
An alternative to the cascaded if statement, is the switch statement.

        switch (grade) {
            case 4: printf("Excellent");
                    break;
            case 3: printf("Good");
                    break;
            case 2: printf("Average");
                    break;
            case 1: printf("Poor");
                    break;
            case 0: printf("Failing");
                    break;
            default: printf("Illegal grade");
                     break;
        }

When this statement is executed, the value of the variable grade is tested against 4,3,2,1 and 0. If it matches 4, for example the message Excellent is printed, then the break statement transfers control to statement following the switch. If the value of grade dosen't match any of the choices listed, the default case applies, and the message Illegal grade is printed.

A switch statment is often easier to read than a cascaded if statement. Moreover switch statements are often faster than if statements, especially when that are more cases.

        switch (expression) {
            case constant-expression : statements
            ......
            case constant-expression : statements
            default : statements
        }

Switch statements components one by one
- Controlling expression. The word switch must be followed by an integer expression in parentheses. Characters are treated as integers in C and thus can be tested in switch statements. Floating-point numbers and strings don't qualify.
- Case labels. Each case begins with a label of the form
        
        case constant expression : 
A constant expression is much like an ordinary expression except that it can't contain variables or function calls. Thus 5 is a constant expression, and 5 + 10 is a constant expression, but n + 10 isn't a constant expression(unless n is a macro that represents a constant). The constant expression in a case label must evaluate to an integer.

- Statements.

After each case label comes any number of statements. No braces are required around the statements. The last statement in each group is normally break.

Duplicate case labels aren't allowed. The order of the cases dosen't matter, the default case dosen't need to come last. 

Break

T