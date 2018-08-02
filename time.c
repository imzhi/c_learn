#include <stdio.h>
#include <time.h>

int main ()
{
   time_t curtime;
   struct tm *info;

   time(&curtime);
   printf("当前时间 = %s\n", ctime(&curtime));

   info = localtime(&curtime);
   printf("一年中的第几天：%d\n", info->tm_yday);
   printf("一周中的第几天：%d\n", info->tm_wday);

   return(0);
}
