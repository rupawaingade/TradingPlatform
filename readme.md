# A simple trading platform.

## install gtest
sudo apt-get install libgtest-dev
sudo apt-get install cmake


## build
g++ ClientApp.cpp --std=c++14 -g -I./include -o Client
./Client
