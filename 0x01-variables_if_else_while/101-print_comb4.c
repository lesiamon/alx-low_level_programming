int main() {
    int i, j, k;
    for (i = 0; i < 8; i++) {
        for (j = i + 1; j < 9; j++) {
            for (k = j + 1; k < 10; k++) {
                int smallest = (i < j) ? ((i < k) ? i : k) : ((j < k) ? j : k);
                int middle = (i + j + k) - smallest - ((i > j) ? ((i > k) ? i : k) : ((j > k) ? j : k));
                int largest = (i + j + k) - smallest - middle;
                putchar(smallest + '0');
                putchar(middle + '0');
                putchar(largest + '0');
                if (i < 7 || j < 8 || k < 9) {
                    putchar(',');
                    putchar(' ');
                }
            }
        }
    }
    return 0;
}
