// name: _dispatch_walltime
// address: 1006ceb52

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

dispatch_time_t _dispatch_walltime(timespec *when,int64_t delta)

{
  dispatch_time_t dVar1;
  
                    /* WARNING: Could not recover jumptable at 0x0001006ceb52. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  dVar1 = (*(code *)PTR__dispatch_walltime_10082cd00)();
  return dVar1;
}

