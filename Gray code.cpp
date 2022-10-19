/**An n-bit gray code sequence is a sequence of 2n integers where:

Every integer is in the inclusive range [0, 2n - 1],
The first integer is 0,
An integer appears no more than once in the sequence,
The binary representation of every pair of adjacent integers differs by exactly one bit, and
The binary representation of the first and last integers differs by exactly one bit.
Given an integer n, return any valid n-bit gray code sequence. **/


//Maths--> n th gray code is n^(n/2) ie xor of num and num/2.    
vector<int> grayCode(int n){
    vector<int> v;
    int p=(1<<n);
    for(int i=0;i<p;i++){
        v.push_back(i^(i/2));
    }
    return v;
}
