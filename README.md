# 🔐 RC4 Encryption / Decryption

Dự án này hiện thực thuật toán **RC4 (Rivest Cipher 4)** — một thuật toán mã hóa dòng (stream cipher) nổi tiếng do Ron Rivest thiết kế.  
RC4 từng được dùng trong SSL/TLS và WEP, nhưng nay **không còn được coi là an toàn** — dự án này chỉ mang mục đích **học tập và nghiên cứu**.

---
👉 Mục đích của dự án là **giúp người học hiểu cơ chế hoạt động của RC4**, gồm hai giai đoạn chính:
1. **KSA (Key Scheduling Algorithm)** — khởi tạo mảng hoán vị dựa trên khóa.  
2. **PRGA (Pseudo-Random Generation Algorithm)** — tạo chuỗi khóa giả ngẫu nhiên và XOR với dữ liệu.
3. 
## ⚙️ Cài đặt và chạy chương trình

### 🧱 Yêu cầu
- Visual Studio 2019 hoặc mới hơn  
- Đã cài **Desktop development with C++**  
- Hệ điều hành: Windows 10 hoặc Windows 11  

---
### 🚀 Các bước thực hiện
#### 1️⃣ Clone hoặc tải dự án
```bash
git clone https://github.com/SA1NG/RC4_ver2.git
cd RC4_ver2
```
#### 2️⃣ Mở dự án trong Visual Studio
-Mở Visual Studio
-Chọn File → Open → Project/Solution
-Tìm và mở file RC4.sln
#### 3️⃣ Tùy chỉnh Key và Len
- file config.h

## 🧩 Giải thích thuật toán
![RC4 Flowchart]([https://example.com/path/to/rc4_flowchart.png](https://www.researchgate.net/profile/Imad-Mohammed/publication/323783954/figure/fig1/AS:613507015901221@1523282879278/Flowchart-of-RC4-Algorithm.png))
### 🔸 1. Key Scheduling Algorithm (KSA)
Khởi tạo mảng `S[0..255]` với giá trị từ `0` đến `255`, rồi trộn nó dựa vào khóa `key`:

```python
for i in range(256):
    j = (j + S[i] + key[i % len(key)]) % 256
    S[i], S[j] = S[j], S[i]
```

### 🔸 2. Pseudo-Random Generation Algorithm (PRGA)
Sinh ra chuỗi khóa giả ngẫu nhiên và XOR với dữ liệu gốc:

```python
for byte in plaintext:
    i = (i + 1) % 256
    j = (j + S[i]) % 256
    S[i], S[j] = S[j], S[i]
    K = S[(S[i] + S[j]) % 256]
    output.append(byte ^ K)
```

### 🔸 3. Đặc điểm
- RC4 **đối xứng** — cùng một hàm cho cả mã hóa và giải mã.  
- Dễ triển khai, tốc độ nhanh.  
- Nhưng **không an toàn** cho dữ liệu thật.

---
