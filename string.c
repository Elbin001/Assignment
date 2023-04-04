#include<stdio.h>
#include<string.h>
void main()
{
    char str[100],sub[100];
    int maxLetters,maxSize,minSize;
    printf("Enter the string : ");
    gets(str);
    int l1=strlen(str);

    printf("\nEnter minSize :");
    scanf("%d",&minSize);
    printf("Enter maxSize : ");
    .......

    scanf("%d",&maxSize);

    int l,p;
    while(1)
    {
        printf("\nEnter starting position :");
        scanf("%d",&p);
        printf("Enter length of substring : ");
        scanf("%d",&l);
        if(l>=minSize && l<=maxSize)
        {
            int a=0;
            while(a<l)
            {
                sub[a]=str[p+a-1];
                a++;
            }
            sub[a]='\0';
            printf("Substring : ");
            puts(sub);
            break;
        }
        else
        {
            printf("Enter length b/w %d and %d.",minSize,maxSize);
        }
    }
    int count=0,i,j;
    for(i=0;i<l;i++)
    {
        for(j=i+1;j<l;j++)
        {
            if(sub[i]==sub[j])
            {
                break;
            }
        }
        if(j==l)
        {
            count++;
        }
    }
    printf("\nEnter maxLetters : ");
    scanf("%d",&maxLetters);
    if(count<=maxLetters)
    {
        int i,count1=0;
        for(i=0;i<l1;)
        {
            int j=0,count=0;
            while(str[i]==sub[j])
            {
                count++;
                i++;
                j++;
            }
            if(count==l)
            {
                count1++;
                count=0;
            }
            else
                i++;
        }
        printf("\nSubstring occurs %d times in the string",count1);
    }
}
