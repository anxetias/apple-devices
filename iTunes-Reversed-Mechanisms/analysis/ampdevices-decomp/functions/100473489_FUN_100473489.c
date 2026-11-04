// name: FUN_100473489
// address: 100473489

void FUN_100473489(long *param_1)

{
  long *plVar1;
  long lVar2;
  void *pvVar3;
  long *plVar4;
  char cVar5;
  undefined8 uVar6;
  undefined8 *puVar7;
  long lVar8;
  undefined4 local_48;
  undefined4 uStack_44;
  undefined4 uStack_40;
  undefined2 uStack_3c;
  undefined2 uStack_3a;
  undefined6 uStack_38;
  long local_30;
  
  local_30 = *(long *)PTR____stack_chk_guard_10082cb58;
  if ((param_1 == (long *)0x0) || (lVar8 = param_1[2], lVar8 == 0)) {
    lVar8 = 0;
  }
  else {
    if (*(int *)(lVar8 + 0x80) == 0x74646174) goto LAB_10047351c;
    uVar6 = FUN_1001cc310();
    cVar5 = _os_log_type_enabled(uVar6,0x10);
    if (cVar5 != '\0') {
      local_48 = 0x8220202;
      uStack_44 = 0x7ab58c;
      uStack_40 = 1;
      uStack_3c = 0x822;
      uStack_3a = 0xec03;
      uStack_38 = 0x1007a;
      __os_log_error_impl(0x100000000,uVar6,0x10,"%{public}s: (%{public}s)",&local_48,0x16);
    }
    cVar5 = FUN_1001782e9(0,1);
    if (cVar5 != '\0') goto LAB_10047351c;
  }
  uVar6 = FUN_1001cc310();
  cVar5 = _os_log_type_enabled(uVar6,0x10);
  if (cVar5 != '\0') {
    local_48 = 0x8220202;
    uStack_44 = 0x7a0a90;
    uStack_40 = 1;
    uStack_3c = 0x822;
    uStack_3a = 0xe894;
    uStack_38 = 0x1007a;
    __os_log_error_impl(0x100000000,uVar6,0x10,"%{public}s: (%{public}s)",&local_48,0x16);
  }
  FUN_1001782e9(0,0);
LAB_10047351c:
  param_1[3] = 0;
  lVar2 = *(long *)(lVar8 + 0x1b70);
  param_1[4] = lVar2;
  if (lVar2 == 0) {
    if (*(long *)(lVar8 + 0x1b68) != 0) {
      uVar6 = FUN_1001cc310();
      cVar5 = _os_log_type_enabled(uVar6,0x10);
      if (cVar5 != '\0') {
        local_48 = 0x8220202;
        uStack_44 = 0x7a0a90;
        uStack_40 = 1;
        uStack_3c = 0x822;
        uStack_3a = 0x19c4;
        uStack_38 = 0x1007d;
        __os_log_error_impl(0x100000000,uVar6,0x10,"%{public}s: (%{public}s)",&local_48,0x16);
      }
      FUN_1001782e9(0,0);
    }
    puVar7 = (undefined8 *)(lVar8 + 0x1b68);
    if (*(int *)(lVar8 + 0x9c) != 0) {
      uVar6 = FUN_1001cc310();
      cVar5 = _os_log_type_enabled(uVar6,0x10);
      if (cVar5 != '\0') {
        local_48 = 0x8220202;
        uStack_44 = 0x7a0a90;
        uStack_40 = 1;
        uStack_3c = 0x822;
        uStack_3a = 0xe8dc;
        uStack_38 = 0x1007b;
        __os_log_error_impl(0x100000000,uVar6,0x10,"%{public}s: (%{public}s)",&local_48,0x16);
      }
      FUN_1001782e9(0,0);
    }
  }
  else {
    puVar7 = (undefined8 *)(lVar2 + 0x18);
  }
  *puVar7 = param_1;
  *(long **)(lVar8 + 0x1b70) = param_1;
  *(int *)(lVar8 + 0x9c) = *(int *)(lVar8 + 0x9c) + 1;
  *(byte *)(lVar8 + 0x1bb0) = *(byte *)(lVar8 + 0x1bb0) | 0x20;
  FUN_100473c15(param_1);
  if ((int)param_1[1] != 0) {
    FUN_100401774(lVar8 + 0x2570,(int)param_1[1],param_1);
  }
  if (*param_1 != 0) {
    FUN_100401874(lVar8 + 0x2598,*param_1,param_1);
  }
  if (param_1[0x31] != 0) {
    FUN_100401874(lVar8 + 0x25c0,param_1[0x31],param_1);
  }
  if (*(long *)(lVar8 + 0x2750) != 0) {
    FUN_1001c64c1();
  }
  *(undefined8 *)(lVar8 + 0x2750) = 0;
  local_48 = 0;
  uStack_44 = 0;
  uStack_40 = 0;
  uStack_3c = 0;
  uStack_3a = 0;
  FUN_100217418(lVar8 + 0x2758,&local_48);
  plVar4 = (long *)CONCAT26(uStack_3a,CONCAT24(uStack_3c,uStack_40));
  if (plVar4 != (long *)0x0) {
    LOCK();
    plVar1 = plVar4 + 1;
    lVar2 = *plVar1;
    *plVar1 = *plVar1 + -1;
    UNLOCK();
    if (lVar2 == 0) {
      (**(code **)(*plVar4 + 0x10))(plVar4);
      std::__shared_weak_count::__release_weak();
    }
  }
  pvVar3 = *(void **)(lVar8 + 0x2738);
  if (pvVar3 != (void *)0x0) {
    FUN_1002a41f4(pvVar3,*(undefined8 *)((long)pvVar3 + 8));
    operator_delete(pvVar3);
  }
  *(undefined8 *)(lVar8 + 0x2738) = 0;
  if (*(long *)PTR____stack_chk_guard_10082cb58 != local_30) {
                    /* WARNING: Subroutine does not return */
    ___stack_chk_fail();
  }
  return;
}

