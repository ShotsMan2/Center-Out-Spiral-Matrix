# Center-Out Spiral Matrix Generator

This project implements a specific matrix traversal algorithm in C known as a **Center-Out Spiral**. Unlike standard matrices filled row-by-row, this algorithm mimics a whirlpool expanding from the middle.

## ⚙️ Path Logic

1.  **Start:** Center ($N/2, N/2$)
2.  **Movements:**
    * $\downarrow$ Down
    * $\leftarrow$ Left
    * $\uparrow$ Up
    * $\rightarrow$ Right
3.  **Step Expansion:** The number of steps in a specific direction increases after every two turns (e.g., 1, 1, 2, 2, 3, 3...).

## 🚀 Example Output (N=3)

The numbers $1 \to 9$ are placed as follows:

| 5 | 6 | 7 |
|---|---|---|
| 4 | **1** | 8 |
| 3 | 2 | 9 |

* **1** is the center.
* **2** is down.
* **3** is left.
* **4-5** are up.
* **6-7** are right...

---
*This repository demonstrates coordinate manipulation and iterative step control in C.*
