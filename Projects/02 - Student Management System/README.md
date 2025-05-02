# Student Management System (C Language)

This is a simple console-based **Student Management System** written in C, designed to manage up to 100 students’ data.
It allows you to **register**, **view**, **search**, **calculate averages**, and **list approved students**.

## Features

- Register student (name, ID, final grade)
- Display all students
- Search student by ID
- Calculate class average
- Show approved students (final grade ≥ 7)
- Menu-driven interface with clean prompts

## Code Overview

- **Struct `Aluno`**: holds student name, registration number, and final grade.
- **Functions**:
  - `cadastrarAluno`: register a new student.
  - `exibirAlunos`: display all students.
  - `buscarAlunos`: search for a student by registration number.
  - `calcularMediaTurma`: calculate the average grade of the class.
  - `exibirAprovados`: list students with a passing grade (≥ 7).

