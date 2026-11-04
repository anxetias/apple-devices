// name: FUN_10050bbea
// address: 10050bbea

void FUN_10050bbea(long param_1)

{
  undefined8 uVar1;
  
  uVar1 = FUN_1004de449(*(undefined4 *)(param_1 + 0x20));
                    /* WARNING: Could not recover jumptable at 0x00010050bc0e. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(param_1 + 8))(uVar1,*(undefined1 *)(param_1 + 0x10),0,*(code **)(param_1 + 8));
  return;
}

