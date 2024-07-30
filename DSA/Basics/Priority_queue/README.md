# Khái niệm
Priority queue là một hàng đợi có độ ưu tiên (tức là các phần tử lớn nhất hoặc nhỏ nhất ở đầu hàng đợi)
Cấu trúc này nằm trong header queue

> #include <queue>

Hay ta có thể dùng header bits/stdc++.h (header này có chức năng rất đặc biệt)

> #include <bits/stdc++.h>

# Các thao tác với Priority queue
Khai báo: 
> priority_queue <{kiểu dữ liệu}, {class container}, {class compare}> {tên priority_queue};

Trong đó:
- Container là một đối tượng cho phép lưu trữ các đối tượng khác. Ví dụ như vector, stack, queue, deque, … đều là các class container. Mặc định, vector là container của priority_queue.

- Compare thường sẽ là một phép toán trong thư viện functional. Một số phép toán trong thư viện này là less, greater, less_equal, … Phép toán mặc định trong priority_queue là less. 

* Lưu ý: Đối với các kiểu dữ liệu mặc định của C++, các phép toán này đã được xây dựng sẵn. Tuy nhiên, với các class hay struct mà người dùng tạo, ta sẽ phải tự định nghĩa các phép toán này. Mình sẽ giới thiệu cách định nghĩa ở phần sau.

> Chú ý: Nếu như phép so sánh là **less** thì các phần tử lớn nhất sẽ ở đầu hàng đợi và nếu là **greater** thì ngược lại.

Nguồn: https://howkteam.vn/course/cau-truc-du-lieu-va-giai-thuat/tong-quan-ve-priority-queue-4384

Một số thao tác cơ bản của priority queue:
- push: thêm phần tử vào đầu hàng đợi, không trả về giá trị.
- pop: loại bỏ phần tử đầu tiên của hàng đợi, không trả về giá trị.
- empty: kiểm tra xem hàng đợi có rỗng hay không, trả về true hoặc false.
- top: trả về giá trị đầu của hàng đợi.
- size: trả về kích thước của hàng đợi.

* Lưu ý: khi mình dùng pop(), hay là top() thì mình cần kiểm tra xem hàng đợi có rỗng hay không trước:

> if (q.empty() == false) q.pop();
**Hoặc**
> if (q.size()) q.pop();

Nếu như có nhiều điều kiện cùng lúc thì nên đặt điều kiện kiểm tra hàng đợi có rỗng hay không ở đầu:

> if (q.size() && check(q.top())) //code

**Thao tác pop và push có độ phức tạp O(logN), các thao tác khác có độ phức tạp O(1).**

# Các bài toán cơ bản với Priority queue

- Thêm một phần tử
- Xoá phần tử đầu (phần tử có độ ưu tiên cao nhất, tức là DeleteMin/DeleteMax) 
- Lấy phần tử đầu (phần tử có độ ưu tiên cao nhất, tức là GetMin/GetMax)
- Xoá phần tử 

Tóm lại nếu như bài toán yêu cầu lấy giá trị phần tử lớn nhất, hay bé nhất, liên tục mà mảng liên tục thay đổi, vì không thể sắp xếp mảng liên tục nên ta sẽ dùng Priority queue.

# Ứng dụng của Priority queue

Hàng đợi ưu tiên có nhiều ứng dụng – mình sẽ liệu kê một vài trong số chúng:

- Nén dữ liệu: thuật toán Huffman Coding
- Thuật toán đường đi ngắn nhất: Thuật toán Dijkstra
- Thuật toán cây bao trùm tối thiểu: Thuật toán Prim
- Mô phỏng theo hướng sự kiện: khách hàng xếp hàng
- Bài toán lựa chọn: Tìm phần tử nhỏ thứ k

Nguồn: https://viblo.asia/p/chuong-7-priority-queues-and-heaps-1priority-queuehang-doi-uu-tien-m2vJPONo4eK





