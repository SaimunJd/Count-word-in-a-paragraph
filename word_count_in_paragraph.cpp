//Author Saimun Don
#include<stdio.h>
#include<string.h>
int count(char ch[],int n)
{
  int word=0;
  if(ch[0]!=' ')word++;
  for(int i=0;i<n;i++)
    {
    if(ch[i]>=65 || ch[i]<=91 || ch[i]>=97 || ch[i]<=122)
    {
      if(ch[i]==' ' && ch[i+1]!=' ')
      {
        word++;
      }
      
    }
    
  }
  return word;
}
int main()
{
    char ch[5000];
    printf("your paragraph is : \n");
    gets(ch);
    
    int ans;
    ans=count(ch,strlen(ch)-1);
    printf("There are %d words on this paragraph.\n",ans);
    
    printf("there are %d alphabets white spaces and special charecters in this paragraph.\n",strlen(ch));
}