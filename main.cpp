// Herberth Sanchez-Gomez - Week 2 Homework
// Practice 2: Structure polish

#include <iostream>

int main() {
    // 1. Explaining why: std::cout sends text to the standard console stream,
    // and newlines are used to format data into human-readable visual chunks.
    std::cout << "=== About me ===\n";
    std::cout << "Name: Herberth\n";
    std::cout << "Interest: Systems & Security\n";
    std::cout << "CIS 5 goal: Ship working code every week\n";
    std::cout << "Tool path: GitHub Codespaces\n";
    std::cout << "Fun fact: I debug better with coffee\n\n";

    // 2. Explaining why: Explicitly reciting core learning outcomes reinforces
    // our syntax comprehension and intentional build workflow.
    std::cout << "=== Week 02 goals ===\n";
    std::cout << "I can point at include, main, a statement, and a comment.\n";
    std::cout << "I can compile and run a multi-line program on purpose.\n";
    std::cout << "I can fix the first compiler error and rebuild.\n\n";

    // Block 3
    std::cout << "=== Preprocessor Directive ===\n";
    std::cout << "The #include <iostream> line imports the input/output library.\n";
    std::cout << "Without it, the compiler cannot recognize std::cout.\n\n";

    // Block 4
    std::cout << "=== Main Function ===\n";
    std::cout << "Every standard C++ program starts executing inside int main().\n";
    std::cout << "Returning 0 at the end signals that execution succeeded.\n\n";

    // 3. Explaining why: Semicolons act as termination tokens for the compiler,
    // defining where one discrete operation stops and another begins.
    std::cout << "=== Statements and Semicolons ===\n";
    std::cout << "Statements end with a semicolon to tell the compiler where commands stop.\n";
    std::cout << "Missing a semicolon is one of the most common early syntax errors.\n\n";

    // Block 6
    std::cout << "=== Comments in Code ===\n";
    std::cout << "Single-line comments use double slashes (//).\n";
    std::cout << "Multi-line comments are wrapped in slash-star and star-slash.\n\n";

    // 4. Explaining why: Isolating and addressing errors from top to bottom prevents
    // wasting time chasing secondary 'cascade' compiler warnings.
    std::cout << "=== Error Debugging Process ===\n";
    std::cout << "Always fix the very first compiler error listed in the terminal.\n";
    std::cout << "Later errors often disappear automatically once the first is resolved.\n\n";

    // Block 8
    std::cout << "=== Development Environment ===\n";
    std::cout << "Developing inside a cloud container ensures standard build tools.\n";
    std::cout << "Terminal access gives direct control over the compilation flags.\n\n";

    // Block 9
    std::cout << "=== Compiler Flags ===\n";
    std::cout << "We compile using -std=c++17 to ensure modern standards.\n";
    std::cout << "The -o flag names our output binary executable.\n\n";

    // Block 10
    std::cout << "=== Week 02 Completion Checklist ===\n";
    std::cout << "Code compiles cleanly with zero errors or warnings.\n";
    std::cout << "Ready to record the terminal output for the demo submission.\n";

    return 0;
}