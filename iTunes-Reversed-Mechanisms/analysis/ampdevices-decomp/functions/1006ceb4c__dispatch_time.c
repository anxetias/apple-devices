// name: _dispatch_time
// address: 1006ceb4c

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

dispatch_time_t _dispatch_time(dispatch_time_t when,int64_t delta)

{
  dispatch_time_t dVar1;
  
                    /* WARNING: Could not recover jumptable at 0x0001006ceb4c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  dVar1 = (*(code *)PTR__dispatch_time_10082ccf8)();
  return dVar1;
}

