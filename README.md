# Is C++ faster than python?

* https://lemire.me/blog/2024/09/28/it-is-never-too-later-to-write-your-own-c-c-command-line-utilities/
* https://news.ycombinator.com/item?id=41677823

setup:

```
git clone https://github.com/nlohmann/json nhohmann
git clone https://github.com/ryanhaining/cppitertools
```

## Results

```
$ time -p python3 test.py
OK
real 1.19
user 0.88
sys 0.22
```

```
$ time -p ./test_modified
OK
real 1.06
user 0.80
sys 0.20
```
