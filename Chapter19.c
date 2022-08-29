int a=10, *b;

b=&a;

for(int i=0;i<5;i++)

   *b += i;

printf("%d",*b); //20