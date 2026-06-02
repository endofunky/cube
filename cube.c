#include <stdio.h>
#include <math.h>
#include <unistd.h>

                            float
                         T,B;typedef
                       float V /*###*/
                     __attribute__ ( (
                   vector_size(16)));V L={
                 .5025,.7035,.5025};float D(
               V a,V b){return a[0]*b[0]+a[1]*
             b[1]+a[2]*b[2];}V P(float t){return
           (V){.5+.5*cosf (6.2832*t),.5+.5* cosf(
          6.2832*(t+.33)),.5+.5*cosf(6.2832*(t+.67)
       )};}V R(V p,int i,int j,float a){float c=cosf(a
     ),s=sinf(a),x=p[i];p[i]=c*x-s*p[j];p[j]=s*x+c*p[j];
    return p;}float M(V p){p-=(V){.44*sinf(T*.8),.2*sinf(
 T*1.13+1),0};p=R(p,0,2,T*1.1+.4*sinf(T*.7));p=R(p,1,2,T*.65
   +.3*cosf(T*.9));p=R(p,0,1,T*.45);p=R(p,0,2,(sinf(T*.55)
     *1.1+B*.55)*p[1]);float e=1+.1*sinf(T*1.7)+.15*B,a=
       fabsf(p[0])-e,b=fabsf(p[1])-e,c=fabsf(p[2])-e,m    =
/**/     fmaxf(a,fmaxf(b,c));a=fmaxf(a,0);b=fmaxf(b,     0);c
=fmaxf    (c,0);return fminf(m,0)+sqrtf(a*a+b*b+c*c    ) ; }
unsigned     char F[48][80][3];float A[48][80][3    ];char o
[1<<18];       int main() { printf( "\x1b[2J"     /*######*/
"\x1b[?25l")     ;for(long f=0;;f++){T=f*.05     ; float x =
1.25*T;x-= /**/    floorf(x);B=13.6*x*expf    (-5*x);for(int
y=0;y<48;y++)for     (int X=0;X<80;X++){     V r={0,0,fmaxf(
4.4-2.1*B,2.55)};     float u=(X-39.5)/    24,w=-(y-23.5)/24,
c=cosf(.18*T),s=sinf     (.18*T),j=u     ;u=c*j-s*w;w=s*j+c*w
;V d= {u,w,-1.5}; d=d/     sqrtf(D     (d,d));V C={0,0,0},a={
1,1,1};float mn=9;int ph     =0;     for (int b=0; b<2; b++){
float z=0;int h=0;V p={0,0         ,0};for(int i=0;i<90;i++){
p=r+d*z;float S=M(p);if(!b&&     S<mn)mn=S;if (S<.001) { h=1;
break;}z+=S*.66;if(z>30)break   ;}if (!b) ph=h;if (!h) break;
float e=.002;V n=(V){1,-1,-1}   *M(p+(V){e,-e,-e})+(V){-1,-1,
1}*M(p+(V){-e,-e,e})+(V){-1,1   ,-1}*M(p+(V){-e,e,-e})+(V){1,
1,1}*M(p+(V){ e,e,e });n = n/   sqrtf(D(n,n));float q=sinf(p[
0]*3+T*1.6)+sinf(p[1]*3+T*2.1   )+sinf(p[2] *3-T* 1.4)+ sinf(
sqrtf(p[0]*p[0]+p[1]*p[1])*5-   T*3);V l=P(q*.13+T*.05);float
di=D(n,L);di=di<0?0:di;V rr=d   -n*(2*D(d,n));float sp= powf(
fmaxf( D(rr,L),0), 24), fr=1-   fabsf(D(n,d));fr=fr*fr*fr;C=C
+a*(l*(.2f+di)*(1+1.2f*B)+(V)   {sp,sp,sp}*.6f+P (T*.07) *fr*
.5f)*.8f;a=a*.55f;d=rr;r=p+n*   .01f;} if (!ph) C=C+P(T*.07)*
expf(-mn*3.2)*(0.5f+0.5f*B);    float v=u*u+w*w;C=C*(1-.16f*v
);for(int k=0;k<3;k++){float    g=C[k];g=g<0?0:g>1?1:g;float
G=A[y][X][k]=A[y][X][k]*(.78-   .5*B)+g*(.22+.5*B);int W=powf
(G,.8)*255;F[y][X][k]=W>255?    255:W;}}char*O=o;O+=sprintf(O
,"\x1b[H");for(int r=0;r<24;r   ++){ for (int X=0;X<80;X++){
 unsigned char*t=F[2*r][X],*b   =F[2*r+1][X];O+=sprintf(O,
    "\x1b[38;2;" "%d;%d;%d;"    "48;2;""%d;%d;%dm" /*##*/
     "\xe2\x96\x80",t[0],t[1]   ,t[2],b[0],b[1],b[2]);}O
       +=sprintf(O, /*#####*/   "\x1b[0m%s",r<23? /**/
         "\r\n":"");}write(1,   o,O-o);usleep(20000)
           ;}} /* endofunky*/   /* clang -O2 -lm*/
             /*------------*/   /* cube.c -o  */
                /*LOVES YOU*/   /* cube    */
                 /*########*/   /*########*/
                   /*######*/   /*######*/
                     /*####*/   /*####*/
                       /*##*/   /*##*/
                         /**/   /**/


