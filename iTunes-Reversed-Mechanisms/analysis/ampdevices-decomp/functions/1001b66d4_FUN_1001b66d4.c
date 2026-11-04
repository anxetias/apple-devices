// name: FUN_1001b66d4
// address: 1001b66d4

undefined4
FUN_1001b66d4(undefined8 param_1,undefined4 param_2,long param_3,undefined8 param_4,
             undefined8 param_5,long *param_6)

{
  long *plVar1;
  long *plVar2;
  char cVar3;
  long lVar4;
  undefined8 uVar5;
  long lVar6;
  long lVar7;
  long lVar8;
  long lVar9;
  long lVar10;
  undefined4 local_5c;
  undefined4 local_58;
  char *local_54;
  undefined2 local_4c;
  char *local_4a;
  long local_38;
  
  local_38 = *(long *)PTR____stack_chk_guard_10082cb58;
  lVar4 = param_6[1] - *param_6;
  if (lVar4 == 0) {
    local_5c = 0;
  }
  else {
    lVar7 = lVar4 >> 4;
    local_5c = 0;
    do {
      lVar4 = lVar4 + -0x10;
      lVar7 = lVar7 + -1;
      lVar8 = lVar7 * 0x10;
      lVar9 = *(long *)(*param_6 + lVar8);
      plVar2 = *(long **)(*param_6 + 8 + lVar8);
      if (plVar2 != (long *)0x0) {
        LOCK();
        plVar2[1] = plVar2[1] + 1;
        UNLOCK();
      }
      if (lVar9 == 0) {
        uVar5 = FUN_1001cc310();
        cVar3 = _os_log_type_enabled(uVar5,0x10);
        if (cVar3 != '\0') {
          local_58 = 0x8220202;
          local_54 = "Assertion failure (expected to be not NULL)";
          local_4c = 0x822;
          local_4a = "notificationRegistration";
          __os_log_error_impl(0x100000000,uVar5,0x10,"%{public}s: (%{public}s)",&local_58,0x16);
        }
        cVar3 = FUN_1001782e9(0,0);
        if (cVar3 != '\0') goto LAB_1001b678d;
LAB_1001b67b2:
        lVar9 = *param_6;
        lVar10 = param_6[1];
        lVar6 = lVar9 + lVar8;
        if (lVar9 + lVar8 + 0x10 != lVar10) {
          lVar6 = lVar9 + lVar4;
          lVar9 = lVar9 + lVar8;
          do {
            FUN_100217418(lVar9,lVar9 + 0x10);
            lVar6 = lVar6 + 0x10;
            lVar8 = lVar9 + 0x20;
            lVar9 = lVar9 + 0x10;
          } while (lVar8 != lVar10);
          lVar10 = param_6[1];
        }
        while (lVar10 != lVar6) {
          lVar10 = lVar10 + -0x10;
          FUN_100205d70(lVar10);
        }
        param_6[1] = lVar6;
        local_5c = (undefined4)CONCAT71((int7)((ulong)param_6 >> 8),1);
      }
      else {
LAB_1001b678d:
        if ((*(long *)(lVar9 + 0x50) == param_3) &&
           (cVar3 = FUN_1001b68fe(lVar9,param_2,param_4,param_5), cVar3 != '\x02'))
        goto LAB_1001b67b2;
      }
      if (plVar2 != (long *)0x0) {
        LOCK();
        plVar1 = plVar2 + 1;
        lVar9 = *plVar1;
        *plVar1 = *plVar1 + -1;
        UNLOCK();
        if (lVar9 == 0) {
          (**(code **)(*plVar2 + 0x10))(plVar2);
          std::__shared_weak_count::__release_weak();
        }
      }
    } while (lVar7 != 0);
  }
  if (*(long *)PTR____stack_chk_guard_10082cb58 != local_38) {
                    /* WARNING: Subroutine does not return */
    ___stack_chk_fail();
  }
  return local_5c;
}

