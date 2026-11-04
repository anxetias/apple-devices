// name: _arc4random
// address: 1006cea32

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

u_int32_t _arc4random(void)

{
  u_int32_t uVar1;
  
                    /* WARNING: Could not recover jumptable at 0x0001006cea32. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  uVar1 = (*(code *)PTR__arc4random_10082cbb0)();
  return uVar1;
}

