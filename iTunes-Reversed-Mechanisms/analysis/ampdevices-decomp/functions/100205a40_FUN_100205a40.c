// name: FUN_100205a40
// address: 100205a40

void FUN_100205a40(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x000100205a55. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(param_1 + 8))
            (*(undefined4 *)(param_1 + 0x10),*(undefined4 *)(param_1 + 0x14),
             *(undefined8 *)(param_1 + 0x18),*(code **)(param_1 + 8));
  return;
}

