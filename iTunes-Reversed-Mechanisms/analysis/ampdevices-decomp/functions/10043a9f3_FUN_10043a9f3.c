// name: FUN_10043a9f3
// address: 10043a9f3

undefined4
FUN_10043a9f3(uint param_1,undefined4 param_2,undefined8 param_3,uint param_4,long param_5,
             undefined1 param_6,undefined4 param_7,undefined8 *param_8)

{
  long lVar1;
  char cVar2;
  char cVar3;
  int iVar4;
  undefined8 uVar5;
  long *plVar6;
  undefined4 uVar7;
  undefined4 local_1a8;
  undefined1 local_1a0 [16];
  long *local_190;
  undefined4 local_188;
  undefined8 local_180;
  uint local_178;
  undefined1 local_174;
  undefined4 local_16c;
  uint local_58;
  char *local_54;
  undefined2 local_4c;
  char *local_4a;
  long local_38;
  
  local_38 = *(long *)PTR____stack_chk_guard_10082cb58;
  ___bzero(local_1a0,0x148);
  if ((param_5 != 0) == (param_4 == 0)) {
    uVar5 = FUN_1001cc310();
    cVar2 = _os_log_type_enabled(uVar5,0x10);
    if (cVar2 != '\0') {
      local_58 = 0x8220202;
      local_54 = "Assertion failure";
      local_4c = 0x822;
      local_4a = "(thePlayAttributes == kTrackAttributesNone) == (playOptionsLocation == nullptr)";
      __os_log_error_impl(0x100000000,uVar5,0x10,"%{public}s: (%{public}s)",&local_58,0x16);
    }
    local_1a8 = 0xffffffce;
    FUN_1001782e9(0,0);
  }
  else {
    if ((param_1 != 5) && (param_1 != 10)) {
      uVar5 = FUN_1001cc310();
      cVar2 = _os_log_type_enabled(uVar5,0x10);
      if (cVar2 != '\0') {
        local_58 = 0x8220202;
        local_54 = "Assertion failure";
        local_4c = 0x822;
        local_4a = 
        "maxCanPlayLevelMask == kCanPlaySpecificMask || maxCanPlayLevelMask == kCanPlayGeneralMask";
        __os_log_error_impl(0x100000000,uVar5,0x10,"%{public}s: (%{public}s)",&local_58,0x16);
      }
      FUN_1001782e9(0,0);
    }
    cVar2 = FUN_1001ee041();
    uVar7 = 0x63616e20;
    if (cVar2 != '\0') {
      uVar7 = 0x7063616e;
    }
    local_178 = 1;
    local_16c = param_7;
    local_1a8 = 0xffffffce;
    plVar6 = DAT_1008c7680;
    local_188 = param_2;
    local_180 = param_3;
    local_174 = param_6;
    while (plVar6 != (long *)0x0) {
      iVar4 = FUN_10043a8b3(plVar6,uVar7,local_1a0);
      if (iVar4 == 0) {
        if (param_4 == 0) {
LAB_10043ace6:
          local_1a8 = 0;
          if (param_8 != (undefined8 *)0x0) {
            *param_8 = plVar6;
          }
          break;
        }
        if (cVar2 == '\0') {
          iVar4 = FUN_10043ad73(plVar6,0,param_2,param_5,param_7,0,0,0,0,&local_58);
          if ((iVar4 == 0) && ((param_4 & ~local_58) == 0)) goto LAB_10043ace6;
        }
        else {
          uVar5 = FUN_1001cc310();
          cVar3 = _os_log_type_enabled(uVar5,0x10);
          if (cVar3 != '\0') {
            local_58 = 0x8220202;
            local_54 = "Assertion failure";
            local_4c = 0x822;
            local_4a = "onPreemptiveThread == false";
            __os_log_error_impl(0x100000000,uVar5,0x10,"%{public}s: (%{public}s)",&local_58);
          }
          FUN_1001782e9(0,0);
        }
      }
      plVar6 = (long *)*plVar6;
      if (plVar6 == (long *)0x0) {
        do {
          local_178 = local_178 * 2;
          if (param_1 < local_178) goto LAB_10043ac3d;
          plVar6 = DAT_1008c7680;
        } while ((local_178 & param_1) == 0);
      }
    }
  }
LAB_10043ac3d:
  if (local_190 != (long *)0x0) {
    LOCK();
    plVar6 = local_190 + 1;
    lVar1 = *plVar6;
    *plVar6 = *plVar6 + -1;
    UNLOCK();
    if (lVar1 == 0) {
      (**(code **)(*local_190 + 0x10))(local_190);
      std::__shared_weak_count::__release_weak();
    }
  }
  if (*(long *)PTR____stack_chk_guard_10082cb58 != local_38) {
                    /* WARNING: Subroutine does not return */
    ___stack_chk_fail();
  }
  return local_1a8;
}

