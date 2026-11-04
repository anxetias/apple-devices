// name: FUN_100191db7
// address: 100191db7

void FUN_100191db7(ulong param_1,ulong param_2,ulong *param_3)

{
  int iVar1;
  int *piVar2;
  
  if (param_2 == 0) {
    iVar1 = -0x27;
  }
  else if ((long)param_2 < 0) {
    piVar2 = ___error();
    iVar1 = FUN_1001eb020(*piVar2);
  }
  else {
    iVar1 = -0x27;
    if (param_1 <= param_2) {
      iVar1 = 0;
    }
  }
  if (param_3 != (ulong *)0x0) {
    if ((iVar1 != 0) && (iVar1 != -0x27)) {
      param_2 = 0;
    }
    *param_3 = param_2;
  }
  return;
}

