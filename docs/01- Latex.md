
# LaTeX – Document Preparation System

## 1. Introduction
LaTeX is a document preparation and typesetting system used to create professional documents such as research papers, assignments, reports, books and mathematical documents. It is based on the TeX typesetting system and uses commands to control document structure and formatting.

Unlike MS Word, where formatting is done using menus, LaTeX documents are created by writing source code and compiling it into a PDF.

## 2. Basic Structure of a LaTeX Document

A LaTeX document consists of two main parts:

- **Preamble:** Contains the document class, packages, title, author and other settings.
- **Document Body:** Contains the actual text, headings, equations, tables and images.

Example:

```latex
\documentclass{article}
\usepackage{amsmath}

\title{My First Document}
\author{Student Name}
\date{\today}

\begin{document}
\maketitle

\section{Introduction}
This is my first LaTeX document.

\end{document}
```

## 3. Important LaTeX Commands

| Command | Purpose |
|---|---|
| `\documentclass{}` | Defines document type. |
| `\usepackage{}` | Includes additional packages. |
| `\title{}` | Sets the document title. |
| `\author{}` | Specifies the author. |
| `\maketitle` | Displays title information. |
| `\section{}` | Creates a section. |
| `\subsection{}` | Creates a subsection. |
| `\textbf{}` | Makes text bold. |
| `\textit{}` | Makes text italic. |
| `%` | Adds comments. |

## 4. Lists and Tables

LaTeX supports different types of lists:

- `itemize` – Creates bullet-point lists.
- `enumerate` – Creates numbered lists.
- `description` – Creates descriptive lists.

Tables are created using the `tabular` environment. The symbols `&` separate columns, `\\` ends a row and `\hline` creates horizontal lines.

## 5. Mathematical Typesetting

LaTeX is especially useful for writing mathematical expressions.

- Inline equations: `\(x+y=10\)`
- Display equations: `\[x+y=10\]`
- Fractions: `\frac{a}{b}`
- Square roots: `\sqrt{x}`
- Superscripts: `x^2`
- Subscripts: `x_1`
- Summation: `\sum`
- Integration: `\int`
- Greek letters: `\alpha`, `\beta`, `\pi`

The `amsmath` and `amssymb` packages provide additional mathematical features.

LaTeX also supports matrices using environments such as `matrix`, `pmatrix` and `bmatrix`. The `align` environment is used to align multiple equations.

## 6. Images, References and Bibliography

The `graphicx` package is used to insert images through `\includegraphics{}`.

Figures and tables can be organised using the `figure` and `table` environments. The `\caption{}` command adds captions, while `\label{}` and `\ref{}` help create automatic cross-references.

Bibliographies can be managed using `thebibliography` or `biblatex`. The `hyperref` package allows clickable links in PDF documents.

## 7. Advantages and Applications

- Produces professional and consistent documents.
- Provides excellent mathematical formatting.
- Automatically manages numbering and references.
- Suitable for research papers, reports and academic publications.
- Supports large and complex documents.

## Conclusion

Through LaTeX, I learned how to create structured documents, format text, use packages, prepare mathematical equations, create lists and tables, insert images and manage references. It is an important tool for academic and technical documentation.
