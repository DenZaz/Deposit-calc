#include <iostream>
#include <math.h>

int vich(int sum, int sr, int den)
{
	if(sum<100000)
    {
     if(sr<31 && 0<=sr)
    {  
    den=sum-sum/100*10;                      
    }  
    if(sr<121 && 31<=sr)
    {  
    den=sum+sum/100*2;                   
    }  
    if(sr<241 && 121<=sr)
    {  
    den=sum+sum/100*6;                   
    }   
    if(sr<366 && 241<=sr)
    {  
    den=sum+sum/100*12;                     
    }                    
    }
    if(sum>100000)
    {
    if(sr<31 && 0<=sr)
    {  
    den=sum-sum/100*10;         
    }  
    if(sr<121 && 31<=sr)
    {  
    den=sum+sum/100*3;                   
    }  
    if(sr<241 && 121<=sr)
    {  
    den=sum+sum/100*8;                    
    }   
    if(sr<366 && 241<=sr)

 den=sum+sum/100*15;              
    } 

    return den;
}

int proverka(int sum, int sr, int den)
{
	setlocale(0,"RUS");
    next:
    printf("Введите сумму вклада \n\n\n");
    scanf("%d", &sum);
    printf("Введите срок \n\n\n");
    scanf("%d", &sr); 
    if(sum<10000)
    {
    printf("Сумма вклада мала (Уровень бомж) \n\n\n");
    goto next;    
    }
    if(sr>365)
    {
    printf("Слишком много дней \n\n\n");
    goto next;    
    }
    if(sum<100000)
    {
    if(sr<31 && 0<=sr)
    {  
    printf("Ваша сумма составляет %d\n\n\n", vich(sum, sr, den));                       
    }  
    if(sr<121 && 31<=sr)
    {  
    printf("Ваша сумма составляет %d\n\n\n", vich(sum, sr, den));                       
    }  
    if(sr<241 && 121<=sr)
    {  
    printf("Ваша сумма составляет %d\n\n\n", vich(sum, sr, den));                       
    }   
    if(sr<366 && 241<=sr)
    {  
    printf("Ваша сумма составляет %d\n\n\n", vich(sum, sr, den));                       
    }                    
    }  
    if(sum>100000)
    {
    if(sr<31 && 0<=sr)
    {  
    printf("Ваша сумма составляет %d\n\n\n", vich(sum, sr, den));                       
    }  
    if(sr<121 && 31<=sr)
    {  
    den=sum+sum/100*3;
    printf("Ваша сумма составляет %d\n\n\n", vich(sum, sr, den));                       
    }  
    if(sr<241 && 121<=sr)
    {  
    printf("Ваша сумма составляет %d\n\n\n", vich(sum, sr, den));                       
    }   
    if(sr<366 && 241<=sr)
    {  
    printf("Ваша сумма составляет %d\n\n\n", vich(sum, sr, den));                       
    } 
    }    
}



int main()
{
    int sum; 
    int sr;
    int den=0;

    proverka(sum, sr, den);
    
    system("PAUSE");
    return 0;
}













