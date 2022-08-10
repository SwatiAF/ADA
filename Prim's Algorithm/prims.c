#include&lt;stdio.h&gt;
#include&lt;conio.h&gt;
#include&lt;process.h&gt;
void prims();
int c[10][10],n;
void main()
{
int i,j;
clrscr();
printf(&quot;\nenter the no. of vertices:\t&quot;);
scanf(&quot;%d&quot;,&amp;n);
printf(&quot;\nenter the cost matrix:\n&quot;);
for(i=1;i&lt;=n;i++)
{
for(j=1;j&lt;=n;j++)
{
scanf(&quot;%d&quot;,&amp;c[i][j]);
}
}
prims();
getch();
}

void prims()
{
int i,j,u,v,min;
int ne=0,mincost=0;
int elec[10];
for(i=1;i&lt;=n;i++)
{
elec[i]=0;
}
elec[1]=1;
while(ne!=n-1)
{
min=9999;
for(i=1;i&lt;=n;i++)
{
for(j=1;j&lt;=n;j++)
{
if(elec[i]==1)
{
if(c[i][j]&lt;min)
{
min=c[i][j];
u=i;
v=j;
}
}
}
}
if(elec[v]!=1)
{
printf(&quot;\n%d-----&gt;%d=%d\n&quot;,u,v,min);
elec[v]=1;
ne=ne+1;
mincost=mincost+min;
}
c[u][v]=c[v][u]=9999;
}
printf(&quot;\nmincost=%d&quot;,mincost);
}
