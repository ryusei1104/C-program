#include<stdio.h>

int main()
{
    int m;
    int d;
    int y;
    int h;
    int mon;
    int s;
    scanf("%d/%d/%d",&m,&d,&y);
    scanf("%d:%d:%d",&h,&mon,&s);
    if(h >= 12)
    {
        printf("PM ");
        if(h>12)
        {
            h = h - 12;
        }
    }
    else
    {
        printf("AM ");
        if(h == 0)
        {
            h = h + 12;
        }
    }
    printf("%.2d:%.2d:%.2d, ",h,mon,s);
        printf("%d",d);
    switch (d)
    {
    case 1: case 21: case 31:
        printf("st"); 
        break;
    case 2: case 22:
        printf("nd");
        break;
    case 3: case 23:
        printf("rd");
        break;
    default:
        printf("th");
        break;
    }
    printf(" day of ");
    switch (m)
    {
    case 1:  
    printf("January");   
    break;
    case 2:  
    printf("February");  
    break;
    case 3:  
    printf("March");     
    break;
    case 4:  
    printf("April");     
    break;
    case 5:  
    printf("May");       
    break;
    case 6:  
    printf("June");      
    break;
    case 7:  
    printf("July");      
    break;
    case 8:  
    printf("August");    
    break;
    case 9:  
    printf("September"); 
    break;
    case 10: 
    printf("October");   
    break;
    case 11: 
    printf("November");  
    break;
    case 12: 
    printf("December");  
    break;
    default:
    break;
    }
    printf(", 20%.2d.",y);
    return 0;
}