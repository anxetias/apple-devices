// name: FUN_10027d134
// address: 10027d134

void FUN_10027d134(undefined8 *param_1)

{
  long *plVar1;
  long lVar2;
  long *plVar3;
  ulong uVar4;
  undefined8 *puVar5;
  void *pvVar6;
  undefined8 *puVar7;
  undefined *puVar8;
  char cVar9;
  undefined8 uVar10;
  ulong uVar11;
  undefined8 uVar12;
  undefined8 uVar13;
  undefined8 uVar14;
  undefined8 uVar15;
  undefined4 local_68;
  ulong local_64;
  undefined2 local_5c;
  undefined8 local_5a;
  undefined2 local_52;
  undefined8 local_50;
  undefined2 local_48;
  undefined8 local_46;
  undefined2 local_3e;
  undefined8 local_3c;
  long local_28;
  
  local_28 = *(long *)PTR____stack_chk_guard_10082cb58;
  *param_1 = &PTR_FUN_100855e38;
  uVar10 = param_1[5];
  param_1[5] = 0;
  puVar8 = PTR__objc_release_10082c7b0;
  (*(code *)PTR__objc_release_10082c7b0)(uVar10);
  uVar10 = param_1[6];
  param_1[6] = 0;
  (*(code *)puVar8)(uVar10);
  plVar3 = (long *)param_1[8];
  param_1[7] = 0;
  param_1[8] = 0;
  if (plVar3 != (long *)0x0) {
    LOCK();
    plVar1 = plVar3 + 1;
    lVar2 = *plVar1;
    *plVar1 = *plVar1 + -1;
    UNLOCK();
    if (lVar2 == 0) {
      (**(code **)(*plVar3 + 0x10))(plVar3);
      std::__shared_weak_count::__release_weak();
    }
  }
  if (DAT_1008c7568 != -1) {
    _dispatch_once(&DAT_1008c7568,&PTR___NSConcreteGlobalBlock_100855dc0);
  }
  uVar10 = (*(code *)PTR__objc_retain_10082c7b8)(DAT_1008c7560);
  cVar9 = _os_log_type_enabled(uVar10,1);
  if (cVar9 != '\0') {
    uVar4 = param_1[0x14];
    if (param_1[0x15] == 0) {
      uVar15 = 0;
      uVar11 = uVar4;
    }
    else {
      uVar15 = FUN_1001cc0ac();
      uVar11 = param_1[0x14];
    }
    if (uVar11 == 0) {
      uVar11 = 0;
    }
    else {
      uVar11 = (ulong)param_1[0x15] / uVar11;
    }
    uVar12 = FUN_1001cc0ac(uVar11);
    local_3c = 0;
    uVar13 = 0;
    if (param_1[0x16] != -1) {
      uVar13 = FUN_1001cc0ac();
    }
    if (param_1[0x17] != 0) {
      local_3c = FUN_1001cc0ac();
    }
    local_68 = 0x8000500;
    local_5c = 0x800;
    local_52 = 0x800;
    local_48 = 0x800;
    local_3e = 0x800;
    local_64 = uVar4;
    local_5a = uVar15;
    local_50 = uVar12;
    local_46 = uVar13;
    __os_log_impl(0x100000000,uVar10,1,
                  "     Fetch Stats: #:%.5llu Tot:%.5f Avg:%.5f Min:%.5f Max:%.5f",&local_68,0x34,
                  uVar12,uVar13,local_3c,uVar15);
  }
  (*(code *)PTR__objc_release_10082c7b0)(uVar10);
  if (DAT_1008c7568 != -1) {
    _dispatch_once(&DAT_1008c7568,&PTR___NSConcreteGlobalBlock_100855dc0);
  }
  uVar10 = (*(code *)PTR__objc_retain_10082c7b8)(DAT_1008c7560);
  cVar9 = _os_log_type_enabled(uVar10,1);
  if (cVar9 != '\0') {
    uVar4 = param_1[0x19];
    if (param_1[0x1a] == 0) {
      uVar15 = 0;
      uVar11 = uVar4;
    }
    else {
      uVar15 = FUN_1001cc0ac();
      uVar11 = param_1[0x19];
    }
    if (uVar11 == 0) {
      uVar11 = 0;
    }
    else {
      uVar11 = (ulong)param_1[0x1a] / uVar11;
    }
    uVar12 = FUN_1001cc0ac(uVar11);
    uVar14 = 0;
    uVar13 = 0;
    if (param_1[0x1b] != -1) {
      uVar13 = FUN_1001cc0ac();
    }
    if (param_1[0x1c] != 0) {
      uVar14 = FUN_1001cc0ac();
    }
    local_68 = 0x8000500;
    local_5c = 0x800;
    local_52 = 0x800;
    local_48 = 0x800;
    local_3e = 0x800;
    local_64 = uVar4;
    local_5a = uVar15;
    local_50 = uVar12;
    local_46 = uVar13;
    local_3c = uVar14;
    __os_log_impl(0x100000000,uVar10,1,
                  " Add Image Stats: #:%.5llu Tot:%.5f Avg:%.5f Min:%.5f Max:%.5f",&local_68,0x34,
                  uVar12,uVar13,uVar14,uVar15);
  }
  (*(code *)PTR__objc_release_10082c7b0)(uVar10);
  if (DAT_1008c7568 != -1) {
    _dispatch_once(&DAT_1008c7568,&PTR___NSConcreteGlobalBlock_100855dc0);
  }
  uVar10 = (*(code *)PTR__objc_retain_10082c7b8)(DAT_1008c7560);
  cVar9 = _os_log_type_enabled(uVar10,1);
  if (cVar9 != '\0') {
    uVar4 = param_1[0x1e];
    if (param_1[0x1a] == 0) {
      uVar15 = 0;
    }
    else {
      uVar15 = FUN_1001cc0ac();
    }
    if (param_1[0x19] == 0) {
      uVar11 = 0;
    }
    else {
      uVar11 = (ulong)param_1[0x1a] / (ulong)param_1[0x19];
    }
    uVar12 = FUN_1001cc0ac(uVar11);
    uVar14 = 0;
    uVar13 = 0;
    if (param_1[0x1b] != -1) {
      uVar13 = FUN_1001cc0ac();
    }
    if (param_1[0x1c] != 0) {
      uVar14 = FUN_1001cc0ac();
    }
    local_68 = 0x8000500;
    local_5c = 0x800;
    local_52 = 0x800;
    local_48 = 0x800;
    local_3e = 0x800;
    local_64 = uVar4;
    local_5a = uVar15;
    local_50 = uVar12;
    local_46 = uVar13;
    local_3c = uVar14;
    __os_log_impl(0x100000000,uVar10,1,
                  "Add Remote Stats: #:%.5llu Tot:%.5f Avg:%.5f Min:%.5f Max:%.5f",&local_68,0x34,
                  uVar12,uVar13,uVar14,uVar15);
  }
  (*(code *)PTR__objc_release_10082c7b0)(uVar10);
  if (DAT_1008c7568 != -1) {
    _dispatch_once(&DAT_1008c7568,&PTR___NSConcreteGlobalBlock_100855dc0);
  }
  uVar10 = (*(code *)PTR__objc_retain_10082c7b8)(DAT_1008c7560);
  cVar9 = _os_log_type_enabled(uVar10,1);
  if (cVar9 != '\0') {
    uVar4 = param_1[0x23];
    if (param_1[0x24] == 0) {
      uVar15 = 0;
      uVar11 = uVar4;
    }
    else {
      uVar15 = FUN_1001cc0ac();
      uVar11 = param_1[0x23];
    }
    if (uVar11 == 0) {
      uVar11 = 0;
    }
    else {
      uVar11 = (ulong)param_1[0x24] / uVar11;
    }
    uVar12 = FUN_1001cc0ac(uVar11);
    uVar14 = 0;
    uVar13 = 0;
    if (param_1[0x25] != -1) {
      uVar13 = FUN_1001cc0ac();
    }
    if (param_1[0x26] != 0) {
      uVar14 = FUN_1001cc0ac();
    }
    local_68 = 0x8000500;
    local_5c = 0x800;
    local_52 = 0x800;
    local_48 = 0x800;
    local_3e = 0x800;
    local_64 = uVar4;
    local_5a = uVar15;
    local_50 = uVar12;
    local_46 = uVar13;
    local_3c = uVar14;
    __os_log_impl(0x100000000,uVar10,1,
                  "     Purge Stats: #:%.5llu Tot:%.5f Avg:%.5f Min:%.5f Max:%.5f",&local_68,0x34,
                  uVar12,uVar13,uVar14,uVar15);
  }
  (*(code *)PTR__objc_release_10082c7b0)(uVar10);
  puVar7 = (undefined8 *)param_1[0x29];
  while (puVar7 != (undefined8 *)0x0) {
    puVar5 = (undefined8 *)*puVar7;
    FUN_1002842e4(puVar7 + 5);
    operator_delete(puVar7);
    puVar7 = puVar5;
  }
  pvVar6 = (void *)param_1[0x27];
  param_1[0x27] = 0;
  if (pvVar6 != (void *)0x0) {
    operator_delete(pvVar6);
  }
  std::mutex::~mutex((mutex *)(param_1 + 0xb));
  (*(code *)PTR__objc_release_10082c7b0)(param_1[9]);
  FUN_100205d70(param_1 + 7);
  (*(code *)PTR__objc_release_10082c7b0)(param_1[6]);
  (*(code *)PTR__objc_release_10082c7b0)(param_1[5]);
  if (param_1[4] != 0) {
    std::__shared_weak_count::__release_weak();
  }
  if (param_1[2] != 0) {
    std::__shared_weak_count::__release_weak();
  }
  if (*(long *)PTR____stack_chk_guard_10082cb58 != local_28) {
                    /* WARNING: Subroutine does not return */
    ___stack_chk_fail();
  }
  return;
}

