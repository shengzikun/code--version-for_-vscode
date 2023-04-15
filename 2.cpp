#include <stdio.h>
int main()
{
int password=0;
while((password=getchar())!=EOF)
{
    if(password='\n')
    {
     printf("成功\n");
     printf("退出");
     break;
    } 
    else
    {
     printf("失败\n");
    
    }
// while((password=getchar())!='\n')
//         {
//             ;
//         }  
      
}

return 0;  
}
