// name: _dispatch_queue_create
// address: 1006ceb04

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

dispatch_queue_t _dispatch_queue_create(char *label,dispatch_queue_attr_t attr)

{
  dispatch_queue_t pdVar1;
  
                    /* WARNING: Could not recover jumptable at 0x0001006ceb04. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  pdVar1 = (dispatch_queue_t)(*(code *)PTR__dispatch_queue_create_10082cc98)();
  return pdVar1;
}

