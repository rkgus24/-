//예제 1
#include <stdio.h>
size_t myStrlen( const char *str ); //typedef unsigned int size_t; 
int main(void) {
  char s[] = "hello";
  printf("%d\n", myStrlen(s));
  return 0;
}
size_t myStrlen( const char *str ){
  char *s;
  for( s = str ; *s; s++ ){ // 100, 101, 102, 103, 104
    printf("%8X\n",s);
  } // 105
    printf("%8X\n",s);
    printf("%8X - %8X\n", s, str);
  printf("s= %8X, str =%8X \n",s,str);  // 105 - 100 = 5
    
  return s-str;
}