#include<stdio.h>
int main()
{
FILE *fptr,*fo,*fe;
  int i,n;
  int str[100];
  char fname[20]="Input.txt";
  char str1;
  
/*-------------- read the file -------------------------------------*/
	fptr = fopen (fname, "r");  
	printf("\n The content of the file %s is  :\n",fname);
	
	while (str1 != EOF)
		{
			printf ("%c", str1);
                        str1 = fgetc(fptr);
                       /* for(i=0; i< 10; i++)
        		{
			// fscanf(fptr,"%d",&str[i]);
			str1 = fgetc(fptr);
                       if(str[i] % 2 == 0)
                       {
			 fe = fopen("Even.txt","w");
                         putc(str[i],fe);
                       }
                       else
                       { 
                         fo = fopen("Odd.txt","w");
                         putc(str[i],fo);
                       }
			}*/
		}
    printf("\n\n");
    fclose (fptr);
    return 0;
}
