# Bowling Kata

## What?

This repository is the implementation of a cpp kata, i.e. a short implementation task to practice test-driven development. The idea is to implement the tests one by one, never writing any source code w/o a failing test. Then making the test pass and then refactor the code for a clean implementation.

The task here is to implement a class "Game", that is supposed to calculate the score of a bowling game. You provide the rolled pins in each round and can ask for the total score.

## How?
If you want to try this yourself, start with the first test, make it pass then move to the next. In this repository you will find two implementation of game (game and a second version gameV2). gameV2 is a shorter implementation, but needs to have all the rolled results to provide the score. game will calculate the current score with each roll, which comes at the cost of a slightly more complex implementation.


## Setup
This repository uses the googletest library, which is not uploaded in this repo. It must be stored in /lib/googletest. You can download it from here: https://github.com/google/googletest.

To see the test results, run the test files, for example using a VS Code setup.

