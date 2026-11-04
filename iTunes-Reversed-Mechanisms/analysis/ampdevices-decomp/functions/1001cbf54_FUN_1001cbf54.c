// name: FUN_1001cbf54
// address: 1001cbf54

int FUN_1001cbf54(undefined8 param_1,int param_2,char param_3)

{
  char cVar1;
  int iVar2;
  undefined8 uVar3;
  int local_30;
  uint local_2c;
  
  iVar2 = FUN_1001c8e4e(param_1,&local_30);
  if (iVar2 == 0) {
    iVar2 = 0;
    if (local_30 != param_2) {
      iVar2 = FUN_1001c9356(param_1,&local_2c);
      if (iVar2 == 0) {
        local_2c = (param_2 - local_30) + local_2c;
        if ((int)local_2c < 0) {
          if (param_3 == '\0') {
            iVar2 = 0;
          }
          else {
            iVar2 = FUN_1001c9118(param_1,0x800);
            if ((iVar2 != -0x80) && (iVar2 != 0)) {
              uVar3 = FUN_1001cc310();
              cVar1 = _os_log_type_enabled(uVar3,0x10);
              if (cVar1 != '\0') {
                FUN_1006aebc0(iVar2,uVar3);
              }
            }
          }
        }
        else {
          if (0x1000 < local_2c) {
            local_2c = 0x1000;
          }
          iVar2 = FUN_1001c9118(param_1,local_2c);
          if ((iVar2 != -0x80) && (iVar2 != 0)) {
            uVar3 = FUN_1001cc310();
            cVar1 = _os_log_type_enabled(uVar3,0x10);
            if (cVar1 != '\0') {
              FUN_1006aec2c(iVar2,uVar3);
            }
          }
        }
      }
      else {
        uVar3 = FUN_1001cc310();
        cVar1 = _os_log_type_enabled(uVar3,0x10);
        if (cVar1 != '\0') {
          FUN_1006aeb54(iVar2,uVar3);
        }
      }
    }
  }
  else {
    uVar3 = FUN_1001cc310();
    cVar1 = _os_log_type_enabled(uVar3,0x10);
    if (cVar1 != '\0') {
      FUN_1006aeae8(iVar2,uVar3);
    }
  }
  return iVar2;
}

