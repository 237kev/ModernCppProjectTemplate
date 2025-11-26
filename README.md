# ModernCppProjectTemplate
A modern C++17 project template using a modular architecture with CMake, versioned executables, configure_file, PUBLIC/PRIVATE linking, and library + application separation. Designed to demonstrate professional C++ build systems.
## 📂 Project Structure

```
ModernCppProjectTemplate/
│── CMakeLists.txt             
│── configured/
│   ├── CMakeLists.txt         
│   └── config.hpp.in          
│── src/
│   ├── CMakeLists.txt         
│   └── math_engine/
│       ├── math_engine.cc
│       └── math_engine.h
│── optional/
│   ├── CMakeLists.txt         
│   └── advanced.cc
│── app/
│   ├── CMakeLists.txt         
│   └── main.cc
```

---
## ⚙️ Features

### ✔️ Modular Build Architecture  
Splits the project into independent modules:

- `configured/` → auto-generated config header  
- `src/` → static library (MathEngine)  
- `optional/` → optional module controlled by CMake  
- `app/` → main executable

### ✔️ Automatic Versioning  
Executable name includes project version:
```
App_1.2.0
```
Version comes from:

```cmake
project(MyProject VERSION 1.2.0)
```

### ✔️ configure_file  
Automatically generates:

```
build/configured_files/include/config.hpp
```

Containing:

- project name  
- version  
- major/minor/patch  
- build type  
- build date  

### ✔️ Optional Modules  
Enable/disable via:

```bash
cmake -DENABLE_ADVANCED=ON ..
```

---

## 🛠️ Build Instructions

### Clone the repo:

```bash
git clone https://github.com/<your_username>/ModernCppProjectTemplate.git
cd ModernCppProjectTemplate
```

---
## 🔨 Build (default)

```bash
mkdir build
cd build
cmake -DCMAKE_BUILD_TYPE=Release ..
cmake --build .
```

Executable will be located at:

```
build/app/App_<version>
```

---

## 🔧 Build with optional module

```bash
cmake -DENABLE_ADVANCED=ON -DCMAKE_BUILD_TYPE=Release ..
cmake --build .
```

---
## 🚀 Run

```bash
./app/App_1.2.0
```

---

## 🧠 What this template demonstrates

### 💎 **CMake Senior-Level Concepts**
- Multi-module architecture  
- PUBLIC / PRIVATE linking  
- include directory propagation  
- configure_file  
- version management  
- out-of-source build  
- CMake variables & options  
- Reusable CMake structures
### 💎 **C++ Engineering Good Practices**
- Clean separation interface/implementation  
- Static library architecture  
- Header-generated configuration  
- Modern C++17 programming  
- Strong modularity

---

## 📜 License

MIT License — free to use, modify and distribute.

---
> *This template demonstrates mastery of professional build systems, modular C++ design, and modern CMake practices used in industry-level software.*  
>  
> Ideal for roles involving:  
> - Embedded systems / robotics  
> - High-performance C++  
> - Automation / industrial software  
> - Build system tooling  
> - Systems programming  
