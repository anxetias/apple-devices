// name: FUN_100255870
// address: 100255870

bool FUN_100255870(undefined4 param_1,undefined4 param_2,undefined4 param_3,undefined8 param_4,
                  uint param_5)

{
  char cVar1;
  int iVar2;
  int iVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined4 local_458;
  undefined4 uStack_454;
  undefined4 local_450;
  undefined2 uStack_44c;
  undefined2 uStack_44a;
  undefined2 uStack_448;
  undefined4 local_438;
  undefined4 uStack_434;
  undefined4 local_430;
  undefined2 uStack_42c;
  undefined2 uStack_42a;
  undefined6 uStack_428;
  undefined2 local_422;
  undefined4 local_420;
  undefined2 local_41c;
  undefined4 local_41a;
  long local_38;
  
  local_38 = *(long *)PTR____stack_chk_guard_10082cb58;
  uVar4 = _AMDGetBundleVersion();
  local_438 = 0x73766d64;
  uVar5 = FUN_1001705fc(param_4);
  local_430 = (undefined4)uVar5;
  uStack_42c = (undefined2)((ulong)uVar5 >> 0x20);
  uStack_42a = (undefined2)((ulong)uVar5 >> 0x30);
  local_458 = 0x73766d64;
  uVar5 = FUN_1001705fc(uVar4);
  local_450 = (undefined4)uVar5;
  uStack_44c = (undefined2)((ulong)uVar5 >> 0x20);
  uStack_44a = (undefined2)((ulong)uVar5 >> 0x30);
  iVar2 = FUN_10024a918(&local_438);
  FUN_100249fee(&local_458);
  FUN_100249fee(&local_438);
  if (0 < iVar2) {
    if (DAT_1008c75c0 != -1) {
      _dispatch_once(&DAT_1008c75c0,&PTR___NSConcreteGlobalBlock_100857068);
    }
    uVar5 = DAT_1008c75b8;
    cVar1 = _os_log_type_enabled(DAT_1008c75b8,1);
    if (cVar1 != '\0') {
      local_438 = 0x8420402;
      uStack_434 = (undefined4)uVar4;
      local_430 = (undefined4)((ulong)uVar4 >> 0x20);
      uStack_42c = 0x842;
      uStack_42a = (undefined2)param_4;
      uStack_428 = (undefined6)((ulong)param_4 >> 0x10);
      local_422 = 0x400;
      local_41c = 0x400;
      local_420 = param_2;
      local_41a = param_3;
      __os_log_impl(0x100000000,uVar5,1,
                    "installed MobileDevice version is %{public}@, required MobileDevice version is %{public}@ for board ID 0x%X/chip ID 0x%X"
                    ,&local_438,0x22);
    }
    uVar4 = FUN_100416f20(param_1,(param_5 & 0xff) + 0x10cc00d1);
    uVar4 = FUN_1001e5e36(uVar4,&local_438,0x400);
    iVar3 = (int)uVar4;
    if (iVar3 != -0x80) {
      if (iVar3 != 0) {
        uVar5 = FUN_1001cc310();
        cVar1 = _os_log_type_enabled(uVar5,0x10);
        if (cVar1 != '\0') {
          local_458 = 0x8220202;
          uStack_454 = 0x7a0a90;
          local_450 = 1;
          uStack_44c = 0x400;
          uStack_44a = (undefined2)uVar4;
          uStack_448 = (undefined2)((ulong)uVar4 >> 0x10);
          __os_log_error_impl(0x100000000,uVar5,0x10,"%{public}s: err == (%d)",&local_458,0x12);
        }
        if (iVar3 != 0) goto LAB_100255a12;
      }
      _AMRestorableDeviceTriggerUpdateForBoardAndChipIDWithPrompt(param_2,param_3,&local_438);
    }
  }
LAB_100255a12:
  if (*(long *)PTR____stack_chk_guard_10082cb58 != local_38) {
                    /* WARNING: Subroutine does not return */
    ___stack_chk_fail();
  }
  return 0 < iVar2;
}

