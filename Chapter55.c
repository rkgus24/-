#include <stdio.h>
#include <math.h>
#define N 5
typedef struct {
   int x, y;
}POINT;

void inputPoint(POINT *p);
void outputPoint(POINT *p);
double distance(POINT *p);

int main()
{
   POINT p[N];
   POINT mpoint;
   double point, min = 999999.9;
   // 여기에 코드 추가
   inputPoint(p);
   for(int i=0; i<N; i++) {
      point = distance(&p[i]);
      if(point <= min) {
         min = point;
         mpoint = p[i];
      }
   }
   printf("원점에서 가장 가까운 좌표 : ");
   outputPoint(&mpoint);
   return 0;
}

void inputPoint(POINT *p)
{
   for(int i=0; i<N; i++) {
      scanf("%d %d", &(p+i)->x, &(p+i)->y);
   }
}
   
void outputPoint(POINT *p)
{
   printf("(%4d, %4d)", p->x, p->y);
}

double distance(POINT *p)
{
   double dis = sqrt(pow(p->x, 2) + sqrt(pow(p->y, 2)));
   return dis;
}