// name: FUN_100188e4f
// address: 100188e4f

int FUN_100188e4f(int *param_1)

{
  char cVar1;
  int iVar2;
  undefined8 uVar3;
  char local_68 [40];
  ushort local_40;
  
  if (((param_1 == (int *)0x0) || (*(long *)(param_1 + 4) == 0)) ||
     ((*param_1 != 0x41464350 && (*param_1 != 0x504f5358)))) {
    uVar3 = FUN_1001cc310();
    cVar1 = _os_log_type_enabled(uVar3,0x10);
    if (cVar1 != '\0') {
      FUN_10068e6b9(uVar3);
    }
    FUN_1001782e9(0,0);
    iVar2 = -0x32;
  }
  else {
    iVar2 = FUN_10017d406(param_1,0,local_68,0);
    if (iVar2 != -0x80) {
      if (iVar2 == 0) {
        if (local_68[0] == '\0') {
          uVar3 = FUN_1001cc310();
          cVar1 = _os_log_type_enabled(uVar3,0x10);
          if (cVar1 != '\0') {
            FUN_10068e5d7(uVar3);
          }
          FUN_1001782e9(0,0);
          iVar2 = -0x57f;
        }
        else {
          local_40 = local_40 | 0x2010;
          iVar2 = FUN_100188f79(param_1);
          if ((iVar2 != -0x80) && (iVar2 != 0)) {
            uVar3 = FUN_1001cc310();
            cVar1 = _os_log_type_enabled(uVar3,0x10);
            if (cVar1 != '\0') {
              FUN_10068e56b(iVar2,uVar3);
            }
          }
        }
      }
      else {
        uVar3 = FUN_1001cc310();
        cVar1 = _os_log_type_enabled(uVar3,0x10);
        if (cVar1 != '\0') {
          FUN_10068e64d(iVar2,uVar3);
        }
      }
    }
  }
  return iVar2;
}

