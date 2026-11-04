// name: FUN_1001cf232
// address: 1001cf232

int FUN_1001cf232(long param_1,undefined8 *param_2)

{
  char cVar1;
  int iVar2;
  undefined8 uVar3;
  uint uVar4;
  undefined4 local_60;
  undefined4 local_5c;
  char local_58;
  char local_57;
  undefined8 local_48;
  undefined4 local_40;
  undefined8 local_38;
  
  if (param_2 == (undefined8 *)0x0) {
    uVar3 = FUN_1001cc310();
    cVar1 = _os_log_type_enabled(uVar3,0x10);
    if (cVar1 != '\0') {
      FUN_1006aff8a(uVar3);
    }
    FUN_1001782e9(0,0);
    iVar2 = -0x32;
  }
  else {
    iVar2 = FUN_1001cf1e5();
    if (iVar2 == 0) {
      iVar2 = FUN_1001cf3f5(param_1);
      if (iVar2 == 0) {
        iVar2 = FUN_1001cf0e8(*(undefined4 *)(param_1 + 0xc),param_2);
        if (iVar2 == 0) {
          if (*(int *)(param_1 + 0x10) != 0) {
            uVar4 = 0;
            do {
              iVar2 = FUN_1001cf495(param_1,uVar4,&local_60);
              if (iVar2 != 0) {
LAB_1001cf3cc:
                FUN_1001cf5c9(*param_2);
                *param_2 = 0;
                goto LAB_1001cf3db;
              }
              if (local_58 == '\0') {
                iVar2 = FUN_1001d027d(*param_2,0xffffffff,local_5c,local_60,local_48,local_40);
              }
              else {
                iVar2 = FUN_1001cf232(local_48,&local_38);
                if (iVar2 == 0) {
                  iVar2 = FUN_1001d0525(*param_2,0xffffffff,local_5c,local_38);
                  FUN_1001cf5c9(local_38);
                }
              }
              if ((iVar2 == 0) && (local_57 == '\0')) {
                FUN_1001cf6dc(*param_2,uVar4,0);
              }
              else if (iVar2 != 0) goto LAB_1001cf3cc;
              uVar4 = uVar4 + 1;
            } while (uVar4 < *(uint *)(param_1 + 0x10));
          }
          iVar2 = 0;
        }
LAB_1001cf3db:
        FUN_1001cf778(param_1);
      }
      else {
        uVar3 = FUN_1001cc310();
        cVar1 = _os_log_type_enabled(uVar3,0x10);
        if (cVar1 != '\0') {
          FUN_1006aff1e(iVar2,uVar3);
        }
      }
    }
    else {
      uVar3 = FUN_1001cc310();
      cVar1 = _os_log_type_enabled(uVar3,0x10);
      if (cVar1 != '\0') {
        FUN_1006afeb2(iVar2,uVar3);
      }
    }
  }
  return iVar2;
}

