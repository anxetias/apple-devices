// name: _dispatch_get_current_queue
// address: 1006ceac8

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

dispatch_queue_t _dispatch_get_current_queue(void)

{
  dispatch_queue_t pdVar1;
  
                    /* WARNING: Could not recover jumptable at 0x0001006ceac8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  pdVar1 = (dispatch_queue_t)(*(code *)PTR__dispatch_get_current_queue_10082cc48)();
  return pdVar1;
}

