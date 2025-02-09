Here's a version where the book link is more prominent:  

---

# 🚀 Teach Yourself C++ in 21 Days - Workshop Code  

This repository contains the workshop code for the book **Teach Yourself C++ in 21 Days** 📚 by Jesse Liberty and Bradley Jones.  

📖 **[Read the Book Here](https://www.library.uc.edu.kh/userfiles/pdf/20.Sams%20Teach%20Yourself%20C++%20in%2021%20Days.pdf)**  

Each day's code examples and exercises are organized into separate directories, with individual `CMakeLists.txt` files and dedicated `build` folders.  

## 📋 How to Use  

1. **Clone the repository:**  

   ```sh
   git clone https://github.com/NhomNhom0/learn_Cpp.git
   cd learn_Cpp
   ```

2. **Navigate to the desired day's directory:**  

   ```sh
   cd DayX
   ```

3. **🔧 Rebuild the project:**  

   If a `build` directory already exists and you wish to perform a clean rebuild:  

   ```sh
   cd build
   rm -rf * && cmake .. && make
   ```  

   If the `build` directory does not exist, create it and build:  

   ```sh
   mkdir build
   cd build
   cmake ..
   make
   ```  

4. **▶️ Run the program:**  

   ```sh
   ./DayX
   ```  

   Replace `DayX` with the appropriate day's program name (e.g., `Day5`, `Day6`).  

## 🛠️ Requirements  

- A C++ compiler (e.g., g++)  
- CMake  
- Basic knowledge of C++ programming  

## 🙏 Acknowledgment  

Special thanks to:  
- 📚 **Jesse Liberty** — for his contributions to C++ learning resources.  
- 🖋️ **Bradley Jones** — for co-authoring *Teach Yourself C++ in 21 Days*.  

## 📜 License  

This project is licensed under the MIT License.