#pragma once
/**
* algo specific
*/
typedef enum DISPLAY_LEN_ {
  DISPLAY_LEN_MIN_0 = 32,
  DISPLAY_LEN_MAX_0 = 32,
  DISPLAY_LEN_MIN_10 = 32 + 1 + 0,
  DISPLAY_LEN_MAX_10 = 32 + 1 + 51,
  DISPLAY_LEN_MIN_10H = 32 + 1 + 0,
  DISPLAY_LEN_MAX_10H = 32 + 1 + 102,
  DISPLAY_LEN_MIN_20 = 32 + 1 + 0,
  DISPLAY_LEN_MAX_20 = 32 + 1 + 31,
  DISPLAY_LEN_MIN_20H = 32 + 1 + 0,
  DISPLAY_LEN_MAX_20H = 32 + 1 + 62,
  DISPLAY_LEN_MIN_50 = 32 + 1 + 0,
  DISPLAY_LEN_MAX_50 = 32 + 1 + 51,
  DISPLAY_LEN_MIN_50H = 32 + 1 + 0,
  DISPLAY_LEN_MAX_50H = 32 + 1 + 102,
  DISPLAY_LEN_MIN_100 = 40,
  DISPLAY_LEN_MAX_100 = 40,
  DISPLAY_LEN_MIN_110 = 40 + 1 + 0,
  DISPLAY_LEN_MAX_110 = 40 + 1 + 51,
  DISPLAY_LEN_MIN_110H = 40 + 1 + 0,
  DISPLAY_LEN_MAX_110H = 40 + 1 + 102,
  DISPLAY_LEN_MIN_120 = 40 + 1 + 0,
  DISPLAY_LEN_MAX_120 = 40 + 1 + 31,
  DISPLAY_LEN_MIN_120H = 40 + 1 + 0,
  DISPLAY_LEN_MAX_120H = 40 + 1 + 62,
  DISPLAY_LEN_MIN_150 = 40 + 1 + 0,
  DISPLAY_LEN_MAX_150 = 40 + 1 + 51,
  DISPLAY_LEN_MIN_150H = 40 + 1 + 0,
  DISPLAY_LEN_MAX_150H = 40 + 1 + 102,
  DISPLAY_LEN_MIN_200 = 16,
  DISPLAY_LEN_MAX_200 = 16,
  DISPLAY_LEN_MIN_300 = 40,
  DISPLAY_LEN_MAX_300 = 40,
  DISPLAY_LEN_MIN_400 = 34,
  DISPLAY_LEN_MAX_400 = 34,
  DISPLAY_LEN_MIN_500 = 3 + 1 + 0 + 22,
  DISPLAY_LEN_MIN_501 = 104,
  DISPLAY_LEN_MAX_500 = 3 + 1 + 8 + 22,
  DISPLAY_LEN_MAX_501 = 104,
  DISPLAY_LEN_MIN_900 = 32,
  DISPLAY_LEN_MAX_900 = 32,
  DISPLAY_LEN_MIN_910 = 32 + 1 + 0,
  DISPLAY_LEN_MAX_910 = 32 + 1 + 51,
  DISPLAY_LEN_MIN_910H = 32 + 1 + 0,
  DISPLAY_LEN_MAX_910H = 32 + 1 + 102,
  DISPLAY_LEN_MIN_1000 = 32,
  DISPLAY_LEN_MAX_1000 = 32,
  DISPLAY_LEN_MIN_1100 = 32 + 1 + 0,
  DISPLAY_LEN_MAX_1100 = 32 + 1 + 19,
  DISPLAY_LEN_MIN_1100H = 32 + 1 + 0,
  DISPLAY_LEN_MAX_1100H = 32 + 1 + 38,
  DISPLAY_LEN_MIN_1400 = 64,
  DISPLAY_LEN_MAX_1400 = 64,
  DISPLAY_LEN_MIN_1410 = 64 + 1 + 0,
  DISPLAY_LEN_MAX_1410 = 64 + 1 + 51,
  DISPLAY_LEN_MIN_1410H = 64 + 1 + 0,
  DISPLAY_LEN_MAX_1410H = 64 + 1 + 102,
  DISPLAY_LEN_MIN_1420 = 64 + 1 + 0,
  DISPLAY_LEN_MAX_1420 = 64 + 1 + 16,
  DISPLAY_LEN_MIN_1420H = 64 + 1 + 0,
  DISPLAY_LEN_MAX_1420H = 64 + 1 + 32,
  DISPLAY_LEN_MIN_1421 = 70,
  DISPLAY_LEN_MAX_1421 = 70,
  DISPLAY_LEN_MIN_1450 = 64 + 1 + 0,
  DISPLAY_LEN_MAX_1450 = 64 + 1 + 51,
  DISPLAY_LEN_MIN_1450H = 64 + 1 + 0,
  DISPLAY_LEN_MAX_1450H = 64 + 1 + 102,
  DISPLAY_LEN_MIN_1500 = 13,
  DISPLAY_LEN_MAX_1500 = 13,
  DISPLAY_LEN_MIN_1600 = 29 + 0,
  DISPLAY_LEN_MAX_1600 = 29 + 8,
  DISPLAY_LEN_MIN_1700 = 128,
  DISPLAY_LEN_MAX_1700 = 128,
  DISPLAY_LEN_MIN_1710 = 128 + 1 + 0,
  DISPLAY_LEN_MAX_1710 = 128 + 1 + 51,
  DISPLAY_LEN_MIN_1710H = 128 + 1 + 0,
  DISPLAY_LEN_MAX_1710H = 128 + 1 + 102,
  DISPLAY_LEN_MIN_1720 = 128 + 1 + 0,
  DISPLAY_LEN_MAX_1720 = 128 + 1 + 16,
  DISPLAY_LEN_MIN_1720H = 128 + 1 + 0,
  DISPLAY_LEN_MAX_1720H = 128 + 1 + 32,
  DISPLAY_LEN_MIN_1730 = 128 + 1 + 0,
  DISPLAY_LEN_MAX_1730 = 128 + 1 + 16,
  DISPLAY_LEN_MIN_1731 = 128 + 6 + 0,
  DISPLAY_LEN_MAX_1731 = 128 + 6 + 16,
  DISPLAY_LEN_MIN_1740 = 128 + 1 + 0,
  DISPLAY_LEN_MAX_1740 = 128 + 1 + 16,
  DISPLAY_LEN_MIN_1750 = 128 + 1 + 0,
  DISPLAY_LEN_MAX_1750 = 128 + 1 + 51,
  DISPLAY_LEN_MIN_1750H = 128 + 1 + 0,
  DISPLAY_LEN_MAX_1750H = 128 + 1 + 102,
  DISPLAY_LEN_MIN_1800 = 90 + 0,
  DISPLAY_LEN_MAX_1800 = 90 + 16,
  DISPLAY_LEN_MIN_2100 = 6 + 1 + 1 + 32 + 1 + 0,
  DISPLAY_LEN_MAX_2100 = 6 + 5 + 1 + 32 + 1 + 19,
  DISPLAY_LEN_MIN_2100H = 6 + 1 + 1 + 32 + 1 + 0,
  DISPLAY_LEN_MAX_2100H = 6 + 5 + 1 + 32 + 1 + 38,
  DISPLAY_LEN_MIN_2400 = 16,
  DISPLAY_LEN_MAX_2400 = 16,
  DISPLAY_LEN_MIN_2410 = 16 + 1 + 0,
  DISPLAY_LEN_MAX_2410 = 16 + 1 + 16,
  DISPLAY_LEN_MIN_2410H = 16 + 1 + 0,
  DISPLAY_LEN_MAX_2410H = 16 + 1 + 32,
  DISPLAY_LEN_MIN_2500 = 64 + 1 + 0,
  DISPLAY_LEN_MAX_2500 = 64 + 1 + 15,
  DISPLAY_LEN_MIN_2600 = 32,
  DISPLAY_LEN_MAX_2600 = 32,
  DISPLAY_LEN_MIN_3000 = 16,
  DISPLAY_LEN_MAX_3000 = 16,
  DISPLAY_LEN_MIN_3100 = 16 + 1 + 0,
  DISPLAY_LEN_MAX_3100 = 16 + 1 + 30,
  DISPLAY_LEN_MIN_3100H = 16 + 1 + 0,
  DISPLAY_LEN_MAX_3100H = 16 + 1 + 60,
  DISPLAY_LEN_MIN_3200 = 60,
  DISPLAY_LEN_MAX_3200 = 60,
  DISPLAY_LEN_MIN_3711 = 3 + 0 + 1 + 32,
  DISPLAY_LEN_MAX_3711 = 3 + 31 + 1 + 32,
  DISPLAY_LEN_MIN_4300 = 32,
  DISPLAY_LEN_MAX_4300 = 32,
  DISPLAY_LEN_MIN_4800 = 32 + 1 + 32 + 1 + 2,
  DISPLAY_LEN_MAX_4800 = 32 + 1 + 32 + 1 + 2,
  DISPLAY_LEN_MIN_5000 = 16,
  DISPLAY_LEN_MAX_5000 = 400,
  DISPLAY_LEN_MIN_5100 = 16,
  DISPLAY_LEN_MAX_5100 = 16,
  DISPLAY_LEN_MIN_5300 = 48,
  DISPLAY_LEN_MAX_5300 = 1024,
  DISPLAY_LEN_MIN_5400 = 56,
  DISPLAY_LEN_MAX_5400 = 1024,
  DISPLAY_LEN_MIN_5500 = 1 + 1 + 0 + 1 + 1 + 1 + 0 + 1 + 48 + 1 + 16,
  DISPLAY_LEN_MAX_5500 = 60 + 1 + 0 + 1 + 45 + 1 + 48 + 1 + 48 + 1 + 16,
  DISPLAY_LEN_MIN_5600 = 1 + 1 + 0 + 1 + 1 + 1 + 16 + 1 + 32 + 1 + 1,
  DISPLAY_LEN_MAX_5600 = 60 + 1 + 0 + 1 + 45 + 1 + 16 + 1 + 32 + 1 + 1024,
  DISPLAY_LEN_MIN_5700 = 43,
  DISPLAY_LEN_MAX_5700 = 43,
  DISPLAY_LEN_MIN_5800 = 40 + 1 + 1,
  DISPLAY_LEN_MAX_5800 = 40 + 1 + 16,
  DISPLAY_LEN_MIN_6000 = 40,
  DISPLAY_LEN_MAX_6000 = 40,
  DISPLAY_LEN_MIN_6100 = 128,
  DISPLAY_LEN_MAX_6100 = 128,
  DISPLAY_LEN_MIN_6300 = 6 + 1 + 8 + 22,
  DISPLAY_LEN_MAX_6300 = 6 + 1 + 48 + 22,
  DISPLAY_LEN_MIN_6400 = 9 + 2 + 1 + 16 + 1 + 43,
  DISPLAY_LEN_MAX_6400 = 9 + 2 + 1 + 48 + 1 + 43,
  DISPLAY_LEN_MIN_6500 = 9 + 2 + 1 + 16 + 1 + 86,
  DISPLAY_LEN_MAX_6500 = 9 + 2 + 1 + 48 + 1 + 86,
  DISPLAY_LEN_MIN_6600 = 1 + 1 + 16 + 1 + 2080,
  DISPLAY_LEN_MAX_6600 = 6 + 1 + 16 + 1 + 2080,
  DISPLAY_LEN_MIN_6700 = 7 + 2 + 1 + 16 + 1 + 27,
  DISPLAY_LEN_MAX_6700 = 7 + 2 + 1 + 48 + 1 + 27,
  DISPLAY_LEN_MIN_6800 = 32 + 1 + 1 + 1 + 0,
  DISPLAY_LEN_MAX_6800 = 32 + 1 + 5 + 1 + 32,
  DISPLAY_LEN_MIN_6900 = 64,
  DISPLAY_LEN_MAX_6900 = 64,
  DISPLAY_LEN_MIN_7100 = 4 + 2 + 1 + 64 + 1 + 128,
  DISPLAY_LEN_MAX_7100 = 4 + 5 + 1 + 64 + 1 + 128,
  DISPLAY_LEN_MIN_7200 = 19 + 1 + 1 + 1 + 128,
  DISPLAY_LEN_MAX_7200 = 19 + 5 + 1 + 224 + 128,
  DISPLAY_LEN_MIN_7300 = 64 + 1 + 40,
  DISPLAY_LEN_MAX_7300 = 512 + 1 + 40,
  DISPLAY_LEN_MIN_7400 = 47 + 0,
  DISPLAY_LEN_MAX_7400 = 47 + 16,
  DISPLAY_LEN_MIN_7500 = 1 + 6 + 1 + 2 + 1 + 0 + 1 + 0 + 1 + 0 + 1 + 72 + 32,
  DISPLAY_LEN_MAX_7500 = 1 + 6 + 1 + 2 + 1 + 64 + 1 + 64 + 1 + 128 + 1 + 72 + 32,
  DISPLAY_LEN_MIN_7700 = 1 + 1 + 16,
  DISPLAY_LEN_MAX_7700 = 40 + 1 + 16,
  DISPLAY_LEN_MIN_7800 = 1 + 1 + 40,
  DISPLAY_LEN_MAX_7800 = 40 + 1 + 40,
  DISPLAY_LEN_MIN_7900 = 3 + 1 + 8 + 43,
  DISPLAY_LEN_MAX_7900 = 3 + 1 + 8 + 43,
  DISPLAY_LEN_MIN_8000 = 2 + 4 + 16 + 64,
  DISPLAY_LEN_MAX_8000 = 2 + 4 + 16 + 64,
  DISPLAY_LEN_MIN_8100 = 1 + 8 + 40,
  DISPLAY_LEN_MAX_8100 = 1 + 8 + 40,
  DISPLAY_LEN_MIN_8200 = 64 + 1 + 32 + 1 + 1 + 1 + 1,
  DISPLAY_LEN_MAX_8200 = 64 + 1 + 32 + 1 + 8 + 1 + 2048,
  DISPLAY_LEN_MIN_8300 = 32 + 1 + 1 + 1 + 1 + 1 + 1,
  DISPLAY_LEN_MAX_8300 = 32 + 1 + 32 + 1 + 32 + 1 + 5,
  DISPLAY_LEN_MIN_8400 = 40 + 1 + 40,
  DISPLAY_LEN_MAX_8400 = 40 + 1 + 40,
  DISPLAY_LEN_MIN_8500 = 6 + 1 + 1 + 1 + 1,
  DISPLAY_LEN_MAX_8500 = 6 + 1 + 8 + 1 + 16,
  DISPLAY_LEN_MIN_8600 = 32,
  DISPLAY_LEN_MAX_8600 = 32,
  DISPLAY_LEN_MIN_8700 = 22,
  DISPLAY_LEN_MAX_8700 = 22,
  DISPLAY_LEN_MIN_8800 = 1 + 3 + 1 + 2 + 1 + 32 + 1 + 2 + 1 + 32 + 1 + 3072,
  DISPLAY_LEN_MAX_8800 = 1 + 3 + 1 + 2 + 1 + 32 + 1 + 2 + 1 + 32 + 1 + 3072,
  DISPLAY_LEN_MIN_8900 = 6 + 1 + 1 + 1 + 1 + 1 + 1 + 1 + 0 + 1 + 44,
  DISPLAY_LEN_MAX_8900 = 6 + 1 + 6 + 1 + 2 + 1 + 2 + 1 + 45 + 1 + 44,
  DISPLAY_LEN_MIN_9100 = 51,
  DISPLAY_LEN_MAX_9100 = 51,
  DISPLAY_LEN_MIN_9200 = 3 + 14 + 1 + 43,
  DISPLAY_LEN_MAX_9200 = 3 + 14 + 1 + 43,
  DISPLAY_LEN_MIN_9300 = 3 + 14 + 1 + 43,
  DISPLAY_LEN_MAX_9300 = 3 + 14 + 1 + 43,
  DISPLAY_LEN_MIN_9400 = 8 + 1 + 4 + 1 + 2 + 1 + 3 + 1 + 2 + 1 + 32 + 1 + 32 + 1 + 40,
  DISPLAY_LEN_MAX_9400 = 8 + 1 + 4 + 1 + 2 + 1 + 3 + 1 + 2 + 1 + 32 + 1 + 32 + 1 + 40,
  DISPLAY_LEN_MIN_9500 = 8 + 1 + 4 + 1 + 6 + 1 + 3 + 1 + 2 + 1 + 32 + 1 + 32 + 1 + 64,
  DISPLAY_LEN_MAX_9500 = 8 + 1 + 4 + 1 + 6 + 1 + 3 + 1 + 2 + 1 + 32 + 1 + 32 + 1 + 64,
  DISPLAY_LEN_MIN_9600 = 8 + 1 + 4 + 1 + 6 + 1 + 3 + 1 + 2 + 1 + 32 + 1 + 32 + 1 + 64,
  DISPLAY_LEN_MAX_9600 = 8 + 1 + 4 + 1 + 6 + 1 + 3 + 1 + 2 + 1 + 32 + 1 + 32 + 1 + 64,
  DISPLAY_LEN_MIN_9700 = 12 + 1 + 32 + 1 + 32 + 1 + 32,
  DISPLAY_LEN_MAX_9700 = 12 + 1 + 32 + 1 + 32 + 1 + 32,
  DISPLAY_LEN_MIN_9720 = 12 + 1 + 32 + 1 + 32 + 1 + 32 + 1 + 10,
  DISPLAY_LEN_MAX_9720 = 12 + 1 + 32 + 1 + 32 + 1 + 32 + 1 + 10,
  DISPLAY_LEN_MIN_9800 = 12 + 1 + 32 + 1 + 32 + 1 + 40,
  DISPLAY_LEN_MAX_9800 = 12 + 1 + 32 + 1 + 32 + 1 + 40,
  DISPLAY_LEN_MIN_9820 = 12 + 1 + 32 + 1 + 32 + 1 + 40 + 1 + 10,
  DISPLAY_LEN_MAX_9820 = 12 + 1 + 32 + 1 + 32 + 1 + 40 + 1 + 10,
  DISPLAY_LEN_MIN_9900 = 32,
  DISPLAY_LEN_MAX_9900 = 32,
  DISPLAY_LEN_MIN_10000 = 13 + 1 + 1 + 1 + 0 + 44,
  DISPLAY_LEN_MAX_10000 = 13 + 1 + 6 + 1 + 15 + 44,
  DISPLAY_LEN_MIN_10100 = 16 + 1 + 1 + 1 + 1 + 1 + 32,
  DISPLAY_LEN_MAX_10100 = 16 + 1 + 1 + 1 + 1 + 1 + 32,
  DISPLAY_LEN_MIN_10200 = 10 + 12 + 1 + 44,
  DISPLAY_LEN_MAX_10200 = 10 + 76 + 1 + 132,
  DISPLAY_LEN_MIN_10300 = 10 + 1 + 1 + 33,
  DISPLAY_LEN_MAX_10300 = 10 + 5 + 1 + 49,
  DISPLAY_LEN_MIN_10400 = 5 + 1 + 1 + 1 + 1 + 2 + 1 + 1 + 1 + 1 + 1 + 2 + 1 + 32 + 1 + 2 + 1 + 64 + 1 + 2 + 1 + 64,
  DISPLAY_LEN_MAX_10400 = 5 + 1 + 1 + 1 + 1 + 2 + 1 + 5 + 1 + 1 + 1 + 2 + 1 + 32 + 1 + 2 + 1 + 64 + 1 + 2 + 1 + 64,
  DISPLAY_LEN_MIN_10410 = 5 + 1 + 1 + 1 + 1 + 3 + 1 + 1 + 1 + 1 + 1 + 2 + 1 + 32 + 1 + 2 + 1 + 64 + 1 + 2 + 1 + 64,
  DISPLAY_LEN_MAX_10410 = 5 + 1 + 1 + 1 + 1 + 3 + 1 + 5 + 1 + 1 + 1 + 2 + 1 + 32 + 1 + 2 + 1 + 64 + 1 + 2 + 1 + 64,
  DISPLAY_LEN_MIN_10420 = 5 + 1 + 1 + 1 + 1 + 3 + 1 + 1 + 1 + 1 + 1 + 2 + 1 + 32 + 1 + 2 + 1 + 64 + 1 + 2 + 1 + 64 + 1 + 10,
  DISPLAY_LEN_MAX_10420 = 5 + 1 + 1 + 1 + 1 + 3 + 1 + 5 + 1 + 1 + 1 + 2 + 1 + 32 + 1 + 2 + 1 + 64 + 1 + 2 + 1 + 64 + 1 + 10,
  DISPLAY_LEN_MIN_10500 = 5 + 1 + 1 + 1 + 1 + 3 + 1 + 1 + 1 + 1 + 1 + 2 + 1 + 32 + 1 + 2 + 1 + 64 + 1 + 2 + 1 + 64,
  DISPLAY_LEN_MAX_10500 = 5 + 1 + 1 + 1 + 1 + 3 + 1 + 5 + 1 + 1 + 1 + 2 + 1 + 64 + 1 + 2 + 1 + 64 + 1 + 2 + 1 + 64,
  DISPLAY_LEN_MIN_10600 = 5 + 1 + 1 + 1 + 1 + 3 + 1 + 1 + 1 + 1 + 1 + 2 + 1 + 32 + 1 + 1,
  DISPLAY_LEN_MAX_10600 = 5 + 1 + 1 + 1 + 1 + 3 + 1 + 5 + 1 + 1 + 1 + 2 + 1 + 32 + 1 + 1000,
  DISPLAY_LEN_MIN_10700 = 5 + 1 + 1 + 1 + 1 + 3 + 1 + 1 + 1 + 1 + 1 + 2 + 1 + 32 + 1 + 1,
  DISPLAY_LEN_MAX_10700 = 5 + 1 + 1 + 1 + 1 + 3 + 1 + 5 + 1 + 1 + 1 + 2 + 1 + 32 + 1 + 1000,
  DISPLAY_LEN_MIN_10800 = 96,
  DISPLAY_LEN_MAX_10800 = 96,
  DISPLAY_LEN_MIN_10900 = 7 + 1 + 1 + 0 + 1 + 24,
  DISPLAY_LEN_MAX_10900 = 7 + 6 + 1 + 64 + 1 + 88,
  DISPLAY_LEN_MIN_11000 = 32 + 1 + 56,
  DISPLAY_LEN_MAX_11000 = 32 + 1 + 56,
  DISPLAY_LEN_MIN_11100 = 10 + 0 + 1 + 8 + 1 + 32,
  DISPLAY_LEN_MAX_11100 = 10 + 32 + 1 + 8 + 1 + 32,
  DISPLAY_LEN_MIN_11200 = 9 + 40 + 1 + 40,
  DISPLAY_LEN_MAX_11200 = 9 + 40 + 1 + 40,
  DISPLAY_LEN_MIN_11300 = 1 + 7 + 1 + 2 + 1 + 96 + 1 + 2 + 1 + 16 + 1 + 1 + 1 + 2 + 1 + 96 + 1 + 1 + 1 + 2,
  DISPLAY_LEN_MAX_11300 = 1 + 7 + 1 + 2 + 1 + 96 + 1 + 2 + 1 + 16 + 1 + 6 + 1 + 2 + 1 + 96 + 1 + 3 + 1 + 512,
  DISPLAY_LEN_MIN_11400 = 6 + 0 + 1 + 0 + 1 + 0 + 1 + 0 + 1 + 0 + 1 + 0 + 1 + 1 + 1 + 0 + 1 + 1 + 1 + 0 + 1 + 0 + 1 + 0 + 1 + 3 + 1 + 32,
  DISPLAY_LEN_MAX_11400 = 6 + 512 + 1 + 512 + 1 + 116 + 1 + 116 + 1 + 246 + 1 + 245 + 1 + 246 + 1 + 245 + 1 + 50 + 1 + 50 + 1 + 50 + 1 + 50 + 1 + 3 + 1 + 32,
  DISPLAY_LEN_MIN_11500 = 8 + 1 + 8,
  DISPLAY_LEN_MAX_11500 = 8 + 1 + 8,
  DISPLAY_LEN_MIN_11600 = 1 + 2 + 1 + 1 + 1 + 1 + 1 + 1 + 1 + 0 + 1 + 1 + 1 + 32 + 1 + 1 + 1 + 1 + 1 + 1 + 1 + 2,
  DISPLAY_LEN_MAX_11600 = 1 + 2 + 1 + 1 + 1 + 2 + 1 + 1 + 1 + 64 + 1 + 1 + 1 + 32 + 1 + 10 + 1 + 3 + 1 + 3 + 1 + 768,
  DISPLAY_LEN_MIN_11700 = 64,
  DISPLAY_LEN_MAX_11700 = 64,
  DISPLAY_LEN_MIN_11800 = 128,
  DISPLAY_LEN_MAX_11800 = 128,
  DISPLAY_LEN_MIN_11900 = 3 + 1 + 1 + 0 + 1 + 12,
  DISPLAY_LEN_MAX_11900 = 3 + 6 + 1 + 64 + 1 + 88,
  DISPLAY_LEN_MIN_12000 = 4 + 1 + 1 + 0 + 1 + 16,
  DISPLAY_LEN_MAX_12000 = 4 + 6 + 1 + 64 + 1 + 88,
  DISPLAY_LEN_MIN_12100 = 6 + 1 + 1 + 0 + 1 + 16,
  DISPLAY_LEN_MAX_12100 = 6 + 6 + 1 + 64 + 1 + 88,
  DISPLAY_LEN_MIN_12200 = 1 + 8 + 1 + 1 + 1 + 1 + 1 + 16 + 1 + 16,
  DISPLAY_LEN_MAX_12200 = 1 + 8 + 1 + 1 + 1 + 1 + 1 + 16 + 1 + 16,
  DISPLAY_LEN_MIN_12300 = 160,
  DISPLAY_LEN_MAX_12300 = 160,
  DISPLAY_LEN_MIN_12400 = 1 + 4 + 4 + 11,
  DISPLAY_LEN_MAX_12400 = 1 + 4 + 4 + 11,
  DISPLAY_LEN_MIN_12500 = 6 + 1 + 1 + 1 + 16 + 1 + 32,
  DISPLAY_LEN_MAX_12500 = 6 + 1 + 1 + 1 + 16 + 1 + 32,
  DISPLAY_LEN_MIN_12600 = 64 + 1 + 64,
  DISPLAY_LEN_MAX_12600 = 64 + 1 + 64,
  DISPLAY_LEN_MIN_12700 = 1 + 10 + 1 + 1 + 1 + 64,
  DISPLAY_LEN_MAX_12700 = 1 + 10 + 1 + 5 + 1 + 20000,
  DISPLAY_LEN_MIN_12800 = 11 + 1 + 20 + 1 + 1 + 1 + 64,
  DISPLAY_LEN_MAX_12800 = 11 + 1 + 20 + 1 + 5 + 1 + 64,
  DISPLAY_LEN_MIN_12900 = 64 + 64 + 32,
  DISPLAY_LEN_MAX_12900 = 64 + 64 + 32,
  DISPLAY_LEN_MIN_13000 = 1 + 4 + 1 + 2 + 1 + 32 + 1 + 2 + 1 + 32 + 1 + 1 + 1 + 16,
  DISPLAY_LEN_MAX_13000 = 1 + 4 + 1 + 2 + 1 + 32 + 1 + 2 + 1 + 32 + 1 + 1 + 1 + 16,
  DISPLAY_LEN_MIN_13100 = 1 + 7 + 1 + 2 + 1 + 0 + 0 + 32 + 1 + 64,
  DISPLAY_LEN_MAX_13100 = 1 + 7 + 1 + 2 + 1 + 2 + 512 + 1 + 32 + 1 + 20480,
  DISPLAY_LEN_MIN_13200 = 1 + 7 + 1 + 1 + 1 + 1 + 1 + 1 + 32 + 1 + 48,
  DISPLAY_LEN_MAX_13200 = 1 + 7 + 1 + 1 + 1 + 1 + 50 + 1 + 32 + 1 + 48 + 1 + 20480,
  DISPLAY_LEN_MIN_13300 = 1 + 12 + 1 + 32,
  DISPLAY_LEN_MAX_13300 = 1 + 12 + 1 + 40,
  DISPLAY_LEN_MIN_13400 = 1 + 7 + 1 + 1 + 1 + 1 + 1 + 1 + 32 + 1 + 64 + 1 + 32 + 1 + 64 + 1 + 1 + 1 + 1,
  DISPLAY_LEN_MAX_13400 = 1 + 7 + 1 + 1 + 10 + 1 + 3 + 1 + 64 + 1 + 64 + 1 + 32 + 1 + 64 + 1 + 4 + 1 + 600000 + 1 + 2 + 1 + 64,
  DISPLAY_LEN_MIN_13500 = 40 + 1 + 32,
  DISPLAY_LEN_MAX_13500 = 40 + 1 + 1024,
  DISPLAY_LEN_MIN_13600 = 6 + 1 + 1 + 1 + 1 + 1 + 1 + 1 + 16 + 1 + 1 + 1 + 1 + 1 + 0 + 1 + 20 + 1 + 7,
  DISPLAY_LEN_MAX_13600 = 6 + 1 + 1 + 1 + 1 + 1 + 1 + 1 + 32 + 1 + 4 + 1 + 4 + 1 + 8192 + 1 + 20 + 1 + 7,
  DISPLAY_LEN_MIN_13800 = 64 + 1 + 256,
  DISPLAY_LEN_MAX_13800 = 64 + 1 + 256,
  DISPLAY_LEN_MIN_13900 = 40 + 1 + 9,
  DISPLAY_LEN_MAX_13900 = 40 + 1 + 9,
  DISPLAY_LEN_MIN_11 = 32 + 1 + 16,
  DISPLAY_LEN_MAX_11 = 32 + 1 + 32,
  DISPLAY_LEN_MIN_11H = 32 + 1 + 32,
  DISPLAY_LEN_MAX_11H = 32 + 1 + 64,
  DISPLAY_LEN_MIN_12 = 32 + 1 + 1,
  DISPLAY_LEN_MAX_12 = 32 + 1 + 32,
  DISPLAY_LEN_MIN_12H = 32 + 1 + 2,
  DISPLAY_LEN_MAX_12H = 32 + 1 + 64,
  DISPLAY_LEN_MIN_21 = 32 + 1 + 1,
  DISPLAY_LEN_MAX_21 = 32 + 1 + 15,
  DISPLAY_LEN_MIN_21H = 32 + 1 + 2,
  DISPLAY_LEN_MAX_21H = 32 + 1 + 30,
  DISPLAY_LEN_MIN_22 = 30 + 1 + 1,
  DISPLAY_LEN_MAX_22 = 30 + 1 + 28,
  DISPLAY_LEN_MIN_22H = 30 + 1 + 2,
  DISPLAY_LEN_MAX_22H = 30 + 1 + 56,
  DISPLAY_LEN_MIN_23 = 32 + 1 + 0,
  DISPLAY_LEN_MAX_23 = 32 + 1 + 23,
  DISPLAY_LEN_MIN_101 = 5 + 28,
  DISPLAY_LEN_MAX_101 = 5 + 28,
  DISPLAY_LEN_MIN_111 = 6 + 28 + 0,
  DISPLAY_LEN_MAX_111 = 6 + 28 + 40,
  DISPLAY_LEN_MIN_112 = 40 + 1 + 20,
  DISPLAY_LEN_MAX_112 = 40 + 1 + 20,
  DISPLAY_LEN_MIN_121 = 40 + 1 + 1,
  DISPLAY_LEN_MAX_121 = 40 + 1 + 32,
  DISPLAY_LEN_MIN_121H = 40 + 1 + 2,
  DISPLAY_LEN_MAX_121H = 40 + 1 + 64,
  DISPLAY_LEN_MIN_122 = 8 + 40,
  DISPLAY_LEN_MAX_122 = 8 + 40,
  DISPLAY_LEN_MIN_124 = 4 + 1 + 0 + 1 + 40,
  DISPLAY_LEN_MAX_124 = 4 + 1 + 32 + 1 + 40,
  DISPLAY_LEN_MIN_125 = 10 + 40,
  DISPLAY_LEN_MAX_125 = 10 + 40,
  DISPLAY_LEN_MIN_131 = 6 + 8 + 80,
  DISPLAY_LEN_MAX_131 = 6 + 8 + 80,
  DISPLAY_LEN_MIN_132 = 6 + 8 + 40,
  DISPLAY_LEN_MAX_132 = 6 + 8 + 40,
  DISPLAY_LEN_MIN_133 = 28,
  DISPLAY_LEN_MAX_133 = 28,
  DISPLAY_LEN_MIN_141 = 14 + 0 + 1 + 28,
  DISPLAY_LEN_MAX_141 = 14 + 44 + 1 + 28,
  DISPLAY_LEN_MIN_1441 = 14 + 0 + 1 + 43,
  DISPLAY_LEN_MAX_1441 = 14 + 24 + 1 + 43,
  DISPLAY_LEN_MIN_1711 = 9 + 86 + 0,
  DISPLAY_LEN_MAX_1711 = 9 + 86 + 68,
  DISPLAY_LEN_MIN_1722 = 8 + 128,
  DISPLAY_LEN_MAX_1722 = 8 + 128,
  DISPLAY_LEN_MIN_2611 = 32 + 1 + 0,
  DISPLAY_LEN_MAX_2611 = 32 + 1 + 23,
  DISPLAY_LEN_MIN_2611H = 32 + 1 + 0,
  DISPLAY_LEN_MIN_2612 = 6 + 0 + 1 + 32,
  DISPLAY_LEN_MAX_2611H = 32 + 1 + 46,
  DISPLAY_LEN_MAX_2612 = 6 + 46 + 1 + 32,
  DISPLAY_LEN_MIN_2711 = 32 + 1 + 23,
  DISPLAY_LEN_MAX_2711 = 32 + 1 + 31,
  DISPLAY_LEN_MIN_2711H = 32 + 1 + 46,
  DISPLAY_LEN_MAX_2711H = 32 + 1 + 62,
  DISPLAY_LEN_MIN_2811 = 32 + 1 + 0,
  DISPLAY_LEN_MAX_2811 = 32 + 1 + 31,
  DISPLAY_LEN_MIN_2811H = 32 + 1 + 0,
  DISPLAY_LEN_MAX_2811H = 32 + 1 + 62,
  DISPLAY_LEN_MIN_7600 = 40 + 1 + 32,
  DISPLAY_LEN_MAX_7600 = 40 + 1 + 32,
} DISPLAY_LEN;
