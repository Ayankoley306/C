# Student Record Management System in C

This project is a simple Student Record Management System written in C.
It allows users to store, view, and search Student Datas, including name, Roll, Subject Wise Marks, Total and Grade. The data is saved to a text file (Student.txt) so it persists between program runs.

---
## 📂 Features

 - Add New Students Datas with:

 - Name (With out Spaces)

 - Roll (between 1 To 60)

 - Individual Subject Wise Marks
    - Bengail
    - English
    - Accountancy
    - Costing And Taxing
    - Computer Application

 - View/search entries by Roll No. With Different Modes
    - See individual Student Data
    - See All Student Data
    - Rank Wise

 - Edit/Delete entries by roll no.
    - Edit stuudent data
    - delete student data

 - Data is stored in a file (studen.txt) to retain information.

 - Simple menu-driven interface.

---

## 🛠 Tools & Environment

 - Language: C

 - Compiler: GCC (GNU Compiler Collection)

 - OS: Windows

 - Editor/IDE: VS Code

 - Extentions: C/C++ Extention Pack

 ---
 ## 🚀 How to Run

1. Clone the repository:

   ```bash
   git clone https://github.com/Ayankoley306/C-Programming-Language.git
2. Navigate to the desired folder:

    ```bash
    cd '.\PROJECT\Student menagement system\'    # For the projrct file   
3. Compile The Program:

    ```bash
    gcc student.c -o student
4. Run The Program:

    ```bash
    ./student         # Mac / linux
    ./student.exe     # For Windows, you can also use: output.exe
5. Follow the menu:

 - Enter New Student Data

 - See Student data

 - Alter student Data

 - Quit program

 ---

## ⚙️ Usage Notes

 - Enter the name with no space.

 - When entering the marks, make sure it is between 0 to 100.

 - Search is case-sensitive and matches substrings in the text file.

 ---

## 🎯 Purpose

 - Practice file handling, structures, and string operations in C.

 - Learn basic input validation and menu-driven programs.

 - Understand how to persist data using text files.

 ---

## 🤝 Contribution (Optional)

 - Fork the repo, make your changes, and submit a Pull Request.

 - Make sure to follow the code style and comment your code.

 - Review and testing before merging changes is encouraged.

 ---

 ## 📄 License

This project is licensed under the [MIT License](../LICENSE) — see the LICENSE file in the repository root for details.

