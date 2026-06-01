# Triangle_star_pattern
Here you can find various types of shape in star pattern. Enjoy mate!

A small collection of console star/triangle patterns implemented in C++ and Java. Useful examples for learning nested loops, conditional logic, and console formatting.

## Contents
- `cpp/` — C++ pattern implementations
- Root `.java` files — Java pattern implementations



## Build
Recommended approach is to compile each file into the `build/` folder (this repository contains a VS Code task for MSVC).

- Using the provided VS Code task (MSVC on Windows): use the `C/C++: cl.exe build active file` task.
- Manual MSVC example:

```
cl /EHsc /Fo"build\\" /Fe"build\\program.exe" cpp\\_01_SqaureStarPattern.cpp
```

- g++ example (cross-platform):

```
g++ cpp/_01_SqaureStarPattern.cpp -o build/_01_SqaureStarPattern
```

## Run
- Windows:

```
build\_01_SqaureStarPattern.exe
```

- Linux/macOS:

```
./build/_01_SqaureStarPattern
```

## Repository hygiene
- Add `build/` to `.gitignore` to avoid committing generated artifacts.
- Use `.gitattributes` to normalize line endings (e.g. `eol=lf` for source files) and mark binaries as `binary`.

## Contributing
- Add new patterns under `cpp/` or at the project root. Name files clearly (prefix with an index for ordering).
- Include a brief comment at the top of each file describing input expectations and example output.
- Open a PR with a short description and sample output.

## License
See the `LICENSE` file in the repository root.

---
If you want, I can also add example output for each pattern, standardize filenames, or update the VS Code task to build all C++ files into `build/` automatically. Which would you like next?
