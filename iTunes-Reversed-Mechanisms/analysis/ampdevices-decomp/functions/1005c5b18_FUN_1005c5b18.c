// name: FUN_1005c5b18
// address: 1005c5b18

int FUN_1005c5b18(undefined8 param_1,long param_2)

{
  char cVar1;
  int iVar2;
  long lVar3;
  long lVar4;
  undefined8 uVar5;
  long lVar6;
  undefined1 local_68 [8];
  long local_60;
  undefined4 local_58;
  int local_54;
  undefined2 uStack_50;
  undefined2 uStack_4e;
  undefined2 local_4c;
  int local_4a;
  undefined2 uStack_46;
  undefined2 uStack_44;
  undefined6 uStack_42;
  long local_30;
  
  local_30 = *(long *)PTR____stack_chk_guard_10082cb58;
  local_60 = param_2;
  if (param_2 == 0) {
    iVar2 = FUN_1005c5ee3(param_1,0,&local_60);
    if (iVar2 != -0x80) {
      param_2 = local_60;
      if (iVar2 == 0) goto LAB_1005c5b50;
      uVar5 = FUN_1001cc310();
      cVar1 = _os_log_type_enabled(uVar5,0x10);
      if (cVar1 != '\0') {
        local_58 = 0x8220202;
        local_54 = 0x7a0a90;
        uStack_50 = 1;
        uStack_4e = 0;
        local_4c = 0x400;
        local_4a = iVar2;
        __os_log_error_impl(0x100000000,uVar5,0x10,"%{public}s: err == (%d)",&local_58,0x12);
      }
    }
    cVar1 = _os_log_type_enabled(PTR___os_log_default_10082cb88,0x10);
    if (cVar1 != '\0') {
      uVar5 = _AMDeviceCopyDeviceIdentifier(param_1);
      FUN_1001aaedc(local_68,uVar5);
      local_58 = 0x4000302;
      uStack_50 = 0x842;
      uStack_4e = local_68._0_2_;
      local_4c = local_68._2_2_;
      local_4a = local_68._4_4_;
      uStack_46 = 0x800;
      uStack_44 = (undefined2)param_1;
      uStack_42 = (undefined6)((ulong)param_1 >> 0x10);
      local_54 = iVar2;
      __os_log_error_impl(0x100000000,PTR___os_log_default_10082cb88,0x10,
                          "AMDeviceCreateWakeupToken failed (0x%08X) for device %{public}@ (%p)",
                          &local_58,0x1c);
      FUN_1001ab006(local_68);
    }
    goto LAB_1005c5ce4;
  }
  FUN_1001705fc(param_2);
LAB_1005c5b50:
  lVar3 = FUN_1001726ca(DAT_1008c4d90,param_2);
  if (lVar3 == 0) {
    uVar5 = FUN_1001cc310();
    cVar1 = _os_log_type_enabled(uVar5,0x10);
    if (cVar1 != '\0') {
      local_58 = 0x8220202;
      local_54 = 0x7a0a90;
      uStack_50 = 1;
      uStack_4e = 0;
      local_4c = 0x822;
      local_4a = 0x7ef658;
      uStack_46 = 1;
      uStack_44 = 0;
      __os_log_error_impl(0x100000000,uVar5,0x10,"%{public}s: (%{public}s)",&local_58,0x16);
    }
    FUN_1001782e9(0,0);
LAB_1005c5c4e:
    iVar2 = -0x17fffffd;
    lVar6 = 0;
    lVar4 = 0;
  }
  else {
    lVar4 = FUN_1001cd685(&cf_MobileDeviceWakeupTokens,1,0);
    if ((lVar4 == 0) &&
       (lVar4 = FUN_100171409(DAT_1008c4d90,0,PTR__kCFTypeDictionaryKeyCallBacks_10082e138,
                              PTR__kCFTypeDictionaryValueCallBacks_10082e140), lVar4 == 0)) {
      uVar5 = FUN_1001cc310();
      cVar1 = _os_log_type_enabled(uVar5,0x10);
      if (cVar1 != '\0') {
        local_58 = 0x8220202;
        local_54 = 0x7a0a90;
        uStack_50 = 1;
        uStack_4e = 0;
        local_4c = 0x822;
        local_4a = 0x7ef673;
        uStack_46 = 1;
        uStack_44 = 0;
        __os_log_error_impl(0x100000000,uVar5,0x10,"%{public}s: (%{public}s)",&local_58,0x16);
      }
      FUN_1001782e9(0,0);
      goto LAB_1005c5c4e;
    }
    uVar5 = _CFStringGetTypeID();
    lVar6 = FUN_1005ba383(param_1,0,&cf_UniqueDeviceID,uVar5,0);
    if (lVar6 == 0) {
      uVar5 = FUN_1001cc310();
      cVar1 = _os_log_type_enabled(uVar5,0x10);
      if (cVar1 != '\0') {
        local_58 = 0x8220202;
        local_54 = 0x7a0a90;
        uStack_50 = 1;
        uStack_4e = 0;
        local_4c = 0x822;
        local_4a = 0x7ef68b;
        uStack_46 = 1;
        uStack_44 = 0;
        __os_log_error_impl(0x100000000,uVar5,0x10,"%{public}s: (%{public}s)",&local_58,0x16);
      }
      FUN_1001782e9(0,0);
      iVar2 = -0x17fffff8;
      lVar6 = 0;
    }
    else {
      FUN_100171502(lVar4,lVar6,lVar3);
      iVar2 = 0;
      FUN_1001cdefe(&cf_MobileDeviceWakeupTokens,lVar4,0);
    }
  }
  FUN_10017060f(lVar6);
  FUN_10017060f(lVar4);
  FUN_10017060f(lVar3);
  FUN_10017060f(local_60);
LAB_1005c5ce4:
  if (*(long *)PTR____stack_chk_guard_10082cb58 != local_30) {
                    /* WARNING: Subroutine does not return */
    ___stack_chk_fail();
  }
  return iVar2;
}

