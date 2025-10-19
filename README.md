# 🔐 Vigenère Cipher in C

A simple implementation of the Vigenère Cipher encryption algorithm written in C.
This program takes a plaintext message and a key from the user, and produces an encrypted message using modular arithmetic.

## 📘 Overview

The Vigenère Cipher is a classic polyalphabetic substitution cipher that uses a keyword to shift each character of the plaintext by a different amount.
This implementation uses ASCII values and modular arithmetic, making it compatible with most printable characters — not just uppercase letters.

## ⚙️ Features

- Encrypts any ASCII-based message
- Uses a repeating key for encryption
- Lightweight and beginner-friendly C implementation
- Demonstrates concepts like string manipulation, modular arithmetic, and arrays

## 🧩 How It Works

- The user inputs a plaintext message and a key.
- Each character in the plaintext is encrypted using the corresponding character in the key.
- If the key is shorter than the plaintext, it repeats automatically.
- The encryption formula used is:
    `encrypted_char = (plaintext_char + key_char) % 127;`
- The result is displayed as an encrypted string.

## 💻 Usage

🧱 Compilation
Use GCC or any C compiler to compile the program:
- `gcc vegnere_cipher.c -o vegnere_cipher`
  
▶️ Run
Execute the compiled file:
- `./vegnere_cipher`

## 🧠 Example
Input:
`Enter the message: HELLO`
`Enter the key: KEY`

Process:
Each letter in "HELLO" is encrypted using the corresponding letter from the repeating key "KEYKE".

Output:
`ÍÅÝÝ×`

## 🧮 Example Encryption Table
<img width="958" height="326" alt="image" src="https://github.com/user-attachments/assets/0c903a8d-4fb6-42e5-975d-59e55e78a636" />

## 🧾 File Structure
.
├── vegnere_cipher.c<br>
└── README.md

## 🧑‍💻 Author
Mohammad Saalim
📧 Email: mohammadsaalim4718@gmail.com
💬 GitHub: nullvectorcodes





