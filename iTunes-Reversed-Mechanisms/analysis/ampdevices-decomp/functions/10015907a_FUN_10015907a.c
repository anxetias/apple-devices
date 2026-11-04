// name: FUN_10015907a
// address: 10015907a

long FUN_10015907a(long *param_1,ulong param_2)

{
  long *plVar1;
  long lVar2;
  long *plVar3;
  
  plVar1 = (long *)param_1[0x1d];
  if (plVar1 != (long *)0x0) {
    plVar3 = param_1 + 0x1d;
    do {
      if ((ulong)plVar1[4] >= param_2) {
        plVar3 = plVar1;
      }
      plVar1 = (long *)plVar1[(ulong)plVar1[4] < param_2];
    } while (plVar1 != (long *)0x0);
    if (((plVar3 != param_1 + 0x1d) && ((ulong)plVar3[4] <= param_2)) && (plVar3[5] != 0)) {
      FUN_1001705fc(plVar3[5]);
      return plVar3[5];
    }
  }
                    /* WARNING: Could not recover jumptable at 0x0001001590e0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  lVar2 = (**(code **)(*param_1 + 0x48))();
  return lVar2;
}

