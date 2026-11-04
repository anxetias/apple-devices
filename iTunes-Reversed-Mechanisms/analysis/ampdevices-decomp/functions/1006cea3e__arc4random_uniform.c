// name: _arc4random_uniform
// address: 1006cea3e

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

u_int32_t _arc4random_uniform(u_int32_t param_1)

{
  u_int32_t uVar1;
  
                    /* WARNING: Could not recover jumptable at 0x0001006cea3e. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  uVar1 = (*(code *)PTR__arc4random_uniform_10082cbc0)();
  return uVar1;
}

