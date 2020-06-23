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
extern void execute_151(char*, char *);
extern void execute_21(char*, char *);
extern void execute_22(char*, char *);
extern void execute_150(char*, char *);
extern void execute_26(char*, char *);
extern void execute_33(char*, char *);
extern void execute_40(char*, char *);
extern void execute_47(char*, char *);
extern void execute_54(char*, char *);
extern void execute_61(char*, char *);
extern void execute_68(char*, char *);
extern void execute_75(char*, char *);
extern void execute_82(char*, char *);
extern void execute_89(char*, char *);
extern void execute_96(char*, char *);
extern void execute_103(char*, char *);
extern void execute_110(char*, char *);
extern void execute_117(char*, char *);
extern void execute_124(char*, char *);
extern void execute_131(char*, char *);
extern void execute_138(char*, char *);
extern void execute_144(char*, char *);
extern void execute_28(char*, char *);
extern void execute_29(char*, char *);
extern void vhdl_transfunc_eventcallback(char*, char*, unsigned, unsigned, unsigned, char *);
funcp funcTab[25] = {(funcp)execute_151, (funcp)execute_21, (funcp)execute_22, (funcp)execute_150, (funcp)execute_26, (funcp)execute_33, (funcp)execute_40, (funcp)execute_47, (funcp)execute_54, (funcp)execute_61, (funcp)execute_68, (funcp)execute_75, (funcp)execute_82, (funcp)execute_89, (funcp)execute_96, (funcp)execute_103, (funcp)execute_110, (funcp)execute_117, (funcp)execute_124, (funcp)execute_131, (funcp)execute_138, (funcp)execute_144, (funcp)execute_28, (funcp)execute_29, (funcp)vhdl_transfunc_eventcallback};
const int NumRelocateId= 25;

void relocate(char *dp)
{
	iki_relocate(dp, "xsim.dir/SumadorRestador_tb_behav/xsim.reloc",  (void **)funcTab, 25);
	iki_vhdl_file_variable_register(dp + 5848);
	iki_vhdl_file_variable_register(dp + 5904);


	/*Populate the transaction function pointer field in the whole net structure */
}

void sensitize(char *dp)
{
	iki_sensitize(dp, "xsim.dir/SumadorRestador_tb_behav/xsim.reloc");
}

void simulate(char *dp)
{
	iki_schedule_processes_at_time_zero(dp, "xsim.dir/SumadorRestador_tb_behav/xsim.reloc");
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
    iki_set_sv_type_file_path_name("xsim.dir/SumadorRestador_tb_behav/xsim.svtype");
    iki_set_crvs_dump_file_path_name("xsim.dir/SumadorRestador_tb_behav/xsim.crvsdump");
    void* design_handle = iki_create_design("xsim.dir/SumadorRestador_tb_behav/xsim.mem", (void *)relocate, (void *)sensitize, (void *)simulate, 0, isimBridge_getWdbWriter(), 0, argc, argv);
     iki_set_rc_trial_count(100);
    (void) design_handle;
    return iki_simulate_design();
}
