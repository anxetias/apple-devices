// name: _dispatch_source_create
// address: 1006ceb2e

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

dispatch_source_t
_dispatch_source_create
          (dispatch_source_type_t type,uintptr_t handle,ulong mask,dispatch_queue_t queue)

{
  dispatch_source_t pdVar1;
  
                    /* WARNING: Could not recover jumptable at 0x0001006ceb2e. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  pdVar1 = (dispatch_source_t)(*(code *)PTR__dispatch_source_create_10082ccd0)();
  return pdVar1;
}

