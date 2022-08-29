int a = 31,b, *c,*d;
c = &a;
d = &b;
*d= --*c %3 ?a+a:a*a;
//a = a-1
//if(a % 3 == 1) b=a+a;
//else if(a % 3 == 0) a*a;

printf("%d",*d); //900