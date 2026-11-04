// name: FUN_100150df2
// address: 100150df2

void FUN_100150df2(undefined8 param_1,undefined8 param_2)

{
  long *plVar1;
  undefined *puVar2;
  undefined *puVar3;
  char cVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  long lVar9;
  undefined8 *puVar10;
  long *plVar11;
  void *context;
  long lVar12;
  undefined8 local_f0;
  undefined8 *local_e8;
  undefined8 local_e0;
  undefined8 local_d8;
  long local_d0;
  long *local_c8;
  long local_c0;
  long *local_b8;
  long local_b0;
  undefined8 local_a8;
  long local_a0;
  long local_98;
  long *plStack_90;
  long local_88;
  long *plStack_80;
  undefined8 local_70;
  undefined4 local_68;
  undefined4 uStack_64;
  undefined4 local_60;
  undefined2 uStack_5c;
  undefined2 uStack_5a;
  undefined6 local_58;
  undefined2 uStack_52;
  undefined *local_50;
  undefined8 *local_48;
  long local_38;
  
  local_38 = *(long *)PTR____stack_chk_guard_10082cb58;
  uVar5 = (*(code *)PTR__objc_retain_10082c7b8)(param_2);
  puVar3 = PTR_s_userInfo_10088be88;
  uVar6 = (*(code *)PTR__objc_msgSend_10082c770)(uVar5,PTR_s_userInfo_10088be88);
  uVar6 = _objc_retainAutoreleasedReturnValue(uVar6);
  puVar2 = PTR_s_objectForKeyedSubscript__10088be30;
  uVar7 = (*(code *)PTR__objc_msgSend_10082c770)
                    (uVar6,PTR_s_objectForKeyedSubscript__10088be30,&cf_dsid);
  uVar7 = _objc_retainAutoreleasedReturnValue(uVar7);
  (*(code *)PTR__objc_release_10082c7b0)(uVar6);
  uVar6 = (*(code *)PTR__objc_msgSend_10082c770)(uVar5,puVar3);
  uVar8 = _objc_retainAutoreleasedReturnValue(uVar6);
  uVar6 = (*(code *)PTR__objc_msgSend_10082c770)(uVar8,puVar2,&cf_properties);
  uVar6 = _objc_retainAutoreleasedReturnValue(uVar6);
  (*(code *)PTR__objc_release_10082c7b0)(uVar8);
  uVar8 = _objc_opt_class(PTR__OBJC_CLASS___NSNumber_10082c690);
  cVar4 = _objc_opt_isKindOfClass(uVar7,uVar8);
  if (cVar4 == '\0') {
    uVar8 = FUN_1001cc310();
    uVar8 = _objc_retainAutoreleasedReturnValue(uVar8);
    cVar4 = _os_log_type_enabled(uVar8,0x10);
    if (cVar4 != '\0') {
      FUN_100153cdb(uVar8);
    }
    (*(code *)PTR__objc_release_10082c7b0)(uVar8);
    cVar4 = FUN_1001782e9(0,1);
    if (cVar4 == '\0') goto LAB_100151352;
  }
  uVar8 = _objc_opt_class(PTR__OBJC_CLASS___NSArray_10082df78);
  cVar4 = _objc_opt_isKindOfClass(uVar6,uVar8);
  if (cVar4 == '\0') {
    uVar8 = FUN_1001cc310();
    uVar8 = _objc_retainAutoreleasedReturnValue(uVar8);
    cVar4 = _os_log_type_enabled(uVar8,0x10);
    if (cVar4 != '\0') {
      FUN_100153d51(uVar8);
    }
    (*(code *)PTR__objc_release_10082c7b0)(uVar8);
    cVar4 = FUN_1001782e9(0,1);
    if (cVar4 == '\0') goto LAB_100151352;
  }
  FUN_10015095e(&local_d0);
  puVar2 = PTR_s_unsignedLongLongValue_10088be80;
  if (local_d0 == 0) {
    lVar12 = 0;
  }
  else {
    lVar12 = *(long *)(local_d0 + 0x10);
  }
  lVar9 = (*(code *)PTR__objc_msgSend_10082c770)(uVar7,PTR_s_unsignedLongLongValue_10088be80);
  if (lVar9 == lVar12) {
    puVar10 = operator_new(0x18,(nothrow_t *)PTR_nothrow_10082c970);
    if (puVar10 != (undefined8 *)0x0) {
      *puVar10 = 0;
      *(undefined1 *)(puVar10 + 1) = 0;
      puVar10[2] = 0;
    }
    local_70 = uVar7;
    FUN_100153596(&local_98,puVar10);
    FUN_1001505d2(local_98);
    plVar1 = plStack_90;
    lVar9 = local_98;
    local_a0 = *(long *)(local_98 + 0x10);
    local_c0 = local_98;
    local_b8 = plStack_90;
    local_98 = 0;
    plStack_90 = (long *)0x0;
    local_68 = (undefined4)lVar9;
    uStack_64 = (undefined4)((ulong)lVar9 >> 0x20);
    local_60 = SUB84(plVar1,0);
    uStack_5c = (undefined2)((ulong)plVar1 >> 0x20);
    uStack_5a = (undefined2)((ulong)plVar1 >> 0x30);
    if (plVar1 != (long *)0x0) {
      LOCK();
      plVar1[1] = plVar1[1] + 1;
      UNLOCK();
    }
    local_b0 = lVar12;
    FUN_10015366a(&DAT_1008c4d78,&local_68);
    plVar1 = (long *)CONCAT26(uStack_5a,CONCAT24(uStack_5c,local_60));
    if (plVar1 != (long *)0x0) {
      LOCK();
      plVar11 = plVar1 + 1;
      lVar12 = *plVar11;
      *plVar11 = *plVar11 + -1;
      UNLOCK();
      if (lVar12 == 0) {
        (**(code **)(*plVar1 + 0x10))(plVar1);
        std::__shared_weak_count::__release_weak();
      }
    }
    if (local_b8 != (long *)0x0) {
      LOCK();
      plVar1 = local_b8 + 1;
      lVar12 = *plVar1;
      *plVar1 = *plVar1 + -1;
      UNLOCK();
      if (lVar12 == 0) {
        (**(code **)(*local_b8 + 0x10))(local_b8);
        std::__shared_weak_count::__release_weak();
      }
    }
    puVar10 = operator_new(0x28,(nothrow_t *)PTR_nothrow_10082c970);
    if (puVar10 != (undefined8 *)0x0) {
      puVar10[1] = 0;
      puVar10[2] = 0;
      *puVar10 = &PTR_FUN_10083b750;
      puVar10[3] = 0;
      puVar10[4] = 0;
    }
    FUN_1001537ee(&local_88,puVar10);
    uVar7 = (*(code *)PTR__objc_msgSend_10082c770)(uVar7,puVar2);
    *(undefined8 *)(local_88 + 0x20) = uVar7;
    local_e8 = &local_f0;
    local_f0 = 0;
    local_e0 = 0x2020000000;
    local_d8 = 0;
    local_68 = SUB84(PTR___NSConcreteStackBlock_10082caf0,0);
    uStack_64 = (undefined4)((ulong)PTR___NSConcreteStackBlock_10082caf0 >> 0x20);
    local_60 = 0xc2000000;
    uStack_5c = 0;
    uStack_5a = 0;
    local_58 = 0x100152e33;
    uStack_52 = 0;
    local_50 = &DAT_10083b780;
    local_48 = local_e8;
    (*(code *)PTR__objc_msgSend_10082c770)(uVar6,PTR_s_enumerateObjectsUsingBlock__10088bdc8);
    lVar12 = local_e8[3];
    __Block_object_dispose(&local_f0,8);
    plVar1 = plStack_80;
    lVar9 = local_88;
    *(long *)(local_88 + 0x18) = lVar12;
    puVar3 = PTR___dispatch_main_q_10082cb60;
    puVar2 = PTR__objc_retain_10082c7b8;
    if (lVar12 != 0) {
      local_88 = 0;
      plStack_80 = (long *)0x0;
      local_a8 = uVar6;
      (*(code *)PTR__objc_retain_10082c7b8)(PTR___dispatch_main_q_10082cb60);
      (*(code *)puVar2)(puVar3);
      plVar11 = operator_new(0x10);
      *plVar11 = lVar9;
      plVar11[1] = (long)plVar1;
      puVar2 = PTR___dispatch_main_q_10082cb60;
      _dispatch_async_f((dispatch_queue_t)PTR___dispatch_main_q_10082cb60,plVar11,FUN_1001538e8);
      (*(code *)PTR__objc_release_10082c7b0)(puVar2);
      uVar6 = local_a8;
      (*(code *)PTR__objc_release_10082c7b0)(PTR___dispatch_main_q_10082cb60);
    }
    lVar12 = local_b0;
    uVar7 = local_70;
    if (local_b0 != local_a0) {
      uVar7 = FUN_100150562();
      uVar7 = _objc_retainAutoreleasedReturnValue(uVar7);
      cVar4 = _os_log_type_enabled(uVar7,0);
      if (cVar4 != '\0') {
        local_68 = 0x8000200;
        uStack_64 = (undefined4)lVar12;
        local_60 = (undefined4)((ulong)lVar12 >> 0x20);
        uStack_5c = 0x800;
        uStack_5a = (undefined2)local_a0;
        local_58 = (undefined6)((ulong)local_a0 >> 0x10);
        __os_log_impl(0x100000000,uVar7,0,
                      "Processing user change as part of property change notification. Changing from %llu to %llu."
                      ,&local_68,0x16);
      }
      (*(code *)PTR__objc_release_10082c7b0)(uVar7);
      puVar3 = PTR___dispatch_main_q_10082cb60;
      puVar2 = PTR__objc_retain_10082c7b8;
      (*(code *)PTR__objc_retain_10082c7b8)(PTR___dispatch_main_q_10082cb60);
      (*(code *)puVar2)(puVar3);
      context = operator_new(1);
      puVar2 = PTR___dispatch_main_q_10082cb60;
      _dispatch_async_f((dispatch_queue_t)PTR___dispatch_main_q_10082cb60,context,FUN_100153a3a);
      (*(code *)PTR__objc_release_10082c7b0)(puVar2);
      uVar7 = local_70;
      (*(code *)PTR__objc_release_10082c7b0)(PTR___dispatch_main_q_10082cb60);
    }
    if (plStack_80 != (long *)0x0) {
      LOCK();
      plVar1 = plStack_80 + 1;
      lVar12 = *plVar1;
      *plVar1 = *plVar1 + -1;
      UNLOCK();
      if (lVar12 == 0) {
        (**(code **)(*plStack_80 + 0x10))(plStack_80);
        std::__shared_weak_count::__release_weak();
      }
    }
    if (plStack_90 != (long *)0x0) {
      LOCK();
      plVar1 = plStack_90 + 1;
      lVar12 = *plVar1;
      *plVar1 = *plVar1 + -1;
      UNLOCK();
      if (lVar12 == 0) {
        (**(code **)(*plStack_90 + 0x10))(plStack_90);
        std::__shared_weak_count::__release_weak();
      }
    }
  }
  if (local_c8 != (long *)0x0) {
    LOCK();
    plVar1 = local_c8 + 1;
    lVar12 = *plVar1;
    *plVar1 = *plVar1 + -1;
    UNLOCK();
    if (lVar12 == 0) {
      (**(code **)(*local_c8 + 0x10))(local_c8);
      std::__shared_weak_count::__release_weak();
    }
  }
LAB_100151352:
  (*(code *)PTR__objc_release_10082c7b0)(uVar6);
  (*(code *)PTR__objc_release_10082c7b0)(uVar7);
  (*(code *)PTR__objc_release_10082c7b0)(uVar5);
  if (*(long *)PTR____stack_chk_guard_10082cb58 == local_38) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  ___stack_chk_fail();
}

