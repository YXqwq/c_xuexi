#define _CRT_SECURE_NO_WARNINGS

#include <stdio.h>

struct S
{
    char arr[10];
    int age;
    float score;
};




int main()
{

    struct S s = { "zhangsan",20,55.5f };
    struct S tmp = { 0 };
    
    char buf[100] = { 0 };
    sprintf(buf, "%s %d %f", s.arr, s.age, s.score);
    printf("%s\n", buf);
    sscanf(buf, "%s %d %f", tmp.arr, &(tmp.age), &(tmp.score));
    printf("%s %d %f\n", tmp.arr, tmp.age, tmp.score);

    
    
}