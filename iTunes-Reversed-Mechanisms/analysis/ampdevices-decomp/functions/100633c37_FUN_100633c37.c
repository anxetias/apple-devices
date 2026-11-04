// name: FUN_100633c37
// address: 100633c37

bool FUN_100633c37(ulong param_1,undefined8 *param_2)

{
  char cVar1;
  long lVar2;
  long lVar3;
  long lVar4;
  undefined8 uVar5;
  ulong uVar6;
  ulong uVar7;
  bool bVar8;
  ulong uVar9;
  undefined4 local_48;
  char *local_44;
  undefined2 local_3c;
  char *local_3a;
  long local_30;
  
  local_30 = *(long *)PTR____stack_chk_guard_10082cb58;
  if (param_2 == (undefined8 *)0x0) {
    uVar5 = FUN_1001cc310();
    cVar1 = _os_log_type_enabled(uVar5,0x10);
    if (cVar1 != '\0') {
      local_48 = 0x8220202;
      local_44 = "Assertion failure";
      local_3c = 0x822;
      local_3a = "uniqueID != nullptr";
      __os_log_error_impl(0x100000000,uVar5,0x10,"%{public}s: err == (%d)",&local_48,0x16);
    }
    bVar8 = false;
    FUN_1001782e9(0,0);
  }
  else {
    *param_2 = 0;
    uVar5 = *(undefined8 *)PTR__kCFAllocatorDefault_10082e018;
    lVar2 = _IORegistryEntrySearchCFProperty(param_1,"IOService",&cf_SCSITaskUserClientGUID,uVar5,1)
    ;
    if (lVar2 == 0) {
      lVar2 = _IORegistryEntrySearchCFProperty
                        (param_1 & 0xffffffff,"IOService",&cf_sessionID,uVar5,3);
      if (lVar2 == 0) {
        bVar8 = false;
      }
      else {
        lVar3 = FUN_1001705e9(lVar2);
        lVar4 = FUN_100171f56();
        if (lVar3 != lVar4) {
          uVar5 = FUN_1001cc310();
          cVar1 = _os_log_type_enabled(uVar5,0x10);
          if (cVar1 != '\0') {
            local_48 = 0x8220202;
            local_44 = "Assertion failure";
            local_3c = 0x822;
            local_3a = "JRCFGetTypeID(guidRef) == JRCFNumberGetTypeID()";
            __os_log_error_impl(0x100000000,uVar5,0x10,"%{public}s: err == (%d)",&local_48,0x16);
          }
          FUN_1001782e9(0,0);
        }
        FUN_100169524(lVar2,param_2);
        FUN_10017060f(lVar2);
        bVar8 = true;
      }
    }
    else {
      lVar3 = FUN_1001705e9(lVar2);
      lVar4 = FUN_100170dbb();
      if (lVar3 != lVar4) {
        uVar5 = FUN_1001cc310();
        cVar1 = _os_log_type_enabled(uVar5,0x10);
        if (cVar1 != '\0') {
          local_48 = 0x8220202;
          local_44 = "Assertion failure";
          local_3c = 0x822;
          local_3a = "JRCFGetTypeID(guidRef) == JRCFDataGetTypeID()";
          __os_log_error_impl(0x100000000,uVar5,0x10,"%{public}s: err == (%d)",&local_48,0x16);
        }
        FUN_1001782e9(0,0);
      }
      uVar6 = FUN_100170ef7(lVar2);
      if (0 < (long)uVar6) {
        uVar9 = 8;
        if (8 < uVar6) {
          uVar9 = uVar6;
        }
        uVar7 = 8;
        if (uVar6 < 8) {
          uVar7 = uVar6;
        }
        FUN_100170fc3(lVar2,uVar9 - 8,uVar7,param_2);
      }
      bVar8 = 0 < (long)uVar6;
      FUN_10017060f(lVar2);
    }
  }
  if (*(long *)PTR____stack_chk_guard_10082cb58 == local_30) {
    return bVar8;
  }
                    /* WARNING: Subroutine does not return */
  ___stack_chk_fail();
}

