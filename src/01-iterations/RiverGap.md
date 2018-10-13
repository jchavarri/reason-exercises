# Monkey Trouble

The land profile in a region is represented by a succession of Water and Land
values. The "river gap" is any maximal sequence of consecutive Water that is
surrounded by Land at both ends.

For example, a sequence like [Land, Water, Water, Land] has a river gap of
length 2.

The sequence [Land, Water, Water, Water, Water, Land, Water, Water, Water, Land]
contains two river gaps: one of length 4 and one of length 3.

The sequence [Land, Water, Land, Water, Water] contains one river gap of
length 1.

The sequence [Land, Land, Land, Land] has no river gaps.

The sequence [Land, Water, Water, Water, Water, Water] has no river gaps.

Write a function:

     let solution = (p) => ...;

that, given a profile p as a list of values Water or Land, returns the length of
its longest river gap. The function should return 0 if N doesn't contain a
river gap.

For example, given p = [Land, Water, Water, Water, Water, Water, Land, Water,
Water, Water, Land] the function should return 5. Given p = [Land, Water, Water,
Water, Water, Water] the function should return 0, because p has no river gaps.

## Source

Inspired by [https://app.codility.com/programmers/lessons/1-iterations/binary_gap/](https://app.codility.com/programmers/lessons/1-iterations/binary_gap/)