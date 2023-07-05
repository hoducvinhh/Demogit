 #include<stdio.h>
#include<math.h>
int main(){
    int a1,a2,b1,b2,c1,c2;
    float D,Dx,Dy,x,y;
    scanf("%d %d %d %d %d %d",&a1,&b1,&c1,&a2,&b2,&c2);
      D = a1*b2 - a2*b1 ;
      Dx = c1*b2 - c2*b1 ;
      Dy = a1*c2 - a2*c1 ;
      if(D==0){

        if(Dx==0 && Dy ==0)
            printf("he phuong trinh vo so nghiem");
        if(Dx!=0 || Dy!=0)
            printf("he phuong trinh vo nghiem");
      }
      else
      {
          x = Dx/D;
          y = Dy/D;
          printf(" he phuong trinh co 2 nghiem la (x;y) = ( %.f , %.f )",x,y);
      }

}
 /*#include<stdio.h>
int main(){
  //khai báo các biến a1, b1, c1, a2, b2, c2 kiểu int
    int a1, b1, c1, a2, b2, c2;
  //khai báo các biến D, Dx, Dy, x, y kiểu float
  float D, Dx, Dy, x, y;
  printf("a1*x + b1*y = c1\n");
  printf("a2*x + b2*y = c2\n");
  printf("\nNhập a1: "); scanf("%d", &a1);
  printf("\nNhập b1: "); scanf("%d", &b1);
  printf("\nNhập c1: "); scanf("%d", &c1);
  printf("\nNhập a2: "); scanf("%d", &a2);
  printf("\nNhập b2: "); scanf("%d", &b2);
  printf("\nNhập c2: "); scanf("%d", &c2);
  //tính D, Dx, Dy theo công thức
  D = a1 * b2 - a2 * b1;
  Dx = c1 * b2 - c2 * b1;
  Dy = a1 * c2 - a2 * c1;
  if (D == 0) {
    //nếu D = 0 và Dx + Dy = 0 thì phương trình vô số nghiệm, ngược lại thì vô nghiệm
    if (Dx + Dy == 0)
      printf("Hệ phương trình có vô số nghiệm");
    else
      printf("Hệ phương trình vô nghiệm");
    }
  //tính x và y theo công thức
  else {
    x = Dx / D;
    y = Dy / D;
    printf("Hệ phương trình có nghiệm (x, y) = (%.1f, %.1f)", x, y);
  }

  printf("\n--------------------------\n");*/

