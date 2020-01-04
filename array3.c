
/*1.library function
  2.user-defined function
  */
//library function :
/*#include<conio.h>
void main(void)
{
    clrscr();
}

//user-defined function :
#include<stdio.h>
void main(void)
{
    printf("Just printf, nothing else.....");
}

#include<stdio.h>
void copy_msg()
    printf("Copyright @ 1996 home computing group.");
void main()
{
    copy_msg();
    ......
    copy_msg();
    ......
    for(.....)
    {
        if(.....)
            copy_msg();
    }
    while(....)
        copy_msg();
    .....
    copy_msg();


*/

/*function have 3 parts in general :
*function definition
*function prototype
*function calling
*/

/*#include<stdio.h>
void sum_of_all(void)
{
    int n,sum;
    sum=0;
    for(n=0; n<=100; n++)
        sum+=n;
    printf("\n sum of all numbers from 1 to 100 is %d. ",sum);
    getch();

}

void main(void)
        {
            sum_of_all();
        }
*/

/*#include<stdio.h>
void square_num(void)   //function square_num()
{
    int i,num;
    printf("\n\nNUMBER   SQUARE\n");
    for(num=1; num <= 10; num++)
        printf("%3d %8d\n", num, num*num);


}
void cube_num(void)  //function cube_num()
{
    int i,num;
    printf("\n\nNUMBER   CUBE\n");
    for(num=1; num <= 10; num++)
        printf("%3d %8d\n",num,num*num*num);

}
void main(void)
{
    printf("\n\n Press any key to see square number from 1 to 10.");
    getch();


    square_num();

    printf("\n\n Press any key to see square number from 1 to 10.");
    getch();

    cube_num();

    getch();



}
*/
/*
#include<stdio.h>
#include<stdarg.h>
double diff_parmtr(char *ch,...)
{
    va_list marker;
    double result = 0;
    va_start(marker,ch);
    while(*ch)
    {
        if(*ch== '%' )
        {
            switch( *(++ch) )
            {
            case 'd':
                result += va_arg(marker,int);
                break;
            case 'f':
                result += va_arg(marker,int);
                break;
            }
        }
        ch++;
    }
    va_end(marker);
    return (result);







}
void main(void)
{
    double result;
    result = diff_parmtr("%f %f",1.2,2.2);
    printf("\nResult is %f.",result);

    result = diff_parmtr("%f %d %f %d",1.1,1,2.2,3);
    printf("\nResult is %f.",result);

    getch();
}

*/
/*#include<stdio.h>
void square_value(long int any_value)
{
    long int result;
    result = any_value * any_value;
    printf("The square value of %ld is %ld.",any_value,result);

}

void main (void)
{
    square_value(5);
    getch();
}
*/
/*#include<stdio.h>
void call_by_value(int a,int b)
{
    a+=1;
    b+=1;
}
int main()
{
    int a =10, b = 10;
    call_by_value(a,b);
    printf("a=%d,b=%d",a,b);
    return 0;
}
*/
/*
#include<stdio.h>
int x = 100;
void local_var(void);
void static_var(void);
void global_var(void);

int main(void)
{
    printf("First Time : \n");
    local_var();
    static_var();
    global_var();

    printf("Second Time : \n");

    local_var();
    static_var();
    global_var();

    getch();
    return (0);

}
void local_var(void)
{
    int x = 1;
    printf("As a Local variable : \n\t");
    printf("x = %d\n\t,")
}

*/

/*#include<stdio.h>
void prn_msg(void)
{
    printf("\n Sum of all the numbers from 1 to your given numbers : \n");

}
void added_all(long int val)
{
    int n;
    long int sum;
    sum = 0;
    for(n=0;n<=val;n++)
        sum +=n;
    printf("\n Sum of all numbers from 1 to %ld is %ld.",val,sum);
    getch();
}
int main(void)
{
    prn_msg();
    added_all(1000);
    return 0;
}
*/
/*

#include<stdio.h>
#define ROW 5
#define COL 5
int main()
{
    int row,col;
    float array2d[ROW][COL] = {{1.0,2.0,3.0,4.0,5.0},{6.0,7.0,8.0,9.0,10.0},{11.0,12.0,13.0,14.0,15.0},{16.0,17.0,18.0,19.0,20.0},{21.0,22.0,23.0,24.0,25.0}};
    for(row = 0;row<ROW;row++)
    {
        for(col = 0;col<COL;col++)
        {
            printf("\n Element [%d][%d] = %6.2f",row,col,array2d[row][col]);
        }
    }
    getch();
    return 0;

}

*/
/*
#include<stdio.h>
int main()
{
    int ara[10] = {10,20,30,40,50,60,70,80,90,100};

    int i;
    for(i=0; i<10; i++)
    {
        printf("%d th element is : %d\n",i+1,ara[i]);

    }
    return 0;
}
*/
/*

#include<stdio.h>
int main()
{
    int ara[] = {10,20,30,40,50,60,70,80,90,100};
    int ara2[10];
    int i,j;
    for(i=0, j=9; i<10;i++,j--)
    {
        ara2[j] = ara[i];

    }
    for(i=0; i<10;i++)
    {
        ara[i] = ara2[i];

    }
    for(i=0;i<10;i++)
    {
        printf("%d\n",ara[i]);
    }
    return 0;
}

*/
/*
#include<stdio.h>
int main()
{
    int ara[] = {10,20,30,40,50,60,70,80,90,100};
    int i,j,temp;
    for(i=0,j=9;i<10;i++,j--)
    {
        temp = ara[j];
        ara[j] = ara[i];
        ara[i] = temp;
    }
    for(i=0;i<10;i++)
    {
        printf("%d\n",ara[i]);
    }
    return 0;

}
*/
/*

#include <stdio.h>
int main()
{
    int ft_marks[40] = {83, 86, 97, 95, 93, 95, 86, 52, 49, 41, 42, 47, 90,
                        59, 63, 86, 40, 46, 92, 56, 51, 48, 67, 49, 42, 90, 42, 83, 47, 95, 69, 82,
                        82, 58, 69, 67, 53, 56, 71, 62
                       },
                       st_marks[40] = {86, 97, 95, 93, 95, 86, 52, 49, 41, 42, 47, 90, 59, 63,
                                       86, 40, 46, 92, 56, 51, 48, 67, 49, 42, 90, 42, 83, 47, 95, 69, 82, 82, 58,
                                       69, 67, 53, 56, 71, 62, 49
                                      },
                                      final_marks[40] = {87, 64, 91, 43, 89, 66, 58, 73, 99, 81, 100, 64, 55,
                                                         69, 85, 81, 80, 67, 88, 71, 62, 78, 58, 66, 98, 75, 86, 90, 80, 85, 100, 64,
                                                         55, 69, 85, 81, 80, 67, 88, 71
                                                        };
    int i;
    int count=0;
    double total_marks[40];
    for(i = 0; i < 40; i++)
    {
        total_marks[i] = ft_marks[i] / 4.0 + st_marks[i] / 4.0 +
                         final_marks[i] / 2.0;
    }
    for(i = 1; i <= 40; i++)
    {
        printf("Roll NO: %d\tTotal Marks: %0.0lf\n", i, total_marks[i-1]);
    }

    for(i=1;i<40;i++)
    {
        if(total_marks[i-1]>=80)
        {
            count++;
        }
    }
    printf("\nget above 80 all students number is : %d\n",count);





    return 0;
}





*/
/*
#include<stdio.h>
int main()
{
    int marks,i,count;
    int total_marks[] =  {86, 78, 94, 68, 92, 78, 64, 62, 72, 61, 72, 66, 65,
                          65, 80, 72, 62, 68, 81, 62, 56, 68, 58, 56, 82, 70, 74, 78, 76, 84, 88, 73,
                          62, 66, 76, 70, 67, 65, 77, 63
                         };

    for(marks = 50; marks <= 100; marks++)
    {
        count = 0;
        for(i =0; i<40; i++)
        {
            if(total_marks[i]==marks)
            {
                count++;
            }
        }
        printf("Marks : %d Count : %d\n",marks,count);
    }
    return 0;



}

*/

/*
#include<stdio.h>
int main()
{
    int marks,i,count;
    int total_marks[] =  {86, 78, 94, 68, 92, 78, 64, 62, 72, 61, 72, 66, 65,
                          65, 80, 72, 62, 68, 81, 62, 56, 68, 58, 56, 82, 70, 74, 78, 76, 84, 88, 73,
                          62, 66, 76, 70, 67, 65, 77, 63
                         };
    int marks_count[101];
    for(i=0; i<101; i++)
    {
        marks_count[i] = 0;
    }
    for(i=0; i<40; i++)
    {
        marks_count[total_marks[i]]++;
    }
    for(i=50; i<=100; i++)
    {
        printf("Marks : %d Count : %d\n",i,marks_count[i]);
    }
    return 0;
}
*/
/*
#include<stdio.h>
int main()
{
    int i,j;
    int total_marks[] = {6,7,4,6,9,7,6,2,4,3,4,1};
    int marks_count[11];
    for(i=0; i<11; i++)
    {
        marks_count[i]=0;
    }
    for(i=0; i<12; i++)
    {
        marks_count[total_marks[i]]++;
    }
    for(j=0; j<=10; j++)
    {
        printf("%d ",marks_count[j]);
    }
    printf("\n");


    return 0;
}

*/
/*

#include<stdio.h>
double add(double n1, double n2)
{
    double sum = n1 + n2;
    return sum;
}
int main()
{
    double a,b,c;
    a=2.8;
    b=2.7;
    c=add(a,b);
    printf("%.2lf\n",c);
    return 0;
}
*/

/*
#include<stdio.h>
int find_max(int ara[],int n);
int main()
{
    int ara[] = {-100,0,53,22,83,23,89,-132,201,3,85};
    int n = 11;
    int max = find_max(ara,n);
    printf("%d\n",max);
    return 0;

}

int find_max(int ara[],int n)
{
    int max = ara[0];
    int i;
    for(i=1;i<n;i++)
    {
        if(ara[i]>max)
        {
            max = ara[i];
        }
    }
    return max;
}
*/
/*

#include<stdio.h>
int find_min(int ara[],int n);
int main()
{
    int ara[] = {-100,0,53,22,83,23,89,-132,201,3,85};
    int n = 11;
    int min = find_min(ara,n);
    printf("%d\n",min);
    return 0;

}

int find_min(int ara[],int n)
{
    int min = ara[0];
    int i;
    for(i=1; i<n; i++)
    {

        min = ara[i]++/11;

    }
    return min;
}



*/
/*
#include<stdio.h>
void test_function(int chup[])
{
    chup[0] = 100;
    return;
}

int main()
{
    int chup[] = {1,2,3,4,5};
    printf("%d\n",chup[0]);
    test_function(chup);
    printf("%d\n",chup[0]);
    return 0;
}

*/
/*

#include<stdio.h>
int main()
{
    int ara[] = {1,4,6,8,9,11,14,15,20,25,33,83,87,97,99,100};
    int low_indx = 0;
    int high_indx = 15;
    int mid_indx;
    int num =20;
    while(low_indx<=high_indx)
    {
        mid_indx = (low_indx + high_indx) / 2;
        if(num == ara[mid_indx])
        {
            break;
        }
        if(num<ara[mid_indx])
        {
            high_indx = mid_indx - 1;
        }
        else
        {
            low_indx = mid_indx +1;
        }
    }
    if(low_indx>high_indx)
    {
        printf("%d is not in the array. \n",num);

    }
    else
    {
        printf("%d is found in the array. It is the %d th element of the array.\n",ara[mid_indx],mid_indx);
    }
    return 0;

}

*/
/*
#include<stdio.h>
int main()
{
    char country[] = { 'B','a','n','g','l','a','d','e','s','h',' ',
    'i','s',' ','m','y',' ','c','o','u','n','t','r','y','.','\0'};
    printf("%s\n",country);
    return 0;

}
*/
/*
#include<stdio.h>
int main()
{
    char country[] = {'B','a','n','g','l','a','d','e','s','h'};
    int i,length;
    printf("%s\n",country);
    length = 10;
    for(i=0; i< length; i++)
    {
        if(country[i] >= 97 && country[i]<= 122)
        {
            country[i] = 'A' + (country[i] - 'a');
        }
    }
    printf("%s\n",country);
    return 0;
}
*/
/*

#include<stdio.h>
int main()
{
    char country[] = {'A','B','C','D','E','F','G','H','I','J','K','L','M','N','O','P','Q','R','S','T','U','V','W','X','Y','Z'};
    int i,length;
    printf("%s\n",country);
    length = 26;
    for(i=0; i< length; i++)
    {
        if(country[i] >= 65 && country[i]<= 90)
        {
            country[i] = 'a' + (country[i] - 'A');
        }
    }
    printf("%s\n",country);
    return 0;
}


*/
/*
#include<stdio.h>
int string_length(char str[])
{
    int i, length = 0;
    for(i=0;str[i] !='\0';i++)
    {
        length++;
    }
    return length;
}

int main()
{
    char country[100];
    int length;
    while(1==scanf("%s",country))
    {
        length = string_length(country);
        printf("length : %d\n",length);
    }
    return 0;
}


*/
/*
#include<stdio.h>
int main()
{
    char ara[100];
    while(NULL !=gets(ara))
    {
        printf("%s\n",ara);
    }
    return 0;
}
*/
/*

#include<stdio.h>
main()
{
    char ara[100];
    while(NULL != gets(ara))
    {
        printf("%s\n",ara);
    }
}

*/

/*
#include<stdio.h>
int main()
{
    char str1[] = "bangla",str2[] = "desh", str3[12];
    int i,j,length1=6,length2=4;
    for(i=0,j=0;i<length1;i++,j++)
    {
        str3[j] = str1[i];
    }
    for(i=0;i<length2;i++,j++)
    {
        str3[j] = str2[i];
    }
    str3[j] = '\0';
    printf("%s\n",str3);
    return 0;

}

*/
/*
#include<stdio.h>
int main()
{
    char str1[] = "bangla",str2[] = "desh",str3[12];
    int i,j,length1=6,length2=4;
    for(i=0,j=0;i<length1;i++,j++)
    {
        str3[j] = str1[i];
    }
    for(i=0;i<length2;i++,j++)
    {
        str3[j]=str2[i];
    }
    str3[j] = '\0';
    printf("%s\n",str3);
    return 0;
}

*/
//there was a mistake in this code but i can't fix it;
/*
#include<stdio.h>
#include<string.h>
int strcmp(char a[],char b[])
{

}
int main()
{

    int i,j;
    for(i=0;a[i]!='\0' && b[i] != '\0';i++)
    {
        if(a[i]<b[i])
        {
            return -1;
        }
        if(a[i]>b[i])
        {
            return 1;
        }

    }
    if(strlen(a) == strlen(b))
    {
        return 0;
    }
    if(strlen(a) < strlen(b))
    {
        return -1;
    }
    if(strlen(a) > strlen(b))
    {
        return 1;
    }

}

*/

//need to understand closely;
/*after 20 min i found it that is : '\0' is the end sign
so in input you need to type a blank space bcz that was
the condition what i use in that code;*/

/*
#include<stdio.h>
#include<string.h>
int main()
{
    char s[1002],word[100];
    int i,j,length, is_word_started;
    gets(s);
    length = strlen(s);
    is_word_started = 0;
    for(i=0,j=0;i<length;i++)
    {
        if(s[i]>='a' && s[i] <= 'z')
        {
            if(is_word_started == 0)
            {
                is_word_started = 1;
                word[j] = 'A' + s[i] - 'a';
                j++;
            }
            else
            {
                word[j] = s[i];
                j++;
            }
        }
        else if(s[i] >= 'A' &&  s[i] <= 'Z')
        {
            if(is_word_started == 0)
            {
                is_word_started =1;
            }
            word[j] = s[i];
            j++;
        }
        else if(s[i] >= '0' && s[i] <=9)
        {
            if(is_word_started == 0)
            {
                is_word_started = 1;
            }
            word[j]= s[i];
            j++;
        }
        else
        {
            if(is_word_started == 1)
            {
                is_word_started = 0;
                word[j] = '\0';
                printf("%s\n",word);
                j = 0;
            }

        }
    }
    return 0;
}

*/
/*ai program a-z || A-Z || 0-9 bade onnno kisu word er majhe pele
shetike akti alada string hishebe dhore && ai program kono notun
string ke pele tar first word ta capital letter a convert kore dey */




/*

#include<stdio.h>
#include<string.h>
int main()
{
    char s[1002],ch;
    int i,length,is_word_started;
    gets(s);
    length = strlen(s);
    is_word_started = 2; //this is so
    for(i=0; i<length; i++)
    {
        if(s[i] >='a' && s[i] <= 'z')
            if(is_word_started == 2)
            {
                is_word_started =3;
                ch = 'A' + s[i] - 'a' ;
                printf("%c",ch);

            }
            else
            {
                printf("%c",s[i]);

            }
        else if((s[i] >= 'A' && s[i] <= 'Z') || (s[i] >= '0' && s[i] <= '9'))
        {
            if(is_word_started == 2)
            {
                is_word_started =3;
            }
            printf("%c",s[i]);
        }
        else
        {
            if(is_word_started == 3)
            {
                is_word_started = 2;
                printf("\n");
            }
        }

    }
    printf("\n");
    return 0;


}


*/
/*
#include<stdio.h>
int is_prime(int n)
{
    int i;
    if(n<2)
    {
        return 0;
    }
    for(i = 2; i < n; i++)
    {
        if(n%i==0)
            return 0;
    }
    return 1;

}

int main()
{
    int n;
    while(1)
    {
        printf("Please enter a number (enter 0 to exit ) : ");
        scanf("%d",&n);
        if(n==0)
        {
            break;
        }
        if( 1 == is_prime(n))   //function call
        {
            printf("%d is a prime number.\n",n);
        }
        else
        {
            printf("%d is not a prime number.\n",n);
        }
    }
    return 0;
}

*/
/*
#include<stdio.h>
int is_prime(int n)
{
    int i;
    if(n<2)
    {
        return 0;
    }
    for(i=2;i<n;i++)
    {
        if(n%i==0)
        {
            return 0;
        }
    }
    return 1;
}

int main()
{
    int n;
    while(1)
    {
        printf("please enter a number (enter 0 to exit) : ");
        scanf("%d",&n);
        if(n==0)
        {
            break;
        }
        if(1== is_prime(n))
        {
            printf("%d is a prime number.\n",n);
        }
        else
        {
            printf("%d is not a prime number./n",n);
        }
    }
    return 0;
}


*/
/*
#include<stdio.h>
int is_prime(int n)
{
    int i;
    if(n<2)
    {
        return 0;
    }
    if(n==2)
    {
        return 1;
    }
    if(n%2 == 0)
    {
        return 0;
    }
    for(i=3; i<=n/2; i=i+2)
    {
        if(n%i == 0)
        {
            return 0;
        }
    }
    return 1;

}

int main()
{
    int n;
    while(1)
    {
        printf("Please enter a number (enter 0 to exit) : ");
        scanf("%d",&n);
        if(n==0)
        {
            break;
        }
        if(1==is_prime(n))
        {
            printf("%d is a prime number.\n",n);

        }
        else
        {
            printf("%d is not a prime number.\n",n);
        }
    }
    return 0;
}

*/

/*


#include<stdio.h>
#include<math.h>
int is_prime(int n)
{
    int i,root;
    if(n==2)
    {
        return 1;
    }
    if(n%2==0)
    {
        return 0;
    }
    root = sqrt(n);
    for(i=3;i<=root;i=i+2)
    {
        if(n%i==0)
        {
            return 0;
        }
    }
    return 1;
}

int main()
{
    int n;
    while(1)
    {
        printf("please enter a number (enter 0 to exit) : ");
        scanf("%d",&n);
        if(n==0)
        {
            break;
        }
        if(1==is_prime(n))
        {
            printf("%d is a prime number.\n",n);
        }
        else
        {
            printf("%d is not a prime number.\n",n);
        }
    }
    return 0;
}

*/

/*
#include<stdio.h>
#include<math.h>
const int size = 40;
int ara[size]; // there is a mistake but i can't find it.

void print_ara()
{
    int i;
    for(i=2; i<size; i++)
    {
        printf("%4d",ara[i]);
    }
    printf("\n");
    for(i=2; i<size; i++)
    {
        printf("----");

    }
    printf("\n");
    for(i=2; i<size; i++)
    {
        printf("%4d",i);
    }
    printf("\n\n\n");
}

void sieve()
{
    int i,j,root;
    for(i=2; i<size; i++)
    {
        ara[i] = 1;
    }
    root =sqrt(size);
    print_ara();
    for(i=2;i<=root;i++)
    {
        if(ara[i] == 1)
        {
            for(j=2;i*j <= size;j++)
            {
                ara[i*j] = 0;
            }
            print_ara();
        }
    }
}

int is_prime(int n)
{
    int i;
    if(n<2)
    {
        return 0;
    }
    return ara[n];
}

int main()
{
    int n,m;
    sieve();
    while(1)
    {
        printf("Please enter a number (enter 0 to exit) : ");
        scanf("%d",&n);
        if(n==0)
        {
            break;
        }
        if(n>=size)
        {
            printf("The number should be less than %d\n",size);
            continue;
        }
        if(1== is_prime(n))
        {
            printf("%d is a prime number.\n",n);
        }
        else
        {
            printf("%d is not a prime number.\n",n);
        }
    }
    return 0;
}

*/

//Again array:2D***************************************

/*
#include<stdio.h>
int main()
{
    int marks[4][10] = {{80,70,92,89,87,89,88,69,70,77},{75,88,99,70,66,87,79,96,68,87},
    {81,66,74,93,72,84,89,75,69,86},{0,0,0,0,0,0,0,0,0,0}};
    int col;
    for(col = 0; col < 10; col++)
    {
        marks[3][col] = marks[0][col] /4.0 + marks[1][col] / 4.0 +
        marks[2][col] / 2.0;
        printf("Roll NO : %d Total Marks : %d\n",col + 1,marks[3][col]);

    }
    return 0;
}

*/
//there is a output problem..............
/*

#include<stdio.h>
int main()
{
    int ara[4][10];
    int marks[4][10];
    int i,j;
    for(i=0;i<4;i++)
    {
        for(j=0;j<10;j++)
        {
            scanf("%d",&ara[i][j]);
        }
    }
    int col;
    for(col = 0; col < 10; col++)
    {
        marks[3][col] = marks[0][col] /4.0 + marks[1][col] / 4.0 +
        marks[2][col] / 2.0;
        printf("Roll NO : %d Total Marks : %d\n",col + 1,marks[3][col]);

    }
    return 0;


}

*/


#include<stdio.h>
int main()
{
    int n,row,col;
    scanf("%d",&n);
    for(row=1;row<=n;row++)
    {
        for(col=1;col<=n;col++)
        {
            if(row==n || col==1 || row==col)
                printf("*");
            else
                printf(" ");
        }
        printf("\n");
    }
    return 0;
}


























































































































































































































































































