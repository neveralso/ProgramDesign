#include<stdio.h>
main()
{
      freopen("Plan.in","rt+",stdin);
      freopen("Plan.out","wt+",stdout);
      int i,j,m,n,data[25][3],f[30002],max,temp;
      scanf("%d%d",&n,&m);
      for(i=0;i<m;i++)
      {
                      scanf("%d%d",&data[i][0],&data[i][1]);
                      data[i][2]=data[i][0]*data[i][1];
                      //printf("%d*%d=%d\n",data[i][0],data[i][1],data[i][2]);
      }
      //printf("\n");
      for(i=0;i<m;i++)
      {
                      for(j=n;j>=data[i][0];j--)
                      {
                                       temp=f[j-data[i][0]]+data[i][2];
                                       //printf("temp=%d\n",temp);
                                       if(temp>f[j])f[j]=temp;
                      }
                      //for(j=0;j<=n;j++)printf("%d ",f[j]);
                      //printf("\n");
      }
      for(i=0;i<=n;i++)
      {
                       if(f[i]>max)max=f[i];
      }
      //printf("max=%d",max);
      printf("%d",max);
      return(0);
}
