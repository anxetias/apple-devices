// name: _dispatch_group_create
// address: 1006ceada

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

dispatch_group_t _dispatch_group_create(void)

{
  dispatch_group_t pdVar1;
  
                    /* WARNING: Could not recover jumptable at 0x0001006ceada. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  pdVar1 = (dispatch_group_t)(*(code *)PTR__dispatch_group_create_10082cc60)();
  return pdVar1;
}

