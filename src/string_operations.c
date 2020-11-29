"Wchar support"
" Str cat operation added "
#include <stdio.h>

size_t my_wstrlen(char *s)
{
   const char *p = s;

   while (*p)
      ++p;

   return (p - s);
}
char *my_wstrcpy(char *t, char *s)

{
   
   char *p = t;
   
    while (*t++ = *s++)
    ;
   
   
   return p;
   
}

wchar_t *my_wstrchr(wchar_t *ws, wchar_t wc)

{
   
   while (*ws) 
   {
      
      if (*ws == wc)
      
      return ws;
      
      ++ws;
      
   }
   return NULL;
   
}
int main(void)
{
   int i;
   char *s[] = 
   {
      "Git tutorials",
      "Tutorials Point"
   };

   for (i = 0; i < 2; ++i)
      
   printf("string lenght of %s = %d\n", s[i], my_strlen(s[i]));

   return 0;
}
