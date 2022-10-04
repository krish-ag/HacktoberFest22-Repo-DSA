package com.company;

import java.util.Arrays;

public class Quicksort {
    public static void main(String[] args) {
        int a[]={2, 8, 1, 3, 6, 7, 5, 4};
        sorting(a,0,a.length-1);
        System.out.println(Arrays.toString(a));
    }

    static void sorting(int[] a, int l, int h) {
        if (l >= h)
            return;
        int s = l;
        int e = h;
        int m = s + (e - s) / 2;
        int p = a[m];

        while(s<=e){

            while(a[s]<p)
                s++;
            while(a[e]>p)
                e--;

            if(s<=e){
                int t=a[s];
                a[s]=a[e];
                a[e]=t;
                s++;
                e--;
            }
        }
          sorting(a,l,e);
          sorting(a,s,h);
    }
}
