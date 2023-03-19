#include <bits/stdc++.h>
using namespace std;

int main()
{

    int n;
    cin >> n;
    int arr[n], dep[n];

    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }
    for (int i = 0; i < n; i++)
    {
        cin >> dep[i];
    }

    int m = 1, w = 1;
    sort(arr, arr + n);
    sort(dep, dep + n);
    for (int i = 0; i < n; i++)
    {
        m = 1;
        for (int j = i + 1; j < n; j++)
        {
            if (arr[j] <= dep[i])
            {
                m++;
            }
        }
        if (w < m)
        {
            w = m;
        }
    }
    
    cout << w;

    // sample input
    // 606
    // 0220 0729 1454 0038 2049 0137 2111 0820 0754 0612 0708 0824 0439 1154 1449 0954 0355 1216 0012 0342 0454 0343 1630 0610 0714 1150 0120 1323 0335 0241 0250 0218 0731 0050 0500 0003 0843 0839 1247 0524 0750 0240 0633 1209 0253 0132 1139 1242 0947 0753 0621 0340 0910 0317 0356 0946 1540 0854 0819 1209 1634 1814 0716 0658 0414 1119 1630 0540 0536 0740 1309 0739 0547 1527 0136 1618 0443 0549 0256 0009 0123 0237 2032 0905 1521 1005 1102 0725 0857 0333 0449 0940 1321 0137 0525 1332 0747 1217 0219 0710 1047 0436 0208 0024 1536 0625 0644 1320 0101 0537 0445 0415 1005 0418 1938 1515 1150 0923 0710 2003 0415 1340 0228 1050 0758 0600 0838 1117 0405 0859 0813 0012 0932 0622 1335 1012 0021 0229 0806 0002 0337 1730 0614 1127 1607 0134 0413 0111 1151 0715 0136 0130 0131 1127 0836 1526 0200 1642 1227 0250 0256 1509 1609 0456 0245 1911 1757 0616 1544 0224 1250 1101 0914 0825 0451 1011 0441 0241 1456 1140 0549 0243 0213 1225 1652 0609 0231 0138 0438 0025 0628 1545 0331 0232 1558 0156 1121 0104 0116 0451 0213 0511 0616 1142 1813 0910 0110 0208 0441 0631 0101 0027 1017 1132 1827 1637 0059 1543 0404 1017 0725 0619 0040 1331 1608 0737 0107 0022 0440 0722 0621 1249 1109 0323 0415 1230 0009 1418 0547 1331 0747 1831 0127 0230 0422 0406 1852 0153 1406 1732 2022 0902 1125 0622 1002 0309 1458 2042 0802 0625 1739 1028 1540 0148 1456 0232 0921 1319 1719 0230 1704 1054 0525 0552 2053 0442 0247 1427 0335 1252 0424 0554 0036 0257 0120 1326 0029 2038 0237 2144 0307 0332 1150 0209 0003 0222 0638 0850 0623 0159 0940 0311 0519 0024 1414 1934 0026 0911 1040 0441 0752 0454 0557 2055 0747 1625 0038 1603 0121 1042 0710 0138 1428 1057 0845 1635 1210 0941 0249 1605 0131 1353 0439 1900 0832 1018 0318 0205 0115 1456 1905 0008 1305 0226 0455 0045 1045 1836 1034 0422 0736 0300 1751 1020 0018 1636 1910 0540 0323 1136 1521 0709 0219 0419 0533 0205 1047 0433 0805 1503 0743 0305 1107 1418 1440 1120 1437 1227 1709 1019 0245 1038 1809 0814 0745 0536 1036 0140 1711 1021 1104 1144 0403 0417 0109 2143 0747 1415 0438 0102 1416 0407 0057 0157 0405 0503 0814 0409 0711 1047 1457 0505 0443 0416 0703 0343 1933 0616 0739 0136 0657 0940 0439 0301 0218 0525 1426 2213 0553 0646 0042 0254 0415 0552 0235 0114 1715 1026 0044 0359 1519 0037 0809 1345 0130 0157 1046 0531 0242 1254 0242 1121 1302 0359 0406 0627 1422 1606 0710 1812 1243 0408 0603 0133 0425 0346 0503 0937 1323 0314 0607 0306 0052 0537 0127 0346 1424 1438 0010 0717 1244 0133 0057 1533 1524 0414 1345 0727 1236 0846 0644 0658 0231 1151 1230 0214 0914 1002 0157 0650 1006 0413 1437 0417 1245 0016 1232 0100 0155 0316 0105 0004 1520 0108 0157 1615 0241 0155 0052 0429 1014 0254 1029 1729 0941 0634 0632 0943 0844 1247 2104 1249 1846 0504 1036 0110 1724 1808 0829 1335 0441 1500 1421 0300 1314 0015 2056 0741 0958 0337 0556 0029 0218 0131 0147 1511 0713 0034 0202 2140 1615 1824 0501 0556 1553 0730 1009 0400 1158 0624 0230 0211 0212 0652 0031 0948 0046 0215 0341 0102 1117 1037 1317 0344 0244 1255 0411 1100 0705 1343 0915 0447 0135 1117 0141 1324 0430 1120 0609 0345 0412 1715 1317 0351 1949 0904
    // 1746 2052 2126 0128 2350 0234 2141 1519 2217 1634 1124 2123 0937 1733 1624 1859 1712 2000 1106 0417 0617 2123 1708 0817 1006 1352 2257 1358 0610 0554 1952 1507 1611 0405 0703 1840 1019 2104 1757 1917 1848 1521 1648 1935 1931 2154 1530 1718 1247 1712 1958 1604 2313 0640 0636 1647 1926 1330 2259 2252 1842 1848 2254 1137 1525 2205 2119 0637 2349 1732 2226 0823 0624 2229 1108 1747 1005 2313 1154 0104 0811 2311 2351 2026 2132 2013 2013 1554 1720 1534 0645 2002 1609 0853 1049 1525 0948 2237 1848 1501 2040 2236 2343 0126 1601 2241 2339 1329 1638 1944 1815 1416 1026 1133 2227 2100 1638 1405 2101 2011 1103 2128 0536 1345 1339 1715 1645 1358 2057 1208 2315 0213 1428 1213 1651 2028 0437 1111 1505 0550 2302 2203 2323 1315 1716 0759 1151 2237 1304 2158 2320 1510 0157 1159 1049 2113 1839 1838 1357 0807 2044 1813 1951 1845 1314 2219 2111 2147 2303 1909 1519 2209 0915 1043 1816 1030 0817 0653 2317 1256 1829 1503 1049 1514 1821 1900 0609 0421 1338 0411 1438 2144 1840 1613 1951 2032 2331 2053 1959 2310 2243 1741 1101 1251 1827 2254 1823 0630 0502 1305 2249 1413 1239 2028 2106 2136 1751 1556 1648 1501 1029 1241 0814 1340 2105 0822 0538 0305 1413 2211 2205 2231 2243 1753 0833 1605 0655 1838 1109 1835 1049 2236 0443 0616 1445 0803 1907 1418 2205 2302 2211 1507 2107 2037 1250 2205 2323 2228 2111 2302 2151 1039 2042 1740 2242 1756 2312 1639 2201 0414 2211 1341 1438 0827 2311 1306 0310 1825 1209 1502 2128 0944 1413 0448 0626 2048 1425 2246 2137 2221 1534 1555 1907 0626 0303 1125 0924 2254 1346 0724 2155 0414 0551 0317 1931 2036 1753 1829 1415 1651 1929 1802 1533 2229 1614 2018 2345 2129 0223 2254 0854 1051 1453 1601 1105 1837 1354 1700 0916 2324 0312 1857 1455 2317 1047 1915 0600 0651 1143 2214 2147 1402 2033 2315 0800 0106 2253 2251 1157 1531 1746 0830 2010 1147 0448 2042 2026 1638 1359 2203 2027 1922 2037 0732 1715 1617 2056 1826 1526 2255 2156 1320 1935 1813 2311 1134 1457 2123 1857 1023 1017 1956 1847 1532 0951 1733 2030 0355 1905 1153 1849 1802 1716 0941 0705 2349 1643 1904 0454 0947 1836 1927 1152 2051 1536 0740 2220 2324 1137 1353 1846 1420 2057 2321 0834 0935 2335 2329 1344 2158 1016 1213 1953 1347 1823 1156 2213 2338 1134 1356 0356 2352 1712 1237 0506 1013 1830 2132 2017 1444 2304 0148 1732 2252 0139 1923 1524 1253 1809 1603 0505 1844 1707 0728 1352 1232 1506 2039 2159 2319 2037 1959 1331 1908 1058 1747 1312 1652 1558 0521 1659 1951 0656 2124 1148 2202 1541 1457 2050 2114 2350 0452 0520 1846 1732 2308 2114 1720 1408 1840 1038 1947 1138 2202 2215 2007 2206 1006 0424 0723 1603 2047 2006 1236 2040 2205 2044 1241 0341 2134 1703 0643 2328 2109 1627 2022 0547 1349 2313 0649 1517 1207 2003 1912 1956 2148 1558 2102 1819 1749 2330 2236 2018 2006 2205 1817 1831 1854 1219 2037 0811 1638 2238 1920 2110 2327 2318 1429 1059 1209 1057 1714 0822 2014 2039 2026 1504 0435 0801 2255 1725 2154 0733 1341 2252 1615 2333 0629 1401 1336 1142 1949 1829 1144 2106 1049 1949 0658 2101 1726 1525 2356 1638 1913 1556 1531 2152 2302 0954 2158 1449 1940 0713 2117 0443 1335 2008 1922 2214 1324 1933 2159 1701 0558 2254 1913
    // output 307
//6
//0900 0940 0950 1100 1500 1800
//0910 1200 1120 1130 1900 2000
//output  3
    return 0;
}