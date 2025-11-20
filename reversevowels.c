char* reverseVowels(char* s) {
    int left = 0;
    int right = strlen(s) - 1;

    while (left < right) {

       
        while (left < right) {
            char c = tolower(s[left]);
            if (c=='a' || c=='e' || c=='i' || c=='o' || c=='u')
                break;
            left++;
        }

        while (left < right) {
            char c = tolower(s[right]);
            if (c=='a' || c=='e' || c=='i' || c=='o' || c=='u')
                break;
            right--;
        }

    
        char temp = s[left];
        s[left] = s[right];
        s[right] = temp;

        left++;
        right--;
    }
    return s;
}
