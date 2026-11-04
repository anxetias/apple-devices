// name: FUN_1002f6ce8
// address: 1002f6ce8

int FUN_1002f6ce8(long param_1,long param_2,long param_3,long param_4,long param_5,
                 undefined8 param_6,ulong param_7,long param_8,int *param_9,undefined8 param_10,
                 undefined4 param_11,undefined4 param_12,long param_13,undefined8 param_14)

{
  char cVar1;
  int iVar2;
  undefined8 uVar3;
  long lVar4;
  undefined8 local_260;
  undefined4 local_258;
  char *local_254;
  undefined2 local_24c;
  int local_24a;
  undefined4 local_238;
  char *local_234;
  undefined2 local_22c;
  char *local_22a;
  long local_38;
  
  local_38 = *(long *)PTR____stack_chk_guard_10082cb58;
  local_260 = 0;
  if (param_2 == 0) {
    uVar3 = FUN_1001cc310();
    cVar1 = _os_log_type_enabled(uVar3,0x10);
    if (cVar1 != '\0') {
      local_22a = "sessionRef != nullptr";
LAB_1002f6f07:
      local_22c = 0x822;
      local_234 = "Assertion failure";
      local_238 = 0x8220202;
      __os_log_error_impl(0x100000000,uVar3,0x10,"%{public}s: (%{public}s)",&local_238,0x16);
    }
  }
  else if (param_3 == 0) {
    uVar3 = FUN_1001cc310();
    cVar1 = _os_log_type_enabled(uVar3,0x10);
    if (cVar1 != '\0') {
      local_22a = "cfstrText != nullptr";
      goto LAB_1002f6f07;
    }
  }
  else if (param_4 == 0) {
    uVar3 = FUN_1001cc310();
    cVar1 = _os_log_type_enabled(uVar3,0x10);
    if (cVar1 != '\0') {
      local_22a = "cfstrConditionedText != nullptr";
      goto LAB_1002f6f07;
    }
  }
  else if (param_5 == 0) {
    uVar3 = FUN_1001cc310();
    cVar1 = _os_log_type_enabled(uVar3,0x10);
    if (cVar1 != '\0') {
      local_22a = "cfstrLanguage != nullptr";
      goto LAB_1002f6f07;
    }
  }
  else if (param_8 == 0) {
    uVar3 = FUN_1001cc310();
    cVar1 = _os_log_type_enabled(uVar3,0x10);
    if (cVar1 != '\0') {
      local_22a = "ustrFile != nullptr";
      goto LAB_1002f6f07;
    }
  }
  else {
    if (*param_9 != 0x41464350) {
      if (param_13 != 0) {
        cVar1 = FUN_1001ee041();
        if (cVar1 == '\0') {
          uVar3 = FUN_1001cc310();
          cVar1 = _os_log_type_enabled(uVar3,0x10);
          if (cVar1 != '\0') {
            local_238 = 0x8220202;
            local_234 = "Assertion failure";
            local_22c = 0x822;
            local_22a = "outputLock == nullptr || JRIsCurrentThreadPreemptive()";
            __os_log_error_impl(0x100000000,uVar3,0x10,"%{public}s: (%{public}s)",&local_238,0x16);
          }
          FUN_1001782e9(0,0);
        }
      }
      if (*(code **)(param_1 + 0x98) == (code *)0x0) {
        uVar3 = FUN_1001cc310();
        cVar1 = _os_log_type_enabled(uVar3,0x10);
        if (cVar1 != '\0') {
          local_238 = 0x8220202;
          local_234 = "Assertion failure";
          local_22c = 0x822;
          local_22a = "mGeneratePCMDataProc != nullptr";
          __os_log_error_impl(0x100000000,uVar3,0x10,"%{public}s: (%{public}s)",&local_238,0x16);
        }
        FUN_1001782e9(0,0);
        iVar2 = -4;
        goto LAB_1002f6f3a;
      }
      iVar2 = (**(code **)(param_1 + 0x98))
                        (param_2,param_3,param_4,param_5,param_6,-(ulong)(param_7 == 0) | param_7,
                         &local_260);
      if (iVar2 == 0) {
        lVar4 = FUN_100170f3b(local_260);
        if (lVar4 != 0) {
          iVar2 = FUN_100170ef7(local_260);
          if (iVar2 != 0) {
            FUN_1003cf9aa(param_8,param_12,&local_238);
            iVar2 = FUN_1002f6830(param_1,param_9,&local_238,local_260,param_11,param_12,param_13,
                                  param_14);
            if ((iVar2 != -0x80) && (iVar2 != 0)) {
              uVar3 = FUN_1001cc310();
              cVar1 = _os_log_type_enabled(uVar3,0x10);
              if (cVar1 != '\0') {
                local_258 = 0x8220202;
                local_254 = "Assertion failure";
                local_24c = 0x400;
                local_24a = iVar2;
                __os_log_error_impl(0x100000000,uVar3,0x10,"%{public}s: err == (%d)",&local_258,0x12
                                   );
              }
            }
            goto LAB_1002f7147;
          }
        }
        uVar3 = FUN_1001cc310();
        cVar1 = _os_log_type_enabled(uVar3,0x10);
        if (cVar1 != '\0') {
          local_238 = 0x8220202;
          local_234 = "Assertion failure";
          local_22c = 0x822;
          local_22a = "JRCFDataGetBytePtr(pcmData) != __null && JRCFDataGetLength32(pcmData) > 0";
          __os_log_error_impl(0x100000000,uVar3,0x10,"%{public}s: (%{public}s)",&local_238,0x16);
        }
        FUN_1001782e9(0,0);
        iVar2 = 1;
      }
      else {
        iVar2 = iVar2 + 0x5dc;
      }
LAB_1002f7147:
      FUN_10017060f(local_260);
      goto LAB_1002f6f3a;
    }
    uVar3 = FUN_1001cc310();
    cVar1 = _os_log_type_enabled(uVar3,0x10);
    if (cVar1 != '\0') {
      local_22a = "fsOutputDir.kind != kJRFileSpecKindAFCPath";
      goto LAB_1002f6f07;
    }
  }
  FUN_1001782e9(0,0);
  iVar2 = -0x32;
LAB_1002f6f3a:
  if (*(long *)PTR____stack_chk_guard_10082cb58 == local_38) {
    return iVar2;
  }
                    /* WARNING: Subroutine does not return */
  ___stack_chk_fail();
}

