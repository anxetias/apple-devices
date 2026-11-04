// name: FUN_1001d027d
// address: 1001d027d

int FUN_1001d027d(long param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4,
                 undefined8 param_5,undefined4 param_6)

{
  char cVar1;
  int iVar2;
  undefined8 uVar3;
  undefined4 local_60;
  undefined4 local_5c;
  undefined1 local_56;
  undefined4 local_54;
  undefined1 local_50 [16];
  undefined8 local_40;
  undefined4 local_38;
  undefined4 local_34;
  
  local_40 = param_5;
  local_38 = param_3;
  iVar2 = FUN_1001cf1e5();
  if (iVar2 == 0) {
    local_34 = param_2;
    FUN_1001c62d9(&local_60,0x20);
    local_5c = local_38;
    local_56 = 1;
    local_60 = param_4;
    local_54 = param_6;
    iVar2 = FUN_1001dda73(param_1 + 0x18,local_40,param_6,local_50);
    if (iVar2 == 0) {
      iVar2 = FUN_1001d0338(param_1,local_34,&local_60);
    }
  }
  else {
    uVar3 = FUN_1001cc310();
    cVar1 = _os_log_type_enabled(uVar3,0x10);
    if (cVar1 != '\0') {
      FUN_1006b07f4(iVar2,uVar3);
    }
  }
  return iVar2;
}

