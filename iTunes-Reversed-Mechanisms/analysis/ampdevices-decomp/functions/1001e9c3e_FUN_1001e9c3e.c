// name: FUN_1001e9c3e
// address: 1001e9c3e

int FUN_1001e9c3e(int *param_1)

{
  char cVar1;
  int iVar2;
  undefined8 uVar3;
  
  if (param_1 == (int *)0x0) {
    uVar3 = FUN_1001cc310();
    cVar1 = _os_log_type_enabled(uVar3,0x10);
    if (cVar1 != '\0') {
      FUN_1006c21bb(uVar3);
    }
    FUN_1001782e9(0,0);
    iVar2 = -0x32;
  }
  else {
    if (*param_1 == 0x6c6f636b) {
      uVar3 = FUN_1001cc310();
      cVar1 = _os_log_type_enabled(uVar3,0x10);
      if (cVar1 != '\0') {
        FUN_1006c20d9(uVar3);
      }
      FUN_1001782e9(1,0);
    }
    iVar2 = -0x32;
    if (((ulong)param_1 & 3) == 0) {
      *param_1 = 0;
      param_1[2] = 0;
      param_1[3] = 0;
      param_1[4] = 0;
      param_1[5] = 0;
      param_1[6] = 0;
      param_1[7] = 0;
      param_1[8] = 0;
      param_1[9] = 0;
      param_1[10] = 0;
      param_1[0xb] = 0;
      param_1[0xc] = 0;
      param_1[0xd] = 0;
      param_1[0xe] = 0;
      param_1[0xf] = 0;
      param_1[0x10] = 0;
      param_1[0x11] = 0;
      iVar2 = FUN_1001e9d30(param_1 + 2);
      if (iVar2 != -0x80) {
        if (iVar2 == 0) {
          *param_1 = 0x6c6f636b;
          iVar2 = 0;
        }
        else {
          uVar3 = FUN_1001cc310();
          cVar1 = _os_log_type_enabled(uVar3,0x10);
          if (cVar1 != '\0') {
            FUN_1006c214f(iVar2,uVar3);
          }
        }
      }
    }
  }
  return iVar2;
}

