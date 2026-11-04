// name: FUN_1002000f4
// address: 1002000f4

undefined8 FUN_1002000f4(long param_1,long param_2,undefined8 *param_3)

{
  char cVar1;
  undefined8 uVar2;
  long lVar3;
  long lVar4;
  long lVar5;
  long lVar6;
  long lVar7;
  undefined4 local_58;
  char *local_54;
  undefined2 local_4c;
  char *local_4a;
  long local_38;
  
  local_38 = *(long *)PTR____stack_chk_guard_10082cb58;
  if (param_1 == 0) {
LAB_100200208:
    uVar2 = FUN_1001cc310();
    cVar1 = _os_log_type_enabled(uVar2,0x10);
    if (cVar1 != '\0') {
      local_4a = "DulcimerHandlerDataIsValid(handlerData)";
LAB_1002002ce:
      local_4c = 0x822;
      local_54 = "Assertion failure";
      local_58 = 0x8220202;
      __os_log_error_impl(0x100000000,uVar2,0x10,"%{public}s: (%{public}s)",&local_58,0x16);
    }
  }
  else {
    if (*(int *)(param_1 + 8) != 0x64756c63) {
      uVar2 = FUN_1001cc310();
      cVar1 = _os_log_type_enabled(uVar2,0x10);
      if (cVar1 != '\0') {
        local_58 = 0x8220202;
        local_54 = "Assertion failure (expected to be true)";
        local_4c = 0x822;
        local_4a = "handlerData->magic == kDulcimerHandlerDataMagic";
        __os_log_error_impl(0x100000000,uVar2,0x10,"%{public}s: (%{public}s)",&local_58,0x16);
      }
      cVar1 = FUN_1001782e9(0,1);
      if (cVar1 == '\0') goto LAB_100200208;
    }
    if (param_2 == 0) {
      uVar2 = FUN_1001cc310();
      cVar1 = _os_log_type_enabled(uVar2,0x10);
      if (cVar1 != '\0') {
        local_4a = "requiredBackupSourceIdentifer != nullptr";
        goto LAB_1002002ce;
      }
    }
    else {
      if (param_3 != (undefined8 *)0x0) {
        *param_3 = 0;
        lVar3 = FUN_100503780(param_1 + 0x106,param_1 + 0x66,0);
        if (lVar3 == 0) {
          uVar2 = FUN_1001cc310();
          cVar1 = _os_log_type_enabled(uVar2,0x10);
          if (cVar1 != '\0') {
            local_58 = 0x8220202;
            local_54 = "Assertion failure";
            local_4c = 0x822;
            local_4a = "backupArray != nullptr";
            __os_log_error_impl(0x100000000,uVar2,0x10,"%{public}s: (%{public}s)",&local_58,0x16);
          }
          FUN_1001782e9(0,0);
          uVar2 = 0xffffffd5;
        }
        else {
          lVar4 = FUN_10017076e(lVar3);
          uVar2 = 0xffffffd5;
          if (0 < lVar4) {
            lVar7 = 0;
            do {
              lVar5 = FUN_10016499b(lVar3,lVar7);
              if (((lVar5 != 0) && (lVar6 = FUN_100166c1b(lVar5,&cf_SourceIdentifier), lVar6 != 0))
                 && (lVar6 = FUN_100173bb7(lVar6,param_2,0), lVar6 == 0)) {
                uVar2 = FUN_1001705fc(lVar5);
                *param_3 = uVar2;
                uVar2 = 0;
                break;
              }
              lVar7 = lVar7 + 1;
            } while (lVar4 != lVar7);
          }
        }
        FUN_10017060f(lVar3);
        goto LAB_100200302;
      }
      uVar2 = FUN_1001cc310();
      cVar1 = _os_log_type_enabled(uVar2,0x10);
      if (cVar1 != '\0') {
        local_4a = "outBackupDict != nullptr";
        goto LAB_1002002ce;
      }
    }
  }
  FUN_1001782e9(0,0);
  uVar2 = 0xffffffce;
LAB_100200302:
  if (*(long *)PTR____stack_chk_guard_10082cb58 != local_38) {
                    /* WARNING: Subroutine does not return */
    ___stack_chk_fail();
  }
  return uVar2;
}

