# Phần tử thứ k

Cho một mảng A gồm n phần tử số nguyên. Bạn cần xử lý q truy vấn thuộc một trong ba loại:

- 1 x: Thêm giá trị x vào cuối của mảng A.  
- 2: Xóa giá trị cuối cùng của mảng A. Đảm bảo A có ít nhất một phần tử.  
- 3 k: Tìm phần tử thứ k trong mảng, chỉ số của mảng bắt đầu từ 1.  

**Input**  
- Dòng đầu tiên gồm hai số nguyên n,q.  
- Dòng thứ hai gồm n số nguyên A[i].  
- q dòng tiếp theo, mỗi dòng gồm một truy vấn theo định dạng đã nêu trên.  

**Output**  
- In ra một số nguyên là đáp án cho mỗi truy vấn loại 3.

**Điều kiện**  
- 1 ≤ n, q ≤ 10^5.  
- 1 ≤ x ≤ 10^9.  
- 1 ≤ k ≤ |A| (với |A| là độ dài của mảng A) lúc truy vấn này xuất hiện.  

> Ví dụ

Input

5 4  
1 2 3 4 5  
1 6  
3 6  
2  
3 2  

Output:

6  
2  