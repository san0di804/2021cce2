#include <stdio.h>
#include <vector>
#include <algorithm>
class Student{
public:
    char name[30];
    int grade;
};
Student student[100];
bool compare(Student a,Student b){
    return (a.grade>b.grade);
}
int main()
{
    FILE * fin=fopen("input.txt","r");
    int N;
    fscanf(fin,"%d",&N);

    std::vector<Student> student(20);
    for(int i=0;i<N;i++){
            fscanf(fin,"%s %d",student[i].name,&student[i].grade);
    ///printf("Åª¨ìN¬O: %d\n",N);
    }
    std::sort(student.begin(),student.end(),compare);
    for(int i=0;i<N;i++){
        printf("%s %d\n",student[i].name,student[i].grade);
    }
}


