#include<stdio.h>
int main(){char s[500];int i,w=0,inW=0;printf("Enter sentence: ");fgets(s,500,stdin);for(i=0;s[i];i++)if(s[i]!=' '&&s[i]!='\
'&&s[i]!='\\t'){if(!inW){w++;inW=1;}}else inW=0;printf("Word count = %d\
",w);return 0;}
