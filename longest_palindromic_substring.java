import java.util.*;

public class longest_palindromic_substring {

    public static void main(String args[]) {
        Scanner sc = new Scanner(System.in);

        String word = sc.next();

        String longestPalindromicSubstring = longestPalindrome(word);

        System.out.println(longestPalindromicSubstring);
    }

    public static String longestPalindrome(String s) {

        int len = s.length();

        if (len < 2)
            return s;

        int maxLen = 0, pos = 0;

        for (int i = 0; i < len; i++) {
            int l = i, r = i;
            while (l >= 0 && r < s.length() && s.charAt(l) == s.charAt(r)) {
                l--;
                r++;
            }

            if (r - l - 1 > maxLen) {
                pos = l + 1;
                maxLen = r - l - 1;
            }

            l = i;
            r = i + 1;
            while (l >= 0 && r < s.length() && s.charAt(l) == s.charAt(r)) {
                l--;
                r++;
            }

            if (r - l - 1 > maxLen) {
                pos = l + 1;
                maxLen = r - l - 1;
            }
        }

        return s.substring(pos, pos + maxLen);
    }

}
