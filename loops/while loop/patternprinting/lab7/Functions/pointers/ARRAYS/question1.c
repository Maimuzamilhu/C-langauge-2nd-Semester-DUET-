 //given an array of marks of students , if the mark of any student is less than 35 print its roll number [roll number here refers to the index of the array.]

 #include <stdio.h>
 int main (){

    int marks[10] = {99,97,43,27,32,31,76,75,85,74};

    for (int i = 0; i <= 10; i++)
    {
        scanf("%d" , &marks[i]);
    }

    return 0;
 }