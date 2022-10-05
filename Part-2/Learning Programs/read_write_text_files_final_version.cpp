#include <iostream>
#include <cstring>
#include <cstdio>
using namespace std;
int main() {
  char linestr[80]; char outstr[80];
  char sroll[6], sname[30], sbatch[4];
  char b = ' ';
  int i,j,k,N =0;
  FILE *fp; FILE* fpout;

   fp = fopen("inputdata.txt", "r" );
   if (fp == NULL){
     cout << "Could not open file" << endl;
     return -1;
  }

  fpout = fopen ("studentdb.txt", "w");
  if (fpout == NULL){
     cout << "Could not create output file" << endl;
     return -1;
  }
  cout << "Input and output files opened properly\n\n";
/*Input  file is open at this point, read records one by one */
  fgets(linestr, 79, fp);
  while (!feof (fp)){
    /* valid string, separate the parts */
    i =0; k =0;
    while ((sroll[i++] = linestr[k++]) != ',');
    sroll[i-1]='\0'; i=0;
    while ((sname[i++] = linestr[k++])!= ',');
    for (j = i-1; j<29; j++) sname[j] = ' ';
    sname[j] ='\0'; i=0;
    while ((sbatch[i++] = linestr[k++]) != ',');
    sbatch[i-1] = '\0';
    cout <<N<<b<< sroll<<b << sname<<b << sbatch <<endl;
    /* prepare and write formatted output string to database*/

    fprintf(fpout, "%2d %5s %30s %3s\n",N,sroll,sname, sbatch);

    fgets(linestr, 79, fp);
    N=N+1;
  }
  cout << "\ninputdata.txt has been read and printed\n";
  cout << "\n studentdb.txt file created\n";
  fclose(fp);  fclose(fpout);
  return 0;
}


