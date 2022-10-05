class student {
private:
   char *name;
   int rollnum;
   char *gender;
   int marks1, marks2;
   static int ID;
   friend float average(student &a);
   friend int count();
public:
   student (char *n, int R, char *gend, int m1, int m2) {
      name = n;
      rollnum = R;
      gender = gend;
      marks1 = m1; marks2 = m2;
      ID++;
   }
};
int student::ID = 0;
float average(student &a) {
   return float((a.marks1+a.marks2))/2;
}

int count() { 
   return student::ID; 
}
