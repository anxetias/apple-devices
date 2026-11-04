// name: FUN_1004e1e68
// address: 1004e1e68

void FUN_1004e1e68(void *param_1)

{
  int *piVar1;
  long *plVar2;
  long lVar3;
  void *pvVar4;
  long *plVar5;
  char cVar6;
  undefined8 uVar7;
  void *pvVar8;
  undefined4 local_48;
  undefined4 uStack_44;
  undefined4 uStack_40;
  undefined2 uStack_3c;
  undefined2 uStack_3a;
  undefined6 uStack_38;
  long local_28;
  
  local_28 = *(long *)PTR____stack_chk_guard_10082cb58;
  if (param_1 == (void *)0x0) {
LAB_1004e26c5:
    uVar7 = FUN_1001cc310();
    cVar6 = _os_log_type_enabled(uVar7,0x10);
    if (cVar6 != '\0') {
      local_48 = 0x8220202;
      uStack_44 = 0x7a0a90;
      uStack_40 = 1;
      uStack_3c = 0x822;
      uStack_3a = 0xd2b2;
      uStack_38 = 0x1007a;
      __os_log_error_impl(0x100000000,uVar7,0x10,"%{public}s: (%{public}s)",&local_48,0x16);
    }
    FUN_1001782e9(0,0);
    goto LAB_1004e270f;
  }
  if (*(int *)((long)param_1 + 8) != 0x64756c63) {
    uVar7 = FUN_1001cc310();
    cVar6 = _os_log_type_enabled(uVar7,0x10);
    if (cVar6 != '\0') {
      local_48 = 0x8220202;
      uStack_44 = 0x7ab58c;
      uStack_40 = 1;
      uStack_3c = 0x822;
      uStack_3a = 0xd710;
      uStack_38 = 0x1007a;
      __os_log_error_impl(0x100000000,uVar7,0x10,"%{public}s: (%{public}s)",&local_48,0x16);
    }
    cVar6 = FUN_1001782e9(0,1);
    if (cVar6 == '\0') goto LAB_1004e26c5;
  }
  if (*(int *)((long)param_1 + 0x2c) < 1) {
    uVar7 = FUN_1001cc310();
    cVar6 = _os_log_type_enabled(uVar7,0x10);
    if (cVar6 != '\0') {
      local_48 = 0x8220202;
      uStack_44 = 0x7a0a90;
      uStack_40 = 1;
      uStack_3c = 0x822;
      uStack_3a = 0x6a86;
      uStack_38 = 0x1007d;
      __os_log_error_impl(0x100000000,uVar7,0x10,"%{public}s: (%{public}s)",&local_48,0x16);
    }
    FUN_1001782e9(0,0);
    goto LAB_1004e270f;
  }
  LOCK();
  piVar1 = (int *)((long)param_1 + 0x2c);
  *piVar1 = *piVar1 + -1;
  UNLOCK();
  if (*piVar1 != 0) goto LAB_1004e270f;
  if (*(int *)((long)param_1 + 8) != 0x64756c63) {
    uVar7 = FUN_1001cc310();
    cVar6 = _os_log_type_enabled(uVar7,0x10);
    if (cVar6 != '\0') {
      local_48 = 0x8220202;
      uStack_44 = 0x7ab58c;
      uStack_40 = 1;
      uStack_3c = 0x822;
      uStack_3a = 0xd710;
      uStack_38 = 0x1007a;
      __os_log_error_impl(0x100000000,uVar7,0x10,"%{public}s: (%{public}s)",&local_48,0x16);
    }
    cVar6 = FUN_1001782e9(0,1);
    if (cVar6 == '\0') {
      uVar7 = FUN_1001cc310();
      cVar6 = _os_log_type_enabled(uVar7,0x10);
      if (cVar6 != '\0') {
        local_48 = 0x8220202;
        uStack_44 = 0x7a0a90;
        uStack_40 = 1;
        uStack_3c = 0x822;
        uStack_3a = 0xd2b2;
        uStack_38 = 0x1007a;
        __os_log_error_impl(0x100000000,uVar7,0x10,"%{public}s: (%{public}s)",&local_48,0x16);
      }
      FUN_1001782e9(0,0);
      goto LAB_1004e270f;
    }
  }
  if (*(int *)((long)param_1 + 0x2c) != 0) {
    uVar7 = FUN_1001cc310();
    cVar6 = _os_log_type_enabled(uVar7,0x10);
    if (cVar6 != '\0') {
      local_48 = 0x8220202;
      uStack_44 = 0x7a0a90;
      uStack_40 = 1;
      uStack_3c = 0x822;
      uStack_3a = 0x7397;
      uStack_38 = 0x1007d;
      __os_log_error_impl(0x100000000,uVar7,0x10,"%{public}s: (%{public}s)",&local_48,0x16);
    }
    FUN_1001782e9(0,0);
  }
  if (*(char *)((long)param_1 + 0x6abe) == '\0') {
    cVar6 = FUN_1001ee056();
    if (cVar6 == '\0') {
      uVar7 = FUN_1001cc310();
      cVar6 = _os_log_type_enabled(uVar7,0x10);
      if (cVar6 != '\0') {
        local_48 = 0x8220202;
        uStack_44 = 0x7a0a90;
        uStack_40 = 1;
        uStack_3c = 0x822;
        uStack_3a = 0x73b5;
        uStack_38 = 0x1007d;
        __os_log_error_impl(0x100000000,uVar7,0x10,"%{public}s: (%{public}s)",&local_48,0x16);
      }
      FUN_1001782e9(0,0);
    }
    if (*(char *)((long)param_1 + 0x6abe) == '\0') {
      FUN_1004e3ed9(param_1);
    }
  }
  if (*(int *)((long)param_1 + 0x6b08) != 0) {
    uVar7 = FUN_1001cc310();
    cVar6 = _os_log_type_enabled(uVar7,0x10);
    if (cVar6 != '\0') {
      local_48 = 0x8220202;
      uStack_44 = 0x7a0a90;
      uStack_40 = 1;
      uStack_3c = 0x822;
      uStack_3a = 0x73ef;
      uStack_38 = 0x1007d;
      __os_log_error_impl(0x100000000,uVar7,0x10,"%{public}s: (%{public}s)",&local_48,0x16);
    }
    FUN_1001782e9(0,0);
  }
  if (*(int *)((long)param_1 + 0x6b0c) != 0) {
    uVar7 = FUN_1001cc310();
    cVar6 = _os_log_type_enabled(uVar7,0x10);
    if (cVar6 != '\0') {
      local_48 = 0x8220202;
      uStack_44 = 0x7a0a90;
      uStack_40 = 1;
      uStack_3c = 0x822;
      uStack_3a = 0x741c;
      uStack_38 = 0x1007d;
      __os_log_error_impl(0x100000000,uVar7,0x10,"%{public}s: (%{public}s)",&local_48,0x16);
    }
    FUN_1001782e9(0,0);
  }
  if (*(int *)((long)param_1 + 0x6b10) != 0) {
    uVar7 = FUN_1001cc310();
    cVar6 = _os_log_type_enabled(uVar7,0x10);
    if (cVar6 != '\0') {
      local_48 = 0x8220202;
      uStack_44 = 0x7a0a90;
      uStack_40 = 1;
      uStack_3c = 0x822;
      uStack_3a = 0x744d;
      uStack_38 = 0x1007d;
      __os_log_error_impl(0x100000000,uVar7,0x10,"%{public}s: (%{public}s)",&local_48,0x16);
    }
    FUN_1001782e9(0,0);
  }
  if (*(int *)((long)param_1 + 0x6b14) != 0) {
    uVar7 = FUN_1001cc310();
    cVar6 = _os_log_type_enabled(uVar7,0x10);
    if (cVar6 != '\0') {
      local_48 = 0x8220202;
      uStack_44 = 0x7a0a90;
      uStack_40 = 1;
      uStack_3c = 0x822;
      uStack_3a = 0x7479;
      uStack_38 = 0x1007d;
      __os_log_error_impl(0x100000000,uVar7,0x10,"%{public}s: (%{public}s)",&local_48,0x16);
    }
    FUN_1001782e9(0,0);
  }
  if (*(int *)((long)param_1 + 0x15934) != 0) {
    uVar7 = FUN_1001cc310();
    cVar6 = _os_log_type_enabled(uVar7,0x10);
    if (cVar6 != '\0') {
      local_48 = 0x8220202;
      uStack_44 = 0x7a0a90;
      uStack_40 = 1;
      uStack_3c = 0x822;
      uStack_3a = 0x74a8;
      uStack_38 = 0x1007d;
      __os_log_error_impl(0x100000000,uVar7,0x10,"%{public}s: (%{public}s)",&local_48,0x16);
    }
    FUN_1001782e9(0,0);
  }
  if (*(long *)((long)param_1 + 0x152c0) != 0) {
    uVar7 = FUN_1001cc310();
    cVar6 = _os_log_type_enabled(uVar7,0x10);
    if (cVar6 != '\0') {
      local_48 = 0x8220202;
      uStack_44 = 0x7a0a90;
      uStack_40 = 1;
      uStack_3c = 0x822;
      uStack_3a = 0x74d9;
      uStack_38 = 0x1007d;
      __os_log_error_impl(0x100000000,uVar7,0x10,"%{public}s: (%{public}s)",&local_48,0x16);
    }
    FUN_1001782e9(0,0);
  }
  if (*(long *)((long)param_1 + 0x66d8) != 0) {
    uVar7 = FUN_1001cc310();
    cVar6 = _os_log_type_enabled(uVar7,0x10);
    if (cVar6 != '\0') {
      local_48 = 0x8220202;
      uStack_44 = 0x7a0a90;
      uStack_40 = 1;
      uStack_3c = 0x822;
      uStack_3a = 0x7503;
      uStack_38 = 0x1007d;
      __os_log_error_impl(0x100000000,uVar7,0x10,"%{public}s: (%{public}s)",&local_48,0x16);
    }
    FUN_1001782e9(0,0);
  }
  if (*(int *)((long)param_1 + 0x66e0) != 0) {
    uVar7 = FUN_1001cc310();
    cVar6 = _os_log_type_enabled(uVar7,0x10);
    if (cVar6 != '\0') {
      local_48 = 0x8220202;
      uStack_44 = 0x7a0a90;
      uStack_40 = 1;
      uStack_3c = 0x822;
      uStack_3a = 0x7522;
      uStack_38 = 0x1007d;
      __os_log_error_impl(0x100000000,uVar7,0x10,"%{public}s: (%{public}s)",&local_48,0x16);
    }
    FUN_1001782e9(0,0);
  }
  if (*(long *)((long)param_1 + 0x30) != 0) {
    uVar7 = FUN_1001cc310();
    cVar6 = _os_log_type_enabled(uVar7,0x10);
    if (cVar6 != '\0') {
      local_48 = 0x8220202;
      uStack_44 = 0x7a0a90;
      uStack_40 = 1;
      uStack_3c = 0x822;
      uStack_3a = 0x6a64;
      uStack_38 = 0x1007d;
      __os_log_error_impl(0x100000000,uVar7,0x10,"%{public}s: (%{public}s)",&local_48,0x16);
    }
    FUN_1001782e9(0,0);
  }
  if (*(int *)((long)param_1 + 0x15204) != 0) {
    uVar7 = FUN_1001cc310();
    cVar6 = _os_log_type_enabled(uVar7,0x10);
    if (cVar6 != '\0') {
      local_48 = 0x8220202;
      uStack_44 = 0x7a0a90;
      uStack_40 = 1;
      uStack_3c = 0x822;
      uStack_3a = 0x7543;
      uStack_38 = 0x1007d;
      __os_log_error_impl(0x100000000,uVar7,0x10,"%{public}s: (%{public}s)",&local_48,0x16);
    }
    FUN_1001782e9(0,0);
    FUN_1001cc4fc(4);
  }
  FUN_1002c0bbc(*(undefined8 *)((long)param_1 + 0x152f0));
  FUN_1002c0bbc(*(undefined8 *)((long)param_1 + 0x152f8));
  FUN_1002c0bbc(*(undefined8 *)((long)param_1 + 0x15300));
  FUN_1002c0bbc(*(undefined8 *)((long)param_1 + 0x15308));
  FUN_1002c13ab(*(undefined8 *)((long)param_1 + 0x15310));
  FUN_1002c0bbc(*(undefined8 *)((long)param_1 + 0x15318));
  FUN_1002c0bbc(*(undefined8 *)((long)param_1 + 0x15320));
  FUN_1002c0bbc(*(undefined8 *)((long)param_1 + 0x15328));
  FUN_1002c0bbc(*(undefined8 *)((long)param_1 + 0x15330));
  FUN_1002c0bbc(*(undefined8 *)((long)param_1 + 0x15338));
  FUN_1002c13ab(*(undefined8 *)((long)param_1 + 0x15340));
  FUN_1002c0bbc(*(undefined8 *)((long)param_1 + 0x15348));
  FUN_1002c0bbc(*(undefined8 *)((long)param_1 + 0x15350));
  FUN_1002c0bbc(*(undefined8 *)((long)param_1 + 0x15358));
  FUN_1002c0bbc(*(undefined8 *)((long)param_1 + 0x15360));
  FUN_1002c0bbc(*(undefined8 *)((long)param_1 + 0x15368));
  FUN_1002c0bbc(*(undefined8 *)((long)param_1 + 0x15370));
  FUN_1002c0bbc(*(undefined8 *)((long)param_1 + 0x15378));
  FUN_1002c0bbc(*(undefined8 *)((long)param_1 + 0x15380));
  FUN_1002c0bbc(*(undefined8 *)((long)param_1 + 0x15388));
  FUN_1002c0bbc(*(undefined8 *)((long)param_1 + 0x15390));
  if (*(long *)((long)param_1 + 0x15210) != 0) {
    _AMDSecureShutdownNotificationProxy();
    FUN_10017060f(*(undefined8 *)((long)param_1 + 0x15210));
    *(undefined8 *)((long)param_1 + 0x15210) = 0;
  }
  if (*(long *)((long)param_1 + 0x7168) != 0) {
    cVar6 = FUN_100505aa2(param_1);
    if (cVar6 == '\0') {
      _AMDeviceUnpair(*(undefined8 *)((long)param_1 + 0x7168));
    }
    FUN_10017060f(*(undefined8 *)((long)param_1 + 0x7168));
    *(undefined8 *)((long)param_1 + 0x7168) = 0;
  }
  FUN_10017060f(*(undefined8 *)((long)param_1 + 0x71b8));
  *(undefined8 *)((long)param_1 + 0x71b8) = 0;
  if (*(long *)((long)param_1 + 0x15798) != 0) {
    FUN_1000bfd00();
    *(undefined8 *)((long)param_1 + 0x15798) = 0;
    *(undefined4 *)((long)param_1 + 0x157a0) = 0;
  }
  FUN_10017899c(*(undefined4 *)((long)param_1 + 0x28));
  FUN_10017899c(*(undefined4 *)((long)param_1 + 0x15800));
  *(undefined4 *)((long)param_1 + 0x15800) = 0;
  pvVar8 = *(void **)((long)param_1 + 0x151a0);
  if (pvVar8 != (void *)0x0) {
    FUN_1001b7a50((long)pvVar8 + 0x4c0);
    pvVar4 = *(void **)((long)pvVar8 + 0x4a8);
    if (pvVar4 != (void *)0x0) {
      *(void **)((long)pvVar8 + 0x4b0) = pvVar4;
      operator_delete(pvVar4);
    }
    FUN_1001a85d4((long)pvVar8 + 0x78);
    pvVar4 = *(void **)((long)pvVar8 + 0x50);
    if (pvVar4 != (void *)0x0) {
      *(void **)((long)pvVar8 + 0x58) = pvVar4;
      operator_delete(pvVar4);
    }
    pvVar4 = *(void **)((long)pvVar8 + 0x30);
    if (pvVar4 != (void *)0x0) {
      *(void **)((long)pvVar8 + 0x38) = pvVar4;
      operator_delete(pvVar4);
    }
    pvVar4 = *(void **)((long)pvVar8 + 0x10);
    if (pvVar4 != (void *)0x0) {
      *(void **)((long)pvVar8 + 0x18) = pvVar4;
      operator_delete(pvVar4);
    }
    operator_delete(pvVar8);
  }
  FUN_10017060f(*(undefined8 *)((long)param_1 + 0x151a8));
  FUN_10017060f(*(undefined8 *)((long)param_1 + 0x151b0));
  FUN_10017060f(*(undefined8 *)((long)param_1 + 0x151b8));
  FUN_10017060f(*(undefined8 *)((long)param_1 + 0x151c0));
  FUN_10017060f(*(undefined8 *)((long)param_1 + 0x151c8));
  if ((*(char *)((long)param_1 + 0x359) != '\0') && (*(char *)((long)param_1 + 0x15218) != '\0')) {
    pvVar8 = *(void **)((long)param_1 + 0x15220);
    if (pvVar8 == (void *)0x0) {
      if (*(long *)((long)param_1 + 0x152c0) != 0) {
        FUN_1001e86ff((long)param_1 + 0x15230);
        pvVar8 = *(void **)((long)param_1 + 0x15220);
        if (pvVar8 != (void *)0x0) goto LAB_1004e2404;
      }
    }
    else {
LAB_1004e2404:
      FUN_1002ea416(pvVar8);
      operator_delete(pvVar8);
    }
    *(undefined8 *)((long)param_1 + 0x15220) = 0;
    if (*(char *)((long)param_1 + 0x15228) != '\0') {
      FUN_1001e8470((long)param_1 + 0x15230);
      *(undefined1 *)((long)param_1 + 0x15228) = 0;
    }
  }
  pvVar8 = *(void **)((long)param_1 + 0x16640);
  if (pvVar8 != (void *)0x0) {
    FUN_1005a2a2c(pvVar8);
    operator_delete(pvVar8);
  }
  *(undefined8 *)((long)param_1 + 0x16640) = 0;
  if (*(long *)((long)param_1 + 0x30) != 0) {
    local_48 = 0;
    uStack_44 = 0;
    uStack_40 = 0;
    uStack_3c = 0;
    uStack_3a = 0;
    FUN_100217418(*(long *)((long)param_1 + 0x30) + 0x2cb0,&local_48);
    plVar5 = (long *)CONCAT26(uStack_3a,CONCAT24(uStack_3c,uStack_40));
    if (plVar5 != (long *)0x0) {
      LOCK();
      plVar2 = plVar5 + 1;
      lVar3 = *plVar2;
      *plVar2 = *plVar2 + -1;
      UNLOCK();
      if (lVar3 == 0) {
        (**(code **)(*plVar5 + 0x10))(plVar5);
        std::__shared_weak_count::__release_weak();
      }
    }
  }
  if (*(int *)((long)param_1 + 0x16668) != 0) {
    uVar7 = FUN_1001cc310();
    cVar6 = _os_log_type_enabled(uVar7,0x10);
    if (cVar6 != '\0') {
      local_48 = 0x8220202;
      uStack_44 = 0x7a0a90;
      uStack_40 = 1;
      uStack_3c = 0x822;
      uStack_3a = 0x7562;
      uStack_38 = 0x1007d;
      __os_log_error_impl(0x100000000,uVar7,0x10,"%{public}s: (%{public}s)",&local_48,0x16);
    }
    FUN_1001782e9(0,0);
  }
  local_48 = 0;
  uStack_44 = 0;
  uStack_40 = 0;
  uStack_3c = 0;
  uStack_3a = 0;
  FUN_100217418((long)param_1 + 0x16658,&local_48);
  plVar5 = (long *)CONCAT26(uStack_3a,CONCAT24(uStack_3c,uStack_40));
  if (plVar5 != (long *)0x0) {
    LOCK();
    plVar2 = plVar5 + 1;
    lVar3 = *plVar2;
    *plVar2 = *plVar2 + -1;
    UNLOCK();
    if (lVar3 == 0) {
      (**(code **)(*plVar5 + 0x10))(plVar5);
      std::__shared_weak_count::__release_weak();
    }
  }
  if (*(long **)((long)param_1 + 0x16650) != (long *)0x0) {
    (**(code **)(**(long **)((long)param_1 + 0x16650) + 8))();
  }
  *(undefined8 *)((long)param_1 + 0x16650) = 0;
  FUN_10017060f(*(undefined8 *)((long)param_1 + 0x152c8));
  FUN_10017060f(*(undefined8 *)((long)param_1 + 0x152d0));
  FUN_1004decb2(param_1);
  if (*(long *)((long)param_1 + 0x66b8) != 0) {
    FUN_100495a1c();
    *(undefined8 *)((long)param_1 + 0x66b8) = 0;
  }
  FUN_10017060f(*(undefined8 *)((long)param_1 + 0x15de8));
  *(undefined8 *)((long)param_1 + 0x15de8) = 0;
  FUN_10017060f(*(undefined8 *)((long)param_1 + 0x16210));
  *(undefined8 *)((long)param_1 + 0x16210) = 0;
  FUN_1001e9d75((long)param_1 + 0x6760);
  FUN_1001e9d75((long)param_1 + 0x14c68);
  FUN_10017060f(*(undefined8 *)((long)param_1 + 0x15960));
  FUN_10017060f(*(undefined8 *)((long)param_1 + 0x15970));
  FUN_10017060f(*(undefined8 *)((long)param_1 + 0x15978));
  pvVar8 = *(void **)((long)param_1 + 0x157e8);
  if (pvVar8 != (void *)0x0) {
    FUN_1003380d0(pvVar8);
    operator_delete(pvVar8);
  }
  pvVar8 = *(void **)((long)param_1 + 0x157f0);
  if (pvVar8 != (void *)0x0) {
    FUN_1003380d0(pvVar8);
    operator_delete(pvVar8);
  }
  pvVar8 = *(void **)((long)param_1 + 0x157f8);
  if (pvVar8 != (void *)0x0) {
    FUN_1003380d0(pvVar8);
    operator_delete(pvVar8);
  }
  FUN_100205d70((long)param_1 + 0x16658);
  FUN_1005090da((long)param_1 + 0x159a8);
  FUN_1005090da((long)param_1 + 0x15988);
  FUN_1002a41f4((long)param_1 + 0x15410,*(undefined8 *)((long)param_1 + 0x15418));
  FUN_1002a41f4((long)param_1 + 0x153f8,*(undefined8 *)((long)param_1 + 0x15400));
  plVar5 = *(long **)((long)param_1 + 0x6738);
  if (plVar5 != (long *)0x0) {
    LOCK();
    plVar2 = plVar5 + 1;
    lVar3 = *plVar2;
    *plVar2 = *plVar2 + -1;
    UNLOCK();
    if (lVar3 == 0) {
      (**(code **)(*plVar5 + 0x10))(plVar5);
      std::__shared_weak_count::__release_weak();
    }
  }
  operator_delete(param_1);
LAB_1004e270f:
  if (*(long *)PTR____stack_chk_guard_10082cb58 != local_28) {
                    /* WARNING: Subroutine does not return */
    ___stack_chk_fail();
  }
  return;
}

