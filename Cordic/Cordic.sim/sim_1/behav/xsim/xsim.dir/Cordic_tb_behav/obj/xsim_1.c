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
extern void execute_2121(char*, char *);
extern void execute_380(char*, char *);
extern void execute_381(char*, char *);
extern void execute_382(char*, char *);
extern void execute_385(char*, char *);
extern void execute_386(char*, char *);
extern void execute_387(char*, char *);
extern void execute_26(char*, char *);
extern void execute_27(char*, char *);
extern void execute_30(char*, char *);
extern void execute_31(char*, char *);
extern void execute_145(char*, char *);
extern void execute_35(char*, char *);
extern void execute_42(char*, char *);
extern void execute_49(char*, char *);
extern void execute_56(char*, char *);
extern void execute_63(char*, char *);
extern void execute_70(char*, char *);
extern void execute_77(char*, char *);
extern void execute_84(char*, char *);
extern void execute_91(char*, char *);
extern void execute_98(char*, char *);
extern void execute_105(char*, char *);
extern void execute_112(char*, char *);
extern void execute_119(char*, char *);
extern void execute_126(char*, char *);
extern void execute_133(char*, char *);
extern void execute_139(char*, char *);
extern void execute_37(char*, char *);
extern void execute_38(char*, char *);
extern void execute_384(char*, char *);
extern void execute_813(char*, char *);
extern void execute_814(char*, char *);
extern void execute_815(char*, char *);
extern void execute_818(char*, char *);
extern void execute_819(char*, char *);
extern void execute_820(char*, char *);
extern void execute_394(char*, char *);
extern void execute_397(char*, char *);
extern void execute_399(char*, char *);
extern void execute_401(char*, char *);
extern void execute_403(char*, char *);
extern void execute_405(char*, char *);
extern void execute_407(char*, char *);
extern void execute_409(char*, char *);
extern void execute_411(char*, char *);
extern void execute_413(char*, char *);
extern void execute_415(char*, char *);
extern void execute_417(char*, char *);
extern void execute_419(char*, char *);
extern void execute_421(char*, char *);
extern void execute_423(char*, char *);
extern void execute_425(char*, char *);
extern void execute_1246(char*, char *);
extern void execute_1247(char*, char *);
extern void execute_1248(char*, char *);
extern void execute_1251(char*, char *);
extern void execute_1252(char*, char *);
extern void execute_1253(char*, char *);
extern void execute_827(char*, char *);
extern void execute_829(char*, char *);
extern void execute_832(char*, char *);
extern void execute_834(char*, char *);
extern void execute_836(char*, char *);
extern void execute_838(char*, char *);
extern void execute_840(char*, char *);
extern void execute_842(char*, char *);
extern void execute_844(char*, char *);
extern void execute_846(char*, char *);
extern void execute_848(char*, char *);
extern void execute_850(char*, char *);
extern void execute_852(char*, char *);
extern void execute_854(char*, char *);
extern void execute_856(char*, char *);
extern void execute_858(char*, char *);
extern void execute_1679(char*, char *);
extern void execute_1680(char*, char *);
extern void execute_1681(char*, char *);
extern void execute_1684(char*, char *);
extern void execute_1685(char*, char *);
extern void execute_1686(char*, char *);
extern void execute_1260(char*, char *);
extern void execute_1262(char*, char *);
extern void execute_1264(char*, char *);
extern void execute_1267(char*, char *);
extern void execute_1269(char*, char *);
extern void execute_1271(char*, char *);
extern void execute_1273(char*, char *);
extern void execute_1275(char*, char *);
extern void execute_1277(char*, char *);
extern void execute_1279(char*, char *);
extern void execute_1281(char*, char *);
extern void execute_1283(char*, char *);
extern void execute_1285(char*, char *);
extern void execute_1287(char*, char *);
extern void execute_1289(char*, char *);
extern void execute_1291(char*, char *);
extern void execute_2112(char*, char *);
extern void execute_2113(char*, char *);
extern void execute_2114(char*, char *);
extern void execute_2117(char*, char *);
extern void execute_2118(char*, char *);
extern void execute_2119(char*, char *);
extern void execute_1693(char*, char *);
extern void execute_1695(char*, char *);
extern void execute_1697(char*, char *);
extern void execute_1699(char*, char *);
extern void execute_1702(char*, char *);
extern void execute_1704(char*, char *);
extern void execute_1706(char*, char *);
extern void execute_1708(char*, char *);
extern void execute_1710(char*, char *);
extern void execute_1712(char*, char *);
extern void execute_1714(char*, char *);
extern void execute_1716(char*, char *);
extern void execute_1718(char*, char *);
extern void execute_1720(char*, char *);
extern void execute_1722(char*, char *);
extern void execute_1724(char*, char *);
extern void vhdl_transfunc_eventcallback(char*, char*, unsigned, unsigned, unsigned, char *);
funcp funcTab[120] = {(funcp)execute_2121, (funcp)execute_380, (funcp)execute_381, (funcp)execute_382, (funcp)execute_385, (funcp)execute_386, (funcp)execute_387, (funcp)execute_26, (funcp)execute_27, (funcp)execute_30, (funcp)execute_31, (funcp)execute_145, (funcp)execute_35, (funcp)execute_42, (funcp)execute_49, (funcp)execute_56, (funcp)execute_63, (funcp)execute_70, (funcp)execute_77, (funcp)execute_84, (funcp)execute_91, (funcp)execute_98, (funcp)execute_105, (funcp)execute_112, (funcp)execute_119, (funcp)execute_126, (funcp)execute_133, (funcp)execute_139, (funcp)execute_37, (funcp)execute_38, (funcp)execute_384, (funcp)execute_813, (funcp)execute_814, (funcp)execute_815, (funcp)execute_818, (funcp)execute_819, (funcp)execute_820, (funcp)execute_394, (funcp)execute_397, (funcp)execute_399, (funcp)execute_401, (funcp)execute_403, (funcp)execute_405, (funcp)execute_407, (funcp)execute_409, (funcp)execute_411, (funcp)execute_413, (funcp)execute_415, (funcp)execute_417, (funcp)execute_419, (funcp)execute_421, (funcp)execute_423, (funcp)execute_425, (funcp)execute_1246, (funcp)execute_1247, (funcp)execute_1248, (funcp)execute_1251, (funcp)execute_1252, (funcp)execute_1253, (funcp)execute_827, (funcp)execute_829, (funcp)execute_832, (funcp)execute_834, (funcp)execute_836, (funcp)execute_838, (funcp)execute_840, (funcp)execute_842, (funcp)execute_844, (funcp)execute_846, (funcp)execute_848, (funcp)execute_850, (funcp)execute_852, (funcp)execute_854, (funcp)execute_856, (funcp)execute_858, (funcp)execute_1679, (funcp)execute_1680, (funcp)execute_1681, (funcp)execute_1684, (funcp)execute_1685, (funcp)execute_1686, (funcp)execute_1260, (funcp)execute_1262, (funcp)execute_1264, (funcp)execute_1267, (funcp)execute_1269, (funcp)execute_1271, (funcp)execute_1273, (funcp)execute_1275, (funcp)execute_1277, (funcp)execute_1279, (funcp)execute_1281, (funcp)execute_1283, (funcp)execute_1285, (funcp)execute_1287, (funcp)execute_1289, (funcp)execute_1291, (funcp)execute_2112, (funcp)execute_2113, (funcp)execute_2114, (funcp)execute_2117, (funcp)execute_2118, (funcp)execute_2119, (funcp)execute_1693, (funcp)execute_1695, (funcp)execute_1697, (funcp)execute_1699, (funcp)execute_1702, (funcp)execute_1704, (funcp)execute_1706, (funcp)execute_1708, (funcp)execute_1710, (funcp)execute_1712, (funcp)execute_1714, (funcp)execute_1716, (funcp)execute_1718, (funcp)execute_1720, (funcp)execute_1722, (funcp)execute_1724, (funcp)vhdl_transfunc_eventcallback};
const int NumRelocateId= 120;

void relocate(char *dp)
{
	iki_relocate(dp, "xsim.dir/Cordic_tb_behav/xsim.reloc",  (void **)funcTab, 120);
	iki_vhdl_file_variable_register(dp + 68656);
	iki_vhdl_file_variable_register(dp + 68712);


	/*Populate the transaction function pointer field in the whole net structure */
}

void sensitize(char *dp)
{
	iki_sensitize(dp, "xsim.dir/Cordic_tb_behav/xsim.reloc");
}

void simulate(char *dp)
{
	iki_schedule_processes_at_time_zero(dp, "xsim.dir/Cordic_tb_behav/xsim.reloc");
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
    iki_set_sv_type_file_path_name("xsim.dir/Cordic_tb_behav/xsim.svtype");
    iki_set_crvs_dump_file_path_name("xsim.dir/Cordic_tb_behav/xsim.crvsdump");
    void* design_handle = iki_create_design("xsim.dir/Cordic_tb_behav/xsim.mem", (void *)relocate, (void *)sensitize, (void *)simulate, 0, isimBridge_getWdbWriter(), 0, argc, argv);
     iki_set_rc_trial_count(100);
    (void) design_handle;
    return iki_simulate_design();
}
