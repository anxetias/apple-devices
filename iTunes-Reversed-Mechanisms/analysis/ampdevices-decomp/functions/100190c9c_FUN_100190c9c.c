// name: FUN_100190c9c
// address: 100190c9c

int FUN_100190c9c(undefined8 param_1,int *param_2,undefined4 *param_3,undefined8 *param_4)

{
  char cVar1;
  int iVar2;
  undefined8 uVar3;
  char local_80 [32];
  undefined8 local_60;
  
  iVar2 = -0x589;
  if ((*param_2 == 0) && (iVar2 = FUN_10017d477(param_1,local_80,0), iVar2 != -0x80)) {
    if (iVar2 == 0) {
      iVar2 = -0x589;
      if (local_80[0] == '\0') {
        if (param_3 != (undefined4 *)0x0) {
          *param_3 = 0x64617461;
        }
        if (param_4 != (undefined8 *)0x0) {
          *param_4 = local_60;
        }
        *param_2 = 1;
        iVar2 = 0;
      }
    }
    else {
      uVar3 = FUN_1001cc310();
      cVar1 = _os_log_type_enabled(uVar3,0x10);
      if (cVar1 != '\0') {
        FUN_100693eb2(iVar2,uVar3);
      }
    }
  }
  return iVar2;
}

