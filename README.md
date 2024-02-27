<a name="readme-top"></a>
<div align="center">
  <!-- Logo -->
  <a href="https://github.com/dpetrosy/42-Get-Next-Line">
  <img src="README_files/logo.png" alt="Logo" width="80" height="80">
  </a>

  <!-- Project Name -->
  <h1>GNL Project</h1>

  <!-- Short Description -->
  <p align="center">
	  <b>42 Yerevan GNL</b><br>
	  For further information about 42cursus and its projects, please refer to <a href="https://github.com/dpetrosy/42cursus"><b>42cursus repo</b></a>.
  </p>

  <!-- Badges -->
  <p>
    <img src="https://img.shields.io/badge/score-125%20%2F%20100-success?style=for-the-badge" />
    <img src="https://img.shields.io/github/repo-size/dpetrosy/42-Get-Next-Line?style=for-the-badge&logo=github">
    <img src="https://img.shields.io/github/languages/count/dpetrosy/42-Get-Next-Line?style=for-the-badge&logo=" />
    <img src="https://img.shields.io/github/languages/top/dpetrosy/42-Get-Next-Line?style=for-the-badge" />
    <img src="https://img.shields.io/github/last-commit/dpetrosy/42-Get-Next-Line?style=for-the-badge" />
  </p>

  <h3>
      <a href="#-about-project">📜 About Project</a>
    <span> · </span>
      <a href="#-usage">👨‍💻 Usage</a>
  </h3>
</div>

---

## 📜 About Project

> _The aim of this project is to make you code a function that returns a line, read from a file descriptor._

For detailed information, refer to the [**subject of this project**](README_files/gnl_subject.pdf).

	🚀 TLDR: This task is crucial to understand for a future programmer, since much of the 
		 time is based on manipulating files for data management and persistence.
		 This project consists of coding a function that returns one line at a time 
		 from a text file.

## 👨‍💻 Usage
### Requirements

The function is written in C language and thus needs the **gcc compiler** and some standard **C libraries** to run.

### Instructions
**1. Using it in your code**

To use the function in your code, simply include its header:

```C
#include "get_next_line.h"
```
and, when compiling your code, add the source files and the required flag:

```shell
get_next_line.c get_next_line_utils.c -D BUFFER_SIZE=<size>
```
