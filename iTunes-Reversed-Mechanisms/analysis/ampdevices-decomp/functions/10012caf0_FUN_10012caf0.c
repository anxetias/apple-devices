// name: FUN_10012caf0
// address: 10012caf0

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10012caf0(long param_1,long *param_2,undefined8 *param_3)

{
  long *plVar1;
  long *plVar2;
  char cVar3;
  void *pvVar4;
  undefined8 uVar5;
  undefined8 *puVar6;
  long *plVar7;
  char *pcVar8;
  undefined8 uVar9;
  double dVar10;
  long lVar11;
  long *local_58;
  long *local_50;
  undefined2 local_48;
  undefined2 uStack_46;
  undefined4 uStack_44;
  undefined4 uStack_40;
  undefined4 uStack_3c;
  long local_30;
  
  local_30 = *(long *)PTR____stack_chk_guard_10082cb58;
  uVar9 = *param_3;
  plVar2 = (long *)param_3[1];
  *param_3 = 0;
  param_3[1] = 0;
  pvVar4 = operator_new(0x20,(nothrow_t *)PTR_nothrow_10082c970);
  if (pvVar4 != (void *)0x0) {
    FUN_10032f0f2(pvVar4);
    *(undefined4 *)((long)pvVar4 + 0x10) = 1;
    dVar10 = (double)FUN_1001711e2();
    *(double *)((long)pvVar4 + 0x18) = dVar10 + DAT_100700af8;
  }
  FUN_10012c6d8(&local_58,pvVar4);
  *(undefined4 *)(local_58 + 2) = 2;
  if (*param_2 == 0) {
    cVar3 = FUN_100153e86(uVar9);
    if (cVar3 == '\0') {
      uVar5 = FUN_10012a714();
      cVar3 = _os_log_type_enabled(uVar5,0x10);
      if (cVar3 == '\0') goto LAB_10012cd36;
      uVar9 = FUN_100153f22(uVar9);
      local_48 = 0x100;
      uStack_46 = 0x800;
      uStack_44 = (undefined4)uVar9;
      uStack_40 = (undefined4)((ulong)uVar9 >> 0x20);
      pcVar8 = "Error retrieving bag. Request failed with HTTP code %ld.";
      goto LAB_10012cd23;
    }
    puVar6 = (undefined8 *)FUN_100153f3a(uVar9);
    FUN_1001a8d5a(&local_48,*puVar6,1);
    FUN_1001a7b1c(local_58,&local_48);
    FUN_1001a8fac(&local_48);
    lVar11 = *local_58;
    uVar5 = FUN_10012a714();
    if (lVar11 != 0) {
      cVar3 = _os_log_type_enabled(uVar5,1);
      if (cVar3 != '\0') {
        local_48 = 0;
        __os_log_impl(0x100000000,uVar5,1,"Successfully parsed bag response.",&local_48,2);
      }
      lVar11 = FUN_100153f14(uVar9);
      local_58[3] = lVar11;
      dVar10 = (double)FUN_1001711e2();
      if ((double)local_58[3] <= dVar10 && dVar10 != (double)local_58[3]) {
        uVar9 = FUN_10012a714();
        cVar3 = _os_log_type_enabled(uVar9,1);
        if (cVar3 != '\0') {
          local_48 = 0;
          __os_log_impl(0x100000000,uVar9,1,
                        "New bag expiration date is in the past. Setting bag expiration 30 seconds from now."
                        ,&local_48,2);
        }
        dVar10 = (double)FUN_1001711e2();
        local_58[3] = (long)(dVar10 + _DAT_100707dc0);
      }
      *(undefined4 *)(local_58 + 2) = 0;
      goto LAB_10012cd36;
    }
    cVar3 = _os_log_type_enabled(uVar5,0x10);
    if (cVar3 == '\0') goto LAB_10012cd36;
    local_48 = 0;
    pcVar8 = "Error parsing bag dictionary.";
    uVar9 = 2;
  }
  else {
    uVar5 = FUN_10012a714();
    cVar3 = _os_log_type_enabled(uVar5,0x10);
    if (cVar3 == '\0') goto LAB_10012cd36;
    local_48 = 0x102;
    uStack_46 = 0x840;
    uStack_44 = (undefined4)*param_2;
    uStack_40 = (undefined4)((ulong)*param_2 >> 0x20);
    pcVar8 = "Error retrieving bag. Error details: %@.";
LAB_10012cd23:
    uVar9 = 0xc;
  }
  __os_log_impl(0x100000000,uVar5,0x10,pcVar8,&local_48,uVar9);
LAB_10012cd36:
  if (*(long *)(param_1 + 0x10) != 0) {
    plVar7 = (long *)std::__shared_weak_count::lock();
    uStack_40 = SUB84(plVar7,0);
    uStack_3c = (undefined4)((ulong)plVar7 >> 0x20);
    if (plVar7 != (long *)0x0) {
      lVar11 = *(long *)(param_1 + 8);
      local_48 = (undefined2)lVar11;
      uStack_46 = (undefined2)((ulong)lVar11 >> 0x10);
      uStack_44 = (undefined4)((ulong)lVar11 >> 0x20);
      if (lVar11 != 0) {
        FUN_10012af4e(lVar11,&local_58);
      }
      LOCK();
      plVar1 = plVar7 + 1;
      lVar11 = *plVar1;
      *plVar1 = *plVar1 + -1;
      UNLOCK();
      if (lVar11 == 0) {
        (**(code **)(*plVar7 + 0x10))(plVar7);
        std::__shared_weak_count::__release_weak();
      }
    }
  }
  if (local_50 != (long *)0x0) {
    LOCK();
    plVar7 = local_50 + 1;
    lVar11 = *plVar7;
    *plVar7 = *plVar7 + -1;
    UNLOCK();
    if (lVar11 == 0) {
      (**(code **)(*local_50 + 0x10))(local_50);
      std::__shared_weak_count::__release_weak();
    }
  }
  if (plVar2 != (long *)0x0) {
    LOCK();
    plVar7 = plVar2 + 1;
    lVar11 = *plVar7;
    *plVar7 = *plVar7 + -1;
    UNLOCK();
    if (lVar11 == 0) {
      (**(code **)(*plVar2 + 0x10))(plVar2);
      std::__shared_weak_count::__release_weak();
    }
  }
  if (*(long *)PTR____stack_chk_guard_10082cb58 == local_30) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  ___stack_chk_fail();
}

