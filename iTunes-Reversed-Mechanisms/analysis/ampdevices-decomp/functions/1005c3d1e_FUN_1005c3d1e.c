// name: FUN_1005c3d1e
// address: 1005c3d1e

int FUN_1005c3d1e(undefined8 param_1,char *param_2,long *param_3)

{
  char cVar1;
  int iVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  long lVar5;
  char *pcVar6;
  undefined8 local_60;
  undefined4 local_58;
  char *local_54;
  undefined2 local_4c;
  int local_4a;
  undefined2 uStack_46;
  undefined2 uStack_44;
  undefined2 uStack_42;
  long local_38;
  
  local_38 = *(long *)PTR____stack_chk_guard_10082cb58;
  if (param_3 == (long *)0x0) {
    uVar3 = FUN_1001cc310();
    cVar1 = _os_log_type_enabled(uVar3,0x10);
    if (cVar1 != '\0') {
      pcVar6 = "iconData != __null";
LAB_1005c3fa2:
      local_4c = 0x822;
      local_54 = "Assertion failure";
      local_58 = 0x8220202;
      local_4a = (int)pcVar6;
      uStack_46 = (undefined2)((ulong)pcVar6 >> 0x20);
      uStack_44 = 0;
      __os_log_error_impl(0x100000000,uVar3,0x10,"%{public}s: (%{public}s)",&local_58,0x16);
    }
  }
  else {
    *param_3 = 0;
    if (param_2 != (char *)0x0) {
      uVar3 = _CFDictionaryGetTypeID();
      local_60 = 0;
      uVar4 = FUN_100171409(DAT_1008c4d90,0,PTR__kCFTypeDictionaryKeyCallBacks_10082e138,
                            PTR__kCFTypeDictionaryValueCallBacks_10082e140);
      FUN_100171502(uVar4,&cf_command,&cf_getIconPNGData);
      FUN_100171502(uVar4,&cf_bundleId,param_2);
      iVar2 = FUN_1005b9af6(param_1,uVar4,uVar3,&local_60);
      FUN_10017060f(uVar4);
      if (iVar2 != -0x80) {
        if (iVar2 == 0) {
          uVar3 = FUN_10016696d(local_60,&cf_pngData);
          lVar5 = FUN_1001705fc(uVar3);
          *param_3 = lVar5;
          iVar2 = 0;
          if (lVar5 == 0) {
            uVar3 = FUN_1001cc310();
            cVar1 = _os_log_type_enabled(uVar3,0x10);
            if (cVar1 != '\0') {
              local_58 = 0x8220202;
              local_54 = "Assertion failure";
              local_4c = 0x822;
              local_4a = 0x7ef4b5;
              uStack_46 = 1;
              uStack_44 = 0;
              __os_log_error_impl(0x100000000,uVar3,0x10,"%{public}s: (%{public}s)",&local_58,0x16);
            }
            FUN_1001782e9(0,0);
            cVar1 = _os_log_type_enabled(PTR___os_log_default_10082cb88,0x10);
            iVar2 = -0x17fffff8;
            if (cVar1 != '\0') {
              local_58 = 0x8420102;
              local_54 = param_2;
              __os_log_error_impl(0x100000000,PTR___os_log_default_10082cb88,0x10,
                                  "missing pngData in getIconPNGData response for bundleId \"%{public}@\""
                                  ,&local_58,0xc);
            }
          }
          FUN_10017060f(local_60);
          goto LAB_1005c3f08;
        }
        uVar3 = FUN_1001cc310();
        cVar1 = _os_log_type_enabled(uVar3,0x10);
        if (cVar1 != '\0') {
          local_58 = 0x8220202;
          local_54 = "Assertion failure";
          local_4c = 0x400;
          local_4a = iVar2;
          __os_log_error_impl(0x100000000,uVar3,0x10,"%{public}s: err == (%d)",&local_58,0x12);
        }
      }
      cVar1 = _os_log_type_enabled(PTR___os_log_default_10082cb88,0x10);
      if (cVar1 != '\0') {
        local_58 = 0x8420302;
        local_4c = 0x400;
        uStack_46 = 0x400;
        uStack_44 = (undefined2)iVar2;
        uStack_42 = (undefined2)((uint)iVar2 >> 0x10);
        local_54 = param_2;
        local_4a = iVar2;
        __os_log_error_impl(0x100000000,PTR___os_log_default_10082cb88,0x10,
                            "getIconPNGData request for bundleId \"%{public}@\" failed (%d / 0x%08X)"
                            ,&local_58,0x18);
      }
      goto LAB_1005c3f08;
    }
    uVar3 = FUN_1001cc310();
    cVar1 = _os_log_type_enabled(uVar3,0x10);
    if (cVar1 != '\0') {
      pcVar6 = "bundleIdentifier != __null";
      goto LAB_1005c3fa2;
    }
  }
  FUN_1001782e9(0,0);
  iVar2 = -0x32;
LAB_1005c3f08:
  if (*(long *)PTR____stack_chk_guard_10082cb58 == local_38) {
    return iVar2;
  }
                    /* WARNING: Subroutine does not return */
  ___stack_chk_fail();
}

