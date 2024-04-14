#include <stdio.h>
// The first function is for one credit courses. 
int onecredit()
{
    int i,sum=0,c[50],b[50];
    printf("Enter the internal marks of one credit course:");
    for(i=0;i<3;i++)
    scanf("%d",&b[i]);
    for(i=0;i<3;i++)
    {
        if((b[i]>45)&&(b[i]<=50))
        c[i] = 10;
        else if((b[i]>40)&&(b[i]<=45))
        c[i] = 9;
        else if((b[i]>35)&&(b[i]<=40))
        c[i] = 8;
        else if((b[i]>30)&&(b[i]<=35))
        c[i] = 7;
        else if((b[i]>25)&&(b[i]<=30))
        c[i] = 6;
        else if((b[i]>20)&&(b[i]<=25))
        sum = sum + c[i];
    }
    return sum;
}

// The second function is for three credit courses
int threecredit()
{
    int i,d[50],sum=0,c[50],b[50],a[50];
    printf("Enter the internal marks of three credit course:");
    for(i=0;i<3;i++)
    scanf("%d",&b[i]);
    printf("Enter the final exam marks of three credit course:");
    for(i=0;i<3;i++)
    scanf("%d",&d[i]);
    for(i=0;i<3;i++)
    {
        if(d[i]%2==1)
        {
            d[i] = d[i] + 1;
            d[i] = d[i]/2;
        }
        else
        d[i] = d[i]/2;
    }
    for(i=0;i<3;i++)
    {
        a[i] = 0;
        a[i] = d[i] + b[i];
        if((a[i]>90)&&(a[i]<=100))
        c[i] = 10;
        else if((a[i]>80)&&(a[i]<=90))
        c[i] = 9;
        else if((a[i]>70)&&(a[i]<=80))
        c[i] = 8;
        else if((a[i]>60)&&(a[i]<=70))
        c[i] = 7;
        else if((a[i]>50)&&(a[i]<=60))
        c[i] = 6;
        else if((a[i]>40)&&(a[i]<=50))
        c[i] = 5;
        sum = sum + (c[i]*3);
    }
    return sum;
}

// The third function is for four credit courses
int fourcredit(){
    int i,d[50],sum=0,c[50],b[50],a[50];
    printf("Enter the internal marks of four credit course:");
    for(i=0;i<2;i++)
    scanf("%d",&b[i]);
    printf("Enter the final exam marks of four credit course:");
    for(i=0;i<2;i++)
    scanf("%d",&d[i]);
    for(i=0;i<2;i++)
    {
        if(d[i]%2==1)
        {
            d[i] = d[i] + 1;
            d[i] = d[i]/2;
        }
        else
        d[i] = d[i]/2;
    }
    for(i=0;i<2;i++)
    {
        // We set up the CGPA system
        a[i] = 0;
        a[i] = d[i] + b[i];
        if((a[i]>90)&&(a[i]<=100))
        c[i] = 10;
        else if((a[i]>80)&&(a[i]<=90))
        c[i] = 9;
        else if((a[i]>70)&&(a[i]<=80))
        c[i] = 8;
        else if((a[i]>60)&&(a[i]<=70))
        c[i] = 7;
        else if((a[i]>50)&&(a[i]<=60))
        c[i] = 6;
        else if((a[i]>40)&&(a[i]<=50))
        c[i] = 5;
        sum = sum + (c[i]*4);
    }
    return sum;
}

// This is the main function that will calculate the CGPA.
int main(){
    int first,second,third;
    float avg;
    first = onecredit();
    second = threecredit();
    third = fourcredit();

    /* The final must be in float since it is necessary to gain the final CGPA 
    in two decimal points.*/
    float final = first + second + third;
    avg = final/20.0;
    printf("%0.2f",avg);
    return 0;
}

