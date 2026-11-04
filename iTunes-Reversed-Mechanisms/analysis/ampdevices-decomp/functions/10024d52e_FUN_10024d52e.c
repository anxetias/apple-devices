// name: FUN_10024d52e
// address: 10024d52e

ulong FUN_10024d52e(undefined8 param_1,undefined8 param_2)

{
  char cVar1;
  long lVar2;
  long lVar3;
  long lVar4;
  long lVar5;
  undefined8 uVar6;
  ulong uVar7;
  undefined4 local_58;
  char *local_54;
  undefined2 local_4c;
  char *local_4a;
  long local_38;
  
  local_38 = *(long *)PTR____stack_chk_guard_10082cb58;
  lVar2 = FUN_1001cd749(&cf_iOSBuildEligibilityCache,0);
  if (lVar2 == 0) {
LAB_10024d61e:
    lVar4 = 0;
    lVar3 = 0;
  }
  else {
    lVar3 = _CFDictionaryGetTypeID();
    lVar4 = _CFGetTypeID(lVar2);
    if (lVar3 != lVar4) goto LAB_10024d61e;
    lVar3 = FUN_100165701(DAT_1008c4d90,param_1);
    if (lVar3 == 0) {
      uVar6 = FUN_1001cc310();
      cVar1 = _os_log_type_enabled(uVar6,0x10);
      if (cVar1 != '\0') {
        local_58 = 0x8220202;
        local_54 = "Assertion failure";
        local_4c = 0x822;
        local_4a = "ecidNumber != nullptr";
        __os_log_error_impl(0x100000000,uVar6,0x10,"%{public}s: (%{public}s)",&local_58,0x16);
      }
      FUN_1001782e9(0,0);
      goto LAB_10024d61e;
    }
    lVar4 = FUN_1001736b8(DAT_1008c4d90,0,&cf___,lVar3);
    if (lVar4 == 0) {
      uVar6 = FUN_1001cc310();
      cVar1 = _os_log_type_enabled(uVar6,0x10);
      if (cVar1 != '\0') {
        local_58 = 0x8220202;
        local_54 = "Assertion failure";
        local_4c = 0x822;
        local_4a = "ecidString != nullptr";
        __os_log_error_impl(0x100000000,uVar6,0x10,"%{public}s: (%{public}s)",&local_58,0x16);
      }
      lVar4 = 0;
      FUN_1001782e9(0,0);
    }
    else {
      lVar5 = FUN_100166844(lVar2,lVar4);
      if (lVar5 != 0) {
        uVar6 = FUN_10017076e(lVar5);
        cVar1 = FUN_100170781(lVar5,0,uVar6,param_2);
        uVar7 = CONCAT71((int7)((ulong)param_2 >> 8),cVar1 != '\0');
        goto LAB_10024d624;
      }
    }
  }
  uVar7 = 0;
LAB_10024d624:
  FUN_10017060f(lVar4);
  FUN_10017060f(lVar3);
  FUN_10017060f(lVar2);
  if (*(long *)PTR____stack_chk_guard_10082cb58 != local_38) {
                    /* WARNING: Subroutine does not return */
    ___stack_chk_fail();
  }
  return uVar7 & 0xffffffff;
}

