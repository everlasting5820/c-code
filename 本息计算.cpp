#include<stdio.h>
#include<math.h>     // һЩ��ѧ��ʽ��Ҫ�������ͷ�ļ�
int main()
{
    int year , money ;//  ���塤��ر���
    double rate , sum , x ;
    printf("Enter money:");
    scanf("%d",&money);    //  & ���ź�����©
    printf("Enter year:");
    scanf("%d",&year);
    printf("Enter rate:");
    scanf("%lf",&rate);   //  double �ͱ�����Ӧ lf
    x = pow(1+rate,year);   //pow(x,y)��ʾx��y�η�
    sum = money*x;
    printf("sum = %.2f",sum);
    return 0 ;
}
