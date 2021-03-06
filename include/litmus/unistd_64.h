/*
 * included from arch/x86/include/asm/unistd_64.h
 *
 * LITMUS^RT syscalls with "relative" numbers
 */
#define __LSC(x) (__NR_LITMUS + x)

#define __NR_set_rt_task_param			__LSC(0)
__SYSCALL(__NR_set_rt_task_param, sys_set_rt_task_param)
#define __NR_get_rt_task_param			__LSC(1)
__SYSCALL(__NR_get_rt_task_param, sys_get_rt_task_param)
#define __NR_complete_job	  		__LSC(2)
__SYSCALL(__NR_complete_job, sys_complete_job)
#define __NR_od_open				__LSC(3)
__SYSCALL(__NR_od_open, sys_od_open)
#define __NR_od_close				__LSC(4)
__SYSCALL(__NR_od_close, sys_od_close)
#define __NR_litmus_lock		   		__LSC(5)
__SYSCALL(__NR_litmus_lock, sys_litmus_lock)
#define __NR_litmus_unlock		   		__LSC(6)
__SYSCALL(__NR_litmus_unlock, sys_litmus_unlock)
#define __NR_query_job_no			__LSC(7)
__SYSCALL(__NR_query_job_no, sys_query_job_no)
#define __NR_wait_for_job_release		__LSC(8)
__SYSCALL(__NR_wait_for_job_release, sys_wait_for_job_release)
#define __NR_wait_for_ts_release		__LSC(9)
__SYSCALL(__NR_wait_for_ts_release, sys_wait_for_ts_release)
#define __NR_release_ts				__LSC(10)
__SYSCALL(__NR_release_ts, sys_release_ts)
#define __NR_null_call				__LSC(11)
__SYSCALL(__NR_null_call, sys_null_call)

#define __NR_litmus_dgl_lock		__LSC(12)
__SYSCALL(__NR_litmus_dgl_lock, sys_litmus_dgl_lock)
#define __NR_litmus_dgl_unlock		__LSC(13)
__SYSCALL(__NR_litmus_dgl_unlock, sys_litmus_dgl_unlock)
#define __NR_litmus_should_yield_lock	__LSC(14)
__SYSCALL(__NR_litmus_should_yield_lock, sys_litmus_should_yield_lock)
#define __NR_litmus_dgl_should_yield_lock	__LSC(15)
__SYSCALL(__NR_litmus_dgl_should_yield_lock, sys_litmus_dgl_should_yield_lock)

#define __NR_set_aux_tasks	__LSC(16)
__SYSCALL(__NR_set_aux_tasks, sys_set_aux_tasks)

#define __NR_sched_trace_event	__LSC(17)
__SYSCALL(__NR_sched_trace_event, sys_sched_trace_event)

#define NR_litmus_syscalls 18
