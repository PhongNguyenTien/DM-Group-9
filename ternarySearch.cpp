int ternarySearch(int x, int a[], int n) {
    int l = 0, r = n - 1;
    while (l <= r) {
        int lmid = l + (r - l) / 3;
        int rmid = r - (r - l) / 3;
        if (a[lmid] == x)
            return lmid;
        if (a[rmid] == x)
            return rmid;
        if (x < a[lmid])
            r = lmid - 1;
        else if (x > a[rmid])
            l = rmid + 1;
        else {
            l = lmid + 1;
            r = rmid - 1;
        }
    }
    return -1; //not found
}