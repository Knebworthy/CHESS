//---------------------------------------------------------------------------------------------------------------------------
//xu. LAND.. PARALLEL COMPUTATION.. Initial and run parallel CHESS daily Ecohydrological process and Transport of water and nutrients
//---------------------------------------------------------------------------------------------------------------------------
#include <stdio.h>

#include <math.h>
#include "CHESS.h"
#include "Functions.h"
#include "Constants.h"
#include <iostream>
#include <thread>

using namespace std;

void  chess_land_daily(struct patch_object *patch,
	struct 	command_line_object *command_line,
	struct	date 			current_date,
	struct  daily_clim_object daily_clim,
	int num_patches,
	int patch_pch[][patch_num],
	int thread_patch_num[]
)
{
	//---------------------------------------------------------------------------------------------------------------------------
	//xu. Initial and Run Multithreads for CHESS LAND daily processes
	//Where parallel_daily is a key function involves
	//Ecohydrological processes within a patch & Surface and subsurface transport of water and other nutrients
	//---------------------------------------------------------------------------------------------------------------------------

	int thread_inx = 0;
	thread pd1(parallel_daily, patch, command_line, current_date, daily_clim, patch_pch, thread_patch_num, thread_inx); thread_inx++;
	thread pd2(parallel_daily, patch, command_line, current_date, daily_clim, patch_pch, thread_patch_num, thread_inx); thread_inx++;
	thread pd3(parallel_daily, patch, command_line, current_date, daily_clim, patch_pch, thread_patch_num, thread_inx); thread_inx++;
	thread pd4(parallel_daily, patch, command_line, current_date, daily_clim, patch_pch, thread_patch_num, thread_inx); thread_inx++;
	thread pd5(parallel_daily, patch, command_line, current_date, daily_clim, patch_pch, thread_patch_num, thread_inx); thread_inx++;
	thread pd6(parallel_daily, patch, command_line, current_date, daily_clim, patch_pch, thread_patch_num, thread_inx); thread_inx++;
	thread pd7(parallel_daily, patch, command_line, current_date, daily_clim, patch_pch, thread_patch_num, thread_inx); thread_inx++;
	thread pd8(parallel_daily, patch, command_line, current_date, daily_clim, patch_pch, thread_patch_num, thread_inx); thread_inx++;
	thread pd9(parallel_daily, patch, command_line, current_date, daily_clim, patch_pch, thread_patch_num, thread_inx); thread_inx++;
	thread pd10(parallel_daily, patch, command_line, current_date, daily_clim, patch_pch, thread_patch_num, thread_inx); thread_inx++;
	thread pd11(parallel_daily, patch, command_line, current_date, daily_clim, patch_pch, thread_patch_num, thread_inx); //10

	//Join all threads 
	pd1.join();	pd2.join();	pd3.join(); pd4.join();
	pd5.join();	pd6.join();	pd7.join(); pd8.join();
	pd9.join(); pd10.join(); pd11.join();

	//---------------------------------------------------------------------------------------------------------------------------
	//END OF LAND COMPUTATION
	//---------------------------------------------------------------------------------------------------------------------------

	return;
}//__END OF THIS FUNCTION