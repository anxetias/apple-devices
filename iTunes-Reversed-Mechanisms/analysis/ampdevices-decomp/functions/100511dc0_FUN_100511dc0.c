// name: FUN_100511dc0
// address: 100511dc0

void FUN_100511dc0(long param_1)

{
  undefined8 uVar1;
  
  uVar1 = FUN_1004de449(*(undefined4 *)(param_1 + 0x18));
                    /* WARNING: Could not recover jumptable at 0x000100511de0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(param_1 + 8))(uVar1);
  return;
}

