## Preinstall
```
sudo apt update
sudo apt install build-essential libtool autoconf libssl-dev libssh-dev cmake
```

## Fetch GTest
```
cd gtest-example-cpp 
git submodule update --init --recursive
```

## How to build
```
cd gtest-example-cpp
mkdir build
cd build
cmake ..
make
```

## How to run
```
./build/test/gtest_example_unit_tests
```

## Output result in
```
./output/result.xml
```