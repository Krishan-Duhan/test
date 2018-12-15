//Leetcode

int strStr(string haystack, string needle) {
        if(needle.length() == 0) return 0;
        int n_i, h_indx;
        for(int c =0; c < haystack.length(); c++) {
            h_indx = c;
            n_i = 0;
            while((haystack[c] == needle[n_i]) && (n_i < needle.length())) {
                n_i++;
                c++;
            }
            if(n_i == needle.length()) return h_indx;
            else c = h_indx;
        }
        return -1;
}

/*
      int strStr(string haystack, string needle) {
        int hlen = haystack.length(), nlen = needle.length();
        string sub;
        if(needle == "") return 0;
        for(int i = 0; i <= (hlen - nlen); i++) {
            sub = haystack.substr(i, nlen);
            if(sub.compare(needle) == 0) return i;
        }
        return -1;
    }


 */
