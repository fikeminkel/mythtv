/*
 * Copyright (c) 2012
 *      MIPS Technologies, Inc., California.
 *
 * Redistribution and use in source and binary forms, with or without
 * modification, are permitted provided that the following conditions
 * are met:
 * 1. Redistributions of source code must retain the above copyright
 *    notice, this list of conditions and the following disclaimer.
 * 2. Redistributions in binary form must reproduce the above copyright
 *    notice, this list of conditions and the following disclaimer in the
 *    documentation and/or other materials provided with the distribution.
 * 3. Neither the name of the MIPS Technologies, Inc., nor the names of its
 *    contributors may be used to endorse or promote products derived from
 *    this software without specific prior written permission.
 *
 * THIS SOFTWARE IS PROVIDED BY THE MIPS TECHNOLOGIES, INC. ``AS IS'' AND
 * ANY EXPRESS OR IMPLIED WARRANTIES, INCLUDING, BUT NOT LIMITED TO, THE
 * IMPLIED WARRANTIES OF MERCHANTABILITY AND FITNESS FOR A PARTICULAR PURPOSE
 * ARE DISCLAIMED.  IN NO EVENT SHALL THE MIPS TECHNOLOGIES, INC. BE LIABLE
 * FOR ANY DIRECT, INDIRECT, INCIDENTAL, SPECIAL, EXEMPLARY, OR CONSEQUENTIAL
 * DAMAGES (INCLUDING, BUT NOT LIMITED TO, PROCUREMENT OF SUBSTITUTE GOODS
 * OR SERVICES; LOSS OF USE, DATA, OR PROFITS; OR BUSINESS INTERRUPTION)
 * HOWEVER CAUSED AND ON ANY THEORY OF LIABILITY, WHETHER IN CONTRACT, STRICT
 * LIABILITY, OR TORT (INCLUDING NEGLIGENCE OR OTHERWISE) ARISING IN ANY WAY
 * OUT OF THE USE OF THIS SOFTWARE, EVEN IF ADVISED OF THE POSSIBILITY OF
 * SUCH DAMAGE.
 *
 * Authors:  Stanislav Ocovaj (socovaj@mips.com)
 *           Goran Cordasic   (goran@mips.com)
 *           Djordje Pesut    (djordje@mips.com)
 *
 * This file is part of FFmpeg.
 *
 * FFmpeg is free software; you can redistribute it and/or
 * modify it under the terms of the GNU Lesser General Public
 * License as published by the Free Software Foundation; either
 * version 2.1 of the License, or (at your option) any later version.
 *
 * FFmpeg is distributed in the hope that it will be useful,
 * but WITHOUT ANY WARRANTY; without even the implied warranty of
 * MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the GNU
 * Lesser General Public License for more details.
 *
 * You should have received a copy of the GNU Lesser General Public
 * License along with FFmpeg; if not, write to the Free Software
 * Foundation, Inc., 51 Franklin Street, Fifth Floor, Boston, MA 02110-1301 USA
 */

/**
 * @file
 * definitions and initialization of LUT table for FFT
 */
#include "libavcodec/fft_table.h"

const int32_t ff_w_tab_sr[MAX_FFT_SIZE/(4*16)] = {
    2147483647, 2147481121, 2147473542, 2147460908, 2147443222, 2147420483, 2147392690, 2147359845,
    2147321946, 2147278995, 2147230991, 2147177934, 2147119825, 2147056664, 2146988450, 2146915184,
    2146836866, 2146753497, 2146665076, 2146571603, 2146473080, 2146369505, 2146260881, 2146147205,
    2146028480, 2145904705, 2145775880, 2145642006, 2145503083, 2145359112, 2145210092, 2145056025,
    2144896910, 2144732748, 2144563539, 2144389283, 2144209982, 2144025635, 2143836244, 2143641807,
    2143442326, 2143237802, 2143028234, 2142813624, 2142593971, 2142369276, 2142139541, 2141904764,
    2141664948, 2141420092, 2141170197, 2140915264, 2140655293, 2140390284, 2140120240, 2139845159,
    2139565043, 2139279892, 2138989708, 2138694490, 2138394240, 2138088958, 2137778644, 2137463301,
    2137142927, 2136817525, 2136487095, 2136151637, 2135811153, 2135465642, 2135115107, 2134759548,
    2134398966, 2134033361, 2133662734, 2133287087, 2132906420, 2132520734, 2132130030, 2131734309,
    2131333572, 2130927819, 2130517052, 2130101272, 2129680480, 2129254676, 2128823862, 2128388038,
    2127947206, 2127501367, 2127050522, 2126594672, 2126133817, 2125667960, 2125197100, 2124721240,
    2124240380, 2123754522, 2123263666, 2122767814, 2122266967, 2121761126, 2121250292, 2120734467,
    2120213651, 2119687847, 2119157054, 2118621275, 2118080511, 2117534762, 2116984031, 2116428319,
    2115867626, 2115301954, 2114731305, 2114155680, 2113575080, 2112989506, 2112398960, 2111803444,
    2111202959, 2110597505, 2109987085, 2109371700, 2108751352, 2108126041, 2107495770, 2106860540,
    2106220352, 2105575208, 2104925109, 2104270057, 2103610054, 2102945101, 2102275199, 2101600350,
    2100920556, 2100235819, 2099546139, 2098851519, 2098151960, 2097447464, 2096738032, 2096023667,
    2095304370, 2094580142, 2093850985, 2093116901, 2092377892, 2091633960, 2090885105, 2090131331,
    2089372638, 2088609029, 2087840505, 2087067068, 2086288720, 2085505463, 2084717298, 2083924228,
    2083126254, 2082323379, 2081515603, 2080702930, 2079885360, 2079062896, 2078235540, 2077403294,
    2076566160, 2075724139, 2074877233, 2074025446, 2073168777, 2072307231, 2071440808, 2070569511,
    2069693342, 2068812302, 2067926394, 2067035621, 2066139983, 2065239484, 2064334124, 2063423908,
    2062508835, 2061588910, 2060664133, 2059734508, 2058800036, 2057860719, 2056916560, 2055967560,
    2055013723, 2054055050, 2053091544, 2052123207, 2051150040, 2050172048, 2049189231, 2048201592,
    2047209133, 2046211857, 2045209767, 2044202863, 2043191150, 2042174628, 2041153301, 2040127172,
    2039096241, 2038060512, 2037019988, 2035974670, 2034924562, 2033869665, 2032809982, 2031745516,
    2030676269, 2029602243, 2028523442, 2027439867, 2026351522, 2025258408, 2024160529, 2023057887,
    2021950484, 2020838323, 2019721407, 2018599739, 2017473321, 2016342155, 2015206245, 2014065592,
    2012920201, 2011770073, 2010615210, 2009455617, 2008291295, 2007122248, 2005948478, 2004769987,
    2003586779, 2002398857, 2001206222, 2000008879, 1998806829, 1997600076, 1996388622, 1995172471,
    1993951625, 1992726087, 1991495860, 1990260946, 1989021350, 1987777073, 1986528118, 1985274489,
    1984016189, 1982753220, 1981485585, 1980213288, 1978936331, 1977654717, 1976368450, 1975077532,
    1973781967, 1972481757, 1971176906, 1969867417, 1968553292, 1967234535, 1965911148, 1964583136,
    1963250501, 1961913246, 1960571375, 1959224890, 1957873796, 1956518093, 1955157788, 1953792881,
    1952423377, 1951049279, 1949670589, 1948287312, 1946899451, 1945507008, 1944109987, 1942708392,
    1941302225, 1939891490, 1938476190, 1937056329, 1935631910, 1934202936, 1932769411, 1931331338,
    1929888720, 1928441561, 1926989864, 1925533633, 1924072871, 1922607581, 1921137767, 1919663432,
    1918184581, 1916701216, 1915213340, 1913720958, 1912224073, 1910722688, 1909216806, 1907706433,
    1906191570, 1904672222, 1903148392, 1901620084, 1900087301, 1898550047, 1897008325, 1895462140,
    1893911494, 1892356392, 1890796837, 1889232832, 1887664383, 1886091491, 1884514161, 1882932397,
    1881346202, 1879755580, 1878160535, 1876561070, 1874957189, 1873348897, 1871736196, 1870119091,
    1868497586, 1866871683, 1865241388, 1863606704, 1861967634, 1860324183, 1858676355, 1857024153,
    1855367581, 1853706643, 1852041343, 1850371686, 1848697674, 1847019312, 1845336604, 1843649553,
    1841958164, 1840262441, 1838562388, 1836858008, 1835149306, 1833436286, 1831718951, 1829997307,
    1828271356, 1826541103, 1824806552, 1823067707, 1821324572, 1819577151, 1817825449, 1816069469,
    1814309216, 1812544694, 1810775906, 1809002858, 1807225553, 1805443995, 1803658189, 1801868139,
    1800073849, 1798275323, 1796472565, 1794665580, 1792854372, 1791038946, 1789219305, 1787395453,
    1785567396, 1783735137, 1781898681, 1780058032, 1778213194, 1776364172, 1774510970, 1772653593,
    1770792044, 1768926328, 1767056450, 1765182414, 1763304224, 1761421885, 1759535401, 1757644777,
    1755750017, 1753851126, 1751948107, 1750040966, 1748129707, 1746214334, 1744294853, 1742371267,
    1740443581, 1738511799, 1736575927, 1734635968, 1732691928, 1730743810, 1728791620, 1726835361,
    1724875040, 1722910659, 1720942225, 1718969740, 1716993211, 1715012642, 1713028037, 1711039401,
    1709046739, 1707050055, 1705049355, 1703044642, 1701035922, 1699023199, 1697006479, 1694985765,
    1692961062, 1690932376, 1688899711, 1686863072, 1684822463, 1682777890, 1680729357, 1678676870,
    1676620432, 1674560049, 1672495725, 1670427466, 1668355276, 1666279161, 1664199124, 1662115172,
    1660027308, 1657935539, 1655839867, 1653740300, 1651636841, 1649529496, 1647418269, 1645303166,
    1643184191, 1641061349, 1638934646, 1636804087, 1634669676, 1632531418, 1630389319, 1628243383,
    1626093616, 1623940023, 1621782608, 1619621377, 1617456335, 1615287487, 1613114838, 1610938393,
    1608758157, 1606574136, 1604386335, 1602194758, 1599999411, 1597800299, 1595597428, 1593390801,
    1591180426, 1588966306, 1586748447, 1584526854, 1582301533, 1580072489, 1577839726, 1575603251,
    1573363068, 1571119183, 1568871601, 1566620327, 1564365367, 1562106725, 1559844408, 1557578421,
    1555308768, 1553035455, 1550758488, 1548477872, 1546193612, 1543905714, 1541614183, 1539319024,
    1537020244, 1534717846, 1532411837, 1530102222, 1527789007, 1525472197, 1523151797, 1520827813,
    1518500250, 1516169114, 1513834411, 1511496145, 1509154322, 1506808949, 1504460029, 1502107570,
    1499751576, 1497392053, 1495029006, 1492662441, 1490292364, 1487918781, 1485541696, 1483161115,
    1480777044, 1478389489, 1475998456, 1473603949, 1471205974, 1468804538, 1466399645, 1463991302,
    1461579514, 1459164286, 1456745625, 1454323536, 1451898025, 1449469098, 1447036760, 1444601017,
    1442161874, 1439719338, 1437273414, 1434824109, 1432371426, 1429915374, 1427455956, 1424993180,
    1422527051, 1420057574, 1417584755, 1415108601, 1412629117, 1410146309, 1407660183, 1405170745,
    1402678000, 1400181954, 1397682613, 1395179984, 1392674072, 1390164882, 1387652422, 1385136696,
    1382617710, 1380095472, 1377569986, 1375041258, 1372509294, 1369974101, 1367435685, 1364894050,
    1362349204, 1359801152, 1357249901, 1354695455, 1352137822, 1349577007, 1347013017, 1344445857,
    1341875533, 1339302052, 1336725419, 1334145641, 1331562723, 1328976672, 1326387494, 1323795195,
    1321199781, 1318601257, 1315999631, 1313394909, 1310787095, 1308176198, 1305562222, 1302945174,
    1300325060, 1297701886, 1295075659, 1292446384, 1289814068, 1287178717, 1284540337, 1281898935,
    1279254516, 1276607086, 1273956653, 1271303222, 1268646800, 1265987392, 1263325005, 1260659646,
    1257991320, 1255320034, 1252645794, 1249968606, 1247288478, 1244605414, 1241919421, 1239230506,
    1236538675, 1233843935, 1231146291, 1228445750, 1225742318, 1223036002, 1220326809, 1217614743,
    1214899813, 1212182024, 1209461382, 1206737894, 1204011567, 1201282407, 1198550419, 1195815612,
    1193077991, 1190337562, 1187594332, 1184848308, 1182099496, 1179347902, 1176593533, 1173836395,
    1171076495, 1168313840, 1165548435, 1162780288, 1160009405, 1157235792, 1154459456, 1151680403,
    1148898640, 1146114174, 1143327011, 1140537158, 1137744621, 1134949406, 1132151521, 1129350972,
    1126547765, 1123741908, 1120933406, 1118122267, 1115308496, 1112492101, 1109673089, 1106851465,
    1104027237, 1101200410, 1098370993, 1095538991, 1092704411, 1089867259, 1087027544, 1084185270,
    1081340445, 1078493076, 1075643169, 1072790730, 1069935768, 1067078288, 1064218296, 1061355801,
    1058490808, 1055623324, 1052753357, 1049880912, 1047005996, 1044128617, 1041248781, 1038366495,
    1035481766, 1032594600, 1029705004, 1026812985, 1023918550, 1021021705, 1018122458, 1015220816,
    1012316784, 1009410370, 1006501581, 1003590424, 1000676905,  997761031,  994842810,  991922248,
     988999351,  986074127,  983146583,  980216726,  977284562,  974350098,  971413342,  968474300,
     965532978,  962589385,  959643527,  956695411,  953745043,  950792431,  947837582,  944880503,
     941921200,  938959681,  935995952,  933030021,  930061894,  927091579,  924119082,  921144411,
     918167572,  915188572,  912207419,  909224120,  906238681,  903251110,  900261413,  897269597,
     894275671,  891279640,  888281512,  885281293,  882278992,  879274614,  876268167,  873259659,
     870249095,  867236484,  864221832,  861205147,  858186435,  855165703,  852142959,  849118210,
     846091463,  843062726,  840032004,  836999305,  833964638,  830928007,  827889422,  824848888,
     821806413,  818762005,  815715670,  812667415,  809617249,  806565177,  803511207,  800455346,
     797397602,  794337982,  791276492,  788213141,  785147934,  782080880,  779011986,  775941259,
     772868706,  769794334,  766718151,  763640164,  760560380,  757478806,  754395449,  751310318,
     748223418,  745134758,  742044345,  738952186,  735858287,  732762657,  729665303,  726566232,
     723465451,  720362968,  717258790,  714152924,  711045377,  707936158,  704825272,  701712728,
     698598533,  695482694,  692365218,  689246113,  686125387,  683003045,  679879097,  676753549,
     673626408,  670497682,  667367379,  664235505,  661102068,  657967075,  654830535,  651692453,
     648552838,  645411696,  642269036,  639124865,  635979190,  632832018,  629683357,  626533215,
     623381598,  620228514,  617073971,  613917975,  610760536,  607601658,  604441352,  601279623,
     598116479,  594951927,  591785976,  588618632,  585449903,  582279796,  579108320,  575935480,
     572761285,  569585743,  566408860,  563230645,  560051104,  556870245,  553688076,  550504604,
     547319836,  544133781,  540946445,  537757837,  534567963,  531376831,  528184449,  524990824,
     521795963,  518599875,  515402566,  512204045,  509004318,  505803394,  502601279,  499397982,
     496193509,  492987869,  489781069,  486573117,  483364019,  480153784,  476942419,  473729932,
     470516330,  467301622,  464085813,  460868912,  457650927,  454431865,  451211734,  447990541,
     444768294,  441545000,  438320667,  435095303,  431868915,  428641511,  425413098,  422183684,
     418953276,  415721883,  412489512,  409256170,  406021865,  402786604,  399550396,  396313247,
     393075166,  389836160,  386596237,  383355404,  380113669,  376871039,  373627523,  370383128,
     367137861,  363891730,  360644742,  357396906,  354148230,  350898719,  347648383,  344397230,
     341145265,  337892498,  334638936,  331384586,  328129457,  324873555,  321616889,  318359466,
     315101295,  311842381,  308582734,  305322361,  302061269,  298799466,  295536961,  292273760,
     289009871,  285745302,  282480061,  279214155,  275947592,  272680379,  269412525,  266144038,
     262874923,  259605191,  256334847,  253063900,  249792358,  246520228,  243247518,  239974235,
     236700388,  233425984,  230151030,  226875535,  223599506,  220322951,  217045878,  213768293,
     210490206,  207211624,  203932553,  200653003,  197372981,  194092495,  190811551,  187530159,
     184248325,  180966058,  177683365,  174400254,  171116733,  167832808,  164548489,  161263783,
     157978697,  154693240,  151407418,  148121241,  144834714,  141547847,  138260647,  134973122,
     131685278,  128397125,  125108670,  121819921,  118530885,  115241570,  111951983,  108662134,
     105372028,  102081675,   98791081,   95500255,   92209205,   88917937,   85626460,   82334782,
      79042909,   75750851,   72458615,   69166208,   65873638,   62580914,   59288042,   55995030,
      52701887,   49408620,   46115236,   42821744,   39528151,   36234466,   32940695,   29646846,
      26352928,   23058947,   19764913,   16470832,   13176712,    9882561,    6588387,    3294197
};

uint16_t ff_fft_offsets_lut[0x2aab];

void ff_fft_lut_init(uint16_t *table, int off, int size, int *index)
{
    if (size < 16) {
        table[*index] = off >> 2;
        (*index)++;
    }
    else {
        ff_fft_lut_init(table, off, size>>1, index);
        ff_fft_lut_init(table, off+(size>>1), size>>2, index);
        ff_fft_lut_init(table, off+3*(size>>2), size>>2, index);
    }
}