#include <iostream>
using namespace std;
void rev(char*str) 
{
   if(*str!='\0')
   {
       rev(str+1);
       cout<<*str;
   }
}
int main()
{
    char str[] = "program";
    rev(str);
    return 0;
}

/*Output
margorp
*/
