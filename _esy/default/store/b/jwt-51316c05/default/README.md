
# jwt


[![CircleCI](https://circleci.com/gh/yourgithubhandle/jwt/tree/master.svg?style=svg)](https://circleci.com/gh/yourgithubhandle/jwt/tree/master)


**Contains the following libraries and executables:**

```
jwt@0.0.0
│
├─test/
│   name:    TestJwt.exe
│   require: jwt/library
│
├─library/
│   library name: jwt/library
│   require:
│
└─executable/
    name:    JwtApp.exe
    require: jwt/library
```

## Developing:

```
npm install -g esy
git clone <this-repo>
esy install
esy build
```

## Running Binary:

After building the project, you can run the main binary that is produced.

```
esy x JwtApp.exe 
```

## Running Tests:

```
# Runs the "test" command in `package.json`.
esy test
```
