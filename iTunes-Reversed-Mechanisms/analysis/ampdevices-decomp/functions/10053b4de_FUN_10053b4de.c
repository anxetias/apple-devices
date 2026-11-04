// name: FUN_10053b4de
// address: 10053b4de

void FUN_10053b4de(long param_1)

{
  undefined8 uVar1;
  
  uVar1 = FUN_1004de449(*(undefined4 *)(param_1 + 0x18));
                    /* WARNING: Could not recover jumptable at 0x00010053b4fe. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(param_1 + 8))(uVar1);
  return;
}

