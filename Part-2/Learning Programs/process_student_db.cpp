/* various operations on a binary file. read, modify  specific records*/
#include <iostream>
#include <cstring>
#include <cstdio>
using namespace std;
 struct studentinfo{
  int roll;
  char name[30];
  int batch;
  float marks;
};

int main() {
  struct studentinfo s;
  int r, recnum, rec_size, found =0; long POS;
  rec_size = sizeof(struct studentinfo);
  cout << "Size of each record is:  " <<rec_size<<endl;

  FILE *fp;
  fp = fopen("studentdb", "rb+" );
  if (fp == NULL){
     cout << "Could not open database file" << endl;
     return -1;
  }
  int count=0; found=0;

  rewind(fp);
  cout << " -------------"<<endl;
  cout << "searching sequentially for marks of roll 10105";
  cout << endl;
  r = 10105; found =0;
  POS = ftell(fp);
  // find marks for roll number 10105
  do {
    fread(&s,rec_size,1, fp);
    if (s.roll ==r){
      // found student, print record
      cout << endl << "Found roll "<< r;
      found = POS/rec_size +1;
      cout << " at record no. " << found << endl;
      cout << "The name and marks are: ";
      printf("%s %5.2f \n", s.name,s.marks);
      break;
    }
    else{
    POS= ftell(fp);
    fread(&s,rec_size, 1, fp);
    }
  }while (!feof (fp));
  if (found == 0){
     cout << "\nroll number not found in database\n";
  }
   cout << " -------------"<<endl;
   cout << "demonstrating direct access to records" << endl;
   cout << "read and display 6th record"<< endl<< endl;
  // find and print 6th record in database file
  recnum = 6;
  POS = (recnum-1) * rec_size;
  fseek (fp, POS, SEEK_SET);// set the file position
  fread(&s, rec_size, 1, fp);
  cout << "Record starting at byte position " << POS << " is\n";
  printf("%5d %30s %3d %5.2f \n", s.roll, s.name,s.batch, s.marks);
  cout << "Record Number is: " << POS/rec_size +1 << endl;

  //
  // update Nilamani's marks to 93.5
  // His roll number is 10108.
  // We access 8th record starting at 7 * rec_size)
   cout << " -------------"<<endl;
   cout << "read and update Nilamani Raut's marks" << endl;
   cout << "Nilamani's roll number is 10108"<< endl;
   r = 10108;
   recnum = r-10100;
  POS = (recnum-1)*rec_size;
  fseek (fp, POS, SEEK_SET);
  fread(&s,rec_size, 1,fp);
  cout << "Record for Nilamani is\n";
  printf("%5d %30s %3d %5.2f \n", s.roll, s.name,s.batch, s.marks);
  s.marks = 93.5;
  // previous read has advanced the internal position indicator
  fseek (fp, POS, SEEK_SET);
  fwrite(&s, rec_size,1, fp);
  // verify correct data is written
  fseek (fp, POS, SEEK_SET);
  fread(&s, rec_size, 1,fp);
  cout << "--------Updated record in database file is\n";
  printf("%5d %30s %3d %5.2f \n", s.roll, s.name,s.batch, s.marks);

  fclose(fp);
  return 0;
}
