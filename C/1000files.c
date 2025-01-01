//create a file in write mode  print 1000 integer nodes in itand do the folloing

#include<stdio.h>
#include<math.h>
#include<stdlib.h>
int main()
{
    FILE*fp;
    int n,k,i;
    fp=fopen("cfile.txt","w");
    for(i=0;i<=999;i++)
    { 
        k=rand(0,1);
        if (k%6==0)
        {
            n=rand();
            fprintf(fp,"%d\n",n);
        }
        else
        {
            n=-1*rand();
            fprintf(fp,"%d\n",n);
        }
    }
fclose(fp);
fp=fopen("cfile.txt","w");
int max, min;
while ((n=getw(fp))!=EOF)
{
    if(n>max)
    {
        max=n;
    }
    else if(n<min)
    {
        min=n;
    }
}
while (fscanf(fp,%d\n",)
return 0;
}