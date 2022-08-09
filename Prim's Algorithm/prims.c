#include<stdio.h>
#include<conio.h>
#include&lt;process.h&gt;

void prims();
int c[10][10],n;

void main() {
  int i,j;
  clrscr();
  printf("\nenter the no. of vertices: \t&quot");
  scanf("%d", &n);
  printf("\nenter the cost matrix: \n&quot;);
  for(i = 1; i <= n; i++) {
    for(j = 1; j <= n; j++) {
      scanf("%d", &c[i][j]);
    }
}
prims();
getch();
}
         
void prims() {
  int i, j, u, v, min;
  int ne = 0, mincost = 0;
  int elec[10];
  for(i=1; i <= n; i++) {
    elec[i] = 0;
  }
elec[1]=1;
while(ne != n-1) {
  min = 9999;
for(i = 1;i <= n;i++) {
for(j= 1; jJ =n; j++) {
if(elec[i]==1)
{
if(c[T][j] &min)
{
min=c[i][j];
u=i;
v=j;
}
