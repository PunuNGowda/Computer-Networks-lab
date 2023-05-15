#include<stdio.h>
#include<conio.h>
int main()
{
char fname[20], ch;
FILE *fps, *fpt;
clrscr();
printf("Enter Filename: ");
scanf("%s",fname);
fps = fopen(fname, "r");
if(fps == NULL)
return 0;
fpt = fopen("temp.txt", "w");
if(fpt == NULL)
return 0;
printf("\n\n File %s Encrypted Successfully! data stored in temp.txt \n", fname);
ch = fgetc(fps);
while(ch != EOF)
{
ch = ch+100;
fputc(ch, fpt);
printf("%c",ch);
ch = fgetc(fps);
}
fclose(fps);
fclose(fpt);
printf("\n\n Enter the file name to store decrypted data:");
scanf("%s",fname);
fps = fopen(fname, "w");
if(fps == NULL)
return 0;
fpt = fopen("temp.txt", "r");
if(fpt == NULL)
return 0;
printf("\n\n File temp.txt decrypted successfully! and stored in %s file \n", fname);
ch = fgetc(fpt);
while(ch != EOF)
{
fputc(ch-100, fps);
printf("%c",ch-100);
ch = fgetc(fpt);
}
fclose(fps);
fclose(fpt);
getch();
return 0;
}