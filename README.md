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

### Matrix

| Benchmark              |           Time |            CPU  | Iterations  | Size        |
|:-----------------------|---------------:|----------------:|:------------|:------------|
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