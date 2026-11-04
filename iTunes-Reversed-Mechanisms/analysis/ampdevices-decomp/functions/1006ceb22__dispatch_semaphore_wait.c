// name: _dispatch_semaphore_wait
// address: 1006ceb22

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

long _dispatch_semaphore_wait(dispatch_semaphore_t dsema,dispatch_time_t timeout)

{
  long lVar1;
  
                    /* WARNING: Could not recover jumptable at 0x0001006ceb22. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  lVar1 = (*(code *)PTR__dispatch_semaphore_wait_10082ccc0)();
  return lVar1;
}

