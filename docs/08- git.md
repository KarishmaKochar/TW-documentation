
# Git – Distributed Version Control System

## 1. Introduction
Git is a free and open-source distributed version control system used to track changes in files and manage source code. It helps developers maintain different versions of a project and collaborate efficiently.

Git records changes through commits, allowing users to view previous versions and restore earlier work when required.

## 2. Important Git Concepts

- **Repository:** A location where project files and their version history are stored.
- **Working Directory:** The folder containing the files being edited.
- **Staging Area:** The area where changes are prepared before committing.
- **Commit:** A saved snapshot of the project.
- **Branch:** An independent line of development.
- **Merge:** Combines changes from different branches.

## 3. Git Workflow

The basic Git workflow consists of three main stages:

1. Working Directory – Make changes to project files.
2. Staging Area – Select changes to be included in the next commit.
3. Repository – Save the staged changes through a commit.

## 4. Important Git Commands

| Command | Purpose |
|---|---|
| `git --version` | Checks Git installation. |
| `git config --global user.name "Name"` | Sets username. |
| `git config --global user.email "email"` | Sets email. |
| `git init` | Initialises a Git repository. |
| `git status` | Shows the current repository status. |
| `git add filename` | Stages a particular file. |
| `git add .` | Stages all changes in the current directory. |
| `git commit -m "message"` | Saves staged changes. |
| `git log` | Displays commit history. |
| `git diff` | Shows unstaged changes. |
| `git diff --staged` | Shows staged changes. |
| `git branch` | Lists branches. |
| `git branch branchname` | Creates a branch. |
| `git switch branchname` | Switches branches. |
| `git merge branchname` | Merges another branch. |
| `git clone URL` | Copies a remote repository. |
| `git pull` | Fetches and integrates remote changes. |
| `git push` | Uploads local commits to a remote repository. |
| `git remote -v` | Displays remote repository URLs. |

## 5. Branching and Merging

Branches allow developers to work on different features without directly affecting the main project.

For example:

```bash
git branch feature
git switch feature
```

After completing the work, changes can be merged into the main branch:

```bash
git switch main
git merge feature
```

## 6. Undoing Changes

Some useful commands for correcting mistakes are:

- `git restore filename` – Discards unstaged changes in a file.
- `git restore --staged filename` – Removes a file from the staging area.
- `git reset --soft HEAD~1` – Removes the latest commit while keeping changes staged.
- `git revert commit-id` – Creates a new commit that reverses an earlier commit.

These commands should be used carefully because they affect project history or file changes differently.

## 7. Advantages of Git

- Tracks changes in project files.
- Maintains complete version history.
- Supports branching and merging.
- Helps multiple developers collaborate.
- Allows recovery of previous versions.
- Works with remote hosting platforms such as GitHub.

## Conclusion

Through Git, I learned how to initialise repositories, track file changes, stage and commit modifications, view commit history, create branches, merge changes and work with remote repositories. Git is an essential tool for version control and software development.
