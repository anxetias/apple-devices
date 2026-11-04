// name: FUN_10050bcd0
// address: 10050bcd0

void FUN_10050bcd0(long param_1)

{
  undefined8 uVar1;
  
  uVar1 = FUN_1004de449(*(undefined4 *)(param_1 + 0x28));
                    /* WARNING: Could not recover jumptable at 0x00010050bcfa. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(param_1 + 8))
            (uVar1,*(undefined8 *)(param_1 + 0x10),*(undefined8 *)(param_1 + 0x18),
             *(undefined8 *)(param_1 + 0x20),*(code **)(param_1 + 8));
  return;
}

