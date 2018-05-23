#include<stdio.h>
#include<dos.h>
#include<time.h>
#include<string.h>
void loadingd()
{
    int j=0;
    int Counter=0;
    while(j!=40)
    {
        system("cls");
        printf("DECRYPTING   ");
      switch(Counter)
      {
        case 0:
          printf("|");
          Counter++;
        break;
        case 1:
          printf("/");
          Counter++;
        break;
        case 2:
          printf("-");
          Counter++;
        break;
        case 3:
          printf("\\");
          Counter++;
        break;
        default:
          Counter=0;
      }
      j++;
    }
}
void loadinge()
{
    int j=0;
    int Counter=0;
    while(j!=40)
    {
        system("cls");
        printf("ENCRYPTING  ");
      switch(Counter)
      {
        case 0:
          printf("|");
          Counter++;
        break;
        case 1:
          printf("/");
          Counter++;
        break;
        case 2:
          printf("-");
          Counter++;
        break;
        case 3:
          printf("\\");
          Counter++;
        break;
        default:
          Counter=0;
      }
      j++;
    }
}
void loading()
{
    int j=0;
    int Counter=0;
    while(j!=40)
    {
        system("cls");
        printf("File Found \nReading Data\n");
      switch(Counter)
      {
        case 0:
          printf("|");
          Counter++;
        break;
        case 1:
          printf("/");
          Counter++;
        break;
        case 2:
          printf("-");
          Counter++;
        break;
        case 3:
          printf("\\");
          Counter++;
        break;
        default:
          Counter=0;
      }
      j++;
    }
}
void main()
{
    int i,j,d,c;
    char f[30],fi[30],a;
    int ch,n,y;
    y=0;
    n=0;
    char g[2];
    FILE *fo,*fn;
    printf("WELCOME TO THE CRYPTOGRAPHIC ENGINE\n");
    start:
    printf("PLEASE ENTER THE FILE NAME WITH EXTENSION : ");
    scanf("%s",f);
    fo=fopen(f,"rb+");
    if(fo==NULL)
    {
        system("cls");
        printf("File does not exist please try again \n");
        goto start;
    }
    loading();
    system("cls");
    printf("FILE FOUND\n");
    printf("\aOK I FOUND THE FILE WHAT DO YOU WANNA DO");
    printf("\nPlease Select One of the Options in the following Menu\n");
    starto:
    printf("1.Encrypt \n2.Decrypt\nEnter Choice :");
    scanf("%d",&ch);
    switch(ch)
    {
    case 2:
        printf("\nEnter a Alpha Numeric Key \n");
        scanf("%s",g);
        a=g[0];
        n=g[1];
        printf("Please Wait While the File is being Decrypted \n");
        switch(a)
        {
        case 'A':
        case 'a':
            y=(n*n*n)+(2*n*n)+(n/2)+82;
            break;

        case 'B':
        case 'b':
            y=(n)+(2*n*n)+(n*2)+42;
            break;

        case 'C':
        case 'c':
            y=(n*n*n)+(2*n*n)+(n/2)+92;
            break;

        case 'D':
        case 'd':
            y=(n*n*n)+(2*n*n)+82;
            break;

        case 'E':
        case 'e':
            y=(n*n*n)+(n*n)+(n)+82;
            break;

        case 'F':
        case 'f':
            y=(n*n*n)+(2*n*n)+(n+2)+3;
            break;

        case 'G':
        case 'g':
            y=(n)+82;
            break;

        case 'H':
        case 'h':
            y=(n*n*n)+82;
            break;

        case 'I':
        case 'i':
            y=(n*n*n*n)+82;
            break;

        case 'J':
        case 'j':
            y=(n*n)+99;
            break;

        case 'K':
        case 'k':
            y=(n*n)+(n*n)+(n+2)+102;
            break;

        case 'L':
        case 'l':
            y=(n)+(n+n)+(n/2)+82;
            break;

        case 'M':
        case 'm':
            y=n*8;
            break;

        case 'N':
        case 'n':
            y=(n*n*8)+7;
            break;

        case 'O':
        case 'o':
            y=(n*n*n)+(2*n*n)+(n)+9;
            break;

        case 'P':
        case 'p':
            y=(n*n)+(n+n)+(n/2)+7;
            break;

        case 'Q':
        case 'q':
            y=(82*n)/100;
            break;

        case 'R':
        case 'r':
            y=(n)+(n*n)+(n)+2;
            break;

        case 'S':
        case 's':
            y=(n)+(n)+(n/2)+7;
            break;

        case 'T':
        case 't':
            y=(n*n*n)+(2*n*n)+(n*8)+8;
            break;

        case 'U':
        case 'u':
            y=(n*n*n)+(2*n*n)+24;
            break;

        case 'V':
        case 'v':
            y=(n/n*n)+(2*n*n)+(n)+42;
            break;

        case 'W':
        case 'w':
            y=(n*n)+(2*n*n)+(n/2)+52;
            break;

        case 'X':
        case 'x':
            y=(n*n*2*n)+(2*n*n*5)+(n/2)+2;
            break;

        case 'Y':
        case 'y':
            y=(n*n*n)+(2*n*n)+(n/24)+12;
            break;

        case 'Z':
        case 'z':
            y=(n*n)+(2*n*n)+(n/2)+52;
            break;
        }
        fi[0]='d';
        for(i=0;f[i]!='\0';i++)
        {
            fi[i+1]=f[i];
        }
        fi[i+1]='\0';
        fn=fopen(fi,"wb+");
        c=fgetc(fo);
        while(c!=EOF)
        {
            d=c+y;
            fputc(d,fn);
            c=fgetc(fo);
        }
        loadingd();
        system("cls");
        printf("File Has been Decrypted\n\nThank You");break;
    case 1:
        printf("Enter a Alpha Numeric Key \n");
        scanf("%s",g);
        a=g[0];
        n=g[1];
        printf("Please Wait While the File is being Encrypted\n");
        switch(a)
        {
        case 'A':
        case 'a':
            y=(n*n*n)+(2*n*n)+(n/2)+82;
            break;

        case 'B':
        case 'b':
            y=(n)+(2*n*n)+(n*2)+42;
            break;

        case 'C':
        case 'c':
            y=(n*n*n)+(2*n*n)+(n/2)+92;
            break;

        case 'D':
        case 'd':
            y=(n*n*n)+(2*n*n)+82;
            break;

        case 'E':
        case 'e':
            y=(n*n*n)+(n*n)+(n)+82;
            break;

        case 'F':
        case 'f':
            y=(n*n*n)+(2*n*n)+(n+2)+3;
            break;

        case 'G':
        case 'g':
            y=(n)+82;
            break;

        case 'H':
        case 'h':
            y=(n*n*n)+82;
            break;

        case 'I':
        case 'i':
            y=(n*n*n*n)+82;
            break;

        case 'J':
        case 'j':
            y=(n*n)+99;
            break;

        case 'K':
        case 'k':
            y=(n*n)+(n*n)+(n+2)+102;
            break;

        case 'L':
        case 'l':
            y=(n)+(n+n)+(n/2)+82;
            break;

        case 'M':
        case 'm':
            y=n*8;
            break;

        case 'N':
        case 'n':
            y=(n*n*8)+7;
            break;

        case 'O':
        case 'o':
            y=(n*n*n)+(2*n*n)+(n)+9;
            break;

        case 'P':
        case 'p':
            y=(n*n)+(n+n)+(n/2)+7;
            break;

        case 'Q':
        case 'q':
            y=(82*n)/100;
            break;

        case 'R':
        case 'r':
            y=(n)+(n*n)+(n)+2;
            break;

        case 'S':
        case 's':
            y=(n)+(n)+(n/2)+7;
            break;

        case 'T':
        case 't':
            y=(n*n*n)+(2*n*n)+(n*8)+8;
            break;

        case 'U':
        case 'u':
            y=(n*n*n)+(2*n*n)+24;
            break;

        case 'V':
        case 'v':
            y=(n/n*n)+(2*n*n)+(n)+42;
            break;

        case 'W':
        case 'w':
            y=(n*n)+(2*n*n)+(n/2)+52;
            break;

        case 'X':
        case 'x':
            y=(n*n*2*n)+(2*n*n*5)+(n/2)+2;
            break;

        case 'Y':
        case 'y':
            y=(n*n*n)+(2*n*n)+(n/24)+12;
            break;

        case 'Z':
        case 'z':
            y=(n*n)+(2*n*n)+(n/2)+52;
            break;
        }
        fi[0]='e';
        for(i=0;f[i]!='\0';i++)
        {
            fi[i+1]=f[i];
        }
        fi[i+1]='\0';
        fn=fopen(fi,"wb+");
        c=fgetc(fo);
        while(c!=EOF)
        {
            d=c-y;
            fputc(d,fn);
            c=fgetc(fo);
        }
        loadinge();
        system("cls");
        printf("File Has been Encrypted\n\nThank You");break;
        default:
            printf("Please select one of the two options given to proceed");
            goto starto;
    }
    fclose(fn);
    fclose(fo);
}
