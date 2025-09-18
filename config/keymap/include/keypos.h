/* This file is based on the keyposition files from
 * https://github.com/urob/zmk-helpers and
 * https://github.com/caksoylar/zmk-config
 */

#pragma once

#if defined(KEYS_26)

/*                KEY POSITIONS
      ╭────────────────╮ ╭────────────────╮          ╭─────────────────╮ ╭────────────────╮    
  ╭───╯  0   1   2   3 │ │  4   5   6   7 ╰───╮  ╭───╯ LT3 LT2 LT1 LT0 │ │ RT0 RT1 RT2 RT3╰────╮
  │  8   9  10  11  12 │ │ 13  14  15  16  17 │  │ LM4 LM3 LM2 LM1 LM0 │ │ RM0 RM1 RM2 RM3 RM4 │
  ╰───╮ 18  19  20     │ │     21  22  23 ╭───╯  ╰───╮ LB3 LB2 LB1     │ │     RB1 RB2 RB3 ╭───╯
      ╰───────────╮ 24 │ │ 25 ╭───────────╯          ╰───────────╮ LH0 │ │ RH0 ╭───────────╯
                  ╰────╯ ╰────╯                                  ╰─────╯ ╰─────╯
*/
#define KEYS_L  0  1  2  3  8  9 10 11 12 18 19 20  // left hand
#define KEYS_R  4  5  6  7 13 14 15 16 17 21 22 23  // right hand
#define THUMBS  24 25                               // thumbs

#define LT0  3  // left-top row
#define LT1  2
#define LT2  1
#define LT3  0

#define RT0  4  // right-top row
#define RT1  5
#define RT2  6
#define RT3  7

#define LM0 12  // left-middle row
#define LM1 11
#define LM2 10
#define LM3  9
#define LM4  8

#define RM0 13  // right-middle row
#define RM1 14
#define RM2 15
#define RM3 16
#define RM4 17

#define LB1 20  // left-bottom row
#define LB2 19
#define LB3 18

#define RB1 21  // right-bottom row
#define RB2 22
#define RB3 23

#define LH0 24  // left thumb keys

#define RH0 25  // right thumb keys

#define LAYER_FROM42( \
    k00, k01, k02, k03, k04, k05, k06, k07, k08, k09, k10, k11,\
    k12, k13, k14, k15, k16, k17, k18, k19, k20, k21, k22, k23,\
    k24, k25, k26, k27, k28, k29, k30, k31, k32, k33, k34, k35,\
                   k36, k37, k38, k39, k40, k41                \
) \
         k01  k02  k03  k07  k05  k06  k07  k08       \
    k13  k14  k15  k16  k17  k18  k19  k20  k21  k22  \
         k26  k27  k28            k31  k32  k33       \
                        k38  k39

#elif defined(KEYS_28)

/*                KEY POSITIONS
      ╭────────────────╮ ╭────────────────╮          ╭─────────────────╮ ╭────────────────╮    
  ╭───╯  0   1   2   3 │ │  4   5   6   7 ╰───╮  ╭───╯ LT3 LT2 LT1 LT0 │ │ RT0 RT1 RT2 RT3╰────╮
  │  8   9  10  11  12 │ │ 13  14  15  16  17 │  │ LM4 LM3 LM2 LM1 LM0 │ │ RM0 RM1 RM2 RM3 RM4 │
  ╰───╮ 18  19  20     │ │     21  22  23 ╭───╯  ╰───╮ LB3 LB2 LB1     │ │     RB1 RB2 RB3 ╭───╯
      ╰───────╮ 24  25 │ │ 26  27 ╭───────╯          ╰───────╮ LH1 LH0 │ │ RH0 RH1 ╭───────╯
              ╰────────╯ ╰────────╯                          ╰─────────╯ ╰─────────╯
*/
#define KEYS_L  0  1  2  3  8  9 10 11 12 18 19 20  // left hand
#define KEYS_R  4  5  6  7 13 14 15 16 17 21 22 23  // right hand
#define THUMBS 24 25 26 27                          // thumbs

#define LT0  3  // left-top row
#define LT1  2
#define LT2  1
#define LT3  0

#define RT0  4  // right-top row
#define RT1  5
#define RT2  6
#define RT3  7

#define LM0 12  // left-middle row
#define LM1 11
#define LM2 10
#define LM3  9
#define LM4  8

#define RM0 13  // right-middle row
#define RM1 14
#define RM2 15
#define RM3 16
#define RM4 17

#define LB1 20  // left-bottom row
#define LB2 19
#define LB3 18

#define RB1 21  // right-bottom row
#define RB2 22
#define RB3 23

#define LH0 25  // left thumb keys
#define LH1 24

#define RH0 26  // right thumb keys
#define RH1 27

#define LAYER_FROM42( \
    k00, k01, k02, k03, k04, k05, k06, k07, k08, k09, k10, k11,\
    k12, k13, k14, k15, k16, k17, k18, k19, k20, k21, k22, k23,\
    k24, k25, k26, k27, k28, k29, k30, k31, k32, k33, k34, k35,\
                   k36, k37, k38, k39, k40, k41                \
) \
         k02  k03  k04  k05  k05  k06  k07  k08       \
    k13  k14  k15  k16  k17  k18  k19  k20  k21  k22  \
         k26  k27  k28            k31  k32  k33       \
                   k37  k38  k39  k40

#elif defined(KEYS_30)

/*                KEY POSITIONS
  ╭────────────────────╮ ╭────────────────────╮  ╭─────────────────────╮ ╭─────────────────────╮
  │  0   1   2   3   4 │ │  5   6   7   8   9 │  │ LT4 LT3 LT2 LT1 LT0 │ │ RT0 RT1 RT2 RT3 RT4 │
  │ 10  11  12  13  14 │ │ 15  16  17  18  19 │  │ LM4 LM3 LM2 LM1 LM0 │ │ RM0 RM1 RM2 RM3 RM4 │
  ╰───╮ 20  21  22     │ │     23  24  25 ╭───╯  ╰───╮ LB3 LB2 LB1     │ │     RB1 RB2 RB3 ╭───╯
      ╰───────╮ 26  27 │ │ 28  29 ╭───────╯          ╰───────╮ LH1 LH0 │ │ RH0 RH1 ╭───────╯
              ╰────────╯ ╰────────╯                          ╰─────────╯ ╰─────────╯
*/
#define KEYS_L  0  1  2  3  4 10 11 12 13 14 20 21 22  // left hand
#define KEYS_R  5  6  7  8  9 15 16 17 18 19 23 24 25  // right hand
#define THUMBS 26 27 28 29                             // thumbs

#define LT0  4  // left-top row
#define LT1  3
#define LT2  2
#define LT3  1
#define LT4  0

#define RT0  5  // right-top row
#define RT1  6
#define RT2  7
#define RT3  8
#define RT4  9

#define LM0 14  // left-middle row
#define LM1 13
#define LM2 12
#define LM3 11
#define LM4 10

#define RM0 15  // right-middle row
#define RM1 16
#define RM2 17
#define RM3 18
#define RM4 19

#define LB1 22  // left-bottom row
#define LB2 21
#define LB3 20

#define RB1 23  // right-bottom row
#define RB2 24
#define RB3 25

#define LH0 27  // left thumb keys
#define LH1 26

#define RH0 28  // right thumb keys
#define RH1 29

#define LAYER_FROM42( \
    k00, k01, k02, k03, k04, k05, k06, k07, k08, k09, k10, k11,\
    k12, k13, k14, k15, k16, k17, k18, k19, k20, k21, k22, k23,\
    k24, k25, k26, k27, k28, k29, k30, k31, k32, k33, k34, k35,\
                   k36, k37, k38, k39, k40, k41                \
) \
    k01  k02  k03  k04  k05  k06  k07  k08  k09  k10  \
    k13  k14  k15  k16  k17  k18  k19  k20  k21  k22  \
         k26  k27  k28            k31  k32  k33       \
                   k37  k38  k39  k40

#elif defined(KEYS_34)

/*                KEY POSITIONS
  ╭────────────────────╮ ╭────────────────────╮  ╭─────────────────────╮ ╭─────────────────────╮
  │  0   1   2   3   4 │ │  5   6   7   8   9 │  │ LT4 LT3 LT2 LT1 LT0 │ │ RT0 RT1 RT2 RT3 RT4 │
  │ 10  11  12  13  14 │ │ 15  16  17  18  19 │  │ LM4 LM3 LM2 LM1 LM0 │ │ RM0 RM1 RM2 RM3 RM4 │
  │ 20  21  22  23  24 │ │ 25  26  27  28  29 │  │ LB4 LB3 LB2 LB1 LB0 │ │ RB0 RB1 RB2 RB3 RB4 │
  ╰───────────╮ 30  31 │ │ 32  33 ╭───────────╯  ╰───────────╮ LH1 LH0 │ │ RH0 RH1 ╭───────────╯
              ╰────────╯ ╰────────╯                          ╰─────────╯ ╰─────────╯
*/
#define KEYS_L  0  1  2  3  4 10 11 12 13 14 20 21 22 23 24  // left hand
#define KEYS_R  5  6  7  8  9 15 16 17 18 19 25 26 27 28 29  // right hand
#define THUMBS 30 31 32 33                                   // thumbs

#define LT0  4  // left-top row
#define LT1  3
#define LT2  2
#define LT3  1
#define LT4  0

#define RT0  5  // right-top row
#define RT1  6
#define RT2  7
#define RT3  8
#define RT4  9

#define LM0 14  // left-middle row
#define LM1 13
#define LM2 12
#define LM3 11
#define LM4 10

#define RM0 15  // right-middle row
#define RM1 16
#define RM2 17
#define RM3 18
#define RM4 19

#define LB0 24  // left-bottom row
#define LB1 23
#define LB2 22
#define LB3 21
#define LB4 20

#define RB0 25  // right-bottom row
#define RB1 26
#define RB2 27
#define RB3 28
#define RB4 29

#define LH0 31  // left thumb keys
#define LH1 30

#define RH0 32  // right thumb keys
#define RH1 33

#define LAYER_FROM42( \
    k00, k01, k02, k03, k04, k05, k06, k07, k08, k09, k10, k11,\
    k12, k13, k14, k15, k16, k17, k18, k19, k20, k21, k22, k23,\
    k24, k25, k26, k27, k28, k29, k30, k31, k32, k33, k34, k35,\
                   k36, k37, k38, k39, k40, k41                \
) \
         k01  k02  k03  k04  k05  k06  k07  k08  k09  k10  \
         k13  k14  k15  k16  k17  k18  k19  k20  k21  k22  \
         k25  k26  k27  k28  k29  k30  k31  k32  k33  k34  \
                        k37  k38  k39  k40







#elif defined(KEYS_42)

/*                KEY POSITIONS


    ╭────────────────────────┬────────────────────────╮ ╭─────────────────────────┬─────────────────────────╮
    │  0   1   2   3   4   5 │  6   7   8   9  10  11 │ │ LT5 LT4 LT3 LT2 LT1 LT0 │ RT0 RT1 RT2 RT3 RT4 RT5 │
    │ 12  13  14  15  16  17 │ 18  19  20  21  22  23 │ │ LM5 LM4 LM3 LM2 LM1 LM0 │ RM0 RM1 RM2 RM3 RM4 RM5 │
    │ 24  25  26  27  28  29 │ 30  31  32  33  34  35 │ │ LB5 LB4 LB3 LB2 LB1 LB0 │ RB0 RB1 RB2 RB3 RB4 RB5 │
    ╰───────────╮ 36  37  38 │ 39  40  41 ╭───────────╯ ╰───────────╮ LH2 LH1 LH0 │ RH0 RH1 RH2 ╭───────────╯
                ╰────────────┴────────────╯                         ╰─────────────┴─────────────╯             */

#define KEYS_L  0  1  2  3  4  5 12 13 14 15 16 17 24 25 26 27 28 29 // left hand
#define KEYS_R  6  7  8  9 10 11 18 19 20 21 22 23 30 31 32 33 34 35  // right hand
#define THUMBS 36 37 38 39 40 41                                  // thumbs

#define LT0  5  // left-top row
#define LT1  4
#define LT2  3
#define LT3  2
#define LT4  1
#define LT5  0

#define RT0  6  // right-top row
#define RT1  7
#define RT2  8
#define RT3  9
#define RT4  10
#define RT5  11

#define LM0 17  // left-middle row
#define LM1 16
#define LM2 15
#define LM3 14
#define LM4 13
#define LM5 12

#define RM0 18  // right-middle row
#define RM1 19
#define RM2 20
#define RM3 21
#define RM4 22
#define RM5 23

#define LB0 29  // left-bottom row
#define LB1 28
#define LB2 27
#define LB3 26
#define LB4 25
#define LB5 24

#define RB0 30  // right-bottom row
#define RB1 31
#define RB2 32
#define RB3 33
#define RB4 34
#define RB5 35

#define LH0 38  // left thumb keys
#define LH1 37
#define LH2 36

#define RH0 39  // right thumb keys
#define RH1 40
#define RH2 41

#define LAYER_FROM42( \
    k00, k01, k02, k03, k04, k05, k06, k07, k08, k09, k10, k11,\
    k12, k13, k14, k15, k16, k17, k18, k19, k20, k21, k22, k23,\
    k24, k25, k26, k27, k28, k29, k30, k31, k32, k33, k34, k35,\
                   k36, k37, k38, k39, k40, k41                \
) \
    k00  k01  k02  k03  k04  k05  k06  k07  k08  k09  k10 k11 \
    k12  k13  k14  k15  k16  k17  k18  k19  k20  k21  k22 k23 \
    k24  k25  k26  k27  k28  k29  k30  k31  k32  k33  k34 k35 \
                   k36  k37  k38  k39  k40 k41 
#else

#error "Define KEYS_26 or KEYS_30 or KEYS_34 or KEYS_42"

#endif