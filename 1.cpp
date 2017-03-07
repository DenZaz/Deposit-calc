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
}
 den=sum+sum/100*15;              
    } 
}
    return den;
}













