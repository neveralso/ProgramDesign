#include<stdio.h>
main()
{
      freopen("tree.in","rt+",stdin);
      freopen("tree.out","wt+",stdout);
      int l,m,i,j,date[10005],x,y,w=0,sum=0,s[10000];
      scanf("%d%d",&l,&m);
      for(i=0;i<m;i++)
      {
                      scanf("%d%d",&x,&y);
                      date[x]++;
                      date[y]--;
      }
      for(i=0;i<=l;i++)
      {
                       w+=date[i];
                       if(w>0)sum++;
                       if(w==0&&date[i]<0)sum++;
                       s[i]=sum;
      }
      for(i=0;i<=500;i++)printf("%4d",i);
      printf("\n");
      for(i=0;i<=500;i++)printf("%4d",date[i]);
      printf("\n");
      for(i=0;i<=500;i++)printf("%4d",s[i]);
      printf("\n");
      printf("%d",l+1-sum);
      return(0);
}
