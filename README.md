
# 📘 Software Engineering Lab – Task 2

## Modular Student Result Management System (C Project)

This project is a **modular C-based Student Result Management System** developed as part of the Software Engineering Lab (Task 2).
It demonstrates **modular programming, structured design, validation, computation, and reporting** using multiple header and source files.

---

## 📂 Repository Structure

```
Software-Engineering-Lab-Task2/
│
├── include/
│   ├── student.h        # Student structure definition
│   ├── validation.h     # Input validation functions
│   ├── computation.h    # Marks calculation logic
│   └── report.h         # Result reporting functions
│
├── src/
│   ├── main.c           # Main program execution
│   ├── validation.c     # Validation implementation
│   ├── computation.c    # Computation implementation
│   └── report.c         # Report generation implementation
│
├── students.txt         # Input student data file
├── test-plan.xlsx       # Test plan document
├── student              # Compiled executable (Linux)
├── README.md            # Project documentation
└── .gitattributes
```

---

## 🎯 Project Objectives

* Implement a **student result processing system** in C.
* Apply **modular programming** using header and source files.
* Validate student marks and inputs.
* Compute total, percentage, grade, and class statistics.
* Generate formatted reports.
* Follow **software engineering practices** (test plan, documentation, modular design).

---

## ⚙️ Features

✅ Reads student data from file (`students.txt`)
✅ Validates marks and student details
✅ Calculates:

* Total marks
* Percentage
* Grade
* Class average
* Highest & lowest marks

✅ Displays formatted result table
✅ Modular architecture (separate modules for validation, computation, reporting)

---

## 🧠 System Design (Modules)

### 1️⃣ Student Module (`student.h`)

Defines the student structure:

* ID
* Name
* Marks
* Total
* Percentage
* Grade

---

### 2️⃣ Validation Module (`validation.h / validation.c`)

Handles:

* Marks range validation
* Input correctness

---

### 3️⃣ Computation Module (`computation.h / computation.c`)

Performs:

* Total calculation
* Percentage calculation
* Grade assignment
* Class statistics

---

### 4️⃣ Report Module (`report.h / report.c`)

Generates:

* Student result table
* Class summary (average, highest, lowest)

---

## 🖥️ Sample Output

```
ID    Name      Total   Percent   Grade
---------------------------------------
S101  Rahul     408     81.60     B
S102  Anjali    456     91.20     O
S103  Kiran     294     58.80     D
...
---------------------------------------
Class Avg : 75.40
Highest   : 97.00
Lowest    : 48.80
```

---

## ▶️ How to Compile and Run

### 🔹 Step 1: Compile the Project

```bash
gcc src/main.c src/validation.c src/computation.c src/report.c -Iinclude -o student
```

### 🔹 Step 2: Run the Program

```bash
./student
```

---

## 📄 Input File Format (`students.txt`)

Example:

```
S101 Rahul 80 85 78 82 83
S102 Anjali 90 92 88 91 95
S103 Kiran 60 55 58 62 59
```

Format:

```
ID Name M1 M2 M3 M4 M5
```

---

## 🧪 Testing

* Test cases are documented in `test-plan.xlsx`.
* Covers:

  * Valid input cases
  * Boundary conditions
  * Invalid marks
  * File handling errors

---

## 🧩 Software Engineering Concepts Used

* Modular programming
* Separation of concerns
* Header/source file architecture
* Structured programming
* Input validation
* Test planning
* Documentation

---

## 🚀 Future Enhancements

* Dynamic number of subjects
* File-based report export (CSV / PDF)
* Sorting and ranking students
* GUI version (C++ / Python / Web)
* Database integration
* Error logging system

---

## 👨‍💻 Author

**Veerendranadh Vallepu**
Software Engineering Lab Project

GitHub: [https://github.com/Vnadh](https://github.com/Vnadh)

---
