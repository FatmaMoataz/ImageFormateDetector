# 🖼️ Image Format Detector (C++)

A simple C++ program I wrote during my early college years to detect **image file formats** based on their magic numbers (file signatures).

## 🚀 Features
- Detects common image formats:
  - JPEG
  - PNG
  - GIF
  - TIFF
  - BMP
  - RAW
- Uses **binary file reading** (`ifstream`) to check file headers.
- Lightweight and runs on any C++ compiler.

## 📂 Example Usage
```bash
Enter your image file: test.jpg
This file is a JPEG image
```

## 🛠️ How to Compile & Run
```bash
g++ main.cpp -o ImageFormateDetector
./ImageFormateDetector
```


## 📖 Notes

This was one of my early C++ projects back in college (3rd year).
I kept it here to document my learning journey and share a simple example of working with file I/O in C++.
