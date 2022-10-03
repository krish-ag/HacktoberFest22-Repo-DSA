package com.company;

import java.lang.reflect.Array;
import java.util.Arrays;

public class mergesort
{
    public static int[] mso(int a[])
    {
        if(a.length==1)
            return a;
        int m=a.length/2;

        int lp[]=mso(Arrays.copyOfRange(a,0,m));
        int rp[]=mso(Arrays.copyOfRange(a,m,a.length));

        return mix(lp,rp);

    }

    private static int[] mix(int[] lp, int[] rp)
    {
        int i=0;
        int j=0;
        int k=0;
        int [] m=new int [lp.length+rp.length];

        while(i<lp.length && j<rp.length)
        {
            if(lp[i]<rp[j]) {
                m[k] = lp[i];
                i++;
            }
            else
            {
                m[k]=rp[j];
                j++;
            }

            k++;
        }

        while (i < lp.length) {
            m[k] = lp[i];
            i++;
            k++;
        }

        while (j < rp.length) {
            m[k] = rp[j];
            j++;
            k++;
        }

        return m;
    }


    public static void main(String[] args) {
        int a[]={5,4,3,2,1};
        int b[]=mso(a);
        System.out.println(Arrays.toString(b));
    }
}
