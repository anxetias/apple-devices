// name: FUN_1005f63db
// address: 1005f63db

int FUN_1005f63db(undefined8 param_1,undefined8 param_2,byte param_3,undefined4 param_4,
                 undefined8 param_5,undefined1 *param_6)

{
  int iVar1;
  int iVar2;
  char local_e0 [80];
  char local_90 [84];
  undefined4 local_3c;
  undefined8 local_38;
  
  if (param_6 != (undefined1 *)0x0) {
    *param_6 = 0;
  }
  local_3c = param_4;
  local_38 = param_5;
  iVar1 = FUN_1001888ba(param_1,param_2,param_5,local_e0);
  if (iVar1 == 0) {
    iVar1 = 0;
    if ((local_e0[0] == '\0') && (iVar1 = -0x57f, (param_3 & 4) == 0)) {
      iVar2 = FUN_100188aa6(local_38,local_38,param_3 >> 1 & 1,local_90,0);
      iVar1 = -0x57f;
      if (local_90[0] != '\0') {
        iVar1 = iVar2;
      }
      if (iVar2 != 0) {
        iVar1 = iVar2;
      }
    }
  }
  else if ((param_3 & 1) != 0) {
    if ((char)local_3c == '\0') {
      iVar1 = FUN_100188cfe(param_1,param_2,local_38);
    }
    else {
      FUN_1001b7b04(local_90,param_2);
      iVar1 = FUN_100189043(param_1,local_90,local_38);
      FUN_1001b7a50(local_90);
    }
    if (iVar1 == 0 && param_6 != (undefined1 *)0x0) {
      *param_6 = 1;
      iVar1 = 0;
    }
  }
  return iVar1;
}

