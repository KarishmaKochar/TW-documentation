
# Beamer – Creating Presentations Using LaTeX

## 1. Introduction
Beamer is a LaTeX document class used to create professional presentations in PDF format. It allows users to design slides using LaTeX commands instead of manually formatting every slide. It is especially useful for academic presentations, seminars, lectures and technical topics.

## 2. Basic Structure

A Beamer presentation uses the `beamer` document class. Each slide is created using the `frame` environment.

Example:

```latex
\documentclass{beamer}

\title{My Presentation}
\author{Student Name}
\institute{MNIT Jaipur}
\date{\today}

\begin{document}

\begin{frame}
\titlepage
\end{frame}

\begin{frame}{Introduction}
This is my first slide.
\end{frame}

\end{document}
```

Important commands:

- `\documentclass{beamer}` – Defines a Beamer presentation.
- `\title{}` – Sets the presentation title.
- `\author{}` – Specifies the author.
- `\institute{}` – Specifies the institution.
- `\date{}` – Sets the date.
- `\titlepage` – Generates the title slide.
- `\begin{frame}` – Starts a slide.

## 3. Themes and Colour Themes

Beamer provides predefined themes to control the appearance and layout of slides.

Examples:

```latex
\usetheme{Madrid}
\usetheme{Berlin}
\usetheme{Warsaw}
```

Colour themes can be selected using:

```latex
\usecolortheme{wolverine}
```

Themes help maintain a consistent and professional appearance throughout a presentation.

## 4. Lists, Blocks and Columns

Beamer supports `itemize` for bullet lists and `enumerate` for numbered lists.

Blocks are used to highlight important information.

Three commonly used blocks are:

- `block` – Displays normal highlighted information.
- `alertblock` – Highlights important or warning information.
- `exampleblock` – Displays examples.

The `columns` environment allows content to be arranged side by side, making slides more organised.

## 5. Mathematical Equations and Images

Beamer supports LaTeX mathematical commands, making it suitable for scientific and technical presentations.

Example:

```latex
\[
E=mc^2
\]
```

Images can be inserted using the `graphicx` package and the `\includegraphics{}` command.

## 6. Overlays and Animations

Overlays allow slide content to appear gradually, helping the presenter explain information step by step.

Important commands include:

- `\pause` – Reveals content in stages.
- `\only<1>{}` – Displays content only on a particular overlay.
- `\uncover<1->{}` – Reveals content from a specified overlay onwards.

Example:

```latex
\begin{itemize}
\item<1-> Introduction
\item<2-> Features
\item<3-> Conclusion
\end{itemize}
```

## 7. Compilation and Output

Beamer source files are saved with the `.tex` extension and compiled using a LaTeX engine to generate PDF slides. The generated PDF can be used for classroom presentations and seminars.

## 8. Advantages

- Creates professional presentations.
- Provides consistent slide formatting.
- Supports mathematical equations and symbols.
- Allows themes, colours, blocks and columns.
- Supports step-by-step content display.

## Conclusion

Through Beamer, I learned how to create presentations using LaTeX, design title slides, organise frames, apply themes, insert images, display equations and use overlays. It is useful for creating structured academic and technical presentations.
