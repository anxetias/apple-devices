// name: FUN_100449fc0
// address: 100449fc0

void FUN_100449fc0(long param_1,ulong param_2,ulong param_3)

{
  char cVar1;
  undefined8 uVar2;
  char *pcVar3;
  undefined4 local_88;
  undefined4 uStack_84;
  undefined4 uStack_80;
  undefined2 uStack_7c;
  undefined2 uStack_7a;
  undefined4 uStack_78;
  undefined2 uStack_74;
  undefined2 uStack_72;
  long lStack_70;
  undefined4 local_68;
  undefined8 uStack_64;
  undefined4 uStack_5c;
  undefined8 local_58;
  undefined4 local_50;
  undefined8 local_48;
  undefined4 local_40;
  long local_38;
  
  local_38 = *(long *)PTR____stack_chk_guard_10082cb58;
  if ((long)param_2 < 0) {
    uVar2 = FUN_1001cc310();
    cVar1 = _os_log_type_enabled(uVar2,0x10);
    if (cVar1 != '\0') {
      pcVar3 = "inStartTime >= 0";
LAB_10044a1a1:
      uStack_7c = 0x822;
      uStack_80 = 1;
      uStack_84 = 0x7a0a90;
      local_88 = 0x8220202;
      uStack_7a = SUB82(pcVar3,0);
      uStack_78 = (undefined4)((ulong)pcVar3 >> 0x10);
      uStack_74 = 0;
      __os_log_error_impl(0x100000000,uVar2,0x10,"%{public}s: (%{public}s)",&local_88,0x16);
    }
  }
  else if ((long)param_3 < 0) {
    uVar2 = FUN_1001cc310();
    cVar1 = _os_log_type_enabled(uVar2,0x10);
    if (cVar1 != '\0') {
      pcVar3 = "inStopTime >= 0";
      goto LAB_10044a1a1;
    }
  }
  else if (param_3 < param_2 || param_3 - param_2 == 0) {
    uVar2 = FUN_1001cc310();
    cVar1 = _os_log_type_enabled(uVar2,0x10);
    if (cVar1 != '\0') {
      pcVar3 = "inStartTime < inStopTime";
      goto LAB_10044a1a1;
    }
  }
  else {
    local_40 = *(undefined4 *)(PTR__kCMTimeZero_10082bc18 + 0x14);
    local_48 = *(undefined8 *)(PTR__kCMTimeZero_10082bc18 + 0xc);
    _AVCFAssetGetDuration(&local_88,*(undefined8 *)(param_1 + 0x18));
    local_50 = CONCAT22(uStack_72,uStack_74);
    local_58 = CONCAT44(uStack_78,CONCAT22(uStack_7a,uStack_7c));
    _CMTimeConvertScale(&local_88,1000,1);
    if ((long)param_3 <= CONCAT44(uStack_84,local_88)) {
      local_88 = (undefined4)param_2;
      uStack_84 = (undefined4)(param_2 >> 0x20);
      uStack_80 = 1000;
      uStack_7c = (undefined2)local_48;
      uStack_7a = (undefined2)((ulong)local_48 >> 0x10);
      uStack_78 = (undefined4)((ulong)local_48 >> 0x20);
      uStack_74 = (undefined2)local_40;
      uStack_72 = (undefined2)((uint)local_40 >> 0x10);
      local_68 = 1000;
      uStack_64 = local_58;
      uStack_5c = local_50;
      lStack_70 = param_3 - param_2;
      _AVCFAssetExportSessionSetTimeRange(*(undefined8 *)(param_1 + 0x28));
      goto LAB_10044a1cf;
    }
    uVar2 = FUN_1001cc310();
    cVar1 = _os_log_type_enabled(uVar2,0x10);
    if (cVar1 != '\0') {
      pcVar3 = "inStopTime <= msTime.value";
      goto LAB_10044a1a1;
    }
  }
  FUN_1001782e9(0,0);
LAB_10044a1cf:
  if (*(long *)PTR____stack_chk_guard_10082cb58 == local_38) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  ___stack_chk_fail();
}

