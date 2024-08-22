/*
giải: Để tìm số bước tối thiểu cần thực hiện để biến a thành số chia hết cho b, bạn cần xác định số dư của
a khi chia cho b. Nếu số dư đó bằng 0, thì 𝑎 đã chia hết cho b và không cần bước nào cả. Nếu số dư khác 0,
số bước cần thực hiện để a chia hết cho b chính là số b trừ đi số dư đó.
*/

int main() {
    int t;
    scanf("%d", &t);  // Đọc số lượng test cases

    long long results[t];  // Tạo mảng để lưu kết quả

    for (int i = 0; i < t; i++) {
        long long a, b;
        scanf("%lld %lld", &a, &b);  // Đọc hai số a và b

        long long remainder = a % b;
        if (remainder == 0) {
            results[i] = 0;  // Nếu a đã chia hết cho b, không cần bước nào
        } else {
            results[i] = b - remainder;  // Lưu số bước cần thiết
        }
    }

    for (int i = 0; i < t; i++) {
        printf("%lld\n", results[i]);  // In kết quả cho mỗi test case
    }

    return 0;
}