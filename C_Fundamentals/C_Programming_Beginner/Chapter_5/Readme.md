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