#include <iostream>
#include<windows.h>
#include<mmsystem.h>
#include<stdio.h>

using namespace std;

int main()
{
   char ch[100];
   gets(ch);
   if(strcmp(ch,"Shutdown")==0)
      {
       system("C:\\WINDOWS\\System32\\shutdown -s -t 0");
      }
   else if(strcmp(ch,"Restart")==0)
{
    system("C:\\WINDOWS\\System32\\shutdown -s -t 0");
}
}
