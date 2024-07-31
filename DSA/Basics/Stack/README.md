# Lưu ý trước khi đọc:

Trong C++, có thể dùng cấu trúc dữ liệu **vector** thay cho stack vì vector có thể truy cập phần tử theo thứ tự nhanh chóng. Ngoài ra bạn có thể đọc bài này để hiểu hơn về stack.

# Khái niệm
Stack là một cấu trúc dữ liệu có chức năng:
- Đẩy một phần tử vào cuối
- Lấy phần tử cuối
- Lấy giá trị phần tử cuối
- Lấy kích thức của stack

Có thể tưởng tượng stack là một chiếc hộp, khi ta bỏ sách vào thì ta bỏ vào hộp, khi lấy ra thì ta chỉ có thể lấy quyển sách trên cùng trước tiên.

(**Để hiểu rõ hơn có thể xem file gif mô phỏng**).

# Khai báo stack

> #include \<stack>  
**Hoặc**  
> #include \<bits/stdc++.h>

**Thao tác khai báo stack:**  

> stack <{kiểu dữ liệu}> {tên stack};

# Các thao tác với stack

- push(): Đẩy một phần tử vào cuối stack, **Không trả về giá trị**
- pop(): Bỏ phần tử cuối cùng ra khỏi stack, **Không trả về giá trị**
- top(): Trả về phần tử cuối cùng của stack mà không lấy phần tử ra khỏi stack
- size(): Trả về kích thước của stack
- empty(): Trả về true hoặc false, kiểm tra xem stack có rỗng hay không

# Ứng dụng của stack



 
|       A       |      B        | C     |
| :------------:|:-------------:|:-----:|
|    3          |        2      |  1    |
|     2         |        4      |   1   |
|     a         | b             |    d  |
