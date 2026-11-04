// name: FUN_1005146d0
// address: 1005146d0

void FUN_1005146d0(long param_1)

{
  undefined8 uVar1;
  
  uVar1 = FUN_1004de449(*(undefined4 *)(param_1 + 0x18));
                    /* WARNING: Could not recover jumptable at 0x0001005146f0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(param_1 + 8))(uVar1);
  return;
}

