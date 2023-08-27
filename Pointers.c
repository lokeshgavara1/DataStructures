// 1:-
#include <stdio.h>
void main(){
    static int a[5] = {5, 10, 15, 20, 25};
    int i, j, m, n;
    i = ++a[0];
    j = a[i++];
    printf("i=%d j=%d a[j]=%d\n", i, j, a[j]);
    i = 1;
    m = a[i++];
    printf("i=%d m=%d \n", i, m);
    i = 2;
    i = a[++i];
    printf("i=%d n=%d \n", i, a[i]);
}

// 2:-
#include <stdio.h>
void main(){
    int arr[25],i;
    for(i=0;i<=100;i++);
}

// 3:-
#include <stdio.h>
int main(){
    static int a[]={10,20,30,40,50};
    int j;
    for(j=0;j<=5;j++){
        printf("%d",a);
        a++;//we cannot increase base adress
    }
    return 0;
}

// 4:-
#include <stdio.h>
int main(){
    static float a[]={12.24,1.5,1.5,5.4,3.5};
    float *j,*k;
    j=a;
    k=a+4;
    j=j*2;//we cannot do multiplication and division on floats.
    k=k/2;//we cannot do multiplication and division on floats.
    printf("%f %f ",*j,*k);
    return 0;
}

// 5:-
#include <stdio.h>

int main() {
    int n[25];
    n[0] = 100;
    n[24] = 200;
    printf("%d %d ", *n, *(n + 24) + *n);
    return 0;
}


// 6:-
#include <stdio.h>
int main(){
    static int b[]={10,20,30,40,50};
    int i,*k;
    k=&b[4]-4;
    for(i=0;i<=4;i++){
        printf("%d",*k);
        k++;
    }
    return 0;
}

// 7:-
#include <stdio.h>
int main(){
    static int a[]={2,4,6,8,10};
    int i;
    for(i=0;i<=4;i++){
        *(a+i)=a[i]+i[a];
            printf("%d",*(i+a));
    }
        return 0;
}

// 8:-
#include <stdio.h>
void f(int, int *);
int main() {
    static int a[5] = {2, 4, 6, 8, 10};
    int i, b = 5;
    for (i = 0; i < 5; i++) {
        f(a[i], &b);
    }
    for (i = 0; i < 5; i++) {
        printf("%d ", a[i]);
    }
    printf("%d ", b);
    return 0;
}
void f(int x, int *y) {
    x = (*y) + 2;
    *y = x;
}


// 9:-
#include <stdio.h>
void change(int *);
int main(){
    static int a[5]={2,3,4,5,6};
    int i;
    change(a);
    for(i=4;i>=0;i--){
        printf("%d,",a[i]);
    }
    return 0;
}
void change(int  *b){
    int i;
    for(i=0;i<=4;i++){
        *b=*b+1;
        b++;
    }
}

// 10:-
#include <stdio.h>
int main() {
    int a[] = {0, 1, 2, 3, 4};
    int i, *ptr;
    for (ptr = &a[0]; ptr < &a[5]; ptr++) {
        printf("%d,", *ptr);
    }
    return 0;
}

// 11:-
#include <stdio.h>
int main() {
    int a[]={0,1,2,3,4};
    int i,*p;
    for(p=a,i=0;p+i<=a+4;p++,i++){
        printf("%d,",*(p+i));
    }
    return 0;
}

// 12:-
#include <stdio.h>
int main() {
    static int n[3][3]={{2,4,3},
                        {6,8,5},
                        {3,5,1}};
    int i,j;
    for(i=2;i>=0;i--){
        for(j=2;j>=0;j--){
            printf("%d %d",n[i][j],*(*(n+i)+j));
        }
    }
}

// 13:-
#include <stdio.h>
int main() {
    static int a[]={0,1,2,3,4};
    static int *p[]={a,a+1,a+2,a+3,a+4};
    int **ptr=p;
    printf("%d %d",a,*a);
    printf("%d %d %d",p,*p,**p);
    printf("%d %d",ptr,*ptr,**ptr);
}

// 14:-
#include <stdio.h>
int main() {
    char str[]="limrecks";
    char *s;
    s=&str[6]-6;
    while(*s){
        printf("%c",*s++);
    }
    printf("\n");
    return 0;
}

// 15:-
#include <stdio.h>
int main() {
    char *s[]={"ice","green","cone","please"};
    char **ptr[]={s+3,s+2,s+1};
    char ***p=ptr;
    printf("%s\n",**++p);
    printf("%s\n",*--*++p+2);
    printf("%S\n",*p[-2]+3);
    printf("%s\n",p[-1][-1]+1);
}

// 16:--
#include <stdio.h>
int main() {
    char str[]="shall we tell the deputy director";
    printf("%s\n %s\n %s\n",str,str+6,str+9);
}

// 17:--
#include <stdio.h>
int main() {
    char s[] = "CUTM";
    char t[40];
    char *tt, *ss;
    tt = t;
    ss = s;
    while (*tt++ = *ss++) {
        printf("%s\n", t);
    }
    return 0;
}

// 18:-
#include <stdio.h>
int main() {
    struct{
        int num;
        float f;
        char mess[50];
    }m;
    m.num=1;
    m.f=3.11;
    strcpy(m.mess,"everything looks rosy");
    printf("%d,%d,%d\n",&m.num,&m.f,m.mess);
    printf("%d,%f,%s",m.num,m.f,m.mess);
    return 0;
}

// 19:--
#include <stdio.h>
int main() {
    static struct emp{
        char name[20];
        int age;
        struct adress{
            char city[20];
            int pin;
        }a;
    }e={"Lokesh",30,"Nagpur",440010};
    printf("%s,%s\n",e.name,e.a.city);
    return 0;
}

// 20:--
#include <stdio.h>
int main() {
    struct a{
        char arr[10];
        int i;
        float b;
    }v[2];
    printf("%d,%d,%d",v[0].arr,&v[0].i,&v[0].b);
    printf("%d,%d,%d",v[1].arr,&v[1].i,&v[1].b);
}

// 21:--
#include <stdio.h>
int main() {
    struct a{
        char ch[7];
        char *str;
    };
    static struct a s1={"Nagpur","Bombay"};
    printf("%c,%c\n",s1.ch[0],*s1.str);
    printf("%s,%s\n",s1.ch,s1.str);
    return 0;
}

// 22:--
#include <stdio.h>
int main() {
    int i;
    struct emp {
        int eno;
        float bal;
    };
    struct emp e[10];
    for (i = 0; i < 10; i++) {
        printf("Enter emp no. and balance: ");
        scanf("%d,%f", &e[i].eno, &e[i].bal);
    }
    for (i = 0; i < 10; i++) {
        printf("%d, %.2f\n", e[i].eno, e[i].bal);
    }
    return 0;
}
