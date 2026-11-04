// name: FUN_1005d0c7a
// address: 1005d0c7a

undefined1 FUN_1005d0c7a(long *param_1,long param_2)

{
  undefined1 uVar1;
  char cVar2;
  long lVar3;
  long lVar4;
  long lVar5;
  long lVar6;
  long lVar7;
  long lVar8;
  undefined8 uVar9;
  undefined4 local_58;
  char *local_54;
  undefined2 local_4c;
  char *local_4a;
  long local_38;
  
  local_38 = *(long *)PTR____stack_chk_guard_10082cb58;
  if (param_2 == 0) {
    uVar9 = FUN_1001cc310();
    cVar2 = _os_log_type_enabled(uVar9,0x10);
    if (cVar2 != '\0') {
      local_58 = 0x8220202;
      local_54 = "Assertion failure";
      local_4c = 0x822;
      local_4a = "strLanguage != __null";
      __os_log_error_impl(0x100000000,uVar9,0x10,"%{public}s: (%{public}s)",&local_58,0x16);
    }
    uVar1 = 0;
    FUN_1001782e9(0,0);
    goto LAB_1005d0e9b;
  }
  (**(code **)(*param_1 + 0x10))();
  lVar3 = FUN_100171dc9(DAT_1008c4d90,param_2);
  if (lVar3 == 0) {
    uVar9 = FUN_1001cc310();
    cVar2 = _os_log_type_enabled(uVar9,0x10);
    if (cVar2 != '\0') {
      local_4a = "targetLocaleIdentifierString != __null";
LAB_1005d0f8d:
      local_4c = 0x822;
      local_54 = "Assertion failure";
      local_58 = 0x8220202;
      __os_log_error_impl(0x100000000,uVar9,0x10,"%{public}s: (%{public}s)",&local_58,0x16);
    }
LAB_1005d0df8:
    lVar4 = 0;
    FUN_1001782e9(0,0);
LAB_1005d0e74:
    lVar6 = 0;
LAB_1005d0e77:
    uVar1 = 0;
    lVar7 = 0;
  }
  else {
    lVar4 = FUN_100171e17(DAT_1008c4d90,lVar3);
    if (lVar4 == 0) {
      uVar9 = FUN_1001cc310();
      cVar2 = _os_log_type_enabled(uVar9,0x10);
      if (cVar2 != '\0') {
        local_4a = "targetLocaleComponents != __null";
        goto LAB_1005d0f8d;
      }
      goto LAB_1005d0df8;
    }
    uVar9 = *(undefined8 *)PTR__kCFLocaleLanguageCode_10082e0c0;
    lVar5 = FUN_100166c1b(lVar4,uVar9);
    if (lVar5 == 0) {
      uVar9 = FUN_1001cc310();
      cVar2 = _os_log_type_enabled(uVar9,0x10);
      if (cVar2 != '\0') {
        local_4a = "targetLanguageString != __null";
LAB_1005d0fdb:
        local_4c = 0x822;
        local_54 = "Assertion failure";
        local_58 = 0x8220202;
        __os_log_error_impl(0x100000000,uVar9,0x10,"%{public}s: (%{public}s)",&local_58,0x16);
      }
LAB_1005d0e68:
      FUN_1001782e9(0,0);
      goto LAB_1005d0e74;
    }
    lVar6 = FUN_100171e0d(DAT_1008c4d90,(int)*(short *)((long)param_1 + 0x162),
                          (int)*(short *)((long)param_1 + 0x164));
    if (lVar6 == 0) {
      uVar9 = FUN_1001cc310();
      cVar2 = _os_log_type_enabled(uVar9,0x10);
      if (cVar2 != '\0') {
        local_4a = "voiceLocaleIdentifierString != __null";
        goto LAB_1005d0fdb;
      }
      goto LAB_1005d0e68;
    }
    lVar7 = FUN_100171e17(DAT_1008c4d90,lVar6);
    if (lVar7 == 0) {
      uVar9 = FUN_1001cc310();
      cVar2 = _os_log_type_enabled(uVar9,0x10);
      if (cVar2 != '\0') {
        local_58 = 0x8220202;
        local_54 = "Assertion failure";
        local_4c = 0x822;
        local_4a = "voiceLocaleComponents != __null";
        __os_log_error_impl(0x100000000,uVar9,0x10,"%{public}s: (%{public}s)",&local_58,0x16);
      }
      FUN_1001782e9(0,0);
      goto LAB_1005d0e77;
    }
    lVar8 = FUN_100166c1b(lVar7,uVar9);
    if (lVar8 == 0) {
      uVar9 = FUN_1001cc310();
      cVar2 = _os_log_type_enabled(uVar9,0x10);
      if (cVar2 != '\0') {
        local_58 = 0x8220202;
        local_54 = "Assertion failure";
        local_4c = 0x822;
        local_4a = "voiceLanguageString != __null";
        __os_log_error_impl(0x100000000,uVar9,0x10,"%{public}s: (%{public}s)",&local_58,0x16);
      }
      uVar1 = 0;
      FUN_1001782e9(0,0);
    }
    else {
      uVar1 = FUN_100169eb1(lVar5,lVar8);
    }
  }
  FUN_10017060f(lVar7);
  FUN_10017060f(lVar6);
  FUN_10017060f(lVar4);
  FUN_10017060f(lVar3);
LAB_1005d0e9b:
  if (*(long *)PTR____stack_chk_guard_10082cb58 == local_38) {
    return uVar1;
  }
                    /* WARNING: Subroutine does not return */
  ___stack_chk_fail();
}

