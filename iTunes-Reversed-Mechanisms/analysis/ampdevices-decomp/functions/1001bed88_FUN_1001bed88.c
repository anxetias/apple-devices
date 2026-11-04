// name: FUN_1001bed88
// address: 1001bed88

ulong FUN_1001bed88(long *param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4,
                   undefined8 param_5,undefined8 param_6)

{
  char cVar1;
  uint uVar2;
  ulong uVar3;
  undefined8 uVar4;
  undefined8 local_58;
  undefined4 local_50;
  undefined8 local_48;
  undefined8 uStack_40;
  undefined4 local_34;
  
  local_58 = 0;
  local_50 = 0;
  local_48 = 0;
  uStack_40 = 0;
  local_34 = param_4;
  cVar1 = FUN_1001ee056();
  if (cVar1 != '\0') {
    uVar3 = FUN_1001beede(param_1,param_2,param_3,param_5,param_6,0);
    return uVar3;
  }
  if ((char)param_1[5] != '\0') {
    return 0xffffff80;
  }
  uVar3 = FUN_1001e8dd6(&local_58,0,0);
  if ((int)uVar3 == -0x80) {
    return uVar3;
  }
  if ((int)uVar3 != 0) {
    uVar4 = FUN_1001cc310();
    uVar4 = _objc_retainAutoreleasedReturnValue(uVar4);
    cVar1 = _os_log_type_enabled(uVar4,0x10);
    if (cVar1 != '\0') {
      FUN_1006a338e(uVar3 & 0xffffffff,uVar4);
    }
    (*(code *)PTR__objc_release_10082c7b0)(uVar4);
    return uVar3 & 0xffffffff;
  }
  uVar2 = (**(code **)(*param_1 + 0x10))(param_1,param_2,param_3,local_34,&local_58,param_5,param_6)
  ;
  if (uVar2 != 0xffffff80) {
    if (uVar2 != 0) {
      uVar3 = (ulong)uVar2;
      uVar4 = FUN_1001cc310();
      uVar4 = _objc_retainAutoreleasedReturnValue(uVar4);
      cVar1 = _os_log_type_enabled(uVar4,0x10);
      if (cVar1 != '\0') {
        FUN_1006a3322(uVar3,uVar4);
      }
      (*(code *)PTR__objc_release_10082c7b0)(uVar4);
      goto LAB_1001beea8;
    }
    uVar2 = FUN_1001e944c(&local_58);
  }
  uVar3 = (ulong)uVar2;
LAB_1001beea8:
  FUN_1001e9587(&local_58);
  return uVar3;
}

