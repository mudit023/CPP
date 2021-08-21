#include<iostream>
#include<fstream>
#include<string.h>
#include<cstdlib>
#include<conio.h>
using namespace std;
int main()
{
     int noc=0,now=1,nol=1,i;
     FILE *fr;
     char in[100];
     char fname[20],ch;
     char input;
     static int characters, words, lines;
     cout<<"Press s if you want to give input  string OR press anyother key if you want to take input from a file: ";
     cin>>input;
     switch (input)
     {
     case 's':
          cout<<"Enter your string:\n";
          cin>>in;
     for (i = 0; in[i]!='\0'; i++)
     {
          if (in[i]=='\n')
          {
               lines= ++nol;
               words= ++now;
          }
          else{
               if (in[i]==' '||in[i]=='\t')
               {
                    words= ++now;
                    characters= ++noc;
               }
               else
               characters = ++noc;
          }   
     }
     cout<<" -------------------------------------";
     cout<<"\n Total No. of Characters  : "<<characters;
     cout<<"\n Total No. of Words       : "<<words;
     cout<<"\n Total No. of Lines       : "<<lines;
     getch();
          break;
     default:
          cout<<"\n Enter Source File Name : ";
     gets(fname);
     fr=fopen(fname,"r");
     if(fr==NULL)
     {
          cout<<"\n Invalid File Name. \n No such File or Directory ";
          exit(0);
     }
     ch=fgetc(fr);
     while(ch!=EOF)
     {
          if(ch!=' ' && ch!='\n')
               noc++;
          if(ch==' ')
               now++;
          if(ch=='\n')
          {
               nol++;
               now++;
          }
          ch=fgetc(fr);
     }
     fclose(fr);
     cout<<" -------------------------------------";
     cout<<"\n Total No. of Characters  : "<<noc;
     cout<<"\n Total No. of Words       : "<<now;
     cout<<"\n Total No. of Lines       : "<<nol;
          break;
     }

     return 0;
}