GẬY THÔNG MINH CHO NGƯỜI KHIẾM THỊ

📝 Giới thiệu
Gậy thông minh cho người khiếm thị là một thiết bị hỗ trợ di chuyển an toàn, chủ động và hiệu quả cho người khiếm thị hoặc suy giảm thị lực. Thiết bị được trang bị hệ thống cảm biến giúp phát hiện chướng ngại vật, hố sâu hoặc bậc thềm, từ đó cảnh báo người dùng bằng rung hoặc âm thanh để tránh nguy hiểm.

Dự án nhằm ứng dụng công nghệ hiện đại vào chăm sóc và nâng cao chất lượng sống cho người khuyết tật, góp phần xây dựng một xã hội thông minh và bao trùm hơn.

🧠 Chức năng chính
Chức năng	Mô tả
| Chức năng                               | Mô tả                                                                                        |
| --------------------------------------- | -------------------------------------------------------------------------------------------- |
|  Phát hiện chướng ngại vật phía trước | Sử dụng **cảm biến siêu âm** để phát hiện vật thể (tường, cột, xe...) trong phạm vi 1–3 mét. |
|  Cảnh báo người dùng                  | Gậy sẽ **rung** hoặc **phát âm thanh** để báo hiệu nguy hiểm.                                |
|  Phát hiện hố sâu hoặc bậc thềm        | Sử dụng **cảm biến laser hướng xuống** để nhận diện sự thay đổi độ cao nguy hiểm.            |
|  Hoạt động độc lập bằng pin           | Thiết bị sử dụng pin sạc hoặc nguồn ngoài, đảm bảo gọn nhẹ và di động.                       |


🔧 Sơ đồ các khâu – Hoạt động hệ thống
![sodo](https://github.com/user-attachments/assets/4132b516-58d5-42d3-9d66-8a52287c48cb)

⚙️ Công nghệ sử dụng
Thành phần	Mô tả
<img width="331" alt="Untitled" src="https://github.com/user-attachments/assets/07848c52-a5d0-465d-ac2a-ef7ff50e79ca" />

- Cảm biến siêu âm (HC-SR04)	Đo khoảng cách đến vật cản phía trước.

- Cảm biến laser hoặc cảm biến hồng ngoại hướng xuống	Phát hiện hố sâu, bậc thềm.

- Vi điều khiển (Arduino Uno / ESP32 / STM32)	Điều khiển trung tâm, xử lý tín hiệu cảm biến.

- Thiết bị cảnh báo	Bao gồm mô tơ rung và loa mini hoặc buzzer để cảnh báo người dùng.

- Nguồn điện	Pin Lithium-ion (18650), có thể sạc lại.

- Khung gậy	Có thể sử dụng gậy gập truyền thống được cải tiến để tích hợp mạch và cảm biến.

Chu trình hoạt động cơ bản:
Khởi động hệ thống

Arduino khởi tạo cảm biến VL53L0X.

Kiểm tra kết nối với cảm biến. Nếu thất bại, dừng chương trình.

Đo khoảng cách liên tục

Trong vòng lặp loop(), cảm biến sẽ đo khoảng cách tới vật cản trước mặt (cập nhật mỗi 100ms).

Khoảng cách được in ra Serial Monitor (chỉ dùng để kiểm tra/debug).

Xử lý dữ liệu đo được

Nếu khoảng cách nhỏ hơn 500mm → kích hoạt cảnh báo (buzzer/còi kêu).

Nếu khoảng cách an toàn → tắt cảnh báo.

Lặp lại quá trình đo và kiểm tra

Hệ thống hoạt động liên tục, phản ứng nhanh với sự thay đổi môi trường phía trước.

💡 Mục tiêu mở rộng trong tương lai
Kết nối với điện thoại qua Bluetooth để chia sẻ vị trí.

Gắn GPS để hỗ trợ định vị và điều hướng.

Ứng dụng AI để nhận diện vật thể cụ thể (xe, người, v.v.).

👨‍💻 Tác giả
Họ tên: Nguyễn Việt Châu
