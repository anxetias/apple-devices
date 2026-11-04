// name: FUN_100150af9
// address: 100150af9

void FUN_100150af9(undefined8 param_1,undefined8 param_2)

{
  long *plVar1;
  long lVar2;
  long lVar3;
  long *plVar4;
  long *plVar5;
  undefined *puVar6;
  undefined *puVar7;
  undefined4 uVar8;
  undefined4 uVar9;
  char cVar10;
  undefined8 uVar11;
  undefined8 *puVar12;
  undefined8 uVar13;
  void *context;
  long lVar14;
  long local_58;
  long *plStack_50;
  undefined4 local_48;
  undefined4 uStack_44;
  undefined4 local_40;
  undefined2 uStack_3c;
  undefined2 uStack_3a;
  undefined6 uStack_38;
  long local_30;
  
  local_30 = *(long *)PTR____stack_chk_guard_10082cb58;
  uVar11 = (*(code *)PTR__objc_retain_10082c7b8)(param_2);
  FUN_10015095e(&local_48);
  if (CONCAT44(uStack_44,local_48) == 0) {
    lVar14 = 0;
  }
  else {
    lVar14 = *(long *)(CONCAT44(uStack_44,local_48) + 0x10);
  }
  plVar4 = (long *)CONCAT26(uStack_3a,CONCAT24(uStack_3c,local_40));
  if (plVar4 != (long *)0x0) {
    LOCK();
    plVar5 = plVar4 + 1;
    lVar2 = *plVar5;
    *plVar5 = *plVar5 + -1;
    UNLOCK();
    if (lVar2 == 0) {
      (**(code **)(*plVar4 + 0x10))(plVar4);
      std::__shared_weak_count::__release_weak();
    }
  }
  puVar12 = operator_new(0x18,(nothrow_t *)PTR_nothrow_10082c970);
  if (puVar12 != (undefined8 *)0x0) {
    *puVar12 = 0;
    *(undefined1 *)(puVar12 + 1) = 0;
    puVar12[2] = 0;
  }
  FUN_100153596(&local_58,puVar12);
  FUN_1001505d2(local_58);
  plVar4 = plStack_50;
  lVar3 = local_58;
  lVar2 = *(long *)(local_58 + 0x10);
  local_58 = 0;
  plStack_50 = (long *)0x0;
  local_48 = (undefined4)lVar3;
  uStack_44 = (undefined4)((ulong)lVar3 >> 0x20);
  local_40 = SUB84(plVar4,0);
  uStack_3c = (undefined2)((ulong)plVar4 >> 0x20);
  uStack_3a = (undefined2)((ulong)plVar4 >> 0x30);
  if (plVar4 != (long *)0x0) {
    LOCK();
    plVar4[1] = plVar4[1] + 1;
    UNLOCK();
  }
  FUN_10015366a(&DAT_1008c4d78,&local_48);
  plVar5 = (long *)CONCAT26(uStack_3a,CONCAT24(uStack_3c,local_40));
  if (plVar5 != (long *)0x0) {
    LOCK();
    plVar1 = plVar5 + 1;
    lVar3 = *plVar1;
    *plVar1 = *plVar1 + -1;
    UNLOCK();
    if (lVar3 == 0) {
      (**(code **)(*plVar5 + 0x10))(plVar5);
      std::__shared_weak_count::__release_weak();
    }
  }
  if (plVar4 != (long *)0x0) {
    LOCK();
    plVar5 = plVar4 + 1;
    lVar3 = *plVar5;
    *plVar5 = *plVar5 + -1;
    UNLOCK();
    if (lVar3 == 0) {
      (**(code **)(*plVar4 + 0x10))(plVar4);
      std::__shared_weak_count::__release_weak();
    }
  }
  uVar13 = FUN_100150562();
  uVar13 = _objc_retainAutoreleasedReturnValue(uVar13);
  cVar10 = _os_log_type_enabled(uVar13,0);
  uVar9 = local_40;
  uVar8 = uStack_44;
  uStack_44 = (undefined4)lVar14;
  local_40 = (undefined4)((ulong)lVar14 >> 0x20);
  if (lVar2 == lVar14) {
    if (cVar10 != '\0') {
      local_48 = 0x8000100;
      __os_log_impl(0x100000000,uVar13,0,
                    "Received user change notification but DSID (%llu) seems unchanged. Ignoring.",
                    &local_48,0xc);
      uVar8 = uStack_44;
      uVar9 = local_40;
    }
    local_40 = uVar9;
    uStack_44 = uVar8;
    (*(code *)PTR__objc_release_10082c7b0)(uVar13);
  }
  else {
    if (cVar10 != '\0') {
      local_48 = 0x8000200;
      uStack_3c = 0x800;
      uStack_3a = (undefined2)lVar2;
      uStack_38 = (undefined6)((ulong)lVar2 >> 0x10);
      __os_log_impl(0x100000000,uVar13,0,
                    "Received user change notification. Changing from %llu to %llu.",&local_48,0x16)
      ;
      uVar8 = uStack_44;
      uVar9 = local_40;
    }
    local_40 = uVar9;
    uStack_44 = uVar8;
    (*(code *)PTR__objc_release_10082c7b0)(uVar13);
    puVar7 = PTR___dispatch_main_q_10082cb60;
    puVar6 = PTR__objc_retain_10082c7b8;
    (*(code *)PTR__objc_retain_10082c7b8)(PTR___dispatch_main_q_10082cb60);
    (*(code *)puVar6)(puVar7);
    context = operator_new(1);
    puVar6 = PTR___dispatch_main_q_10082cb60;
    _dispatch_async_f((dispatch_queue_t)PTR___dispatch_main_q_10082cb60,context,FUN_1001536b8);
    (*(code *)PTR__objc_release_10082c7b0)(puVar6);
    (*(code *)PTR__objc_release_10082c7b0)(PTR___dispatch_main_q_10082cb60);
  }
  if (plStack_50 != (long *)0x0) {
    LOCK();
    plVar4 = plStack_50 + 1;
    lVar14 = *plVar4;
    *plVar4 = *plVar4 + -1;
    UNLOCK();
    if (lVar14 == 0) {
      (**(code **)(*plStack_50 + 0x10))(plStack_50);
      std::__shared_weak_count::__release_weak();
    }
  }
  (*(code *)PTR__objc_release_10082c7b0)(uVar11);
  if (*(long *)PTR____stack_chk_guard_10082cb58 == local_30) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  ___stack_chk_fail();
}

