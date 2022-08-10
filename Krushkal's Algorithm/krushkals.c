#include&lt;stdio.h&gt;
#include&lt;conio.h&gt;
void kruskals();
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
kruskals();
getch();
}

void kruskals()
{
int i,j,u,v,a,b,min;
int ne=0,mincost=0;
int parent[10];
for(i=1;i&lt;=n;i++)
{
parent[i]=0;
}
while(ne!=n-1)
{
min=9999;
for(i=1;i&lt;=n;i++)
{
for(j=1;j&lt;=n;j++)
{
if(c[i][j]&lt;min)
{
min=c[i][j];
u=a=i;
v=b=j;
}
}
}
  
while(parent[u]!=0)
{
u=parent[u];
}
while(parent[v]!=0)
{
v=parent[v];
}
if(u!=v)
{
printf(&quot;\n%d-----&gt;%d=%d\n&quot;,a,b,min);
parent[v]=u;
ne=ne+1;
mincost=mincost+min;
}
c[a][b]=c[b][a]=9999;
}
printf(&quot;\nmincost=%d&quot;,mincost);
}
