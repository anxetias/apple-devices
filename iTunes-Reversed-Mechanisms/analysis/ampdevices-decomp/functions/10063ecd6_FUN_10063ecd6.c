// name: FUN_10063ecd6
// address: 10063ecd6

undefined4 FUN_10063ecd6(long param_1,int param_2,undefined8 param_3,long param_4)

{
  char cVar1;
  undefined8 uVar2;
  long lVar3;
  long lVar4;
  long *plVar5;
  undefined4 uVar6;
  undefined4 local_48;
  char *local_44;
  undefined2 local_3c;
  char *local_3a;
  long local_30;
  
  local_30 = *(long *)PTR____stack_chk_guard_10082cb58;
  uVar6 = 0;
  if (param_2 < 0xd) {
    if (param_2 == 10) {
      lVar4 = 0;
      if (param_4 == 0) {
        uVar6 = 0;
      }
      else {
        uVar6 = 0;
        lVar4 = 0;
        if (((*(ulong *)(*(long *)(param_1 + 8) + 0x1bb0) & 1) != 0) &&
           (lVar4 = FUN_100170dc5(0,param_3,param_4), lVar4 == 0)) {
          uVar2 = FUN_1001cc310(0);
          cVar1 = _os_log_type_enabled(uVar2,0x10);
          if (cVar1 != '\0') {
            local_48 = 0x8220202;
            local_44 = "Assertion failure";
            local_3c = 0x822;
            local_3a = "rollbackInfoForLibrary != nullptr";
            __os_log_error_impl(0x100000000,uVar2,0x10,"%{public}s: (%{public}s)",&local_48,0x16);
          }
          FUN_1001782e9(0,0);
          uVar6 = 0xffffff94;
          lVar4 = 0;
        }
      }
      FUN_10017060f(lVar4);
      goto LAB_10063efb9;
    }
    if (param_2 != 0xc) goto LAB_10063efb9;
    lVar4 = *(long *)(param_1 + 8);
    if (*(long *)(lVar4 + 0x2cd8) == 0) {
      uVar2 = 0;
    }
    else {
      uVar2 = FUN_1001cc310();
      cVar1 = _os_log_type_enabled(uVar2,0x10);
      if (cVar1 != '\0') {
        local_48 = 0x8220202;
        local_44 = "Assertion failure";
        local_3c = 0x822;
        local_3a = "mTrackData->podcastStationsList == nullptr";
        __os_log_error_impl(0x100000000,uVar2,0x10,"%{public}s: (%{public}s)",&local_48,0x16);
      }
      FUN_1001782e9(0,0);
      lVar4 = *(long *)(param_1 + 8);
      uVar2 = *(undefined8 *)(lVar4 + 0x2cd8);
    }
    FUN_10017060f(uVar2);
    *(undefined8 *)(lVar4 + 0x2cd8) = 0;
    if (param_4 == 0) goto LAB_10063ef7e;
    uVar6 = 0;
    lVar4 = FUN_10016a7b8(0,param_3,param_4,0,0);
    *(long *)(*(long *)(param_1 + 8) + 0x2cd8) = lVar4;
    if (lVar4 != 0) goto LAB_10063efb9;
    uVar2 = FUN_1001cc310();
    cVar1 = _os_log_type_enabled(uVar2,0x10);
    if (cVar1 != '\0') {
      local_48 = 0x8220202;
      local_44 = "Assertion failure";
      local_3c = 0x822;
      local_3a = "mTrackData->podcastStationsList != nullptr";
      __os_log_error_impl(0x100000000,uVar2,0x10,"%{public}s: (%{public}s)",&local_48,0x16);
    }
    FUN_1001782e9(0,0);
  }
  else {
    if (param_2 != 0xd) {
      if (param_2 == 900) {
        FUN_10056e0bb(&local_48,param_3,param_4);
        plVar5 = (long *)(param_1 + 0x888);
        FUN_1001a7b1c(plVar5,&local_48);
      }
      else {
        uVar6 = 0;
        if (param_2 != 0x385) goto LAB_10063efb9;
        FUN_10056e0bb(&local_48,param_3,param_4);
        plVar5 = (long *)(param_1 + 0x878);
        FUN_1001a7b1c(plVar5,&local_48);
      }
      FUN_1001a8fac(&local_48);
      uVar6 = 0xffffff94;
      if (*plVar5 != 0) {
        uVar6 = 0;
      }
      goto LAB_10063efb9;
    }
    lVar4 = *(long *)(param_1 + 8);
    if (*(long *)(lVar4 + 0x2ce0) == 0) {
      uVar2 = 0;
    }
    else {
      uVar2 = FUN_1001cc310();
      cVar1 = _os_log_type_enabled(uVar2,0x10);
      if (cVar1 != '\0') {
        local_48 = 0x8220202;
        local_44 = "Assertion failure";
        local_3c = 0x822;
        local_3a = "mTrackData->podcastSubscriptionInfo == nullptr";
        __os_log_error_impl(0x100000000,uVar2,0x10,"%{public}s: (%{public}s)",&local_48,0x16);
      }
      FUN_1001782e9(0,0);
      lVar4 = *(long *)(param_1 + 8);
      uVar2 = *(undefined8 *)(lVar4 + 0x2ce0);
    }
    FUN_10017060f(uVar2);
    *(undefined8 *)(lVar4 + 0x2ce0) = 0;
    if (param_4 == 0) {
LAB_10063ef7e:
      uVar6 = 0;
      goto LAB_10063efb9;
    }
    lVar3 = FUN_100170dc5(0,param_3,param_4);
    lVar4 = *(long *)(param_1 + 8);
    *(long *)(lVar4 + 0x2ce0) = lVar3;
    if (lVar3 != 0) {
      uVar6 = 0;
      lVar4 = FUN_10048bbac(lVar4,10,0);
      if (lVar4 != 0) {
        FUN_1002b9dc0(lVar4,*(undefined8 *)(*(long *)(param_1 + 8) + 0x2ce0));
      }
      goto LAB_10063efb9;
    }
    uVar2 = FUN_1001cc310();
    cVar1 = _os_log_type_enabled(uVar2,0x10);
    if (cVar1 != '\0') {
      local_48 = 0x8220202;
      local_44 = "Assertion failure";
      local_3c = 0x822;
      local_3a = "mTrackData->podcastSubscriptionInfo != nullptr";
      __os_log_error_impl(0x100000000,uVar2,0x10,"%{public}s: (%{public}s)",&local_48,0x16);
    }
    FUN_1001782e9(0,0);
  }
  uVar6 = 0xffffff94;
LAB_10063efb9:
  if (*(long *)PTR____stack_chk_guard_10082cb58 != local_30) {
                    /* WARNING: Subroutine does not return */
    ___stack_chk_fail();
  }
  return uVar6;
}

