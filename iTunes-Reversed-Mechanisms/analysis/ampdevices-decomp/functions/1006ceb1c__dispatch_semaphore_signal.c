// name: _dispatch_semaphore_signal
// address: 1006ceb1c

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

long _dispatch_semaphore_signal(dispatch_semaphore_t dsema)

{
  long lVar1;
  
                    /* WARNING: Could not recover jumptable at 0x0001006ceb1c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  lVar1 = (*(code *)PTR__dispatch_semaphore_signal_10082ccb8)();
  return lVar1;
}

