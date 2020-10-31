#include<stdio.h>
#include<time.h>
#include<stdlib.h>
#include<math.h>

int calc(int e,char h,int f)
{
    int result;
    switch(h)
    {
        case '+':
            result=e+f;
            break;
        case '-':
            result=e-f;
            break;
        case '*':
            result=e*f;
            break;
    }
    return (result);
}
int main()
{
    int a,i,j,k,s,t,u;
    double m,n,b,x=0;
    char z;
    printf("请选择运算法则(+,-,*,/)：");
    scanf("%c",&z);
    if(z!='+' && z!='-' && z!='*')
      {
       if(z=='/') 
       {
        printf("请输入题目数量：");
        scanf("%lf",&b);
        if(b>30)
         {
          printf("题目数量不能超过30题！");
          return 0;
         }
        else if(b<1)
         {
          printf("请输入正确的题目数量！");
          return 0;
         }
        else
         for(k=1;k<=b;k++)
         {
          srand(time(NULL));
          i=rand()%10+1;
          j=rand()%10+1;
          u=i*j;
          printf("%d/%d=",u,i);
          scanf("%d",&a);
          if(a!=j)
               printf("错误\n");
          else x+=100/b,
               printf("正确\n");
         }
         printf("得分:%lf分",x);
         return 0;
       }
       else
       printf("请输入正确的运算符号！");
       return 0;
      }
    else
    printf("请选择难度(m位数%cn位数,格式:m,n)：",z);
    scanf("%lf,%lf",&m,&n);
    if(m>5 || n>5 || m<1 || n<1)
      {
       printf("请输入正确的位数！");
       return 0;
      }
    else
    s=(int)pow(10,m);
    t=(int)pow(10,n);
    printf("请输入题目数量：");
    scanf("%lf",&b);
    if(b>30)
      {
       printf("题目数量不能超过30题！");
       return 0;
      }
    else if(b<1)
      {
       printf("请输入正确的题目数量！");
       return 0;
      }
    else
    for(k=1;k<=b;k++)
    {
        srand(time(NULL));
        i=rand()%(s-s/10)+s/10;
        j=rand()%(t-t/10)+t/10;
        printf("%d%c%d=",i,z,j);
        scanf("%d",&a);
        if(a!=calc(i,z,j))
            printf("错误\n");
        else x+=100/b,
            printf("正确\n");
    }
    printf("得分:%lf分",x);
    return 0;
}