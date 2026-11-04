// name: _dispatch_semaphore_create
// address: 1006ceb16

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

dispatch_semaphore_t _dispatch_semaphore_create(long value)

{
  dispatch_semaphore_t pdVar1;
  
                    /* WARNING: Could not recover jumptable at 0x0001006ceb16. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  pdVar1 = (dispatch_semaphore_t)(*(code *)PTR__dispatch_semaphore_create_10082ccb0)();
  return pdVar1;
}

