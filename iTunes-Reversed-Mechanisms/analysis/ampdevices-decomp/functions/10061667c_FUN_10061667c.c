// name: FUN_10061667c
// address: 10061667c

void FUN_10061667c(long param_1)

{
  undefined8 uVar1;
  
  uVar1 = FUN_1004de449(*(undefined4 *)(param_1 + 0x18));
                    /* WARNING: Could not recover jumptable at 0x0001006166a0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(param_1 + 8))
            (uVar1,*(undefined4 *)(param_1 + 0x10),*(undefined4 *)(param_1 + 0x14),
             *(code **)(param_1 + 8));
  return;
}

