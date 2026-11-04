// name: FUN_10032d72e
// address: 10032d72e

int FUN_10032d72e(long param_1,long param_2,undefined1 param_3)

{
  char cVar1;
  int iVar2;
  undefined8 uVar3;
  long *plVar4;
  undefined1 local_2a8 [80];
  undefined4 local_258;
  char *local_254;
  undefined2 local_24c;
  int local_24a;
  undefined4 local_238;
  char *local_234;
  undefined2 local_22c;
  char *local_22a;
  long local_30;
  
  local_30 = *(long *)PTR____stack_chk_guard_10082cb58;
  if (param_1 == 0) {
LAB_10032d83b:
    uVar3 = FUN_1001cc310();
    cVar1 = _os_log_type_enabled(uVar3,0x10);
    if (cVar1 != '\0') {
      local_22a = "DulcimerHandlerDataIsValid(handlerData)";
LAB_10032d90a:
      local_22c = 0x822;
      local_234 = "Assertion failure";
      local_238 = 0x8220202;
      __os_log_error_impl(0x100000000,uVar3,0x10,"%{public}s: (%{public}s)",&local_238,0x16);
    }
  }
  else {
    if (*(int *)(param_1 + 8) != 0x64756c63) {
      uVar3 = FUN_1001cc310();
      cVar1 = _os_log_type_enabled(uVar3,0x10);
      if (cVar1 != '\0') {
        local_238 = 0x8220202;
        local_234 = "Assertion failure (expected to be true)";
        local_22c = 0x822;
        local_22a = "handlerData->magic == kDulcimerHandlerDataMagic";
        __os_log_error_impl(0x100000000,uVar3,0x10,"%{public}s: (%{public}s)",&local_238,0x16);
      }
      cVar1 = FUN_1001782e9(0,1);
      if (cVar1 == '\0') goto LAB_10032d83b;
    }
    if (*(long *)(param_1 + 0x16210) == 0) {
      uVar3 = FUN_1001cc310();
      cVar1 = _os_log_type_enabled(uVar3,0x10);
      if (cVar1 != '\0') {
        local_22a = "handlerData->voiceMemosInfoDict != nullptr";
        goto LAB_10032d90a;
      }
    }
    else {
      if ((param_2 != 0) && (*(long *)(param_2 + 0x10) != 0)) {
        plVar4 = (long *)(param_2 + 0x58);
        do {
          plVar4 = (long *)*plVar4;
          if (plVar4 == (long *)0x0) {
            uVar3 = FUN_1001cc310();
            cVar1 = _os_log_type_enabled(uVar3,0x10);
            if (cVar1 != '\0') {
              local_238 = 0x8220202;
              local_234 = "Assertion failure";
              local_22c = 0x822;
              local_22a = "trackInstance != nullptr";
              __os_log_error_impl(0x100000000,uVar3,0x10,"%{public}s: (%{public}s)",&local_238,0x16)
              ;
            }
            FUN_1001782e9(0,0);
            goto LAB_10032d98b;
          }
        } while (*(int *)((long)plVar4 + 0x3c) != 0x46494c45);
        cVar1 = FUN_10032109f(plVar4);
        if (cVar1 == '\0') {
LAB_10032d98b:
          iVar2 = -0x2b;
        }
        else {
          iVar2 = FUN_10032daa1(param_1,plVar4,local_2a8,&local_238);
          if (iVar2 != -0x80) {
            if (iVar2 == 0) {
              iVar2 = FUN_10032de84(param_1,param_2,&local_238,local_2a8,param_3);
            }
            else {
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
          }
        }
        goto LAB_10032d93e;
      }
      uVar3 = FUN_1001cc310();
      cVar1 = _os_log_type_enabled(uVar3,0x10);
      if (cVar1 != '\0') {
        local_22a = "TrackInfoIsValid(trackInfo)";
        goto LAB_10032d90a;
      }
    }
  }
  FUN_1001782e9(0,0);
  iVar2 = -0x32;
LAB_10032d93e:
  if (*(long *)PTR____stack_chk_guard_10082cb58 == local_30) {
    return iVar2;
  }
                    /* WARNING: Subroutine does not return */
  ___stack_chk_fail();
}

