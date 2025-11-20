char* firstPalindrome(char** words, int wordsSize) {
    for (int i = 0; i < wordsSize; i++) {


        char *s = words[i];
        int left = 0;
        int right = strlen(s) - 1;
        int ok = 1;


        while (left < right) {
            if (s[left] != s[right]) {
                ok = 0;
                break;
            }
            left++;
            right--;
        }


        if (ok) {
            return s;   
        }
    }


    return "";  
   
}
