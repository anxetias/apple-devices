// name: FUN_1004c19d6
// address: 1004c19d6

void FUN_1004c19d6(long *param_1)

{
  (**(code **)(*param_1 + 0x310))(param_1,0);
                    /* WARNING: Could not recover jumptable at 0x0001004c19fa. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*(long *)param_1[0xaa] + 0x30))();
  return;
}

