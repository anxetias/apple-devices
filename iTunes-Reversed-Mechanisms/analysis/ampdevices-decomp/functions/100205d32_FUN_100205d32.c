// name: FUN_100205d32
// address: 100205d32

void FUN_100205d32(long param_1,undefined8 param_2,undefined8 param_3)

{
                    /* WARNING: Could not recover jumptable at 0x000100205d43. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(param_1 + 8))
            (*(undefined4 *)(param_1 + 0x10),*(undefined4 *)(param_1 + 0x14),param_3,
             *(code **)(param_1 + 8));
  return;
}

