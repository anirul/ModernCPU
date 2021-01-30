# ModernCPU

Benchmark for the course modern CPU

## Windows Stats

- Processor: Intel(R) Core(TM) i7-10700KF CPU @ 3.80GHz 3.79 
- Platform: Windows 10 Home 64-bit (19041.746)
- Compiler: MSVC 19.28.29336.0

### Branch Optimization

| Benchmark             |         Time |            CPU |  Iterations |
|:----------------------|-------------:|---------------:|------------:|
| BM_BranchOpti/16      |      7.51 ns |        7.50 ns |    89600000 |
| BM_BranchOpti/64      |      32.1 ns |        32.1 ns |    22400000 |
| BM_BranchOpti/512     |       213 ns |         213 ns |     3446154 |
| BM_BranchOpti/4096    |      1671 ns |        1674 ns |      448000 |
| BM_BranchOpti/32768   |     13593 ns |       13497 ns |       49778 |
| BM_BranchOpti/262144  |    108400 ns |      107422 ns |        6400 |
| BM_BranchOpti/1048576 |    435334 ns |      419922 ns |        1600 |

### Cache Associativity

| Benchmark        | Time           | CPU            | Iterations |
|:-----------------|---------------:|---------------:|-----------:|
| BM_Step/31       | 15804 ns       | 16044 ns       | 44800      |
| BM_Step/32       | 21880 ns       | 21973 ns       | 32000      |
| BM_Step/33       | 14933 ns       | 15067 ns       | 49778      |
| BM_Step/39       | 14666 ns       | 14753 ns       | 49778      |
| BM_Step/40       | 13786 ns       | 13811 ns       | 49778      |
| BM_Step/41       | 15607 ns       | 15695 ns       | 44800      |
| BM_Step/47       | 14862 ns       | 15067 ns       | 49778      |
| BM_Step/48       | 12729 ns       | 12835 ns       | 56000      |
| BM_Step/49       | 14936 ns       | 15067 ns       | 49778      |
| BM_Step/55       | 12691 ns       | 12835 ns       | 56000      |
| BM_Step/56       | 12657 ns       | 12556 ns       | 56000      |
| BM_Step/57       | 16171 ns       | 16392 ns       | 44800      |
| BM_Step/63       | 13439 ns       | 13672 ns       | 56000      |
| BM_Step/64       | 25479 ns       | 25495 ns       | 26353      |
| BM_Step/65       | 13179 ns       | 13114 ns       | 56000      |
| BM_Step/79       | 17162 ns       | 16881 ns       | 40727      |
| BM_Step/80       | 13091 ns       | 12870 ns       | 49778      |
| BM_Step/81       | 13037 ns       | 12870 ns       | 49778      |
| BM_Step/95       | 13727 ns       | 13811 ns       | 49778      |
| BM_Step/96       | 25412 ns       | 25670 ns       | 28000      |
| BM_Step/97       | 16077 ns       | 16044 ns       | 44800      |
| BM_Step/111      | 15899 ns       | 16044 ns       | 44800      |
| BM_Step/112      | 16224 ns       | 16113 ns       | 40727      |
| BM_Step/113      | 17381 ns       | 17648 ns       | 40727      |
| BM_Step/127      | 17985 ns       | 17997 ns       | 37333      |
| BM_Step/128      | 32016 ns       | 32087 ns       | 22400      |
| BM_Step/129      | 18424 ns       | 18415 ns       | 40727      |
| BM_Step/159      | 17003 ns       | 16881 ns       | 40727      |
| BM_Step/160      | 25061 ns       | 25112 ns       | 28000      |
| BM_Step/161      | 17023 ns       | 16881 ns       | 40727      |
| BM_Step/191      | 17151 ns       | 16881 ns       | 40727      |
| BM_Step/192      | 25029 ns       | 25112 ns       | 28000      |
| BM_Step/193      | 16474 ns       | 16497 ns       | 40727      |
| BM_Step/223      | 16816 ns       | 16881 ns       | 40727      |
| BM_Step/224      | 23980 ns       | 24065 ns       | 29867      |
| BM_Step/225      | 17372 ns       | 17648 ns       | 40727      |
| BM_Step/255      | 17372 ns       | 17264 ns       | 40727      |
| BM_Step/256      | 35316 ns       | 35295 ns       | 20364      |
| BM_Step/257      | 16531 ns       | 16497 ns       | 40727      |
| BM_Step/319      | 16120 ns       | 16113 ns       | 40727      |
| BM_Step/320      | 24216 ns       | 23996 ns       | 28000      |
| BM_Step/321      | 16274 ns       | 16392 ns       | 44800      |
| BM_Step/383      | 14548 ns       | 14753 ns       | 49778      |
| BM_Step/384      | 30685 ns       | 30692 ns       | 22400      |
| BM_Step/385      | 14590 ns       | 14753 ns       | 49778      |
| BM_Step/447      | 14049 ns       | 14125 ns       | 49778      |
| BM_Step/448      | 22113 ns       | 21972 ns       | 29867      |
| BM_Step/449      | 14534 ns       | 14439 ns       | 49778      |
| BM_Step/511      | 10575 ns       | 10498 ns       | 64000      |
| BM_Step/512      | 35494 ns       | 35296 ns       | 19478      |
| BM_Step/513      | 10293 ns       | 10463 ns       | 74667      |
| BM_Step/639      | 13600 ns       | 13672 ns       | 56000      |
| BM_Step/640      | 26648 ns       | 26681 ns       | 26353      |
| BM_Step/641      | 14785 ns       | 14648 ns       | 44800      |
| BM_Step/767      | 14241 ns       | 14439 ns       | 49778      |
| BM_Step/768      | 27763 ns       | 27623 ns       | 24889      |
| BM_Step/769      | 14069 ns       | 14125 ns       | 49778      |
| BM_Step/895      | 13508 ns       | 13497 ns       | 49778      |
| BM_Step/896      | 25506 ns       | 25670 ns       | 28000      |
| BM_Step/897      | 12836 ns       | 12835 ns       | 56000      |
| BM_Step/1023     | 16691 ns       | 16497 ns       | 40727      |
| BM_Step/1024     | 33352 ns       | 33692 ns       | 21333      |
| BM_Step/1025     | 16628 ns       | 16497 ns       | 40727      |
| BM_Step/1279     | 12813 ns       | 12835 ns       | 56000      |
| BM_Step/1280     | 25889 ns       | 25495 ns       | 26353      |
| BM_Step/1281     | 12771 ns       | 12835 ns       | 56000      |
| BM_Step/1535     | 11468 ns       | 11440 ns       | 56000      |
| BM_Step/1536     | 31946 ns       | 32087 ns       | 22400      |
| BM_Step/1537     | 11178 ns       | 11230 ns       | 64000      |
| BM_Step/1791     | 12756 ns       | 12835 ns       | 56000      |
| BM_Step/1792     | 25901 ns       | 25495 ns       | 26353      |
| BM_Step/1793     | 12677 ns       | 12835 ns       | 56000      |

### Floyd Warshall

| Benchmark            |         Time |            CPU |  Iterations |
|:---------------------|-------------:|---------------:|------------:|
| BM_FloydWarshall/4   |      32.0 ns |        32.2 ns |    21333333 |
| BM_FloydWarshall/8   |       252 ns |         257 ns |     2800000 |
| BM_FloydWarshall/64  |    132373 ns |      128348 ns |        5600 |
| BM_FloydWarshall/128 |    981803 ns |      983099 ns |         747 |

### Matrix

| Benchmark              |           Time |            CPU  | Iterations  | Size        |
|:-----------------------|---------------:|----------------:|------------:|:------------|
| BM_Row/8               |        35.4 ns |         35.3 ns |    19478261 | KB=0        |
| BM_Row/16              |         141 ns |          141 ns |     4977778 | KB=1		|
| BM_Row/32              |         754 ns |          767 ns |     1120000 | KB=4		|
| BM_Row/64              |        2610 ns |         2609 ns |      263529 | KB=16		|
| BM_Row/128             |        9760 ns |         9835 ns |       74667 | KB=64		|
| BM_Row/256             |       37414 ns |        37703 ns |       19478 | KB=256		|
| BM_Row/512             |      144710 ns |       142997 ns |        4480 | KB=1024		|
| BM_Row/1024            |      571407 ns |       578125 ns |        1000 | KB=4.096k	|
| BM_Row/2048            |     2618188 ns |      2663352 ns |         264 | KB=16.384k	|
| BM_Row/4096            |    10827795 ns |     10742188 ns |          64 | KB=65.536k	|
| BM_Row/8192            |    43447662 ns |     43945312 ns |          16 | KB=262.144k	|
| BM_Column/8            |        34.9 ns |         35.3 ns |    20363636 | KB=0		|
| BM_Column/16           |         141 ns |          141 ns |     4977778 | KB=1		|
| BM_Column/32           |         716 ns |          711 ns |     1120000 | KB=4		|
| BM_Column/64           |        2470 ns |         2455 ns |      280000 | KB=16		|
| BM_Column/128          |       18426 ns |        18415 ns |       37333 | KB=64		|
| BM_Column/256          |      132011 ns |       131138 ns |        5600 | KB=256		|
| BM_Column/512          |      795330 ns |       802176 ns |         896 | KB=1024		|
| BM_Column/1024         |     3387122 ns |      3370098 ns |         204 | KB=4.096k	|
| BM_Column/2048         |    26581856 ns |     26875000 ns |          25 | KB=16.384k	|
| BM_Column/4096         |   122044183 ns |    122395833 ns |           6 | KB=65.536k	|
| BM_Column/8192         |   643715100 ns |    656250000 ns |           1 | KB=262.144k	|
| BM_RowWithWork/8       |         193 ns |          193 ns |     3733333 | KB=0		|
| BM_RowWithWork/16      |         846 ns |          837 ns |      746667 | KB=1		|
| BM_RowWithWork/32      |        3202 ns |         3149 ns |      213333 | KB=4		|
| BM_RowWithWork/64      |       12892 ns |        12870 ns |       49778 | KB=16		|
| BM_RowWithWork/128     |       56719 ns |        57199 ns |       11200 | KB=64		|
| BM_RowWithWork/256     |      262095 ns |       262277 ns |        2800 | KB=256		|
| BM_RowWithWork/512     |      995221 ns |      1004016 ns |         747 | KB=1024		|
| BM_RowWithWork/1024    |     3460956 ns |      3446691 ns |         204 | KB=4.096k	|
| BM_RowWithWork/2048    |    13188512 ns |     13125000 ns |          50 | KB=16.384k	|
| BM_RowWithWork/4096    |    51803990 ns |     51562500 ns |          10 | KB=65.536k	|
| BM_RowWithWork/8192    |   206795333 ns |    208333333 ns |           3 | KB=262.144k	|
| BM_ColumnWithWork/8    |         188 ns |          188 ns |     3733333 | KB=0		|
| BM_ColumnWithWork/16   |         733 ns |          732 ns |      896000 | KB=1		|
| BM_ColumnWithWork/32   |        2899 ns |         2916 ns |      235789 | KB=4		|
| BM_ColumnWithWork/64   |       11806 ns |        11719 ns |       64000 | KB=16		|
| BM_ColumnWithWork/128  |       58627 ns |        58594 ns |       11200 | KB=64		|
| BM_ColumnWithWork/256  |      310123 ns |       306920 ns |        2240 | KB=256		|
| BM_ColumnWithWork/512  |     1376202 ns |      1380522 ns |         498 | KB=1024		|
| BM_ColumnWithWork/1024 |     5658703 ns |      5625000 ns |         100 | KB=4.096k	|
| BM_ColumnWithWork/2048 |    55252680 ns |     54687500 ns |          10 | KB=16.384k	|
| BM_ColumnWithWork/4096 |   262287633 ns |    265625000 ns |           3 | KB=65.536k	|
| BM_ColumnWithWork/8192 |  1244522800 ns |   1250000000 ns |           1 | KB=262.144k	|
| BM_Random/8            |        1150 ns |         1147 ns |      640000 | KB=0		|
| BM_Random/16           |        4522 ns |         4464 ns |      112000 | KB=1		|
| BM_Random/32           |       17862 ns |        17578 ns |       37333 | KB=4		|
| BM_Random/64           |       71338 ns |        69754 ns |        8960 | KB=16		|
| BM_Random/128          |      286400 ns |       288771 ns |        2489 | KB=64		|
| BM_Random/256          |     1151811 ns |      1143973 ns |         560 | KB=256		|
| BM_Random/512          |     5124014 ns |      5156250 ns |         100 | KB=1024		|
| BM_Random/1024         |    21316744 ns |     21484375 ns |          32 | KB=4.096k	|
| BM_Random/2048         |   189849725 ns |    187500000 ns |           4 | KB=16.384k	|
| BM_Random/4096         |  1329570100 ns |   1328125000 ns |           1 | KB=65.536k	|
| BM_Random/8192         |  5696877100 ns |   5703125000 ns |           1 | KB=262.144k	|

### Memory Aliasing

| Benchmark               |      Time |       CPU | Iterations |
|:------------------------|----------:|----------:|-----------:|
| BM_AdderAlias/8         |   3.08 ns |   3.11 ns |  235789474 |
| BM_AdderAlias/64        |   23.2 ns |   22.9 ns |   28000000 |
| BM_AdderAlias/512       |    145 ns |    143 ns |    4480000 |
| BM_AdderAlias/4096      |   1111 ns |   1123 ns |     640000 |
| BM_AdderAlias/32768     |   8982 ns |   9068 ns |      89600 |
| BM_AdderAlias/262144    |  74682 ns |  74986 ns |       8960 |
| BM_AdderAlias/1048576   | 299957 ns | 299944 ns |       2240 |
| BM_AdderNoAlias/8       |   2.35 ns |   2.35 ns |  298666667 |
| BM_AdderNoAlias/64      |   4.92 ns |   4.97 ns |  144516129 |
| BM_AdderNoAlias/512     |   33.5 ns |   33.0 ns |   20363636 |
| BM_AdderNoAlias/4096    |    225 ns |    225 ns |    2986667 |
| BM_AdderNoAlias/32768   |   1829 ns |   1842 ns |     373333 |
| BM_AdderNoAlias/262144  |  21259 ns |  20856 ns |      34462 |
| BM_AdderNoAlias/1048576 |  87089 ns |  87193 ns |       8960 |

### Vector of Array

| Benchmark            |         Time |            CPU |  Iterations |
|:---------------------|-------------:|---------------:|------------:|
| BM_ArrayVec3/8       |      80.8 ns |        80.2 ns |     8960000 |
| BM_ArrayVec3/64      |       645 ns |         642 ns |     1120000 |
| BM_ArrayVec3/512     |      5164 ns |        5162 ns |      112000 |
| BM_ArrayVec3/4096    |     41450 ns |       41433 ns |       16593 |
| BM_ArrayVec3/32768   |    332604 ns |      329641 ns |        2133 |
| BM_ArrayVec3/262144  |   2859375 ns |     2846928 ns |         236 |
| BM_ArrayVec3/1048576 |  11527623 ns |    11474609 ns |          64 |
| BM_Vec3Array/8       |      27.5 ns |        27.3 ns |    26352941 |
| BM_Vec3Array/64      |       224 ns |         225 ns |     3200000 |
| BM_Vec3Array/512     |      1771 ns |        1765 ns |      407273 |
| BM_Vec3Array/4096    |     14273 ns |       14439 ns |       49778 |
| BM_Vec3Array/32768   |    115898 ns |      114746 ns |        6400 |
| BM_Vec3Array/262144  |   1173443 ns |     1171875 ns |         640 |
| BM_Vec3Array/1048576 |   5066381 ns |     5161830 ns |         112 |

### Vector vs List

| Benchmark         |         Time |            CPU |  Iterations |
|:------------------|-------------:|---------------:|------------:|
| BM_Vector/8       |      7.62 ns |        7.50 ns |    89600000 |
| BM_Vector/64      |      61.8 ns |        61.4 ns |    11200000 |
| BM_Vector/512     |       447 ns |         445 ns |     1544828 |
| BM_Vector/4096    |      3516 ns |        3530 ns |      194783 |
| BM_Vector/32768   |     28062 ns |       28250 ns |       24889 |
| BM_Vector/262144  |    224894 ns |      224933 ns |        2987 |
| BM_Vector/1048576 |    898522 ns |      899431 ns |         747 |
| BM_List/8         |      7.29 ns |        7.32 ns |    89600000 |
| BM_List/64        |      60.7 ns |        61.4 ns |    11200000 |
| BM_List/512       |       470 ns |         475 ns |     1544828 |
| BM_List/4096      |      6990 ns |        6975 ns |       89600 |
| BM_List/32768     |     87132 ns |       85449 ns |        8960 |
| BM_List/262144    |    748819 ns |      732422 ns |         896 |
| BM_List/1048576   |   7344050 ns |     7291667 ns |          90 |

## Linux Stats

- Processor: Intel(R) Core(TM) i7-8750H CPU @ 2.20GHz 
- Platform: Debian GNU/Linux 10.7 (5.7)
- Compiler: gcc 8.3.0

### Branch Optimization

| Benchmark                |         Time |            CPU |  Iterations |
|:-------------------------|-------------:|---------------:|------------:|
| BM_BranchOpti/16         |      33.3 ns |        33.3 ns |    20717189 |
| BM_BranchOpti/64         |       149 ns |         150 ns |     4638038 |
| BM_BranchOpti/512        |      1153 ns |        1154 ns |      605012 |
| BM_BranchOpti/4096       |      9177 ns |        9178 ns |       75712 |
| BM_BranchOpti/32768      |     73571 ns |       73582 ns |        9378 |
| BM_BranchOpti/262144     |    588371 ns |      588444 ns |        1176 |
| BM_BranchOpti/1048576    |   2362507 ns |     2362823 ns |         294 |
| BM_BranchNonOpti/16      |      35.2 ns |        35.2 ns |    19797135 |
| BM_BranchNonOpti/64      |       149 ns |         149 ns |     4705263 |
| BM_BranchNonOpti/512     |      1158 ns |        1158 ns |      596351 |
| BM_BranchNonOpti/4096    |      9223 ns |        9223 ns |       75320 |
| BM_BranchNonOpti/32768   |     74208 ns |       74218 ns |        9392 |
| BM_BranchNonOpti/262144  |    597993 ns |      598050 ns |        1173 |
| BM_BranchNonOpti/1048576 |   2365732 ns |     2366037 ns |         293 |

### Cache Associativity

| Benchmark    |         Time |            CPU |  Iterations |
|:-------------|-------------:|---------------:|------------:|
| BM_Step/31   |     22560 ns |       22559 ns |       29321 |
| BM_Step/32   |     26337 ns |       26339 ns |       25686 |
| BM_Step/33   |     22745 ns |       22746 ns |       29679 |
| BM_Step/39   |     23466 ns |       23468 ns |       28898 |
| BM_Step/40   |     23747 ns |       23748 ns |       29234 |
| BM_Step/41   |     22887 ns |       22889 ns |       30627 |
| BM_Step/47   |     23466 ns |       23467 ns |       29507 |
| BM_Step/48   |     23789 ns |       23790 ns |       29272 |
| BM_Step/49   |     23387 ns |       23388 ns |       29626 |
| BM_Step/55   |     23346 ns |       23347 ns |       29850 |
| BM_Step/56   |     23898 ns |       23899 ns |       29783 |
| BM_Step/57   |     23226 ns |       23227 ns |       29732 |
| BM_Step/63   |     23917 ns |       23918 ns |       28817 |
| BM_Step/64   |     32454 ns |       32456 ns |       21722 |
| BM_Step/65   |     24119 ns |       24119 ns |       28729 |
| BM_Step/79   |     23931 ns |       23932 ns |       29301 |
| BM_Step/80   |     23896 ns |       23897 ns |       28900 |
| BM_Step/81   |     24393 ns |       24394 ns |       29049 |
| BM_Step/95   |     24351 ns |       24353 ns |       28473 |
| BM_Step/96   |     31261 ns |       31263 ns |       22328 |
| BM_Step/97   |     24273 ns |       24274 ns |       28631 |
| BM_Step/111  |     24055 ns |       24056 ns |       28793 |
| BM_Step/112  |     24089 ns |       24090 ns |       28291 |
| BM_Step/113  |     24132 ns |       24133 ns |       28947 |
| BM_Step/127  |     24341 ns |       24341 ns |       28161 |
| BM_Step/128  |     34411 ns |       34413 ns |       20412 |
| BM_Step/129  |     24542 ns |       24544 ns |       28323 |
| BM_Step/159  |     25060 ns |       25059 ns |       27524 |
| BM_Step/160  |     31383 ns |       31384 ns |       22326 |
| BM_Step/161  |     25470 ns |       25471 ns |       27596 |
| BM_Step/191  |     25115 ns |       25116 ns |       27569 |
| BM_Step/192  |     32292 ns |       32294 ns |       21681 |
| BM_Step/193  |     25878 ns |       25879 ns |       27029 |
| BM_Step/223  |     25369 ns |       25370 ns |       27023 |
| BM_Step/224  |     30074 ns |       30075 ns |       23149 |
| BM_Step/225  |     24671 ns |       24672 ns |       27745 |
| BM_Step/255  |     25569 ns |       25569 ns |       27052 |
| BM_Step/256  |     35340 ns |       35341 ns |       19858 |
| BM_Step/257  |     25911 ns |       25912 ns |       26627 |
| BM_Step/319  |     24949 ns |       24949 ns |       27692 |
| BM_Step/320  |     31061 ns |       31063 ns |       22319 |
| BM_Step/321  |     25168 ns |       25168 ns |       27403 |
| BM_Step/383  |     24077 ns |       24078 ns |       29037 |
| BM_Step/384  |     29633 ns |       29635 ns |       23847 |
| BM_Step/385  |     24374 ns |       24374 ns |       28302 |
| BM_Step/447  |     24305 ns |       24306 ns |       27869 |
| BM_Step/448  |     28770 ns |       28771 ns |       24253 |
| BM_Step/449  |     25864 ns |       25864 ns |       28050 |
| BM_Step/511  |     23262 ns |       23263 ns |       30194 |
| BM_Step/512  |     59785 ns |       59785 ns |       11657 |
| BM_Step/513  |     22836 ns |       22837 ns |       30587 |
| BM_Step/639  |     24452 ns |       24451 ns |       28488 |
| BM_Step/640  |     29427 ns |       29428 ns |       23694 |
| BM_Step/641  |     25242 ns |       25243 ns |       27689 |
| BM_Step/767  |     25152 ns |       25153 ns |       27533 |
| BM_Step/768  |     29350 ns |       29351 ns |       23932 |
| BM_Step/769  |     25425 ns |       25426 ns |       27486 |
| BM_Step/895  |     25418 ns |       25419 ns |       27371 |
| BM_Step/896  |     28686 ns |       28687 ns |       24066 |
| BM_Step/897  |     24988 ns |       24989 ns |       27812 |
| BM_Step/1023 |     70099 ns |       70101 ns |        9555 |
| BM_Step/1024 |     86287 ns |       86291 ns |        7957 |
| BM_Step/1025 |     69906 ns |       69902 ns |        9753 |
| BM_Step/1279 |     25096 ns |       25097 ns |       27749 |
| BM_Step/1280 |     29366 ns |       29367 ns |       23969 |
| BM_Step/1281 |     24844 ns |       24844 ns |       28105 |
| BM_Step/1535 |     23676 ns |       23677 ns |       28860 |
| BM_Step/1536 |     50326 ns |       50328 ns |       10000 |
| BM_Step/1537 |     23543 ns |       23544 ns |       28970 |
| BM_Step/1791 |     24410 ns |       24410 ns |       28187 |
| BM_Step/1792 |     27884 ns |       27884 ns |       24179 |
| BM_Step/1793 |     24894 ns |       24894 ns |       28083 |

### Floyd Warshall

| Benchmark            |         Time |            CPU |  Iterations |
|:---------------------|-------------:|---------------:|------------:|
| BM_FloydWarshall/4   |       636 ns |         636 ns |     1037949 |
| BM_FloydWarshall/8   |      5381 ns |        5381 ns |      127095 |
| BM_FloydWarshall/64  |   2477558 ns |     2477545 ns |         286 |
| BM_FloydWarshall/128 |  19344857 ns |    19344987 ns |          36 |

### Matrix

| Benchmark              |          Time |            CPU |  Iterations | User Counters   |
|:-----------------------|--------------:|---------------:|------------:|:----------------|
| BM_Row/8               |        377 ns |         377 ns |     1879265 | KB=0            |
| BM_Row/16              |       1605 ns |        1605 ns |      436539 | KB=1            |
| BM_Row/32              |       5953 ns |        5953 ns |      117029 | KB=4            |
| BM_Row/64              |      22913 ns |       22912 ns |       30511 | KB=16           |
| BM_Row/128             |      90490 ns |       90489 ns |        7708 | KB=64           |
| BM_Row/256             |     360022 ns |      360013 ns |        1943 | KB=256          |
| BM_Row/512             |    1436690 ns |     1436650 ns |         486 | KB=1024         |
| BM_Row/1024            |    5768894 ns |     5768770 ns |         120 | KB=4.096k       |
| BM_Row/2048            |   23031769 ns |    23031552 ns |          31 | KB=16.384k      |
| BM_Row/4096            |   92865719 ns |    92863998 ns |           8 | KB=65.536k      |
| BM_Row/8192            |  372960824 ns |   372954170 ns |           2 | KB=262.144k     |
| BM_Column/8            |        376 ns |         376 ns |     1858990 | KB=0            |
| BM_Column/16           |       1580 ns |        1580 ns |      445484 | KB=1            |
| BM_Column/32           |       5973 ns |        5973 ns |      116387 | KB=4            |
| BM_Column/64           |      22774 ns |       22774 ns |       30849 | KB=16           |
| BM_Column/128          |      91830 ns |       91828 ns |        7544 | KB=64           |
| BM_Column/256          |     410738 ns |      410733 ns |        1706 | KB=256          |
| BM_Column/512          |    1929336 ns |     1929244 ns |         364 | KB=1024         |
| BM_Column/1024         |    8432588 ns |     8432372 ns |          79 | KB=4.096k       |
| BM_Column/2048         |   91488906 ns |    91484507 ns |           7 | KB=16.384k      |
| BM_Column/4096         |  404944979 ns |   404927340 ns |           2 | KB=65.536k      |
| BM_Column/8192         | 1613541046 ns |  1613508098 ns |           1 | KB=262.144k     |
| BM_RowWithWork/8       |        839 ns |         839 ns |      838269 | KB=0            |
| BM_RowWithWork/16      |       3197 ns |        3197 ns |      220297 | KB=1            |
| BM_RowWithWork/32      |      12447 ns |       12446 ns |       55399 | KB=4            |
| BM_RowWithWork/64      |      48731 ns |       48730 ns |       14275 | KB=16           |
| BM_RowWithWork/128     |     194359 ns |      194359 ns |        3601 | KB=64           |
| BM_RowWithWork/256     |     774674 ns |      774654 ns |         908 | KB=256          |
| BM_RowWithWork/512     |    3096041 ns |     3095999 ns |         226 | KB=1024         |
| BM_RowWithWork/1024    |   12370198 ns |    12369812 ns |          57 | KB=4.096k       |
| BM_RowWithWork/2048    |   49474209 ns |    49472763 ns |          14 | KB=16.384k      |
| BM_RowWithWork/4096    |  198115875 ns |   198110314 ns |           4 | KB=65.536k      |
| BM_RowWithWork/8192    |  791120611 ns |   791101764 ns |           1 | KB=262.144k     |
| BM_ColumnWithWork/8    |        850 ns |         850 ns |      821652 | KB=0            |
| BM_ColumnWithWork/16   |       3187 ns |        3187 ns |      220451 | KB=1            |
| BM_ColumnWithWork/32   |      12619 ns |       12619 ns |       56163 | KB=4            |
| BM_ColumnWithWork/64   |      49211 ns |       49210 ns |       13947 | KB=16           |
| BM_ColumnWithWork/128  |     193995 ns |      193993 ns |        3589 | KB=64           |
| BM_ColumnWithWork/256  |     835410 ns |      835387 ns |         827 | KB=256          |
| BM_ColumnWithWork/512  |    4186334 ns |     4186277 ns |         167 | KB=1024         |
| BM_ColumnWithWork/1024 |   18422563 ns |    18421845 ns |          36 | KB=4.096k       |
| BM_ColumnWithWork/2048 |  172764607 ns |   172763517 ns |           4 | KB=16.384k      |
| BM_ColumnWithWork/4096 |  767409506 ns |   767365572 ns |           1 | KB=65.536k      |
| BM_ColumnWithWork/8192 | 3111612653 ns |  3111513531 ns |           1 | KB=262.144k     |
| BM_Random/8            |       1173 ns |        1173 ns |      608436 | KB=0            |
| BM_Random/16           |       4415 ns |        4415 ns |      156706 | KB=1            |
| BM_Random/32           |      17150 ns |       17150 ns |       40621 | KB=4            |
| BM_Random/64           |      67653 ns |       67648 ns |       10171 | KB=16           |
| BM_Random/128          |     270021 ns |      270015 ns |        2589 | KB=64           |
| BM_Random/256          |    1082337 ns |     1082315 ns |         636 | KB=256          |
| BM_Random/512          |    4590251 ns |     4590163 ns |         153 | KB=1024         |
| BM_Random/1024         |   18942802 ns |    18941900 ns |          36 | KB=4.096k       |
| BM_Random/2048         |  153809331 ns |   153807392 ns |           4 | KB=16.384k      |
| BM_Random/4096         |  759597659 ns |   759578839 ns |           1 | KB=65.536k      |
| BM_Random/8192         | 3081033084 ns |  3080963234 ns |           1 | KB=262.144k     |

### Memory Aliasing

| Benchmark               |         Time |            CPU |  Iterations |
|:------------------------|-------------:|---------------:|------------:|
| BM_AdderAlias/8         |      17.4 ns |        17.4 ns |    39714856 |
| BM_AdderAlias/64        |       128 ns |         128 ns |     5451225 |
| BM_AdderAlias/512       |      1053 ns |        1053 ns |      666455 |
| BM_AdderAlias/4096      |      8324 ns |        8324 ns |       83102 |
| BM_AdderAlias/32768     |     66681 ns |       66678 ns |       10363 |
| BM_AdderAlias/262144    |    534210 ns |      534171 ns |        1290 |
| BM_AdderAlias/1048576   |   2118484 ns |     2118323 ns |         327 |
| BM_AdderNoAlias/8       |      16.5 ns |        16.5 ns |    42058634 |
| BM_AdderNoAlias/64      |       129 ns |         129 ns |     5410600 |
| BM_AdderNoAlias/512     |      1054 ns |        1054 ns |      660495 |
| BM_AdderNoAlias/4096    |      8405 ns |        8405 ns |       81919 |
| BM_AdderNoAlias/32768   |     66561 ns |       66557 ns |       10352 |
| BM_AdderNoAlias/262144  |    534844 ns |      534829 ns |        1273 |
| BM_AdderNoAlias/1048576 |   2142364 ns |     2142274 ns |         327 |

### Vector of Array

| Benchmark            |         Time |            CPU |  Iterations |
|:---------------------|-------------:|---------------:|------------:|
| BM_ArrayVec3/8       |       326 ns |         326 ns |     2163082 |
| BM_ArrayVec3/64      |      2477 ns |        2477 ns |      286758 |
| BM_ArrayVec3/512     |     19338 ns |       19337 ns |       35831 |
| BM_ArrayVec3/4096    |    156347 ns |      156341 ns |        4457 |
| BM_ArrayVec3/32768   |   1250966 ns |     1250927 ns |         558 |
| BM_ArrayVec3/262144  |  10016437 ns |    10016224 ns |          69 |
| BM_ArrayVec3/1048576 |  40325851 ns |    40324317 ns |          17 |
| BM_Vec3Array/8       |      1033 ns |        1033 ns |      667704 |
| BM_Vec3Array/64      |      8066 ns |        8066 ns |       85571 |
| BM_Vec3Array/512     |     64465 ns |       64464 ns |       10629 |
| BM_Vec3Array/4096    |    518467 ns |      518462 ns |        1339 |
| BM_Vec3Array/32768   |   4138693 ns |     4138772 ns |         170 |
| BM_Vec3Array/262144  |  33178109 ns |    33179342 ns |          21 |
| BM_Vec3Array/1048576 | 132400724 ns |   132405384 ns |           5 |

### Vector vs List

| Benchmark         |         Time |            CPU |  Iterations |
|:------------------|-------------:|---------------:|------------:|
| BM_Vector/8       |      74.7 ns |        74.7 ns |     9259791 |
| BM_Vector/64      |       517 ns |         517 ns |     1321225 |
| BM_Vector/512     |      4016 ns |        4009 ns |      173166 |
| BM_Vector/4096    |     31623 ns |       31623 ns |       21897 |
| BM_Vector/32768   |    257249 ns |      257249 ns |        2735 |
| BM_Vector/262144  |   2058513 ns |     2058397 ns |         341 |
| BM_Vector/1048576 |   8207249 ns |     8207188 ns |          85 |
| BM_List/8         |       113 ns |         113 ns |     6156242 |
| BM_List/64        |       751 ns |         751 ns |      931065 |
| BM_List/512       |      5820 ns |        5820 ns |      118233 |
| BM_List/4096      |     47460 ns |       47459 ns |       14777 |
| BM_List/32768     |    380875 ns |      380874 ns |        1831 |
| BM_List/262144    |   3176565 ns |     3176542 ns |         230 |
| BM_List/1048576   |  12171603 ns |    12171504 ns |          53 |
