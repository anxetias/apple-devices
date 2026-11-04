// name: FUN_10051ad69
// address: 10051ad69

undefined8 FUN_10051ad69(long param_1)

{
  char cVar1;
  int iVar2;
  undefined8 uVar3;
  long lVar4;
  long lVar5;
  long lVar6;
  long lVar7;
  undefined4 local_48;
  char *local_44;
  undefined2 local_3c;
  char *local_3a;
  long local_30;
  
  local_30 = *(long *)PTR____stack_chk_guard_10082cb58;
  if (*(char *)(param_1 + 0x388) == '\0') {
    uVar3 = FUN_1001cc310();
    cVar1 = _os_log_type_enabled(uVar3,0x10);
    if (cVar1 != '\0') {
      local_48 = 0x8220202;
      local_44 = "Assertion failure";
      local_3c = 0x822;
      local_3a = "handlerData->deviceInfo.supportsGenius";
      __os_log_error_impl(0x100000000,uVar3,0x10,"%{public}s: (%{public}s)",&local_48,0x16);
    }
    FUN_1001782e9(0,0);
  }
  if (*(char *)(param_1 + 0x14cda) == '\0') {
    lVar4 = FUN_1004e0c3f(param_1,1);
    if (lVar4 == 0) {
      uVar3 = FUN_1001cc310();
      cVar1 = _os_log_type_enabled(uVar3,0x10);
      if (cVar1 != '\0') {
        local_48 = 0x8220202;
        local_44 = "Assertion failure";
        local_3c = 0x822;
        local_3a = "sourceTrackData != nullptr";
        __os_log_error_impl(0x100000000,uVar3,0x10,"%{public}s: (%{public}s)",&local_48,0x16);
      }
      uVar3 = 0;
      FUN_1001782e9(0,0);
      goto LAB_10051adc4;
    }
    for (lVar5 = FUN_1002f930c(*(undefined8 *)(param_1 + 0x30)); lVar5 != 0;
        lVar5 = FUN_1002f9451(lVar5)) {
      lVar7 = *(long *)(lVar5 + 0x180);
      lVar6 = FUN_100309008(lVar4);
      if ((lVar7 == lVar6) &&
         (lVar7 = FUN_100300729(lVar4,*(undefined8 *)(lVar5 + 0x188)), lVar7 != 0)) {
        if (*(char *)(param_1 + 0x14df8) == '\0') {
          lVar6 = *(long *)(lVar7 + 400);
          iVar2 = *(int *)(lVar7 + 0x198);
        }
        else {
          lVar6 = 0;
          iVar2 = 0;
        }
        uVar3 = 1;
        if ((*(long *)(lVar5 + 400) != lVar6) || (*(int *)(lVar5 + 0x198) != iVar2))
        goto LAB_10051adc4;
      }
    }
  }
  uVar3 = 0;
LAB_10051adc4:
  if (*(long *)PTR____stack_chk_guard_10082cb58 == local_30) {
    return uVar3;
  }
                    /* WARNING: Subroutine does not return */
  ___stack_chk_fail();
}

