// name: _dispatch_group_wait
// address: 1006ceaec

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

long _dispatch_group_wait(dispatch_group_t group,dispatch_time_t timeout)

{
  long lVar1;
  
                    /* WARNING: Could not recover jumptable at 0x0001006ceaec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  lVar1 = (*(code *)PTR__dispatch_group_wait_10082cc78)();
  return lVar1;
}

