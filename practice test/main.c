#include <stdio.h>
#include <stdlib.h>
#include <string.h>

/*int main()
{
    int a=1,x,y,i;
    scanf("%d%d",&x,&y);
    for(i=1;i<=y;i++)
    {
        a=a*x;
    }
    printf("%d power of %d=%d",y,x,a);
}*/
/*int main()
{
    int x,y;
    scanf("%d%d",&x,&y);
    printf("x=%d, y=%d\n",x,y);
    x=x^y;
    y=x^y;
    x=x^y;
    printf("x=%d, y=%d",x,y);
}*/
/*int main()
{
    int a;
    scanf("%d",&a);
    if(a%2==0)
    {
        printf("number is even");
    }
    else
    {
        printf("number is odd");
    }
}*/
/*
int main()
{
    int a;
    float i;
    scanf("%d",&a);
    printf("squareroot of %d is ",a);
    for(i=0.01;i*i<=a;i+=0.01);
        printf("%0.2f",i);
}*/
/*int main()
{
    int i,j,a,k;
    scanf("%d",&a);
    for(i=1;i<=a;i++)
    {
        for(j=1;j<=i;j++)
        {
            printf("*");
        } printf("\n");
    }
}*/
/*int main()
{
    int i,j,k,n;
    scanf("%d",&n);
    for(i=1;i<=n;i++)
    {
        for(k=1;k<=n-i;k++)
        {
            printf(" ");
        }
        for(j=1;j<=i;j++)
        {
            printf("*");
        }printf("\n");
    }
}*/
/*
int main()
{
    int i,j,k,n;
    scanf("%d",&n);
    for(i=1;i<=n;i++)
    {
        for(k=1;k<i;k++)
        {
            printf(" ");
        }
        for(j=n;j>=i;j--)
        {
            printf("*");
        }
        printf("\n");
    }
}*/
/*
int main()
{
    int i,j,k,n;
    scanf("%d",&n);
    for(i=1;i<=n;i++)
    {
        for(j=n;j>=i;j--)
        {
            printf("*");
        }printf("\n");
    }
}*/
/*int main()
{
    int i,j,k,n;
    scanf("%d",&n);
    for(i=1;i<=n;i++)
    {
        for(j=n;j>=i;j--)
        {
            printf(" ");
        }
        for(k=1;k<=i;k++)
        {
            printf("* ");
        }
        printf("\n");
    }
}*/
/*int main()
{
    int i,j,k,n;
    scanf("%d",&n);
    for(i=1;i<=n;i++)
    {
       for(j=n;j>i;j--)
        {
            printf(" ");
        }
        for(k=1;k<=2*i-1;k++)
        {
            printf("*");
        }
        printf("\n");
    }
}*/
/*int main()
{
    int a[3][3];
    int i,j;
    for(i=0;i<3;i++)
    {
        for(j=0;j<3;j++)
        {
            scanf("%d",&a[i][j]);
        }
    }
    for(i=0;i<3;i++)
    {
        for(j=0;j<3;j++)
        {
            printf("%d\t",a[i][j]);
        }
        printf("\n");
    }
}*/
// VOWEL CONSONANT//
/*int main()
{
    char s[20];
    gets(s);
    int i,length,v=0,c=0,w=0;
    length=strlen(s);
    printf("%d\n",length);
    for(i=0;i<length;i++)
    {
        if(s[i]=='a'||s[i]=='e'||s[i]=='i'||s[i]=='o'|| s[i]=='u'||s[i]=='A'|| s[i]=='E'||s[i]=='I'||s[i]=='O'||s[i]=='U')
           {
               v++;
           }
        else if((s[i]>='a'&& s[i]<='z')||(s[i]>='A'&& s[i]<='Z'))
         {
            c++;
         }
        else if (s[i]==' ')
         {
            w++;
         }
      }
    printf("%d vowels \n",v);
    printf("%d consonant \n",c);
    printf("%d word \n",w+1);
}*/
// 3D ARRAY//
/*int main()
{
    int a[2][2][3];
    int i,j,k;
    for(i=0;i<2;i++)
    {
        for(j=0;j<2;j++)
        {
            for(k=0;k<3;k++)
            {
                scanf("%d",&a[i][j][k]);
            }
        }
    }
    for(i=0;i<2;i++)
    {
        for(j=0;j<2;j++)
        {
            for(k=0;k<3;k++)
            {
                printf("%d",a[i][j][k]);
            }
            printf("\n");
        }
    }
}*/
/*int main()
{
    char s[20];
   scanf("%s",s);
   int length,i;
   length=strlen(s);
   for(i=0;i<length;i++)
   {
       if(s[i]>='a' && s[i]<='z')
       {
           s[i]=s[i]-32;
        }
       else if (s[i]>='A' && s[i]<='Z')
        { s[i]=s[i]+32;
           }
   }
   puts(s);
}*/
/*int main()
{
    int a[10];
    int i,greatest;
    for(i=0;i<10;i++)
    {
    scanf("%d",&a[i]);
    }
    greatest=a[0];
    for(i=0;i<10;i++)
    {
        if(a[i]>greatest)
        {
            greatest=a[i];
        }
    }
    printf("gretest is %d",greatest);
}*/
/*int main()
{
    int a,i,sum=0;
    scanf("%d",&a);
    for(i=1;i<=a;i++)
    {
       sum=sum+(i*i);
    }
    printf("%d",sum);
}*/
/*int main()
{
    int i,f[20];
    f[0]=0;
    f[1]=1;
    for(i=2;i<20;i++)
    {
        f[i]=f[i-1]+f[i-2];
    }
    for(i=0;i<20;i++)
    {
        printf("%d\n",f[i]);
    }
}*/
/*int main()
{
    char s[20],s1[20];
    int i,l1,l2,a=0;
    gets(s);
    gets(s1);
    l1=strlen(s);
    l2=strlen(s1);
    if (l1==l2)
    {
        for(i=0;i<l1;i++)
        {
            if(s[i]==s1[i])
            {
               a++;
            }
        }
    }
    if(a==l1)
    {
        printf(" same ");
    }
    else
    {
        printf(" differrent");
    }
}*/
/*int main()
{
    int i,j,k,n;
    scanf("%d",&n);
    for(i=1;i<=n;i++)
    {
        for(j=1;j<=n-i;j++)
        {
            printf(" ");
        }
        for(k=1;k<=i;k++)
        {
            printf("* ");
        }
        printf("\n");
    }
}*/
/*int main()
{
    int i,j,k,n;
    scanf("%d",&n);
    for(i=1;i<=n;i++)
    {
        for(j=1;j<i;j++)
        {
            printf(" ");
        }
        for(k=n;k>=i;k--)
        {
            printf("*");
        }
        printf("\n");
    }
}*/
/*int main()
{
    int i,j,k,n;
    scanf("%d",&n);
    for(i=1;i<=n;i++)
    {
        for(j=1;j<=n-i;j++)
        {
            printf(" ");
        }
        for(k=1;k<=2*i-1;k++)
        {
            printf("*");
        }
        printf("\n");
    }
}*/
/*int main()
{
    int i,j,k,n;
    scanf("%d",&n);
    for(i=1;i<=n;i++)
    {
        for(j=1;j<=n-i;j++)
        {
            printf(" ");
        }
        for(k=1;k<=2*i-1;k++)
        {
            printf("*");
        }
        printf("\n");
    }
    for(i=n-1;i>=1;i--)
    {
        for(j=1;j<=n-i;j++)
        {
            printf(" ");
        }
        for(k=1;k<=2*i-1;k++)
        {
            printf("*");
        }
        printf("\n");
    }
}*/
/*int main()
{
    int n,k,x,y=0;
    scanf("%d%d",&n,&k);
    x=1<<(k-1);
    if(n&x)
    {
        printf("set");
        x=x&y;
    }
    else
    {
        printf("not");
    }
}*/
int main()
{
  int n,msb;

}
