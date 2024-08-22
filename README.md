Cho hai số nguyên dương a và b. Trong một bước di chuyển, bạn có thể tăng a lên 1 đơn vị (thay thế a bằng a+1). Nhiệm vụ của bạn là tìm số bước di chuyển tối thiểu cần thực hiện để a chia hết cho b. Có thể trường hợp không cần thực hiện bước di chuyển nào, nếu a đã chia hết cho b.

Input:

Dòng đầu tiên của input chứa một số nguyên t (1≤t≤10^4) - số lượng test case. Tiếp theo là t test case.
Mỗi test case chỉ có một dòng chứa hai số nguyên a và b (1≤a,b≤10^9).

Output:

Với mỗi test case, in ra kết quả - số bước di chuyển tối thiểu cần thực hiện để a chia hết cho b.

Giải quyết:

Để tìm số bước tối thiểu cần thực hiện để biến a thành số chia hết cho b, bạn cần xác định số dư của a khi chia cho b. Nếu số dư đó bằng 0, thì 𝑎 đã chia hết cho b và không cần bước nào cả. Nếu số dư khác 0, số bước cần thực hiện để a chia hết cho b chính là số b trừ đi số dư đó.
