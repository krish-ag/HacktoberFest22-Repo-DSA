package com.company;

import java.util.*;
import java.io.*;
import java.math.*;
import java.lang.*;

public class stack1 {
    public static void main(String[] args) {
        int a[] = {1,3,2, 4};

        Vector<Integer> v=new Vector<>();
        Stack<Integer> ss =new Stack<>();
        for (int i = 0; i < a.length; i++) {
            ss.push(a[i]);
        }

//        System.out.println(ss);

        for (int i =a.length-1;i>=0 ; i--) {

            if(ss.isEmpty())
                v.add(-1);

            else if(!ss.isEmpty() && ss.peek()>a[i])
                v.add(ss.peek());

            else if (ss.size()>0 && ss.peek()<=a[i]) {
                while (ss.size() > 0 && ss.peek() <= a[i])
                    ss.pop();

                if (ss.size() == 0)
                    v.add(-1);
                else
                    v.add(ss.peek());
            }
            ss.push(a[i]);
        }

        System.out.println(v);
        Collections.reverse(v);
        System.out.println(v);
//        System.out.println(ss);
    }
}
