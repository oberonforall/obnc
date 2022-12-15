# obnc
A compiler for Niklaus Wirth’s programming language Oberon.
Forked from [miasap/obnc](http://miasap.se/obnc/) and
[GunterMueller](https://github.com/GunterMueller/OBNC).


## Releases
Each of the releases are available on parallel branches and
in the [releases](https://github.com/amtoine/obnc/releases) tab.

### Notes
- `* 0.16.1` is the current official version of `obnc`
- `+ dev` is based on `0.16.1` and might be unstable
- `+ dev-exec` is based on `dev` and might be unstable
this branch is used to write the first version of the `oberon` compiler.
as we do not have access to system calls from the compiler itself and to avoid using an unsatisfying wrapper `bash` script to generate the final executable with `clang`, we choose to add a new `Process` library to `obnc` and call `clang` from there with the `c` implementation.
this branch defines a general `Execute` procedure that allows Oberon modules to run any external process.
- `+ dev-err` is based on `dev-exec` and might be unstable
this branch implements a clone of the `Out` module, but which prints to `stderr` instead of `stdout`.

[cebea80](https://github.com/oberonforall/obnc/commit/cebea803b6d4f3fbc13ec5f7052f7b642c912769) defines a new `Process.Exit` procedure which takes a single `INTEGER` argument and exit with that code properly.
Related to https://github.com/oberonforall/compiler/issues/131.

| version     | tag                                                             | branch                                                                |
| ----------- | --------------------------------------------------------------- | --------------------------------------------------------------------- |
| + dev-err   |                                                                 | [dev-err](https://github.com/amtoine/obnc/tree/dev-err)               |
| + dev-exec  |                                                                 | [dev-exec](https://github.com/amtoine/obnc/tree/dev-exec)             |
| + dev       |                                                                 | [dev](https://github.com/amtoine/obnc/tree/dev)                       |
| * 0.16.1    | [v0.16.1](https://github.com/amtoine/obnc/releases/tag/v0.16.1) | [version/0.16.1](https://github.com/amtoine/obnc/tree/version/0.16.1) |
|   0.16.0    | [v0.16.0](https://github.com/amtoine/obnc/releases/tag/v0.16.0) | [version/0.16.0](https://github.com/amtoine/obnc/tree/version/0.16.0) |
|   0.15.3    | [v0.15.3](https://github.com/amtoine/obnc/releases/tag/v0.15.3) | [version/0.15.3](https://github.com/amtoine/obnc/tree/version/0.15.3) |
|   0.15.2    | [v0.15.2](https://github.com/amtoine/obnc/releases/tag/v0.15.2) | [version/0.15.2](https://github.com/amtoine/obnc/tree/version/0.15.2) |
|   0.15.1    | [v0.15.1](https://github.com/amtoine/obnc/releases/tag/v0.15.1) | [version/0.15.1](https://github.com/amtoine/obnc/tree/version/0.15.1) |
|   0.15.0    | [v0.15.0](https://github.com/amtoine/obnc/releases/tag/v0.15.0) | [version/0.15.0](https://github.com/amtoine/obnc/tree/version/0.15.0) |
|   0.14.4    | [v0.14.4](https://github.com/amtoine/obnc/releases/tag/v0.14.4) | [version/0.14.4](https://github.com/amtoine/obnc/tree/version/0.14.4) |
|   0.14.3    | [v0.14.3](https://github.com/amtoine/obnc/releases/tag/v0.14.3) | [version/0.14.3](https://github.com/amtoine/obnc/tree/version/0.14.3) |
|   0.14.2    | [v0.14.2](https://github.com/amtoine/obnc/releases/tag/v0.14.2) | [version/0.14.2](https://github.com/amtoine/obnc/tree/version/0.14.2) |
|   0.14.1    | [v0.14.1](https://github.com/amtoine/obnc/releases/tag/v0.14.1) | [version/0.14.1](https://github.com/amtoine/obnc/tree/version/0.14.1) |
|   0.14.0    | [v0.14.0](https://github.com/amtoine/obnc/releases/tag/v0.14.0) | [version/0.14.0](https://github.com/amtoine/obnc/tree/version/0.14.0) |
|   0.13.3    | [v0.13.3](https://github.com/amtoine/obnc/releases/tag/v0.13.3) | [version/0.13.3](https://github.com/amtoine/obnc/tree/version/0.13.3) |
|   0.13.2    | [v0.13.2](https://github.com/amtoine/obnc/releases/tag/v0.13.2) | [version/0.13.2](https://github.com/amtoine/obnc/tree/version/0.13.2) |
|   0.13.1    | [v0.13.1](https://github.com/amtoine/obnc/releases/tag/v0.13.1) | [version/0.13.1](https://github.com/amtoine/obnc/tree/version/0.13.1) |
|   0.13.0    | [v0.13.0](https://github.com/amtoine/obnc/releases/tag/v0.13.0) | [version/0.13.0](https://github.com/amtoine/obnc/tree/version/0.13.0) |
|   0.12.0    | [v0.12.0](https://github.com/amtoine/obnc/releases/tag/v0.12.0) | [version/0.12.0](https://github.com/amtoine/obnc/tree/version/0.12.0) |
|   0.11.1    | [v0.11.1](https://github.com/amtoine/obnc/releases/tag/v0.11.1) | [version/0.11.1](https://github.com/amtoine/obnc/tree/version/0.11.1) |
|   0.11.0    | [v0.11.0](https://github.com/amtoine/obnc/releases/tag/v0.11.0) | [version/0.11.0](https://github.com/amtoine/obnc/tree/version/0.11.0) |
|   0.10.3    | [v0.10.3](https://github.com/amtoine/obnc/releases/tag/v0.10.3) | [version/0.10.3](https://github.com/amtoine/obnc/tree/version/0.10.3) |
|   0.10.2    | [v0.10.2](https://github.com/amtoine/obnc/releases/tag/v0.10.2) | [version/0.10.2](https://github.com/amtoine/obnc/tree/version/0.10.2) |
|   0.10.1    | [v0.10.1](https://github.com/amtoine/obnc/releases/tag/v0.10.1) | [version/0.10.1](https://github.com/amtoine/obnc/tree/version/0.10.1) |
|   0.10.0    | [v0.10.0](https://github.com/amtoine/obnc/releases/tag/v0.10.0) | [version/0.10.0](https://github.com/amtoine/obnc/tree/version/0.10.0) |
|   0.9.1     | [v0.9.1](https://github.com/amtoine/obnc/releases/tag/v0.9.1)   | [version/0.9.1](https://github.com/amtoine/obnc/tree/version/0.9.1)   |
|   0.9.0     | [v0.9.0](https://github.com/amtoine/obnc/releases/tag/v0.9.0)   | [version/0.9.0](https://github.com/amtoine/obnc/tree/version/0.9.0)   |
|   0.8.4     | [v0.8.4](https://github.com/amtoine/obnc/releases/tag/v0.8.4)   | [version/0.8.4](https://github.com/amtoine/obnc/tree/version/0.8.4)   |
|   0.8.3     | [v0.8.3](https://github.com/amtoine/obnc/releases/tag/v0.8.3)   | [version/0.8.3](https://github.com/amtoine/obnc/tree/version/0.8.3)   |
|   0.8.2     | [v0.8.2](https://github.com/amtoine/obnc/releases/tag/v0.8.2)   | [version/0.8.2](https://github.com/amtoine/obnc/tree/version/0.8.2)   |
|   0.8.1     | [v0.8.1](https://github.com/amtoine/obnc/releases/tag/v0.8.1)   | [version/0.8.1](https://github.com/amtoine/obnc/tree/version/0.8.1)   |
|   0.8.0     | [v0.8.0](https://github.com/amtoine/obnc/releases/tag/v0.8.0)   | [version/0.8.0](https://github.com/amtoine/obnc/tree/version/0.8.0)   |
|   0.7.1     | [v0.7.1](https://github.com/amtoine/obnc/releases/tag/v0.7.1)   | [version/0.7.1](https://github.com/amtoine/obnc/tree/version/0.7.1)   |
|   0.7.0     | [v0.7.0](https://github.com/amtoine/obnc/releases/tag/v0.7.0)   | [version/0.7.0](https://github.com/amtoine/obnc/tree/version/0.7.0)   |
