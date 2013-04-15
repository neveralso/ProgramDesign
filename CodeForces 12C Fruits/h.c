#include<stdio.h>
#include<string.h>
int main()
{
    freopen("in.in","r",stdin);
    freopen("out.out","w",stdout);
    struct
    {
        char name[32];
    }fruit[200];
    int n,m,i,j;
    int data[200];
    int re[200]={0};
    char s[200][100],temp[200];
    scanf("%d%d",&n,&m);
    for(i=0;i<n;i++)scanf("%d",&data[i]);
    int sign=0;
    quicksort(data,0,n-1);
    for(i=0;i<n;i++)printf("%d ",data[i]);
    printf("\n");
    for(i=1;i<=m;i++)
    {
        scanf("%s",temp);
        for(j=0;j<sign;j++)if(strcmp(fruit[j].name,temp)==0)break;
        if(j==sign)
        {
            strcpy(fruit[sign].name,temp);
            re[sign]++;
            sign++;
        }
        else
        {
            re[j]++;
        }
    }
    for(j=0;j<sign;j++)printf("%s\n",fruit[j].name);
    for(i=0;i<sign;i++)printf("%d ",re[i]);
    printf("\n");
    return 0;
}

int quicksort(int data[],int s,int t)
{
    int i,j,y,temp,m;
    m=rand()%(t-s+1)+s;
    temp=data[s];
    data[s]=data[m];
    data[m]=temp;
    y=data[s];
    i=s;
    j=t+1;
    for(;i<j;)
    {
        for(i++;data[i]<y;i++);
        for(j--;data[j]>y;j--);
        if(i<j)
        {
            temp=data[i];
            data[i]=data[j];
            data[j]=temp;
        }
    }
    data[s]=data[j];
    data[j]=y;
    if(s<j-1)quicksort(data,s,j-1);
    if(t>j+1)quicksort(data,j+1,t);
}
