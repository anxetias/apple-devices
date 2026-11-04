// name: FUN_10019b807
// address: 10019b807

int FUN_10019b807(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                 undefined8 param_5,undefined8 param_6,undefined8 param_7,undefined8 param_8,
                 undefined8 param_9,undefined4 param_10,undefined8 param_11,undefined8 param_12)

{
  char cVar1;
  int iVar2;
  undefined8 uVar3;
  int local_80 [2];
  undefined8 local_78;
  undefined4 local_70;
  undefined8 local_68;
  undefined8 uStack_60;
  undefined8 local_58;
  undefined8 local_50;
  undefined8 local_48;
  undefined8 local_40;
  undefined8 local_38;
  
  local_58 = param_8;
  local_50 = param_2;
  local_48 = param_1;
  local_40 = param_7;
  local_38 = param_6;
  uVar3 = FUN_10019b950();
  local_78 = 0;
  local_70 = 0;
  local_68 = 0;
  uStack_60 = 0;
  FUN_1001c62d9(local_80,0x28);
  iVar2 = FUN_1001e8dd6(&local_78,0,0);
  if (iVar2 != -0x80) {
    if (iVar2 == 0) {
      iVar2 = FUN_10019cbf5((int)local_48,local_50,uVar3,param_4,param_5,0,local_38,local_40,
                            local_58,param_9,param_10,param_11,param_12,FUN_10019d2c2,0,local_80);
      if (iVar2 != -0x80) {
        if (iVar2 == 0) {
          FUN_1001e944c(&local_78);
          FUN_1001e9587(&local_78);
          return local_80[0];
        }
        uVar3 = FUN_1001cc310();
        cVar1 = _os_log_type_enabled(uVar3,0x10);
        if (cVar1 != '\0') {
          FUN_100698ca2(iVar2,uVar3);
        }
      }
      FUN_1001e9587(&local_78);
    }
    else {
      uVar3 = FUN_1001cc310();
      cVar1 = _os_log_type_enabled(uVar3,0x10);
      if (cVar1 != '\0') {
        FUN_100698d0e(iVar2,uVar3);
      }
    }
  }
  return iVar2;
}

