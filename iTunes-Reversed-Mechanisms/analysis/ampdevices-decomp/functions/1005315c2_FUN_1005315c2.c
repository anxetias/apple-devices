// name: FUN_1005315c2
// address: 1005315c2

void FUN_1005315c2(long *param_1)

{
  long in_R8;
  
  *(undefined4 *)(in_R8 + 0x14) = 0;
                    /* WARNING: Could not recover jumptable at 0x0001005315d9. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*param_1 + 0xa8))();
  return;
}

