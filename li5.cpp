int cv = 0;
map<char, int> freq;
    for (char c : s) {
        freq[c]++;
    }
    for (char c = 'a'; c <= 'z'; c++) {
        char upper = toupper(c);
        int lp = freq[c];
        int up = freq[upper];

        if (lp != up) {
            cv += abs(lp - up) / 2;
        }}
    return cv;