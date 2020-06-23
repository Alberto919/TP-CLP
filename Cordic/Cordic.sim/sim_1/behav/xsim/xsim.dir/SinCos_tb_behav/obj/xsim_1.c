/**********************************************************************/
/*   ____  ____                                                       */
/*  /   /\/   /                                                       */
/* /___/  \  /                                                        */
/* \   \   \/                                                         */
/*  \   \        Copyright (c) 2003-2013 Xilinx, Inc.                 */
/*  /   /        All Right Reserved.                                  */
/* /---/   /\                                                         */
/* \   \  /  \                                                        */
/*  \___\/\___\                                                       */
/**********************************************************************/


#include "iki.h"
#include <string.h>
#include <math.h>
#ifdef __GNUC__
#include <stdlib.h>
#else
#include <malloc.h>
#define alloca _alloca
#endif
/**********************************************************************/
/*   ____  ____                                                       */
/*  /   /\/   /                                                       */
/* /___/  \  /                                                        */
/* \   \   \/                                                         */
/*  \   \        Copyright (c) 2003-2013 Xilinx, Inc.                 */
/*  /   /        All Right Reserved.                                  */
/* /---/   /\                                                         */
/* \   \  /  \                                                        */
/*  \___\/\___\                                                       */
/**********************************************************************/


#include "iki.h"
#include <string.h>
#include <math.h>
#ifdef __GNUC__
#include <stdlib.h>
#else
#include <malloc.h>
#define alloca _alloca
#endif
typedef void (*funcp)(char *, char *);
extern int main(int, char**);
extern void execute_30(char*, char *);
extern void execute_7208(char*, char *);
extern void execute_7202(char*, char *);
extern void execute_7203(char*, char *);
extern void execute_7204(char*, char *);
extern void execute_7205(char*, char *);
extern void execute_7206(char*, char *);
extern void execute_7207(char*, char *);
extern void execute_431(char*, char *);
extern void execute_432(char*, char *);
extern void execute_433(char*, char *);
extern void execute_436(char*, char *);
extern void execute_437(char*, char *);
extern void execute_438(char*, char *);
extern void execute_35(char*, char *);
extern void execute_36(char*, char *);
extern void execute_39(char*, char *);
extern void execute_40(char*, char *);
extern void execute_168(char*, char *);
extern void execute_44(char*, char *);
extern void execute_51(char*, char *);
extern void execute_58(char*, char *);
extern void execute_65(char*, char *);
extern void execute_72(char*, char *);
extern void execute_79(char*, char *);
extern void execute_86(char*, char *);
extern void execute_93(char*, char *);
extern void execute_100(char*, char *);
extern void execute_107(char*, char *);
extern void execute_114(char*, char *);
extern void execute_121(char*, char *);
extern void execute_128(char*, char *);
extern void execute_135(char*, char *);
extern void execute_142(char*, char *);
extern void execute_149(char*, char *);
extern void execute_156(char*, char *);
extern void execute_162(char*, char *);
extern void execute_46(char*, char *);
extern void execute_47(char*, char *);
extern void execute_435(char*, char *);
extern void execute_914(char*, char *);
extern void execute_915(char*, char *);
extern void execute_916(char*, char *);
extern void execute_919(char*, char *);
extern void execute_920(char*, char *);
extern void execute_921(char*, char *);
extern void execute_445(char*, char *);
extern void execute_448(char*, char *);
extern void execute_450(char*, char *);
extern void execute_452(char*, char *);
extern void execute_454(char*, char *);
extern void execute_456(char*, char *);
extern void execute_458(char*, char *);
extern void execute_460(char*, char *);
extern void execute_462(char*, char *);
extern void execute_464(char*, char *);
extern void execute_466(char*, char *);
extern void execute_468(char*, char *);
extern void execute_470(char*, char *);
extern void execute_472(char*, char *);
extern void execute_474(char*, char *);
extern void execute_476(char*, char *);
extern void execute_478(char*, char *);
extern void execute_480(char*, char *);
extern void execute_1397(char*, char *);
extern void execute_1398(char*, char *);
extern void execute_1399(char*, char *);
extern void execute_1402(char*, char *);
extern void execute_1403(char*, char *);
extern void execute_1404(char*, char *);
extern void execute_928(char*, char *);
extern void execute_930(char*, char *);
extern void execute_933(char*, char *);
extern void execute_935(char*, char *);
extern void execute_937(char*, char *);
extern void execute_939(char*, char *);
extern void execute_941(char*, char *);
extern void execute_943(char*, char *);
extern void execute_945(char*, char *);
extern void execute_947(char*, char *);
extern void execute_949(char*, char *);
extern void execute_951(char*, char *);
extern void execute_953(char*, char *);
extern void execute_955(char*, char *);
extern void execute_957(char*, char *);
extern void execute_959(char*, char *);
extern void execute_961(char*, char *);
extern void execute_963(char*, char *);
extern void execute_1880(char*, char *);
extern void execute_1881(char*, char *);
extern void execute_1882(char*, char *);
extern void execute_1885(char*, char *);
extern void execute_1886(char*, char *);
extern void execute_1887(char*, char *);
extern void execute_1411(char*, char *);
extern void execute_1413(char*, char *);
extern void execute_1415(char*, char *);
extern void execute_1418(char*, char *);
extern void execute_1420(char*, char *);
extern void execute_1422(char*, char *);
extern void execute_1424(char*, char *);
extern void execute_1426(char*, char *);
extern void execute_1428(char*, char *);
extern void execute_1430(char*, char *);
extern void execute_1432(char*, char *);
extern void execute_1434(char*, char *);
extern void execute_1436(char*, char *);
extern void execute_1438(char*, char *);
extern void execute_1440(char*, char *);
extern void execute_1442(char*, char *);
extern void execute_1444(char*, char *);
extern void execute_1446(char*, char *);
extern void execute_2363(char*, char *);
extern void execute_2364(char*, char *);
extern void execute_2365(char*, char *);
extern void execute_2368(char*, char *);
extern void execute_2369(char*, char *);
extern void execute_2370(char*, char *);
extern void execute_1894(char*, char *);
extern void execute_1896(char*, char *);
extern void execute_1898(char*, char *);
extern void execute_1900(char*, char *);
extern void execute_1903(char*, char *);
extern void execute_1905(char*, char *);
extern void execute_1907(char*, char *);
extern void execute_1909(char*, char *);
extern void execute_1911(char*, char *);
extern void execute_1913(char*, char *);
extern void execute_1915(char*, char *);
extern void execute_1917(char*, char *);
extern void execute_1919(char*, char *);
extern void execute_1921(char*, char *);
extern void execute_1923(char*, char *);
extern void execute_1925(char*, char *);
extern void execute_1927(char*, char *);
extern void execute_1929(char*, char *);
extern void execute_2846(char*, char *);
extern void execute_2847(char*, char *);
extern void execute_2848(char*, char *);
extern void execute_2851(char*, char *);
extern void execute_2852(char*, char *);
extern void execute_2853(char*, char *);
extern void execute_2377(char*, char *);
extern void execute_2379(char*, char *);
extern void execute_2381(char*, char *);
extern void execute_2383(char*, char *);
extern void execute_2385(char*, char *);
extern void execute_2388(char*, char *);
extern void execute_2390(char*, char *);
extern void execute_2392(char*, char *);
extern void execute_2394(char*, char *);
extern void execute_2396(char*, char *);
extern void execute_2398(char*, char *);
extern void execute_2400(char*, char *);
extern void execute_2402(char*, char *);
extern void execute_2404(char*, char *);
extern void execute_2406(char*, char *);
extern void execute_2408(char*, char *);
extern void execute_2410(char*, char *);
extern void execute_2412(char*, char *);
extern void execute_3329(char*, char *);
extern void execute_3330(char*, char *);
extern void execute_3331(char*, char *);
extern void execute_3334(char*, char *);
extern void execute_3335(char*, char *);
extern void execute_3336(char*, char *);
extern void execute_2860(char*, char *);
extern void execute_2862(char*, char *);
extern void execute_2864(char*, char *);
extern void execute_2866(char*, char *);
extern void execute_2868(char*, char *);
extern void execute_2870(char*, char *);
extern void execute_2873(char*, char *);
extern void execute_2875(char*, char *);
extern void execute_2877(char*, char *);
extern void execute_2879(char*, char *);
extern void execute_2881(char*, char *);
extern void execute_2883(char*, char *);
extern void execute_2885(char*, char *);
extern void execute_2887(char*, char *);
extern void execute_2889(char*, char *);
extern void execute_2891(char*, char *);
extern void execute_2893(char*, char *);
extern void execute_2895(char*, char *);
extern void execute_3812(char*, char *);
extern void execute_3813(char*, char *);
extern void execute_3814(char*, char *);
extern void execute_3817(char*, char *);
extern void execute_3818(char*, char *);
extern void execute_3819(char*, char *);
extern void execute_3343(char*, char *);
extern void execute_3345(char*, char *);
extern void execute_3347(char*, char *);
extern void execute_3349(char*, char *);
extern void execute_3351(char*, char *);
extern void execute_3353(char*, char *);
extern void execute_3355(char*, char *);
extern void execute_3358(char*, char *);
extern void execute_3360(char*, char *);
extern void execute_3362(char*, char *);
extern void execute_3364(char*, char *);
extern void execute_3366(char*, char *);
extern void execute_3368(char*, char *);
extern void execute_3370(char*, char *);
extern void execute_3372(char*, char *);
extern void execute_3374(char*, char *);
extern void execute_3376(char*, char *);
extern void execute_3378(char*, char *);
extern void execute_4295(char*, char *);
extern void execute_4296(char*, char *);
extern void execute_4297(char*, char *);
extern void execute_4300(char*, char *);
extern void execute_4301(char*, char *);
extern void execute_4302(char*, char *);
extern void execute_3826(char*, char *);
extern void execute_3828(char*, char *);
extern void execute_3830(char*, char *);
extern void execute_3832(char*, char *);
extern void execute_3834(char*, char *);
extern void execute_3836(char*, char *);
extern void execute_3838(char*, char *);
extern void execute_3840(char*, char *);
extern void execute_3843(char*, char *);
extern void execute_3845(char*, char *);
extern void execute_3847(char*, char *);
extern void execute_3849(char*, char *);
extern void execute_3851(char*, char *);
extern void execute_3853(char*, char *);
extern void execute_3855(char*, char *);
extern void execute_3857(char*, char *);
extern void execute_3859(char*, char *);
extern void execute_3861(char*, char *);
extern void execute_4778(char*, char *);
extern void execute_4779(char*, char *);
extern void execute_4780(char*, char *);
extern void execute_4783(char*, char *);
extern void execute_4784(char*, char *);
extern void execute_4785(char*, char *);
extern void execute_4309(char*, char *);
extern void execute_4311(char*, char *);
extern void execute_4313(char*, char *);
extern void execute_4315(char*, char *);
extern void execute_4317(char*, char *);
extern void execute_4319(char*, char *);
extern void execute_4321(char*, char *);
extern void execute_4323(char*, char *);
extern void execute_4325(char*, char *);
extern void execute_4328(char*, char *);
extern void execute_4330(char*, char *);
extern void execute_4332(char*, char *);
extern void execute_4334(char*, char *);
extern void execute_4336(char*, char *);
extern void execute_4338(char*, char *);
extern void execute_4340(char*, char *);
extern void execute_4342(char*, char *);
extern void execute_4344(char*, char *);
extern void execute_5261(char*, char *);
extern void execute_5262(char*, char *);
extern void execute_5263(char*, char *);
extern void execute_5266(char*, char *);
extern void execute_5267(char*, char *);
extern void execute_5268(char*, char *);
extern void execute_4792(char*, char *);
extern void execute_4794(char*, char *);
extern void execute_4796(char*, char *);
extern void execute_4798(char*, char *);
extern void execute_4800(char*, char *);
extern void execute_4802(char*, char *);
extern void execute_4804(char*, char *);
extern void execute_4806(char*, char *);
extern void execute_4808(char*, char *);
extern void execute_4810(char*, char *);
extern void execute_4813(char*, char *);
extern void execute_4815(char*, char *);
extern void execute_4817(char*, char *);
extern void execute_4819(char*, char *);
extern void execute_4821(char*, char *);
extern void execute_4823(char*, char *);
extern void execute_4825(char*, char *);
extern void execute_4827(char*, char *);
extern void execute_5744(char*, char *);
extern void execute_5745(char*, char *);
extern void execute_5746(char*, char *);
extern void execute_5749(char*, char *);
extern void execute_5750(char*, char *);
extern void execute_5751(char*, char *);
extern void execute_5275(char*, char *);
extern void execute_5277(char*, char *);
extern void execute_5279(char*, char *);
extern void execute_5281(char*, char *);
extern void execute_5283(char*, char *);
extern void execute_5285(char*, char *);
extern void execute_5287(char*, char *);
extern void execute_5289(char*, char *);
extern void execute_5291(char*, char *);
extern void execute_5293(char*, char *);
extern void execute_5295(char*, char *);
extern void execute_5298(char*, char *);
extern void execute_5300(char*, char *);
extern void execute_5302(char*, char *);
extern void execute_5304(char*, char *);
extern void execute_5306(char*, char *);
extern void execute_5308(char*, char *);
extern void execute_5310(char*, char *);
extern void execute_6227(char*, char *);
extern void execute_6228(char*, char *);
extern void execute_6229(char*, char *);
extern void execute_6232(char*, char *);
extern void execute_6233(char*, char *);
extern void execute_6234(char*, char *);
extern void execute_5758(char*, char *);
extern void execute_5760(char*, char *);
extern void execute_5762(char*, char *);
extern void execute_5764(char*, char *);
extern void execute_5766(char*, char *);
extern void execute_5768(char*, char *);
extern void execute_5770(char*, char *);
extern void execute_5772(char*, char *);
extern void execute_5774(char*, char *);
extern void execute_5776(char*, char *);
extern void execute_5778(char*, char *);
extern void execute_5780(char*, char *);
extern void execute_5783(char*, char *);
extern void execute_5785(char*, char *);
extern void execute_5787(char*, char *);
extern void execute_5789(char*, char *);
extern void execute_5791(char*, char *);
extern void execute_5793(char*, char *);
extern void execute_6710(char*, char *);
extern void execute_6711(char*, char *);
extern void execute_6712(char*, char *);
extern void execute_6715(char*, char *);
extern void execute_6716(char*, char *);
extern void execute_6717(char*, char *);
extern void execute_6241(char*, char *);
extern void execute_6243(char*, char *);
extern void execute_6245(char*, char *);
extern void execute_6247(char*, char *);
extern void execute_6249(char*, char *);
extern void execute_6251(char*, char *);
extern void execute_6253(char*, char *);
extern void execute_6255(char*, char *);
extern void execute_6257(char*, char *);
extern void execute_6259(char*, char *);
extern void execute_6261(char*, char *);
extern void execute_6263(char*, char *);
extern void execute_6265(char*, char *);
extern void execute_6268(char*, char *);
extern void execute_6270(char*, char *);
extern void execute_6272(char*, char *);
extern void execute_6274(char*, char *);
extern void execute_6276(char*, char *);
extern void execute_7193(char*, char *);
extern void execute_7194(char*, char *);
extern void execute_7195(char*, char *);
extern void execute_7198(char*, char *);
extern void execute_7199(char*, char *);
extern void execute_7200(char*, char *);
extern void execute_6724(char*, char *);
extern void execute_6726(char*, char *);
extern void execute_6728(char*, char *);
extern void execute_6730(char*, char *);
extern void execute_6732(char*, char *);
extern void execute_6734(char*, char *);
extern void execute_6736(char*, char *);
extern void execute_6738(char*, char *);
extern void execute_6740(char*, char *);
extern void execute_6742(char*, char *);
extern void execute_6744(char*, char *);
extern void execute_6746(char*, char *);
extern void execute_6748(char*, char *);
extern void execute_6750(char*, char *);
extern void execute_6753(char*, char *);
extern void execute_6755(char*, char *);
extern void execute_6757(char*, char *);
extern void execute_6759(char*, char *);
extern void vhdl_transfunc_eventcallback(char*, char*, unsigned, unsigned, unsigned, char *);
funcp funcTab[377] = {(funcp)execute_30, (funcp)execute_7208, (funcp)execute_7202, (funcp)execute_7203, (funcp)execute_7204, (funcp)execute_7205, (funcp)execute_7206, (funcp)execute_7207, (funcp)execute_431, (funcp)execute_432, (funcp)execute_433, (funcp)execute_436, (funcp)execute_437, (funcp)execute_438, (funcp)execute_35, (funcp)execute_36, (funcp)execute_39, (funcp)execute_40, (funcp)execute_168, (funcp)execute_44, (funcp)execute_51, (funcp)execute_58, (funcp)execute_65, (funcp)execute_72, (funcp)execute_79, (funcp)execute_86, (funcp)execute_93, (funcp)execute_100, (funcp)execute_107, (funcp)execute_114, (funcp)execute_121, (funcp)execute_128, (funcp)execute_135, (funcp)execute_142, (funcp)execute_149, (funcp)execute_156, (funcp)execute_162, (funcp)execute_46, (funcp)execute_47, (funcp)execute_435, (funcp)execute_914, (funcp)execute_915, (funcp)execute_916, (funcp)execute_919, (funcp)execute_920, (funcp)execute_921, (funcp)execute_445, (funcp)execute_448, (funcp)execute_450, (funcp)execute_452, (funcp)execute_454, (funcp)execute_456, (funcp)execute_458, (funcp)execute_460, (funcp)execute_462, (funcp)execute_464, (funcp)execute_466, (funcp)execute_468, (funcp)execute_470, (funcp)execute_472, (funcp)execute_474, (funcp)execute_476, (funcp)execute_478, (funcp)execute_480, (funcp)execute_1397, (funcp)execute_1398, (funcp)execute_1399, (funcp)execute_1402, (funcp)execute_1403, (funcp)execute_1404, (funcp)execute_928, (funcp)execute_930, (funcp)execute_933, (funcp)execute_935, (funcp)execute_937, (funcp)execute_939, (funcp)execute_941, (funcp)execute_943, (funcp)execute_945, (funcp)execute_947, (funcp)execute_949, (funcp)execute_951, (funcp)execute_953, (funcp)execute_955, (funcp)execute_957, (funcp)execute_959, (funcp)execute_961, (funcp)execute_963, (funcp)execute_1880, (funcp)execute_1881, (funcp)execute_1882, (funcp)execute_1885, (funcp)execute_1886, (funcp)execute_1887, (funcp)execute_1411, (funcp)execute_1413, (funcp)execute_1415, (funcp)execute_1418, (funcp)execute_1420, (funcp)execute_1422, (funcp)execute_1424, (funcp)execute_1426, (funcp)execute_1428, (funcp)execute_1430, (funcp)execute_1432, (funcp)execute_1434, (funcp)execute_1436, (funcp)execute_1438, (funcp)execute_1440, (funcp)execute_1442, (funcp)execute_1444, (funcp)execute_1446, (funcp)execute_2363, (funcp)execute_2364, (funcp)execute_2365, (funcp)execute_2368, (funcp)execute_2369, (funcp)execute_2370, (funcp)execute_1894, (funcp)execute_1896, (funcp)execute_1898, (funcp)execute_1900, (funcp)execute_1903, (funcp)execute_1905, (funcp)execute_1907, (funcp)execute_1909, (funcp)execute_1911, (funcp)execute_1913, (funcp)execute_1915, (funcp)execute_1917, (funcp)execute_1919, (funcp)execute_1921, (funcp)execute_1923, (funcp)execute_1925, (funcp)execute_1927, (funcp)execute_1929, (funcp)execute_2846, (funcp)execute_2847, (funcp)execute_2848, (funcp)execute_2851, (funcp)execute_2852, (funcp)execute_2853, (funcp)execute_2377, (funcp)execute_2379, (funcp)execute_2381, (funcp)execute_2383, (funcp)execute_2385, (funcp)execute_2388, (funcp)execute_2390, (funcp)execute_2392, (funcp)execute_2394, (funcp)execute_2396, (funcp)execute_2398, (funcp)execute_2400, (funcp)execute_2402, (funcp)execute_2404, (funcp)execute_2406, (funcp)execute_2408, (funcp)execute_2410, (funcp)execute_2412, (funcp)execute_3329, (funcp)execute_3330, (funcp)execute_3331, (funcp)execute_3334, (funcp)execute_3335, (funcp)execute_3336, (funcp)execute_2860, (funcp)execute_2862, (funcp)execute_2864, (funcp)execute_2866, (funcp)execute_2868, (funcp)execute_2870, (funcp)execute_2873, (funcp)execute_2875, (funcp)execute_2877, (funcp)execute_2879, (funcp)execute_2881, (funcp)execute_2883, (funcp)execute_2885, (funcp)execute_2887, (funcp)execute_2889, (funcp)execute_2891, (funcp)execute_2893, (funcp)execute_2895, (funcp)execute_3812, (funcp)execute_3813, (funcp)execute_3814, (funcp)execute_3817, (funcp)execute_3818, (funcp)execute_3819, (funcp)execute_3343, (funcp)execute_3345, (funcp)execute_3347, (funcp)execute_3349, (funcp)execute_3351, (funcp)execute_3353, (funcp)execute_3355, (funcp)execute_3358, (funcp)execute_3360, (funcp)execute_3362, (funcp)execute_3364, (funcp)execute_3366, (funcp)execute_3368, (funcp)execute_3370, (funcp)execute_3372, (funcp)execute_3374, (funcp)execute_3376, (funcp)execute_3378, (funcp)execute_4295, (funcp)execute_4296, (funcp)execute_4297, (funcp)execute_4300, (funcp)execute_4301, (funcp)execute_4302, (funcp)execute_3826, (funcp)execute_3828, (funcp)execute_3830, (funcp)execute_3832, (funcp)execute_3834, (funcp)execute_3836, (funcp)execute_3838, (funcp)execute_3840, (funcp)execute_3843, (funcp)execute_3845, (funcp)execute_3847, (funcp)execute_3849, (funcp)execute_3851, (funcp)execute_3853, (funcp)execute_3855, (funcp)execute_3857, (funcp)execute_3859, (funcp)execute_3861, (funcp)execute_4778, (funcp)execute_4779, (funcp)execute_4780, (funcp)execute_4783, (funcp)execute_4784, (funcp)execute_4785, (funcp)execute_4309, (funcp)execute_4311, (funcp)execute_4313, (funcp)execute_4315, (funcp)execute_4317, (funcp)execute_4319, (funcp)execute_4321, (funcp)execute_4323, (funcp)execute_4325, (funcp)execute_4328, (funcp)execute_4330, (funcp)execute_4332, (funcp)execute_4334, (funcp)execute_4336, (funcp)execute_4338, (funcp)execute_4340, (funcp)execute_4342, (funcp)execute_4344, (funcp)execute_5261, (funcp)execute_5262, (funcp)execute_5263, (funcp)execute_5266, (funcp)execute_5267, (funcp)execute_5268, (funcp)execute_4792, (funcp)execute_4794, (funcp)execute_4796, (funcp)execute_4798, (funcp)execute_4800, (funcp)execute_4802, (funcp)execute_4804, (funcp)execute_4806, (funcp)execute_4808, (funcp)execute_4810, (funcp)execute_4813, (funcp)execute_4815, (funcp)execute_4817, (funcp)execute_4819, (funcp)execute_4821, (funcp)execute_4823, (funcp)execute_4825, (funcp)execute_4827, (funcp)execute_5744, (funcp)execute_5745, (funcp)execute_5746, (funcp)execute_5749, (funcp)execute_5750, (funcp)execute_5751, (funcp)execute_5275, (funcp)execute_5277, (funcp)execute_5279, (funcp)execute_5281, (funcp)execute_5283, (funcp)execute_5285, (funcp)execute_5287, (funcp)execute_5289, (funcp)execute_5291, (funcp)execute_5293, (funcp)execute_5295, (funcp)execute_5298, (funcp)execute_5300, (funcp)execute_5302, (funcp)execute_5304, (funcp)execute_5306, (funcp)execute_5308, (funcp)execute_5310, (funcp)execute_6227, (funcp)execute_6228, (funcp)execute_6229, (funcp)execute_6232, (funcp)execute_6233, (funcp)execute_6234, (funcp)execute_5758, (funcp)execute_5760, (funcp)execute_5762, (funcp)execute_5764, (funcp)execute_5766, (funcp)execute_5768, (funcp)execute_5770, (funcp)execute_5772, (funcp)execute_5774, (funcp)execute_5776, (funcp)execute_5778, (funcp)execute_5780, (funcp)execute_5783, (funcp)execute_5785, (funcp)execute_5787, (funcp)execute_5789, (funcp)execute_5791, (funcp)execute_5793, (funcp)execute_6710, (funcp)execute_6711, (funcp)execute_6712, (funcp)execute_6715, (funcp)execute_6716, (funcp)execute_6717, (funcp)execute_6241, (funcp)execute_6243, (funcp)execute_6245, (funcp)execute_6247, (funcp)execute_6249, (funcp)execute_6251, (funcp)execute_6253, (funcp)execute_6255, (funcp)execute_6257, (funcp)execute_6259, (funcp)execute_6261, (funcp)execute_6263, (funcp)execute_6265, (funcp)execute_6268, (funcp)execute_6270, (funcp)execute_6272, (funcp)execute_6274, (funcp)execute_6276, (funcp)execute_7193, (funcp)execute_7194, (funcp)execute_7195, (funcp)execute_7198, (funcp)execute_7199, (funcp)execute_7200, (funcp)execute_6724, (funcp)execute_6726, (funcp)execute_6728, (funcp)execute_6730, (funcp)execute_6732, (funcp)execute_6734, (funcp)execute_6736, (funcp)execute_6738, (funcp)execute_6740, (funcp)execute_6742, (funcp)execute_6744, (funcp)execute_6746, (funcp)execute_6748, (funcp)execute_6750, (funcp)execute_6753, (funcp)execute_6755, (funcp)execute_6757, (funcp)execute_6759, (funcp)vhdl_transfunc_eventcallback};
const int NumRelocateId= 377;

void relocate(char *dp)
{
	iki_relocate(dp, "xsim.dir/SinCos_tb_behav/xsim.reloc",  (void **)funcTab, 377);
	iki_vhdl_file_variable_register(dp + 216544);
	iki_vhdl_file_variable_register(dp + 216600);
	iki_vhdl_file_variable_register(dp + 220968);
	iki_vhdl_file_variable_register(dp + 221024);


	/*Populate the transaction function pointer field in the whole net structure */
}

void sensitize(char *dp)
{
	iki_sensitize(dp, "xsim.dir/SinCos_tb_behav/xsim.reloc");
}

void simulate(char *dp)
{
	iki_schedule_processes_at_time_zero(dp, "xsim.dir/SinCos_tb_behav/xsim.reloc");
	// Initialize Verilog nets in mixed simulation, for the cases when the value at time 0 should be propagated from the mixed language Vhdl net
	iki_execute_processes();

	// Schedule resolution functions for the multiply driven Verilog nets that have strength
	// Schedule transaction functions for the singly driven Verilog nets that have strength

}
#include "iki_bridge.h"
void relocate(char *);

void sensitize(char *);

void simulate(char *);

extern SYSTEMCLIB_IMP_DLLSPEC void local_register_implicit_channel(int, char*);
extern void implicit_HDL_SCinstatiate();

extern int xsim_argc_copy ;
extern char** xsim_argv_copy ;

int main(int argc, char **argv)
{
    iki_heap_initialize("ms", "isimmm", 0, 2147483648) ;
    iki_set_sv_type_file_path_name("xsim.dir/SinCos_tb_behav/xsim.svtype");
    iki_set_crvs_dump_file_path_name("xsim.dir/SinCos_tb_behav/xsim.crvsdump");
    void* design_handle = iki_create_design("xsim.dir/SinCos_tb_behav/xsim.mem", (void *)relocate, (void *)sensitize, (void *)simulate, 0, isimBridge_getWdbWriter(), 0, argc, argv);
     iki_set_rc_trial_count(100);
    (void) design_handle;
    return iki_simulate_design();
}
