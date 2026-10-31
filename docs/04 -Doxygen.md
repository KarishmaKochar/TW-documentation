
# Doxygen – Automatic Code Documentation

## 1. Introduction
Doxygen is an open-source documentation generation tool used to create documentation directly from source code. It is commonly used with programming languages such as C, C++ and other supported languages.

It helps programmers explain their code through special comments and automatically generates documentation in formats such as HTML and LaTeX.

## 2. Purpose of Doxygen

The main purpose of Doxygen is to make source code easier to understand, maintain and share.

It helps developers:
- Document functions, classes and variables.
- Explain the purpose of program components.
- Generate structured documentation automatically.
- Understand relationships between classes and functions.
- Maintain documentation for large software projects.

## 3. Documentation Comments

Doxygen identifies specially formatted comments written inside source code.

Example in C++:

```cpp
/**
 * @brief Adds two numbers.
 * @param a First number.
 * @param b Second number.
 * @return Sum of the two numbers.
 */
int add(int a, int b) {
    return a + b;
}
```

Important Doxygen commands:

| Command | Purpose |
|---|---|
| `@brief` | Provides a short description. |
| `@param` | Describes a function parameter. |
| `@return` | Describes the returned value. |
| `@author` | Specifies the author. |
| `@file` | Documents a file. |
| `@class` | Documents a class. |
| `@see` | Adds a related reference. |

These commands make the documentation clear and organised.

## 4. Doxyfile Configuration

Doxygen uses a configuration file called `Doxyfile` to control documentation generation.

It can be generated using:

```bash
doxygen -g
```

Important configuration options include:

- `PROJECT_NAME` – Sets the project name.
- `INPUT` – Specifies the source files or directories.
- `OUTPUT_DIRECTORY` – Defines where documentation is saved.
- `RECURSIVE` – Includes files from subdirectories.
- `GENERATE_HTML` – Enables HTML documentation.
- `GENERATE_LATEX` – Enables LaTeX documentation.
- `EXTRACT_ALL` – Includes documented program elements, including those without documentation comments.

## 5. Generating Documentation

The general workflow is:

1. Write the program source code.
2. Add Doxygen documentation comments.
3. Generate a Doxyfile.
4. Configure the required project settings.
5. Run Doxygen using:

```bash
doxygen Doxyfile
```

6. Open the generated HTML documentation, usually through `html/index.html`.

## 6. Output Formats and Features

Doxygen can generate HTML documentation for web browsers and LaTeX documentation that can be compiled into PDF.

It can also generate diagrams and graphs showing relationships between classes, files and functions, depending on the configuration and available tools.

## 7. Advantages

- Automatically generates code documentation.
- Saves time and reduces manual documentation work.
- Improves code readability and maintenance.
- Helps developers understand complex projects.
- Provides multiple output formats.

## Conclusion

Through Doxygen, I learned how to document source code using special comments, configure a Doxyfile and generate structured documentation. It is useful for maintaining software projects and improving communication between developers.
