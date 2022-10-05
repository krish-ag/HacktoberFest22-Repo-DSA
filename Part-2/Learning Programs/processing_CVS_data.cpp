#include <iostream>
#include <cstring>
#include <cstdio>
using namespace std;
int main() {
  char linestr[80]; char outstr[80];
  char sroll[6], sname[30], sbatch[4], smarks[10];
  int sr; char sn[30]; int sb; float sm;
  int i,j,k,N =0;
  FILE *fpin; FILE* fpout;
   fpin = fopen("CSV_data.txt", "r" );
   if (fpin == NULL){
     cout << "Could not open file" << endl;
     return -1;
  }

  fpout = fopen ("marks_data.txt", "w");
  if (fpout == NULL){
     cout << "Could not create output file" << endl;
     return -1;
  }

/*Input  file is open at this point, read lines one by one */
  fgets(linestr, 79, fpin);
  while (!feof (fpin)){
    /* valid string, separate the parts */
    i =0; k =0;
    while ((sroll[i++] = linestr[k++]) != ',');
    sroll[i-1]='\0'; i=0;
    while ((sname[i++] = linestr[k++])!= ',');
    for (j = i-1; j<29; j++) sname[j] = ' ';
    sname[29] ='\0'; i=0;
    while ((sbatch[i++] = linestr[k++]) != ',');
    sbatch[i-1] = '\0'; i=0;
    while((smarks[i++]=linestr[k++]) != '\0');

    /*extract relevent values from these strings */
    sscanf (sroll, "%d", &sr);
    sscanf(sname,"%s", sn);
    sscanf(sbatch,"%d", &sb);
    sscanf(smarks, "%f", &sm);

    sprintf(outstr, "%5d %30s %3d %5.2f\n",sr,sn,sb,sm);
    fputs(outstr,fpout);
    printf("%s", outstr);
    fgets(linestr, 79, fpin);
    N=N+1;
  }  //End of while loop, Entire input file has been processed
  cout << "\ninput file has been read and printed\n";
  cout << "output file Marks_data.txt created\n";
  cout << N << "  records written to output file\n";
  fclose(fpin);  fclose(fpout);
  return 0;
}
