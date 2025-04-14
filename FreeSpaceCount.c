#include<stdio.h>
#include<stdlib.h>
#include<string.h>
#define max 100
struct file
{
char fname[20];
int size;
int add;
};
char name[20];
int sa;
int l;
struct file f[5];
int fcount=0;
int a[max];
int freespace[max];
int main()
{int n;
 Label:
printf("\n\n1.Show a Bit Vector\n2.Create a New File\n3.Show Directory\n4.Delete File\n5.display Bit Vector\n6.Exit");
 int choice;

 printf("\n\nEnter Your Choice :");
 scanf("%d",&choice);
 switch(choice)
 {
   case 1:
   {
     printf("Enter size of vector ");
     scanf("%d",&n);
     for(int i=0;i<n;i++)
     {
       a[i]=0;
       freespace[i]=0;
     }
     printf("\n Bit Vector is :\n");
     for(int i=0;i<n;i++)
     {
        printf(" %d ",a[i]);
     }
     
     goto Label; 
     break;
   }
   case 2:
   {
     
      printf("\nEnter The File name:");
      scanf("%s",name);
       printf("\nEnter The size:");
      scanf("%d",&l);
      printf("\nEnter The Start Address:");
      scanf("%d",&sa);
      printf("\nFile Created");
     
       int count=0;
    for(int i=sa;i<sa+l;i++)
    {
       if(a[i]==0)
       {
          count++;
       }
    }
     for(int i=sa;i<sa+l;i++)
    {
       if(count>=l)
       {
           a[i]=1;
       }
    }
   
     strcpy(f[fcount].fname,name);
      f[fcount].size=l;
      f[fcount].add=sa;
       fcount++;
   
     
      goto Label;  
      break;
   }
   case 3:
   {
   
   
      for(int i=0;i<n;i++)
     {
       if(a[i]==0)
       {
          freespace[i]=i;
         
       }
         
    }
   
     for(int i=0;i<fcount;i++)
      {
        if(f[i].size!=0)
      {
      printf("\nFile: %s",f[i].fname);
      printf("\n Size address: %d",f[i].size);
      printf("\nStart Address: %d",f[i].add);
      }
     
      }    
      goto Label;  
      break;
   }
   case 4:
   {
    int index=0;
    char name[20];
    printf("\nEnter the name to search:");
    scanf("%s",name);
   
   for(int i=0;i<fcount;i++)
   {
     if(strcmp(f[i].fname,name)==0)
     {
      index=i;
      for(int j=f[i].add;j<f[i].add+f[i].size;j++)
      {
         a[j]=0;
      }
      printf("%s File is deleted",name);
     }
   
  }
   
    for(int j=index;j<fcount;j++)
    {
     
      f[j]=f[j+1];
    }
   
      goto Label;  
      break;
   }
   
    case 5:
    {
        printf("\n Bit Vector is :\n");
     for(int i=0;i<n;i++)
     {
        printf(" %d ",a[i]);
     }
     
     printf("\n Free Scape Index no is:\n");
     for(int i=0;i<n;i++)
     {
        if(i==0)
        {
        if(freespace[i]==0)
        {
        printf(" %d ",freespace[i]);
       
        }
        }
        if(i!=0)
        {
         if(freespace[i]!=0)
       {
        printf(" %d ",freespace[i]);
       
       }
       }   
     }
      goto Label;  
      break;
   
    }
   case 6:
   {
     exit(0);
     goto Label;  
     break;
   }
   default:
     printf("Invalid Choice");
}
return 0;
}