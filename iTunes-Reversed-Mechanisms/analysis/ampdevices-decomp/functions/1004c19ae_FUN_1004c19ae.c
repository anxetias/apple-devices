// name: FUN_1004c19ae
// address: 1004c19ae

void FUN_1004c19ae(long *param_1)

{
  (**(code **)(*param_1 + 0x310))(param_1,0);
                    /* WARNING: Could not recover jumptable at 0x0001004c19d2. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*(long *)param_1[0xaa] + 0x40))();
  return;
}

