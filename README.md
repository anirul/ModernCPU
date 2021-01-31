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
- Compiler: gcc 8.3.0 (-O3)

### Branch Optimization

| Benchmark                |         Time |            CPU |  Iterations |
|:-------------------------|-------------:|---------------:|------------:|
| BM_BranchOpti/16         |      4.82 ns |        4.82 ns |   145036060 |
| BM_BranchOpti/64         |      34.7 ns |        34.7 ns |    20041497 |
| BM_BranchOpti/512        |       463 ns |         463 ns |     1511266 |
| BM_BranchOpti/4096       |      4026 ns |        4025 ns |      172583 |
| BM_BranchOpti/32768      |     32403 ns |       32392 ns |       21518 |
| BM_BranchOpti/262144     |    260804 ns |      260713 ns |        2669 |
| BM_BranchOpti/1048576    |   1053105 ns |     1052729 ns |         664 |
| BM_BranchNonOpti/16      |      7.21 ns |        7.21 ns |    99396621 |
| BM_BranchNonOpti/64      |      41.4 ns |        41.4 ns |    17208345 |
| BM_BranchNonOpti/512     |       482 ns |         481 ns |     1451403 |
| BM_BranchNonOpti/4096    |      4033 ns |        4031 ns |      173806 |
| BM_BranchNonOpti/32768   |     32521 ns |       32509 ns |       21394 |
| BM_BranchNonOpti/262144  |    261247 ns |      261152 ns |        2668 |
| BM_BranchNonOpti/1048576 |   1049300 ns |     1048925 ns |         669 |

### Cache Associativity

| Benchmark    |         Time |            CPU |  Iterations |
|:-------------|-------------:|---------------:|------------:|
| BM_Step/31   |     18104 ns |       18103 ns |       38322 |
| BM_Step/32   |     25315 ns |       25313 ns |       27779 |
| BM_Step/33   |     16573 ns |       16573 ns |       41592 |
| BM_Step/39   |     17188 ns |       17188 ns |       40224 |
| BM_Step/40   |     16249 ns |       16249 ns |       42054 |
| BM_Step/41   |     17608 ns |       17608 ns |       38285 |
| BM_Step/47   |     17329 ns |       17328 ns |       39019 |
| BM_Step/48   |     15124 ns |       15123 ns |       45217 |
| BM_Step/49   |     17445 ns |       17445 ns |       39733 |
| BM_Step/55   |     14011 ns |       14010 ns |       48588 |
| BM_Step/56   |     14706 ns |       14705 ns |       45620 |
| BM_Step/57   |     18604 ns |       18603 ns |       37134 |
| BM_Step/63   |     15297 ns |       15296 ns |       44978 |
| BM_Step/64   |     29568 ns |       29566 ns |       23175 |
| BM_Step/65   |     14748 ns |       14748 ns |       44848 |
| BM_Step/79   |     19633 ns |       19632 ns |       35004 |
| BM_Step/80   |     15431 ns |       15429 ns |       43920 |
| BM_Step/81   |     14630 ns |       14629 ns |       46786 |
| BM_Step/95   |     15411 ns |       15410 ns |       44250 |
| BM_Step/96   |     29004 ns |       29002 ns |       24316 |
| BM_Step/97   |     18721 ns |       18719 ns |       37024 |
| BM_Step/111  |     18210 ns |       18208 ns |       37282 |
| BM_Step/112  |     18959 ns |       18958 ns |       36221 |
| BM_Step/113  |     19381 ns |       19379 ns |       34981 |
| BM_Step/127  |     19760 ns |       19759 ns |       34404 |
| BM_Step/128  |     36233 ns |       36230 ns |       19313 |
| BM_Step/129  |     19737 ns |       19735 ns |       34523 |
| BM_Step/159  |     18938 ns |       18935 ns |       35738 |
| BM_Step/160  |     28773 ns |       28771 ns |       24046 |
| BM_Step/161  |     20141 ns |       20139 ns |       33954 |
| BM_Step/191  |     19017 ns |       19015 ns |       36186 |
| BM_Step/192  |     29289 ns |       29284 ns |       23927 |
| BM_Step/193  |     18693 ns |       18692 ns |       36938 |
| BM_Step/223  |     19294 ns |       19292 ns |       35191 |
| BM_Step/224  |     27424 ns |       27421 ns |       25572 |
| BM_Step/225  |     19041 ns |       19039 ns |       36411 |
| BM_Step/255  |     19757 ns |       19755 ns |       35095 |
| BM_Step/256  |     40722 ns |       40718 ns |       17236 |
| BM_Step/257  |     19947 ns |       19944 ns |       34500 |
| BM_Step/319  |     18534 ns |       18531 ns |       36893 |
| BM_Step/320  |     28111 ns |       28107 ns |       24674 |
| BM_Step/321  |     18853 ns |       18851 ns |       36421 |
| BM_Step/383  |     17276 ns |       17275 ns |       39575 |
| BM_Step/384  |     31435 ns |       31431 ns |       21924 |
| BM_Step/385  |     17545 ns |       17543 ns |       38699 |
| BM_Step/447  |     17015 ns |       17013 ns |       39118 |
| BM_Step/448  |     25956 ns |       25952 ns |       26887 |
| BM_Step/449  |     16928 ns |       16926 ns |       40356 |
| BM_Step/511  |     11075 ns |       11073 ns |       60809 |
| BM_Step/512  |     40820 ns |       40815 ns |       17193 |
| BM_Step/513  |     10577 ns |       10575 ns |       62401 |
| BM_Step/639  |     15647 ns |       15645 ns |       43101 |
| BM_Step/640  |     27062 ns |       27058 ns |       25546 |
| BM_Step/641  |     17834 ns |       17832 ns |       38235 |
| BM_Step/767  |     17212 ns |       17210 ns |       39046 |
| BM_Step/768  |     31982 ns |       31978 ns |       21698 |
| BM_Step/769  |     17357 ns |       17355 ns |       38855 |
| BM_Step/895  |     16061 ns |       16059 ns |       41709 |
| BM_Step/896  |     26367 ns |       26363 ns |       26408 |
| BM_Step/897  |     15410 ns |       15407 ns |       43876 |
| BM_Step/1023 |     19882 ns |       19879 ns |       35028 |
| BM_Step/1024 |     40900 ns |       40895 ns |       17155 |
| BM_Step/1025 |     19716 ns |       19713 ns |       34755 |
| BM_Step/1279 |     15807 ns |       15804 ns |       42693 |
| BM_Step/1280 |     31418 ns |       31414 ns |       22223 |
| BM_Step/1281 |     15664 ns |       15661 ns |       42908 |
| BM_Step/1535 |     13930 ns |       13928 ns |       47827 |
| BM_Step/1536 |     34259 ns |       34254 ns |       20449 |
| BM_Step/1537 |     13742 ns |       13740 ns |       48365 |
| BM_Step/1791 |     16013 ns |       16011 ns |       42052 |
| BM_Step/1792 |     30970 ns |       30965 ns |       22349 |
| BM_Step/1793 |     15938 ns |       15935 ns |       42466 |

### Floyd Warshall

| Benchmark             |        Time  |           CPU  | Iterations |
|:----------------------|-------------:|---------------:|-----------:|
| BM_FloydWarshall/4    |     37.9 ns  |       37.9 ns  |   18496987 |
| BM_FloydWarshall/8    |      250 ns  |        250 ns  |    2779962 |
| BM_FloydWarshall/64   |   172795 ns  |     172913 ns  |       4049 |
| BM_FloydWarshall/128  |  1289828 ns  |    1290686 ns  |        536 |

### Matrix

| Benchmark              |          Time |            CPU |  Iterations | UserCounters... |
|:-----------------------|--------------:|---------------:|------------:|----------------:|
| BM_Row/8               |       15.9 ns |        15.9 ns |    42901968 | KB=0            |
| BM_Row/16              |       54.0 ns |        54.0 ns |    12755738 | KB=1            |
| BM_Row/32              |        208 ns |         208 ns |     3241361 | KB=4            |
| BM_Row/64              |        794 ns |         794 ns |      855931 | KB=16           |
| BM_Row/128             |       3075 ns |        3075 ns |      222501 | KB=64           |
| BM_Row/256             |      12290 ns |       12291 ns |       55900 | KB=256          |
| BM_Row/512             |      51609 ns |       51615 ns |       13668 | KB=1024         |
| BM_Row/1024            |     192917 ns |      192937 ns |        3538 | KB=4.096k       |
| BM_Row/2048            |    1258318 ns |     1258363 ns |         507 | KB=16.384k      |
| BM_Row/4096            |    7149640 ns |     7149916 ns |          88 | KB=65.536k      |
| BM_Row/8192            |   28867249 ns |    28869471 ns |          24 | KB=262.144k     |
| BM_Column/8            |       22.5 ns |        22.5 ns |    30570091 | KB=0            |
| BM_Column/16           |       90.9 ns |        90.9 ns |     7591319 | KB=1            |
| BM_Column/32           |        349 ns |         349 ns |     1997940 | KB=4            |
| BM_Column/64           |       1408 ns |        1409 ns |      487502 | KB=16           |
| BM_Column/128          |      31253 ns |       31256 ns |       22474 | KB=64           |
| BM_Column/256          |     174815 ns |      174829 ns |        4020 | KB=256          |
| BM_Column/512          |    1006009 ns |     1006059 ns |         688 | KB=1024         |
| BM_Column/1024         |    4295734 ns |     4296002 ns |         164 | KB=4.096k       |
| BM_Column/2048         |   34089369 ns |    34091437 ns |          20 | KB=16.384k      |
| BM_Column/4096         |  193717522 ns |   193728839 ns |           3 | KB=65.536k      |
| BM_Column/8192         |  817883529 ns |   817904392 ns |           1 | KB=262.144k     |
| BM_RowWithWork/8       |        284 ns |         284 ns |     2471242 | KB=0            |
| BM_RowWithWork/16      |       1132 ns |        1132 ns |      615729 | KB=1            |
| BM_RowWithWork/32      |       4557 ns |        4558 ns |      153573 | KB=4            |
| BM_RowWithWork/64      |      18238 ns |       18239 ns |       37820 | KB=16           |
| BM_RowWithWork/128     |      72878 ns |       72879 ns |        9492 | KB=64           |
| BM_RowWithWork/256     |     291096 ns |      291111 ns |        2374 | KB=256          |
| BM_RowWithWork/512     |    1166134 ns |     1166184 ns |         587 | KB=1024         |
| BM_RowWithWork/1024    |    4668989 ns |     4669002 ns |         150 | KB=4.096k       |
| BM_RowWithWork/2048    |   18725875 ns |    18726561 ns |          37 | KB=16.384k      |
| BM_RowWithWork/4096    |   74802056 ns |    74804490 ns |           9 | KB=65.536k      |
| BM_RowWithWork/8192    |  298414568 ns |   298421890 ns |           2 | KB=262.144k     |
| BM_ColumnWithWork/8    |        287 ns |         287 ns |     2472975 | KB=0            |
| BM_ColumnWithWork/16   |       1154 ns |        1154 ns |      603299 | KB=1            |
| BM_ColumnWithWork/32   |       4658 ns |        4658 ns |      151467 | KB=4            |
| BM_ColumnWithWork/64   |      18448 ns |       18448 ns |       38042 | KB=16           |
| BM_ColumnWithWork/128  |      73048 ns |       73049 ns |        9428 | KB=64           |
| BM_ColumnWithWork/256  |     293503 ns |      293496 ns |        2368 | KB=256          |
| BM_ColumnWithWork/512  |    1175737 ns |     1175751 ns |         587 | KB=1024         |
| BM_ColumnWithWork/1024 |    4864547 ns |     4864613 ns |         132 | KB=4.096k       |
| BM_ColumnWithWork/2048 |   39527523 ns |    39527778 ns |          18 | KB=16.384k      |
| BM_ColumnWithWork/4096 |  196437662 ns |   196437328 ns |           3 | KB=65.536k      |
| BM_ColumnWithWork/8192 |  821364588 ns |   821372810 ns |           1 | KB=262.144k     |
| BM_Random/8            |        792 ns |         792 ns |      871514 | KB=0            |
| BM_Random/16           |       3229 ns |        3229 ns |      215582 | KB=1            |
| BM_Random/32           |      12834 ns |       12834 ns |       54553 | KB=4            |
| BM_Random/64           |      50807 ns |       50806 ns |       13548 | KB=16           |
| BM_Random/128          |     203843 ns |      203839 ns |        3437 | KB=64           |
| BM_Random/256          |     814620 ns |      814626 ns |         837 | KB=256          |
| BM_Random/512          |    3256901 ns |     3256903 ns |         214 | KB=1024         |
| BM_Random/1024         |   13326879 ns |    13326946 ns |          50 | KB=4.096k       |
| BM_Random/2048         |  121649805 ns |   121650038 ns |           5 | KB=16.384k      |
| BM_Random/4096         |  605527475 ns |   605512831 ns |           1 | KB=65.536k      |
| BM_Random/8192         | 2483382110 ns |  2483360240 ns |           1 | KB=262.144k     |

### Memory Aliasing

| Benchmark               |         Time |            CPU |  Iterations |
|:------------------------|-------------:|---------------:|------------:|
| BM_AdderAlias/8         |      2.25 ns |        2.25 ns |   312868316 |
| BM_AdderAlias/64        |      8.93 ns |        8.93 ns |    76962712 |
| BM_AdderAlias/512       |      69.7 ns |        69.7 ns |     9994031 |
| BM_AdderAlias/4096      |       516 ns |         516 ns |     1342229 |
| BM_AdderAlias/32768     |      4078 ns |        4078 ns |      171147 |
| BM_AdderAlias/262144    |     32593 ns |       32589 ns |       21425 |
| BM_AdderAlias/1048576   |    132789 ns |      132776 ns |        5237 |
| BM_AdderNoAlias/8       |      2.28 ns |        2.28 ns |   305913243 |
| BM_AdderNoAlias/64      |      6.26 ns |        6.26 ns |   110238450 |
| BM_AdderNoAlias/512     |      52.3 ns |        52.3 ns |    13157913 |
| BM_AdderNoAlias/4096    |       369 ns |         369 ns |     1891496 |
| BM_AdderNoAlias/32768   |      3034 ns |        3034 ns |      229306 |
| BM_AdderNoAlias/262144  |     24535 ns |       24532 ns |       28082 |
| BM_AdderNoAlias/1048576 |    101872 ns |      101864 ns |        6811 |

### Vector of Array

| Benchmark            |         Time |            CPU |  Iterations |
|:---------------------|-------------:|---------------:|------------:|
| BM_ArrayVec3/8       |      20.1 ns |        20.1 ns |    34954853 |
| BM_ArrayVec3/64      |       163 ns |         163 ns |     4310019 |
| BM_ArrayVec3/512     |      1297 ns |        1297 ns |      530599 |
| BM_ArrayVec3/4096    |     10463 ns |       10462 ns |       66578 |
| BM_ArrayVec3/32768   |     85692 ns |       85682 ns |        8016 |
| BM_ArrayVec3/262144  |    790526 ns |      790460 ns |         886 |
| BM_ArrayVec3/1048576 |   3121944 ns |     3121584 ns |         225 |
| BM_Vec3Array/8       |      6.02 ns |        6.02 ns |   116807022 |
| BM_Vec3Array/64      |      49.8 ns |        49.8 ns |    13856342 |
| BM_Vec3Array/512     |       390 ns |         390 ns |     1795889 |
| BM_Vec3Array/4096    |      3779 ns |        3778 ns |      186815 |
| BM_Vec3Array/32768   |     34373 ns |       34371 ns |       20410 |
| BM_Vec3Array/262144  |    468695 ns |      468643 ns |        1502 |
| BM_Vec3Array/1048576 |   1068888 ns |     1068778 ns |         644 |

### Vector vs List

| Benchmark         |         Time |            CPU |  Iterations |
|:------------------|-------------:|---------------:|------------:|
| BM_Vector/8       |      2.48 ns |        2.48 ns |   280010929 |
| BM_Vector/64      |      19.5 ns |        19.5 ns |    35621346 |
| BM_Vector/512     |       135 ns |         135 ns |     5111972 |
| BM_Vector/4096    |      1027 ns |        1027 ns |      673874 |
| BM_Vector/32768   |      8714 ns |        8714 ns |       78532 |
| BM_Vector/262144  |     73621 ns |       73627 ns |        9236 |
| BM_Vector/1048576 |    300632 ns |      300651 ns |        2297 |
| BM_List/8         |      4.48 ns |        4.48 ns |   155426979 |
| BM_List/64        |      60.8 ns |        60.8 ns |    11303778 |
| BM_List/512       |       518 ns |         518 ns |     1335046 |
| BM_List/4096      |      7377 ns |        7377 ns |       83732 |
| BM_List/32768     |     70196 ns |       70200 ns |        9687 |
| BM_List/262144    |    610290 ns |      610316 ns |        1209 |
| BM_List/1048576   |   3602146 ns |     3602338 ns |         212 |
