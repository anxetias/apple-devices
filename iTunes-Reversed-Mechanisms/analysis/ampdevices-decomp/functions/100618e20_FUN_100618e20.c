// name: FUN_100618e20
// address: 100618e20

void FUN_100618e20(long param_1)

{
  undefined1 auVar1 [16];
  
  auVar1 = FUN_1004de449(*(undefined4 *)(param_1 + 0x18));
                    /* WARNING: Could not recover jumptable at 0x000100618e42. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(param_1 + 8))
            (auVar1._0_8_,*(undefined8 *)(param_1 + 0x10),auVar1._8_8_,*(code **)(param_1 + 8));
  return;
}

