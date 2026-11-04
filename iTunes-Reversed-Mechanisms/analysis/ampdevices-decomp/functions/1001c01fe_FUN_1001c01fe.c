// name: FUN_1001c01fe
// address: 1001c01fe

ulong FUN_1001c01fe(undefined4 param_1,undefined4 param_2,undefined4 param_3,undefined8 param_4,
                   undefined8 param_5)

{
  long *plVar1;
  char cVar2;
  uint uVar3;
  ulong uVar4;
  undefined8 uVar5;
  undefined8 uStack_58;
  undefined4 uStack_50;
  undefined8 uStack_48;
  undefined8 uStack_40;
  undefined4 uStack_34;
  
  plVar1 = DAT_10089fb80;
  if (DAT_10089fb80 == (long *)0x0) {
    uVar5 = FUN_1001cc310();
    uVar5 = _objc_retainAutoreleasedReturnValue(uVar5);
    cVar2 = _os_log_type_enabled(uVar5,0x10);
    if (cVar2 != '\0') {
      FUN_1006a43dd(uVar5);
    }
    (*(code *)PTR__objc_release_10082c7b0)(uVar5);
    FUN_1001782e9(0,0);
    return 0xffffffce;
  }
  uStack_58 = 0;
  uStack_50 = 0;
  uStack_48 = 0;
  uStack_40 = 0;
  uStack_34 = param_3;
  cVar2 = FUN_1001ee056();
  if (cVar2 != '\0') {
    uVar4 = FUN_1001beede(plVar1,param_1,param_2,param_4,param_5,0);
    return uVar4;
  }
  if ((char)plVar1[5] != '\0') {
    return 0xffffff80;
  }
  uVar4 = FUN_1001e8dd6(&uStack_58,0,0);
  if ((int)uVar4 == -0x80) {
    return uVar4;
  }
  if ((int)uVar4 != 0) {
    uVar5 = FUN_1001cc310();
    uVar5 = _objc_retainAutoreleasedReturnValue(uVar5);
    cVar2 = _os_log_type_enabled(uVar5,0x10);
    if (cVar2 != '\0') {
      FUN_1006a338e(uVar4 & 0xffffffff,uVar5);
    }
    (*(code *)PTR__objc_release_10082c7b0)(uVar5);
    return uVar4 & 0xffffffff;
  }
  uVar3 = (**(code **)(*plVar1 + 0x10))(plVar1,param_1,param_2,uStack_34,&uStack_58,param_4,param_5)
  ;
  if (uVar3 != 0xffffff80) {
    if (uVar3 != 0) {
      uVar4 = (ulong)uVar3;
      uVar5 = FUN_1001cc310();
      uVar5 = _objc_retainAutoreleasedReturnValue(uVar5);
      cVar2 = _os_log_type_enabled(uVar5,0x10);
      if (cVar2 != '\0') {
        FUN_1006a3322(uVar4,uVar5);
      }
      (*(code *)PTR__objc_release_10082c7b0)(uVar5);
      goto LAB_1001beea8;
    }
    uVar3 = FUN_1001e944c(&uStack_58);
  }
  uVar4 = (ulong)uVar3;
LAB_1001beea8:
  FUN_1001e9587(&uStack_58);
  return uVar4;
}

