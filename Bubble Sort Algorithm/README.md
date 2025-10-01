# Bubble Sort Implementation in C

🌟 **A clean and modular C program that implements the Bubble Sort algorithm to sort an array of integers.**  
This project dynamically reads user input, sorts the array using Bubble Sort, and displays the results before and after sorting, showcasing core C programming and algorithm design skills.

---

## ✨ Key Features

- **Dynamic Array Input**: Users specify the array size at runtime and input elements interactively.
- **Bubble Sort Algorithm**: Implements the swap-based comparison algorithm to sort integers in ascending order.
- **Clear Output**: Displays the array before and after sorting in a clean, formatted style.
- **Memory Safety**: Uses `malloc()` for dynamic memory allocation and `free()` to prevent memory leaks.
- **Modular Design**: Separates functionality into reusable functions for array creation, printing, and sorting.

---

## 🧑‍💻 Skills Showcased

- **C Programming**: Proficient use of arrays, loops, conditionals, pointers, and dynamic memory management.
- **Algorithmic Thinking**: Hands-on implementation of the Bubble Sort algorithm with O(n²) time complexity.
- **Code Quality**: Modular structure with well-documented, maintainable functions.
- **Problem-Solving**: Translates sorting logic into robust, executable C code.
- **User Experience**: Clear prompts and structured output for seamless interaction.

---
## 📸 Demo
[Sample Output] (output.png)

## 🛠️ How It Works

The program is structured into modular functions for clarity and reusability:

- **`makeArray()`**: Dynamically allocates memory for the array and collects user input.
- **`printArray()`**: Outputs the array in a clean, formatted style.
- **`bubbleSortArray()`**: Implements Bubble Sort using nested loops and swapping logic.
- **`main()`**: Orchestrates input validation, function calls, and memory cleanup.

### Algorithm Breakdown
- Iterates through the array multiple times, comparing adjacent elements.
- Swaps elements if they are out of order, causing larger elements to "bubble up" to the end.
- **Time Complexity**: O(n²) (quadratic).
- **Space Complexity**: O(1) (in-place sorting).

---

## 🚀 Quick Start

### Prerequisites
- A standard C compiler (e.g., **GCC**, **Clang**).
- Basic command-line knowledge.

### Installation
1. Clone the repository:
   ```bash
   git clone https://github.com/anurag-ds/C-_Journey.git
   ```
2. Navigate to the project directory:
   ```bash
   cd C-_Journey
   ```
3. Compile the program:
   ```bash
   gcc bubble_sort.c -o bubble_sort
   ```
4. Run the executable:
   ```bash
   ./bubble_sort
   ```

### Usage
- Follow the prompts to enter the array size and elements.
- The program displays the original and sorted arrays.

**Sample Interaction**:
```
Enter the number of elements you want in your array: 5
Enter element 1: 12
Enter element 2: -5
Enter element 3: 42
Enter element 4: 0
Enter element 5: 7

Your Array: [12, -5, 42, 0, 7]
Sorted Array: [-5, 0, 7, 12, 42]
```

---

## 🏗️ Project Structure

```
C-_Journey/
├── bubble_sort.c    # Main C source code
├── output.png       # Screenshot of sample output
└── README.md        # Project documentation
```

---

## 🔮 Future Enhancements

- **Additional Algorithms**: Integrate Insertion Sort, Merge Sort, or Quick Sort for comparison.
- **Performance Metrics**: Add execution time measurement for benchmarking.
- **Sorting Options**: Support sorting in descending order.
- **File I/O**: Enable reading arrays from files and saving sorted results.
- **Visualization**: Add step-by-step swap visualization for educational purposes.

---

## 🤝 Contributing

Contributions are welcome to enhance this project! To contribute:

1. Fork the repository on GitHub.
2. Clone your fork:
   ```bash
   git clone https://github.com/<your-username>/C-_Journey.git
   ```
3. Create a feature branch:
   ```bash
   git checkout -b feature/your-new-feature
   ```
4. Write clean, well-documented code adhering to C standards.
5. Commit your changes:
   ```bash
   git commit -m "Add your-new-feature"
   ```
6. Push to your fork:
   ```bash
   git push origin feature/your-new-feature
   ```
7. Open a Pull Request on GitHub, describing your changes clearly.

**Contribution Ideas**:
- Add more sorting algorithms (e.g., Insertion Sort, Quick Sort).
- Enhance input validation (e.g., reject non-integer inputs).
- Colorize terminal output for better user experience.
- Add multilingual prompts for broader accessibility.

---

## 👤 Author

**Anurag Gupta**  
📧 askquestiontoanurag@gmail.com  
🌐 https://github.com/anurag-ds

---

## 📄 License

This project is licensed under the MIT License. Feel free to use, modify, and distribute with attribution.

⭐ **Star this project on GitHub to support and follow my C programming journey!**  
Built with ❤️ by Anurag Gupta.
