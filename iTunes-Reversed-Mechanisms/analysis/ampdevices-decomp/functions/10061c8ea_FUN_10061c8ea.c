// name: FUN_10061c8ea
// address: 10061c8ea

long * FUN_10061c8ea(long *param_1,ulong param_2,long *param_3)

{
  long *plVar1;
  long *plVar2;
  long *plVar3;
  long *plVar4;
  
  plVar1 = (long *)param_1[1];
  plVar3 = param_1 + 1;
  do {
    plVar4 = plVar3;
    if (plVar1 == (long *)0x0) {
LAB_10061c937:
      plVar2 = operator_new(0xa0);
      plVar2[4] = *param_3;
      plVar2[0x11] = 0;
      plVar2[0x12] = 0;
      plVar2[0xf] = 0;
      plVar2[0x10] = 0;
      plVar2[0xd] = 0;
      plVar2[0xe] = 0;
      plVar2[0xb] = 0;
      plVar2[0xc] = 0;
      plVar2[9] = 0;
      plVar2[10] = 0;
      plVar2[7] = 0;
      plVar2[8] = 0;
      plVar2[5] = 0;
      plVar2[6] = 0;
      plVar2[0x13] = 0;
      FUN_1002ecb9c(plVar2 + 5);
      *plVar2 = 0;
      plVar2[1] = 0;
      plVar2[2] = (long)plVar4;
      *plVar3 = (long)plVar2;
      plVar1 = plVar2;
      if (*(long *)*param_1 != 0) {
        *param_1 = *(long *)*param_1;
        plVar1 = (long *)*plVar3;
      }
      FUN_1001ad344(param_1[1],plVar1);
      param_1[2] = param_1[2] + 1;
      return plVar2;
    }
    while (plVar4 = plVar1, (ulong)plVar4[4] <= param_2) {
      if (param_2 <= (ulong)plVar4[4]) {
        return plVar4;
      }
      plVar1 = (long *)plVar4[1];
      if ((long *)plVar4[1] == (long *)0x0) {
        plVar3 = plVar4 + 1;
        goto LAB_10061c937;
      }
    }
    plVar1 = (long *)*plVar4;
    plVar3 = plVar4;
  } while( true );
}

