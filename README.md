<!DOCTYPE html>
<html>
<head>
  <meta charset="UTF-8">
</head>
<body>

<h1>Procedural Programming in C++</h1>

<h2>Description</h2>
<p>Procedural programming is a programming paradigm that is based on the concept of procedures or functions. In C++, procedural programming is achieved by organizing code into functions and following a structured, step-by-step approach to solve problems. This document provides an educational overview of procedural programming in C++ and its key features.</p>

<h2>Key Features of Procedural Programming in C++</h2>
<ul>
  <li>
    <strong>Functions:</strong> In procedural programming, code is organized into functions, which are self-contained blocks of code that perform specific tasks. C++ provides a wide range of built-in functions, and you can create your own custom functions.
  </li>
  <li>
    <strong>Modularity:</strong> Code is divided into smaller, manageable modules (functions), making it easier to understand, debug, and maintain.
  </li>
  <li>
    <strong>Data Structures:</strong> Procedural programs use data structures such as arrays and structs to store and manipulate data. C++ allows you to define custom data structures through classes and structs.
  </li>
  <li>
    <strong>Sequential Execution:</strong> Procedural code is executed sequentially, following a top-down approach. Each function is called in a specific order to achieve the desired outcome.
  </li>
  <li>
    <strong>Procedural Abstraction:</strong> Procedures encapsulate specific functionality and can be reused throughout the program. This promotes code reusability and maintainability.
  </li>
  <li>
    <strong>Limited Scope:</strong> Variables defined within functions have limited scope, meaning they are only accessible within that function. This helps prevent naming conflicts and improves code organization.
  </li>
  <li>
    <strong>No Object-Oriented Concepts:</strong> Unlike object-oriented programming, procedural programming does not focus on concepts like classes, objects, and inheritance. It's a simpler and more straightforward approach to coding.
  </li>
  <li>
    <strong>Loops:</strong> Loops in C++ (e.g., <code>for</code>, <code>while</code>, <code>do-while</code>) enable repetitive execution of code. They are essential for iterating over data and automating tasks that involve repeating steps.
  </li>
  <li>
    <strong>Pointers:</strong> Pointers in C++ are variables that store memory addresses. They allow for direct memory manipulation and are vital for dynamic memory allocation, data referencing, and low-level memory management.
  </li>
  <li>
    <strong>File Handling:</strong> C++ provides libraries for reading from and writing to files. File handling is crucial for tasks like data persistence, configuration management, and interactions with external files.
  </li>
</ul>

<h2>Getting Started</h2>
<p>To start learning procedural C++ programming, you can use a C++ development environment on your computer, such as popular C++ compilers like GCC, Clang, or Visual C++. You'll also need a text editor or an integrated development environment (IDE) to write your code.</p>

<h2>Example</h2>
<p>Here's a simple example of procedural programming in C++:</p>

<pre>
<code>
#include &lt;iostream&gt;

// Function to add two numbers
int add(int a, int b) {
    return a + b;
}

int main() {
    int num1 = 5;
    int num2 = 7;
    int result = add(num1, num2);

    std::cout &lt;&lt; "The sum of " &lt;&lt; num1 &lt;&lt; " and " &lt;&lt; num2 &lt;&lt; " is " &lt;&lt; result &lt;&lt; std::endl;

    return 0;
}
</code>
</pre>

<p>In this example, we have a function <code>add</code> that adds two numbers, and it's called from the <code>main</code> function to perform the addition.</p>

<h2>Two Projects</h2>
<p>With different examples there are two projects for Employee Management System and Hotel Reservation System for learning and understanding</p>

<h2>License</h2>
<p>This educational document is not associated with a specific project and does not have a license. You are free to use and share it for learning purposes.</p>

<h2>Acknowledgments</h2>
<p>Thanks to the C++ community for their contributions and support.</p>

</body>
</html>
