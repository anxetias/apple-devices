// name: _dispatch_get_global_queue
// address: 1006ceace

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

dispatch_queue_t _dispatch_get_global_queue(dispatch_queue_priority_t priority,ulong flags)

{
  dispatch_queue_t pdVar1;
  
                    /* WARNING: Could not recover jumptable at 0x0001006ceace. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  pdVar1 = (dispatch_queue_t)(*(code *)PTR__dispatch_get_global_queue_10082cc50)();
  return pdVar1;
}

