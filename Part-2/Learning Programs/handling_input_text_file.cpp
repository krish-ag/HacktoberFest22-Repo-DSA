#include <iostream>
#include <cstdio>
using namespace std;

// read_text_file.cpp
int main() {
  char linestr[100];
  char c;
  int N =0;
  FILE *fp;
  fp = fopen("inputdata.txt", "r" );
  if (fp == NULL){
     cout << "Could not open file" << endl;
     return -1;
  }
  /* file is opened at this point.
     Just read all characters, one at a time
  */

  c = fgetc(fp);
  while (!feof (fp)){
      /* valid character */
      N++;
      cout << N << " " << c << "  " << (int) c <<endl;

      c=fgetc(fp);
  }
  cout << "inputfile has been read and printed\n";
  cout << endl << endl;
  fclose(fp);
  return 0;
}


