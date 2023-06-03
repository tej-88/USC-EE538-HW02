
# HW2 EE538
## University of Southern California
## Instructor: Arash Saifhashemi

Please clone this repository, edit README.md to answer the questions, and fill up functions to finish the homework.

- Please find each question in a separate folder under [files](/files).
- For non-coding questions, fill out the answers in the README file.
- For coding questions, edit the files and check them in. Notice that for this homework
    -  We will run an autograding process for coding problems every time you push to github.
    -  You will be able to see the result of each grader test case and scores for coding problems by going to Actions -> Github Classroom Workflow on github website. A file with name `ScoresCodingTotal.txt` will also show up in your github repository after the grading is done, with your score for each coding problem (This `.txt` file will show your score only when you have passed at least one grader test, otherwise it will contain an error message)
    -  Please do not hard code your solutions according to the test cases, or try to interfere with the autograding process. Only modify programs in [files](/files) directory. We will actively check your solutions. If we find you violate these rules, you will get 0 point for your homework.
    -  For coding questions, unless specified, you should add unit tests to the `student_test.cc`. We recommend first designing test cases of your own and making sure your code pass your test cases, then moving to push to Github to run grader tests. In this way you can see where you need to improve based on grader tests, and can improve your coding skills.
- For submission, please push your answers to Github before the deadline (Tuesday, June 17th by 12:00 pm (noon))


- Rubrics (details of coding problems see [here](https://github.com/ee538/Summer22_HW2_CodingGrader/blob/main/coding_grades_total.py))
  
| Question | Points |
| -- | -- |
| 1  | 10 |
| 2  | 25 |
| 3  | 20 |
| 4  | 10 |
| 5  | 20 |
| 6  | 25 |
| 7  | 10 |
| 8  | 15 |

- Total: 135 points. 100 points is considered full credit.


See [cpp-template](https://github.com/ourarash/cpp-template) for help on installing bazel and debugging.

## Q5
### Dynamic Array
- Question 1: Why did we have to proved size_1, size_2 as an input?  
Answer 1: We are dealing with pointers, there is no way of obtaining the size of array just with its pointer.
  
- Question 2: How can we know the size of the output?  
Answer 1: We know the size of the output must the sum of the input array sizes.  
  
### Dynamic Vectors
- Question 1: Why didn't we provide the sizes?  
Answer 1: We are dealing with std::vector which is a class, and it has a attribute(aka data) called size that stores the size of the vector.
  
- Question 2: We have two functions with the name of Concatenate. Is this ok?  
Answer 1: It is fine as long the number and types of input parameters are different. This is called Function Overloading.
