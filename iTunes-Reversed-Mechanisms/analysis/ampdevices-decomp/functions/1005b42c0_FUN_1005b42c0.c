// name: FUN_1005b42c0
// address: 1005b42c0

void FUN_1005b42c0(long *param_1,undefined8 param_2)

{
  undefined4 uVar1;
  undefined4 uVar2;
  char cVar3;
  int iVar4;
  long lVar5;
  undefined8 uVar6;
  long *plVar7;
  long *plVar8;
  long **pplVar9;
  long lVar10;
  undefined8 *puVar11;
  long lVar12;
  char *pcVar13;
  long lVar14;
  undefined8 uVar15;
  undefined8 uVar16;
  undefined1 local_250 [16];
  long local_240 [2];
  long local_230 [2];
  long local_220 [2];
  long local_210 [2];
  long local_200 [2];
  long local_1f0 [2];
  long local_1e0 [2];
  long local_1d0 [2];
  long local_1c0 [2];
  long local_1b0 [2];
  undefined1 local_1a0 [16];
  long *local_190;
  long local_188 [16];
  long *local_108;
  long *local_100;
  long local_f8 [3];
  long *plStack_e0;
  long *local_d8;
  long *local_d0;
  long *local_c8;
  long *plStack_c0;
  undefined1 local_b8 [16];
  undefined2 local_a8;
  undefined2 uStack_a6;
  undefined4 uStack_a4;
  undefined4 uStack_a0;
  undefined2 uStack_9c;
  undefined2 uStack_9a;
  undefined6 auStack_98 [4];
  undefined8 local_78;
  undefined4 uStack_70;
  undefined2 uStack_6c;
  undefined2 uStack_6a;
  undefined6 auStack_68 [2];
  undefined4 local_58;
  undefined4 uStack_54;
  undefined4 local_50;
  undefined2 uStack_4c;
  undefined2 uStack_4a;
  undefined6 uStack_48;
  long local_38;
  
  local_38 = *(long *)PTR____stack_chk_guard_10082cb58;
  lVar5 = (**(code **)(*param_1 + 0x10))();
  if (lVar5 == 0) {
    uVar6 = FUN_1001cc310();
    cVar3 = _os_log_type_enabled(uVar6,0x10);
    if (cVar3 != '\0') {
      local_a8 = 0x202;
      uStack_a6 = 0x822;
      uStack_a4 = 0x7a0a90;
      uStack_a0 = 1;
      uStack_9c = 0x822;
      uStack_9a = 0x1013;
      auStack_98[0] = 0x1007b;
      __os_log_error_impl(0x100000000,uVar6,0x10,"%{public}s: (%{public}s)",&local_a8,0x16);
    }
    FUN_1001782e9(0,0);
    goto LAB_1005b6635;
  }
  uVar6 = FUN_10025b8e3();
  lVar12 = param_1[7];
  local_d8 = param_1;
  if (lVar12 - 1U < 0xfffffffffffffffe) {
    cVar3 = _os_signpost_enabled(uVar6);
    if (cVar3 != '\0') {
      local_a8 = 0;
      __os_signpost_emit_with_name_impl
                (0x100000000,uVar6,1,lVar12,"ampl_process_changes","",&local_a8,2);
    }
  }
  FUN_1001a7a9e(local_250,param_2);
  plVar7 = operator_new(0x38,(nothrow_t *)PTR_nothrow_10082c970);
  if (plVar7 != (long *)0x0) {
    FUN_100220a12(plVar7);
    *plVar7 = (long)&PTR_FUN_10086f200;
    FUN_10032f0f2(plVar7 + 5);
  }
  local_c8 = plVar7;
  plVar8 = operator_new(0x20);
  plVar8[1] = 0;
  plVar8[2] = 0;
  *plVar8 = (long)&PTR_FUN_10086f408;
  plVar8[3] = (long)plVar7;
  plStack_c0 = plVar8;
  if (plVar7 != (long *)0x0) {
    if (plVar7[2] == 0) {
      LOCK();
      plVar8[1] = plVar8[1] + 1;
      UNLOCK();
      LOCK();
      plVar8[2] = plVar8[2] + 1;
      UNLOCK();
      plVar7[1] = (long)plVar7;
      plVar7[2] = (long)plVar8;
    }
    else {
      if (*(long *)(plVar7[2] + 8) != -1) goto LAB_1005b447a;
      LOCK();
      plVar8[1] = plVar8[1] + 1;
      UNLOCK();
      LOCK();
      plVar8[2] = plVar8[2] + 1;
      UNLOCK();
      plVar7[1] = (long)plVar7;
      plVar7[2] = (long)plVar8;
      std::__shared_weak_count::__release_weak();
    }
    plVar7 = plVar8 + 1;
    LOCK();
    lVar12 = *plVar7;
    *plVar7 = *plVar7 + -1;
    UNLOCK();
    if (lVar12 == 0) {
      (**(code **)(*plVar8 + 0x10))(plVar8);
      std::__shared_weak_count::__release_weak();
    }
  }
LAB_1005b447a:
  plVar7 = local_c8;
  if (local_c8 == (long *)0x0) {
    uVar6 = FUN_1001cc310();
    cVar3 = _os_log_type_enabled(uVar6,0x10);
    if (cVar3 != '\0') {
      local_a8 = 0x202;
      uStack_a6 = 0x822;
      uStack_a4 = 0x7a0a90;
      uStack_a0 = 1;
      uStack_9c = 0x822;
      uStack_9a = 0xf62;
      auStack_98[0] = 0x1007b;
      __os_log_error_impl(0x100000000,uVar6,0x10,"%{public}s: (%{public}s)",&local_a8,0x16);
    }
    FUN_1001782e9(0,0);
LAB_1005b44fc:
    pplVar9 = &local_108;
  }
  else {
    FUN_1001a7a9e(&local_a8,local_250);
    cVar3 = (**(code **)(*plVar7 + 0x18))(plVar7,&local_a8);
    FUN_1001a8fac(&local_a8);
    if (cVar3 == '\0') goto LAB_1005b44fc;
    local_108 = plVar7;
    pplVar9 = &local_c8;
    local_100 = plStack_c0;
  }
  *pplVar9 = (long *)0x0;
  pplVar9[1] = (long *)0x0;
  if (plStack_c0 != (long *)0x0) {
    LOCK();
    plVar7 = plStack_c0 + 1;
    lVar12 = *plVar7;
    *plVar7 = *plVar7 + -1;
    UNLOCK();
    if (lVar12 == 0) {
      (**(code **)(*plStack_c0 + 0x10))(plStack_c0);
      std::__shared_weak_count::__release_weak();
    }
  }
  FUN_1001a8fac(local_250);
  if (DAT_1008c7660 != -1) {
    _dispatch_once(&DAT_1008c7660,&PTR___NSConcreteGlobalBlock_1008575c0);
  }
  uVar6 = DAT_1008c7658;
  cVar3 = _os_log_type_enabled(DAT_1008c7658,1);
  if (cVar3 != '\0') {
    local_a8 = 0;
    __os_log_impl(0x100000000,uVar6,1,"ch> ----- BEGIN CHANGE PROCESSING -----",&local_a8,2);
  }
  FUN_100313e0b(lVar5);
  local_d0 = local_108 + 5;
  if (local_108[5] == 0) {
    uVar6 = FUN_1001cc310();
    cVar3 = _os_log_type_enabled(uVar6,0x10);
    if (cVar3 != '\0') {
      local_a8 = 0x202;
      uStack_a6 = 0x822;
      uStack_a4 = 0x7a0a90;
      uStack_a0 = 1;
      uStack_9c = 0x822;
      uStack_9a = 0xe9a0;
      auStack_98[0] = 0x1007e;
      __os_log_error_impl(0x100000000,uVar6,0x10,"%{public}s: (%{public}s)",&local_a8,0x16);
    }
    FUN_1001782e9(0,0);
    local_188[0] = 0;
    local_188[1] = 0;
    FUN_10032f0f2();
  }
  else {
    local_58 = 0x87ddb0;
    uStack_54 = 1;
    FUN_1001a7b90(&local_78);
    local_c8 = (long *)0x0;
    plStack_c0 = (long *)0x0;
    FUN_10032f0f2(&local_c8);
    FUN_10032f0f2(&local_a8);
    cVar3 = FUN_10026326c(local_d0,&local_78,&local_a8);
    pplVar9 = &local_c8;
    if (cVar3 != '\0') {
      pplVar9 = (long **)&local_a8;
    }
    FUN_1001a7a9e(local_188,pplVar9);
    FUN_1001a7a94(&local_a8);
    FUN_1001a7a94(&local_c8);
    FUN_1001ab240(&local_78);
  }
  if (local_188[0] != 0) {
    FUN_1001a7a9e(local_240,local_188);
    local_a8 = SUB82(local_240,0);
    uStack_a6 = (undefined2)((ulong)local_240 >> 0x10);
    uStack_a4 = (undefined4)((ulong)local_240 >> 0x20);
    uStack_a0 = 0;
    uStack_9c = 0;
    uStack_9a = 0;
    FUN_10032f0f2(auStack_98);
    plStack_c0 = (long *)FUN_1001a7bfa(local_240);
    local_c8 = local_240;
    FUN_10032f0f2(local_b8);
    plVar7 = (long *)CONCAT44(uStack_a4,CONCAT22(uStack_a6,local_a8));
    plVar8 = (long *)CONCAT26(uStack_9a,CONCAT24(uStack_9c,uStack_a0));
    while ((plVar7 != local_c8 || (plVar8 != plStack_c0))) {
      FUN_10025ee76(&local_78);
      FUN_1001a7b1c(auStack_98,&local_78);
      FUN_1001a8fac(&local_78);
      FUN_1001a7a9e(&local_58,auStack_98);
      FUN_1005b3bca(local_d8,lVar5,&local_58);
      FUN_1001a8fac(&local_58);
      plVar7 = (long *)CONCAT44(uStack_a4,CONCAT22(uStack_a6,local_a8));
      plVar8 = (long *)(CONCAT26(uStack_9a,CONCAT24(uStack_9c,uStack_a0)) + 1);
      uStack_a0 = SUB84(plVar8,0);
      uStack_9c = (undefined2)((ulong)plVar8 >> 0x20);
      uStack_9a = (undefined2)((ulong)plVar8 >> 0x30);
    }
    FUN_1001a8fac(local_b8);
    FUN_1001a8fac(auStack_98);
    FUN_1001a7a94(local_240);
  }
  if (*local_d0 == 0) {
    uVar6 = FUN_1001cc310();
    cVar3 = _os_log_type_enabled(uVar6,0x10);
    if (cVar3 != '\0') {
      local_a8 = 0x202;
      uStack_a6 = 0x822;
      uStack_a4 = 0x7a0a90;
      uStack_a0 = 1;
      uStack_9c = 0x822;
      uStack_9a = 0xe9a0;
      auStack_98[0] = 0x1007e;
      __os_log_error_impl(0x100000000,uVar6,0x10,"%{public}s: (%{public}s)",&local_a8,0x16);
    }
    FUN_1001782e9(0,0);
    local_188[2] = 0;
    local_188[3] = 0;
    FUN_10032f0f2();
  }
  else {
    local_58 = 0x87dd90;
    uStack_54 = 1;
    FUN_1001a7b90(&local_78);
    local_c8 = (long *)0x0;
    plStack_c0 = (long *)0x0;
    FUN_10032f0f2(&local_c8);
    FUN_10032f0f2(&local_a8);
    cVar3 = FUN_10026326c(local_d0,&local_78,&local_a8);
    pplVar9 = &local_c8;
    if (cVar3 != '\0') {
      pplVar9 = (long **)&local_a8;
    }
    FUN_1001a7a9e(local_188 + 2,pplVar9);
    FUN_1001a7a94(&local_a8);
    FUN_1001a7a94(&local_c8);
    FUN_1001ab240(&local_78);
  }
  if (local_188[2] != 0) {
    FUN_1001a7a9e(local_230,local_188 + 2);
    local_a8 = SUB82(local_230,0);
    uStack_a6 = (undefined2)((ulong)local_230 >> 0x10);
    uStack_a4 = (undefined4)((ulong)local_230 >> 0x20);
    uStack_a0 = 0;
    uStack_9c = 0;
    uStack_9a = 0;
    FUN_10032f0f2(auStack_98);
    plStack_c0 = (long *)FUN_1001a7bfa(local_230);
    local_c8 = local_230;
    FUN_10032f0f2(local_b8);
    plVar7 = (long *)CONCAT44(uStack_a4,CONCAT22(uStack_a6,local_a8));
    plVar8 = (long *)CONCAT26(uStack_9a,CONCAT24(uStack_9c,uStack_a0));
    while ((plVar7 != local_c8 || (plVar8 != plStack_c0))) {
      FUN_10025ee76(&local_78);
      FUN_1001a7b1c(auStack_98,&local_78);
      FUN_1001a8fac(&local_78);
      FUN_1001a7a9e(&local_58,auStack_98);
      FUN_1005b3cf4(local_d8,lVar5,&local_58);
      FUN_1001a8fac(&local_58);
      plVar7 = (long *)CONCAT44(uStack_a4,CONCAT22(uStack_a6,local_a8));
      plVar8 = (long *)(CONCAT26(uStack_9a,CONCAT24(uStack_9c,uStack_a0)) + 1);
      uStack_a0 = SUB84(plVar8,0);
      uStack_9c = (undefined2)((ulong)plVar8 >> 0x20);
      uStack_9a = (undefined2)((ulong)plVar8 >> 0x30);
    }
    FUN_1001a8fac(local_b8);
    FUN_1001a8fac(auStack_98);
    FUN_1001a7a94(local_230);
  }
  uVar6 = FUN_10025b8e3();
  lVar12 = local_d8[7];
  if (lVar12 - 1U < 0xfffffffffffffffe) {
    cVar3 = _os_signpost_enabled(uVar6);
    if (cVar3 != '\0') {
      local_a8 = 0;
      __os_signpost_emit_with_name_impl
                (0x100000000,uVar6,1,lVar12,"ampl_process_social_profiles","",&local_a8,2);
    }
  }
  if (*local_d0 == 0) {
    uVar6 = FUN_1001cc310();
    cVar3 = _os_log_type_enabled(uVar6,0x10);
    if (cVar3 != '\0') {
      local_a8 = 0x202;
      uStack_a6 = 0x822;
      uStack_a4 = 0x7a0a90;
      uStack_a0 = 1;
      uStack_9c = 0x822;
      uStack_9a = 0xe9a0;
      auStack_98[0] = 0x1007e;
      __os_log_error_impl(0x100000000,uVar6,0x10,"%{public}s: (%{public}s)",&local_a8,0x16);
    }
    FUN_1001782e9(0,0);
    local_188[4] = 0;
    local_188[5] = 0;
    FUN_10032f0f2();
  }
  else {
    local_58 = 0x882010;
    uStack_54 = 1;
    FUN_1001a7b90(&local_78);
    local_c8 = (long *)0x0;
    plStack_c0 = (long *)0x0;
    FUN_10032f0f2(&local_c8);
    FUN_10032f0f2(&local_a8);
    cVar3 = FUN_10026326c(local_d0,&local_78,&local_a8);
    pplVar9 = &local_c8;
    if (cVar3 != '\0') {
      pplVar9 = (long **)&local_a8;
    }
    FUN_1001a7a9e(local_188 + 4,pplVar9);
    FUN_1001a7a94(&local_a8);
    FUN_1001a7a94(&local_c8);
    FUN_1001ab240(&local_78);
  }
  if (local_188[4] != 0) {
    FUN_1001a7a9e(local_220,local_188 + 4);
    local_a8 = SUB82(local_220,0);
    uStack_a6 = (undefined2)((ulong)local_220 >> 0x10);
    uStack_a4 = (undefined4)((ulong)local_220 >> 0x20);
    uStack_a0 = 0;
    uStack_9c = 0;
    uStack_9a = 0;
    FUN_10032f0f2(auStack_98);
    plStack_c0 = (long *)FUN_1001a7bfa(local_220);
    local_c8 = local_220;
    FUN_10032f0f2(local_b8);
    plVar7 = (long *)CONCAT44(uStack_a4,CONCAT22(uStack_a6,local_a8));
    plVar8 = (long *)CONCAT26(uStack_9a,CONCAT24(uStack_9c,uStack_a0));
    while ((plVar7 != local_c8 || (plVar8 != plStack_c0))) {
      FUN_10025ee76(&local_78);
      FUN_1001a7b1c(auStack_98,&local_78);
      FUN_1001a8fac(&local_78);
      FUN_1001a7a9e(local_f8 + 2,auStack_98);
      FUN_10021fa18(&local_58,lVar5,local_f8 + 2);
      if ((undefined8 *)CONCAT44(uStack_54,local_58) == (undefined8 *)0x0) {
        uVar6 = FUN_1001cc310();
        cVar3 = _os_log_type_enabled(uVar6,0x10);
        if (cVar3 != '\0') {
          local_78._0_4_ = 0x8220202;
          local_78._4_4_ = 0x7a0a90;
          uStack_70 = 1;
          uStack_6c = 0x822;
          uStack_6a = 0xd212;
          auStack_68[0] = 0x1007b;
          __os_log_error_impl(0x100000000,uVar6,0x10,"%{public}s: (%{public}s)",&local_78,0x16);
        }
        FUN_1001782e9(0,0);
      }
      else {
        (*(code *)**(undefined8 **)CONCAT44(uStack_54,local_58))();
      }
      plVar7 = (long *)CONCAT26(uStack_4a,CONCAT24(uStack_4c,local_50));
      if (plVar7 != (long *)0x0) {
        LOCK();
        plVar8 = plVar7 + 1;
        lVar12 = *plVar8;
        *plVar8 = *plVar8 + -1;
        UNLOCK();
        if (lVar12 == 0) {
          (**(code **)(*plVar7 + 0x10))(plVar7);
          std::__shared_weak_count::__release_weak();
        }
      }
      FUN_1001a8fac(local_f8 + 2);
      plVar7 = (long *)CONCAT44(uStack_a4,CONCAT22(uStack_a6,local_a8));
      plVar8 = (long *)(CONCAT26(uStack_9a,CONCAT24(uStack_9c,uStack_a0)) + 1);
      uStack_a0 = SUB84(plVar8,0);
      uStack_9c = (undefined2)((ulong)plVar8 >> 0x20);
      uStack_9a = (undefined2)((ulong)plVar8 >> 0x30);
    }
    FUN_1001a8fac(local_b8);
    FUN_1001a8fac(auStack_98);
    FUN_1001a7a94(local_220);
  }
  if (*local_d0 == 0) {
    uVar6 = FUN_1001cc310();
    cVar3 = _os_log_type_enabled(uVar6,0x10);
    if (cVar3 != '\0') {
      local_a8 = 0x202;
      uStack_a6 = 0x822;
      uStack_a4 = 0x7a0a90;
      uStack_a0 = 1;
      uStack_9c = 0x822;
      uStack_9a = 0xe9a0;
      auStack_98[0] = 0x1007e;
      __os_log_error_impl(0x100000000,uVar6,0x10,"%{public}s: (%{public}s)",&local_a8,0x16);
    }
    FUN_1001782e9(0,0);
    local_188[6] = 0;
    local_188[7] = 0;
    FUN_10032f0f2();
  }
  else {
    local_58 = 0x8820d0;
    uStack_54 = 1;
    FUN_1001a7b90(&local_78);
    local_c8 = (long *)0x0;
    plStack_c0 = (long *)0x0;
    FUN_10032f0f2(&local_c8);
    FUN_10032f0f2(&local_a8);
    cVar3 = FUN_100329434(local_d0,&local_78,&local_a8);
    pplVar9 = &local_c8;
    if (cVar3 != '\0') {
      pplVar9 = (long **)&local_a8;
    }
    FUN_1001a7a9e(local_188 + 6,pplVar9);
    FUN_1001a7a94(&local_a8);
    FUN_1001a7a94(&local_c8);
    FUN_1001ab240(&local_78);
  }
  if (local_188[6] != 0) {
    FUN_1001a7a9e(local_210,local_188 + 6);
    local_78._0_4_ = 0;
    local_78._4_4_ = 0;
    uStack_70 = 0;
    uStack_6c = 0;
    uStack_6a = 0;
    FUN_100321fab(&local_a8,lVar5);
    local_78._0_4_ = CONCAT22(uStack_a6,local_a8);
    lVar12 = CONCAT44(uStack_a4,(undefined4)local_78);
    plVar7 = (long *)CONCAT26(uStack_9a,CONCAT24(uStack_9c,uStack_a0));
    local_78._4_4_ = uStack_a4;
    uStack_70 = uStack_a0;
    uStack_6c = uStack_9c;
    uStack_6a = uStack_9a;
    if (lVar12 == 0) {
      uVar6 = FUN_1001cc310();
      cVar3 = _os_log_type_enabled(uVar6,0x10);
      if (cVar3 != '\0') {
        local_a8 = 0x202;
        uStack_a6 = 0x822;
        uStack_a4 = 0x7a0a90;
        uStack_a0 = 1;
        uStack_9c = 0x822;
        uStack_9a = 0xe9c0;
        auStack_98[0] = 0x1007e;
        __os_log_error_impl(0x100000000,uVar6,0x10,"%{public}s: (%{public}s)",&local_a8,0x16);
      }
      FUN_1001782e9(0,0);
    }
    else {
      local_a8 = SUB82(local_210,0);
      uStack_a6 = (undefined2)((ulong)local_210 >> 0x10);
      uStack_a4 = (undefined4)((ulong)local_210 >> 0x20);
      uStack_a0 = 0;
      uStack_9c = 0;
      uStack_9a = 0;
      local_190 = plVar7;
      FUN_1001aa318(auStack_98);
      plStack_c0 = (long *)FUN_1001a7bfa(local_210);
      local_c8 = local_210;
      FUN_1001aa318();
      plVar7 = (long *)CONCAT44(uStack_a4,CONCAT22(uStack_a6,local_a8));
      plVar8 = (long *)CONCAT26(uStack_9a,CONCAT24(uStack_9c,uStack_a0));
      while ((plVar7 != local_c8 || (plVar8 != plStack_c0))) {
        FUN_1005b7934(&local_58);
        FUN_1001aaadc(auStack_98,&local_58);
        FUN_1001aae6c(&local_58);
        uVar6 = FUN_1001aaeaa(auStack_98,0);
        iVar4 = FUN_10062619a(lVar12,uVar6);
        uVar1 = local_50;
        local_50 = (undefined4)((ulong)uVar6 >> 0x20);
        uVar2 = local_50;
        local_50 = uVar1;
        if (iVar4 == 0) {
          if (DAT_1008c7660 != -1) {
            _dispatch_once(&DAT_1008c7660,&PTR___NSConcreteGlobalBlock_1008575c0);
          }
          uVar16 = DAT_1008c7658;
          cVar3 = _os_log_type_enabled(DAT_1008c7658,0);
          if (cVar3 != '\0') {
            pcVar13 = "ch> deleting social profile %llx";
            uVar15 = 0;
            goto LAB_1005b4e99;
          }
        }
        else {
          if (DAT_1008c7660 != -1) {
            _dispatch_once(&DAT_1008c7660,&PTR___NSConcreteGlobalBlock_1008575c0);
          }
          uVar16 = DAT_1008c7658;
          cVar3 = _os_log_type_enabled(DAT_1008c7658,0x10);
          if (cVar3 != '\0') {
            pcVar13 = "ch> delete - couldn\'t find social profile %llx";
            uVar15 = 0x10;
LAB_1005b4e99:
            uStack_54 = (undefined4)uVar6;
            local_58 = 0x8000100;
            local_50 = uVar2;
            __os_log_impl(0x100000000,uVar16,uVar15,pcVar13,&local_58,0xc);
          }
        }
        plVar7 = (long *)CONCAT44(uStack_a4,CONCAT22(uStack_a6,local_a8));
        plVar8 = (long *)(CONCAT26(uStack_9a,CONCAT24(uStack_9c,uStack_a0)) + 1);
        uStack_a0 = SUB84(plVar8,0);
        uStack_9c = (undefined2)((ulong)plVar8 >> 0x20);
        uStack_9a = (undefined2)((ulong)plVar8 >> 0x30);
      }
      FUN_1001aae6c(local_b8);
      FUN_1001aae6c(auStack_98);
      plVar7 = local_190;
    }
    if (plVar7 != (long *)0x0) {
      LOCK();
      plVar8 = plVar7 + 1;
      lVar12 = *plVar8;
      *plVar8 = *plVar8 + -1;
      UNLOCK();
      if (lVar12 == 0) {
        (**(code **)(*plVar7 + 0x10))(plVar7);
        std::__shared_weak_count::__release_weak();
      }
    }
    FUN_1001a7a94(local_210);
  }
  uVar6 = FUN_10025b8e3();
  lVar12 = local_d8[7];
  if (lVar12 - 1U < 0xfffffffffffffffe) {
    cVar3 = _os_signpost_enabled(uVar6);
    if (cVar3 != '\0') {
      local_a8 = 0;
      __os_signpost_emit_with_name_impl
                (0x100000000,uVar6,2,lVar12,"ampl_process_social_profiles","",&local_a8,2);
    }
  }
  uVar6 = FUN_10025b8e3();
  lVar12 = local_d8[7];
  if (lVar12 - 1U < 0xfffffffffffffffe) {
    cVar3 = _os_signpost_enabled(uVar6);
    if (cVar3 != '\0') {
      local_a8 = 0;
      __os_signpost_emit_with_name_impl
                (0x100000000,uVar6,1,lVar12,"ampl_process_tracks","",&local_a8,2);
    }
  }
  if (*local_d0 == 0) {
    uVar6 = FUN_1001cc310();
    cVar3 = _os_log_type_enabled(uVar6,0x10);
    if (cVar3 != '\0') {
      local_a8 = 0x202;
      uStack_a6 = 0x822;
      uStack_a4 = 0x7a0a90;
      uStack_a0 = 1;
      uStack_9c = 0x822;
      uStack_9a = 0xe9a0;
      auStack_98[0] = 0x1007e;
      __os_log_error_impl(0x100000000,uVar6,0x10,"%{public}s: (%{public}s)",&local_a8,0x16);
    }
    FUN_1001782e9(0,0);
    local_188[8] = 0;
    local_188[9] = 0;
    FUN_10032f0f2();
  }
  else {
    local_58 = 0x87dbf0;
    uStack_54 = 1;
    FUN_1001a7b90(&local_78);
    local_c8 = (long *)0x0;
    plStack_c0 = (long *)0x0;
    FUN_10032f0f2(&local_c8);
    FUN_10032f0f2(&local_a8);
    cVar3 = FUN_10026326c(local_d0,&local_78,&local_a8);
    pplVar9 = &local_c8;
    if (cVar3 != '\0') {
      pplVar9 = (long **)&local_a8;
    }
    FUN_1001a7a9e(local_188 + 8,pplVar9);
    FUN_1001a7a94(&local_a8);
    FUN_1001a7a94(&local_c8);
    FUN_1001ab240(&local_78);
  }
  if (local_188[8] != 0) {
    FUN_1001a7a9e(local_200,local_188 + 8);
    local_a8 = SUB82(local_200,0);
    uStack_a6 = (undefined2)((ulong)local_200 >> 0x10);
    uStack_a4 = (undefined4)((ulong)local_200 >> 0x20);
    uStack_a0 = 0;
    uStack_9c = 0;
    uStack_9a = 0;
    FUN_10032f0f2(auStack_98);
    plStack_c0 = (long *)FUN_1001a7bfa(local_200);
    local_c8 = local_200;
    FUN_10032f0f2(local_b8);
    plVar7 = (long *)CONCAT44(uStack_a4,CONCAT22(uStack_a6,local_a8));
    plVar8 = (long *)CONCAT26(uStack_9a,CONCAT24(uStack_9c,uStack_a0));
    while ((plVar7 != local_c8 || (plVar8 != plStack_c0))) {
      FUN_10025ee76(&local_78);
      FUN_1001a7b1c(auStack_98,&local_78);
      FUN_1001a8fac(&local_78);
      FUN_1001a7a9e(local_f8,auStack_98);
      FUN_10025eec4(&local_58,lVar5,local_f8);
      plVar7 = (long *)CONCAT44(uStack_54,local_58);
      if (plVar7 == (long *)0x0) {
        uVar6 = FUN_1001cc310();
        cVar3 = _os_log_type_enabled(uVar6,0x10);
        if (cVar3 != '\0') {
          local_78._0_4_ = 0x8220202;
          local_78._4_4_ = 0x7a0a90;
          uStack_70 = 1;
          uStack_6c = 0x822;
          uStack_6a = 0xd212;
          auStack_68[0] = 0x1007b;
          __os_log_error_impl(0x100000000,uVar6,0x10,"%{public}s: (%{public}s)",&local_78,0x16);
        }
        FUN_1001782e9(0,0);
      }
      else {
        if (local_d8[2] == 0) {
LAB_1005b6b4a:
                    /* WARNING: Subroutine does not return */
          FUN_10013bd04();
        }
        lVar12 = local_d8[1];
        lVar10 = std::__shared_weak_count::lock();
        if (lVar10 == 0) goto LAB_1005b6b4a;
        lVar14 = lVar12 + 0x40;
        if (lVar12 == 0) {
          lVar14 = 0;
        }
        local_78._0_4_ = (undefined4)lVar14;
        local_78._4_4_ = (undefined4)((ulong)lVar14 >> 0x20);
        uStack_70 = (undefined4)lVar10;
        uStack_6c = (undefined2)((ulong)lVar10 >> 0x20);
        uStack_6a = (undefined2)((ulong)lVar10 >> 0x30);
        local_f8[2] = 0;
        plStack_e0 = (long *)0x0;
        (**(code **)(*plVar7 + 0x28))(plVar7);
        plVar7 = (long *)CONCAT26(uStack_6a,CONCAT24(uStack_6c,uStack_70));
        if (plVar7 != (long *)0x0) {
          LOCK();
          plVar8 = plVar7 + 1;
          lVar12 = *plVar8;
          *plVar8 = *plVar8 + -1;
          UNLOCK();
          if (lVar12 == 0) {
            (**(code **)(*plVar7 + 0x10))(plVar7);
            std::__shared_weak_count::__release_weak();
          }
        }
        if (plStack_e0 != (long *)0x0) {
          LOCK();
          plVar7 = plStack_e0 + 1;
          lVar12 = *plVar7;
          *plVar7 = *plVar7 + -1;
          UNLOCK();
          if (lVar12 == 0) {
            (**(code **)(*plStack_e0 + 0x10))(plStack_e0);
            std::__shared_weak_count::__release_weak();
          }
        }
        (*(code *)**(undefined8 **)CONCAT44(uStack_54,local_58))();
      }
      plVar7 = (long *)CONCAT26(uStack_4a,CONCAT24(uStack_4c,local_50));
      if (plVar7 != (long *)0x0) {
        LOCK();
        plVar8 = plVar7 + 1;
        lVar12 = *plVar8;
        *plVar8 = *plVar8 + -1;
        UNLOCK();
        if (lVar12 == 0) {
          (**(code **)(*plVar7 + 0x10))(plVar7);
          std::__shared_weak_count::__release_weak();
        }
      }
      FUN_1001a8fac(local_f8);
      plVar7 = (long *)CONCAT44(uStack_a4,CONCAT22(uStack_a6,local_a8));
      plVar8 = (long *)(CONCAT26(uStack_9a,CONCAT24(uStack_9c,uStack_a0)) + 1);
      uStack_a0 = SUB84(plVar8,0);
      uStack_9c = (undefined2)((ulong)plVar8 >> 0x20);
      uStack_9a = (undefined2)((ulong)plVar8 >> 0x30);
    }
    FUN_1001a8fac(local_b8);
    FUN_1001a8fac(auStack_98);
    FUN_1001a7a94(local_200);
  }
  if (*local_d0 == 0) {
    uVar6 = FUN_1001cc310();
    cVar3 = _os_log_type_enabled(uVar6,0x10);
    if (cVar3 != '\0') {
      local_a8 = 0x202;
      uStack_a6 = 0x822;
      uStack_a4 = 0x7a0a90;
      uStack_a0 = 1;
      uStack_9c = 0x822;
      uStack_9a = 0xe9a0;
      auStack_98[0] = 0x1007e;
      __os_log_error_impl(0x100000000,uVar6,0x10,"%{public}s: (%{public}s)",&local_a8,0x16);
    }
    FUN_1001782e9(0,0);
    local_f8[0] = 0;
    local_f8[1] = 0;
    FUN_10032f0f2();
  }
  else {
    local_58 = 0x882050;
    uStack_54 = 1;
    FUN_1001a7b90(&local_78);
    local_c8 = (long *)0x0;
    plStack_c0 = (long *)0x0;
    FUN_10032f0f2(&local_c8);
    FUN_10032f0f2(&local_a8);
    cVar3 = FUN_100329434(local_d0,&local_78,&local_a8);
    pplVar9 = &local_c8;
    if (cVar3 != '\0') {
      pplVar9 = (long **)&local_a8;
    }
    FUN_1001a7a9e(local_f8,pplVar9);
    FUN_1001a7a94(&local_a8);
    FUN_1001a7a94(&local_c8);
    FUN_1001ab240(&local_78);
  }
  if (local_f8[0] != 0) {
    FUN_1001a7a9e(local_1f0,local_f8);
    local_a8 = SUB82(local_1f0,0);
    uStack_a6 = (undefined2)((ulong)local_1f0 >> 0x10);
    uStack_a4 = (undefined4)((ulong)local_1f0 >> 0x20);
    uStack_a0 = 0;
    uStack_9c = 0;
    uStack_9a = 0;
    FUN_1001aa318(auStack_98);
    plStack_c0 = (long *)FUN_1001a7bfa(local_1f0);
    local_c8 = local_1f0;
    FUN_1001aa318();
    plVar7 = (long *)CONCAT44(uStack_a4,CONCAT22(uStack_a6,local_a8));
    plVar8 = (long *)CONCAT26(uStack_9a,CONCAT24(uStack_9c,uStack_a0));
    while ((plVar7 != local_c8 || (plVar8 != plStack_c0))) {
      FUN_1005b7934(&local_78);
      FUN_1001aaadc(auStack_98,&local_78);
      FUN_1001aae6c(&local_78);
      uVar6 = FUN_1001aaeaa(auStack_98,0);
      puVar11 = (undefined8 *)FUN_100300729(lVar5,uVar6);
      if (puVar11 == (undefined8 *)0x0) {
        if (DAT_1008c7660 != -1) {
          _dispatch_once(&DAT_1008c7660,&PTR___NSConcreteGlobalBlock_1008575c0);
        }
        uVar16 = DAT_1008c7658;
        cVar3 = _os_log_type_enabled(DAT_1008c7658,0x10);
        if (cVar3 != '\0') {
          local_78._0_4_ = 0x8000100;
          local_78._4_4_ = (undefined4)uVar6;
          uStack_70 = (undefined4)((ulong)uVar6 >> 0x20);
          __os_log_impl(0x100000000,uVar16,0x10,"ch> delete - couldn\'t find trackInfo %llx",
                        &local_78,0xc);
        }
      }
      else {
        if (DAT_1008c7660 != -1) {
          _dispatch_once(&DAT_1008c7660,&PTR___NSConcreteGlobalBlock_1008575c0);
        }
        uVar6 = DAT_1008c7658;
        cVar3 = _os_log_type_enabled(DAT_1008c7658,0);
        if (cVar3 != '\0') {
          uVar16 = *puVar11;
          FUN_100476ac1(&local_58,puVar11);
          uVar15 = FUN_1001b83ae(&local_58);
          local_78._0_4_ = 0x8000202;
          local_78._4_4_ = (undefined4)uVar16;
          uStack_70 = (undefined4)((ulong)uVar16 >> 0x20);
          uStack_6c = 0x820;
          uStack_6a = (undefined2)uVar15;
          auStack_68[0] = (undefined6)((ulong)uVar15 >> 0x10);
          __os_log_impl(0x100000000,uVar6,0,"ch> deleting trackInfo %llx \'%s\'",&local_78,0x16);
          FUN_1001b7a50(&local_58);
        }
        FUN_1004737f5(puVar11);
      }
      plVar7 = (long *)CONCAT44(uStack_a4,CONCAT22(uStack_a6,local_a8));
      plVar8 = (long *)(CONCAT26(uStack_9a,CONCAT24(uStack_9c,uStack_a0)) + 1);
      uStack_a0 = SUB84(plVar8,0);
      uStack_9c = (undefined2)((ulong)plVar8 >> 0x20);
      uStack_9a = (undefined2)((ulong)plVar8 >> 0x30);
    }
    FUN_1001aae6c(local_b8);
    FUN_1001aae6c(auStack_98);
    FUN_1001a7a94(local_1f0);
  }
  if (*local_d0 == 0) {
    uVar6 = FUN_1001cc310();
    cVar3 = _os_log_type_enabled(uVar6,0x10);
    if (cVar3 != '\0') {
      local_a8 = 0x202;
      uStack_a6 = 0x822;
      uStack_a4 = 0x7a0a90;
      uStack_a0 = 1;
      uStack_9c = 0x822;
      uStack_9a = 0xe9a0;
      auStack_98[0] = 0x1007e;
      __os_log_error_impl(0x100000000,uVar6,0x10,"%{public}s: (%{public}s)",&local_a8,0x16);
    }
    FUN_1001782e9(0,0);
    local_188[10] = 0;
    local_188[0xb] = 0;
    FUN_10032f0f2();
  }
  else {
    local_58 = 0x882070;
    uStack_54 = 1;
    FUN_1001a7b90(&local_78);
    local_c8 = (long *)0x0;
    plStack_c0 = (long *)0x0;
    FUN_10032f0f2(&local_c8);
    FUN_10032f0f2(&local_a8);
    cVar3 = FUN_100329434(local_d0,&local_78,&local_a8);
    pplVar9 = &local_c8;
    if (cVar3 != '\0') {
      pplVar9 = (long **)&local_a8;
    }
    FUN_1001a7a9e(local_188 + 10,pplVar9);
    FUN_1001a7a94(&local_a8);
    FUN_1001a7a94(&local_c8);
    FUN_1001ab240(&local_78);
  }
  if (local_188[10] != 0) {
    FUN_1001a7a9e(local_1e0,local_188 + 10);
    local_a8 = SUB82(local_1e0,0);
    uStack_a6 = (undefined2)((ulong)local_1e0 >> 0x10);
    uStack_a4 = (undefined4)((ulong)local_1e0 >> 0x20);
    uStack_a0 = 0;
    uStack_9c = 0;
    uStack_9a = 0;
    FUN_1001aa318(auStack_98);
    plStack_c0 = (long *)FUN_1001a7bfa(local_1e0);
    local_c8 = local_1e0;
    FUN_1001aa318();
    plVar7 = (long *)CONCAT44(uStack_a4,CONCAT22(uStack_a6,local_a8));
    plVar8 = (long *)CONCAT26(uStack_9a,CONCAT24(uStack_9c,uStack_a0));
    while ((plVar7 != local_c8 || (plVar8 != plStack_c0))) {
      FUN_1005b7934(&local_78);
      FUN_1001aaadc(auStack_98,&local_78);
      FUN_1001aae6c(&local_78);
      uVar6 = FUN_1001aaeaa(auStack_98,0);
      lVar12 = FUN_1002b390d(lVar5,uVar6);
      if (lVar12 == 0) {
        if (DAT_1008c7660 != -1) {
          _dispatch_once(&DAT_1008c7660,&PTR___NSConcreteGlobalBlock_1008575c0);
        }
        uVar16 = DAT_1008c7658;
        cVar3 = _os_log_type_enabled(DAT_1008c7658,0x10);
        if (cVar3 != '\0') {
          local_78._0_4_ = 0x8000100;
          local_78._4_4_ = (undefined4)uVar6;
          uStack_70 = (undefined4)((ulong)uVar6 >> 0x20);
          __os_log_impl(0x100000000,uVar16,0x10,"ch> delete - couldn\'t find trackInstance %llx",
                        &local_78,0xc);
        }
      }
      else {
        if (DAT_1008c7660 != -1) {
          _dispatch_once(&DAT_1008c7660,&PTR___NSConcreteGlobalBlock_1008575c0);
        }
        uVar6 = DAT_1008c7658;
        cVar3 = _os_log_type_enabled(DAT_1008c7658,0);
        if (cVar3 != '\0') {
          uVar16 = *(undefined8 *)(lVar12 + 0x28);
          FUN_100476ac1(&local_58,*(undefined8 *)(lVar12 + 8));
          uVar15 = FUN_1001b83ae(&local_58);
          local_78._0_4_ = 0x8000202;
          local_78._4_4_ = (undefined4)uVar16;
          uStack_70 = (undefined4)((ulong)uVar16 >> 0x20);
          uStack_6c = 0x820;
          uStack_6a = (undefined2)uVar15;
          auStack_68[0] = (undefined6)((ulong)uVar15 >> 0x10);
          __os_log_impl(0x100000000,uVar6,0,"ch> deleting trackInstance %llx \'%s\'",&local_78,0x16)
          ;
          FUN_1001b7a50(&local_58);
        }
        FUN_1002b0cf4(lVar12);
      }
      plVar7 = (long *)CONCAT44(uStack_a4,CONCAT22(uStack_a6,local_a8));
      plVar8 = (long *)(CONCAT26(uStack_9a,CONCAT24(uStack_9c,uStack_a0)) + 1);
      uStack_a0 = SUB84(plVar8,0);
      uStack_9c = (undefined2)((ulong)plVar8 >> 0x20);
      uStack_9a = (undefined2)((ulong)plVar8 >> 0x30);
    }
    FUN_1001aae6c(local_b8);
    FUN_1001aae6c(auStack_98);
    FUN_1001a7a94(local_1e0);
  }
  uVar6 = FUN_10025b8e3();
  lVar12 = local_d8[7];
  if (lVar12 - 1U < 0xfffffffffffffffe) {
    cVar3 = _os_signpost_enabled(uVar6);
    if (cVar3 != '\0') {
      local_a8 = 0;
      __os_signpost_emit_with_name_impl
                (0x100000000,uVar6,2,lVar12,"ampl_process_tracks","",&local_a8,2);
    }
  }
  uVar6 = FUN_10025b8e3();
  lVar12 = local_d8[7];
  if (lVar12 - 1U < 0xfffffffffffffffe) {
    cVar3 = _os_signpost_enabled(uVar6);
    if (cVar3 != '\0') {
      local_a8 = 0;
      __os_signpost_emit_with_name_impl
                (0x100000000,uVar6,1,lVar12,"ampl_process_playlists","",&local_a8,2);
    }
  }
  if (*local_d0 == 0) {
    uVar6 = FUN_1001cc310();
    cVar3 = _os_log_type_enabled(uVar6,0x10);
    if (cVar3 != '\0') {
      local_a8 = 0x202;
      uStack_a6 = 0x822;
      uStack_a4 = 0x7a0a90;
      uStack_a0 = 1;
      uStack_9c = 0x822;
      uStack_9a = 0xe9a0;
      auStack_98[0] = 0x1007e;
      __os_log_error_impl(0x100000000,uVar6,0x10,"%{public}s: (%{public}s)",&local_a8,0x16);
    }
    FUN_1001782e9(0,0);
    local_188[0xc] = 0;
    local_188[0xd] = 0;
    FUN_10032f0f2();
  }
  else {
    local_58 = 0x87ddd0;
    uStack_54 = 1;
    FUN_1001a7b90(&local_78);
    local_c8 = (long *)0x0;
    plStack_c0 = (long *)0x0;
    FUN_10032f0f2(&local_c8);
    FUN_10032f0f2(&local_a8);
    cVar3 = FUN_10026326c(local_d0,&local_78,&local_a8);
    pplVar9 = &local_c8;
    if (cVar3 != '\0') {
      pplVar9 = (long **)&local_a8;
    }
    FUN_1001a7a9e(local_188 + 0xc,pplVar9);
    FUN_1001a7a94(&local_a8);
    FUN_1001a7a94(&local_c8);
    FUN_1001ab240(&local_78);
  }
  if (local_188[0xc] != 0) {
    FUN_1001a7a9e(local_1d0,local_188 + 0xc);
    local_a8 = SUB82(local_1d0,0);
    uStack_a6 = (undefined2)((ulong)local_1d0 >> 0x10);
    uStack_a4 = (undefined4)((ulong)local_1d0 >> 0x20);
    uStack_a0 = 0;
    uStack_9c = 0;
    uStack_9a = 0;
    FUN_10032f0f2(auStack_98);
    plStack_c0 = (long *)FUN_1001a7bfa(local_1d0);
    local_c8 = local_1d0;
    FUN_10032f0f2(local_b8);
    plVar7 = (long *)CONCAT44(uStack_a4,CONCAT22(uStack_a6,local_a8));
    plVar8 = (long *)CONCAT26(uStack_9a,CONCAT24(uStack_9c,uStack_a0));
    while ((plVar7 != local_c8 || (plVar8 != plStack_c0))) {
      FUN_10025ee76(&local_78);
      FUN_1001a7b1c(auStack_98,&local_78);
      FUN_1001a8fac(&local_78);
      FUN_1001a7a9e(local_f8 + 2,auStack_98);
      FUN_1003294ee(&local_58,lVar5,local_f8 + 2);
      if ((undefined8 *)CONCAT44(uStack_54,local_58) == (undefined8 *)0x0) {
        uVar6 = FUN_1001cc310();
        cVar3 = _os_log_type_enabled(uVar6,0x10);
        if (cVar3 != '\0') {
          local_78._0_4_ = 0x8220202;
          local_78._4_4_ = 0x7a0a90;
          uStack_70 = 1;
          uStack_6c = 0x822;
          uStack_6a = 0xd212;
          auStack_68[0] = 0x1007b;
          __os_log_error_impl(0x100000000,uVar6,0x10,"%{public}s: (%{public}s)",&local_78,0x16);
        }
        FUN_1001782e9(0,0);
      }
      else {
        (*(code *)**(undefined8 **)CONCAT44(uStack_54,local_58))();
      }
      plVar7 = (long *)CONCAT26(uStack_4a,CONCAT24(uStack_4c,local_50));
      if (plVar7 != (long *)0x0) {
        LOCK();
        plVar8 = plVar7 + 1;
        lVar12 = *plVar8;
        *plVar8 = *plVar8 + -1;
        UNLOCK();
        if (lVar12 == 0) {
          (**(code **)(*plVar7 + 0x10))(plVar7);
          std::__shared_weak_count::__release_weak();
        }
      }
      FUN_1001a8fac(local_f8 + 2);
      plVar7 = (long *)CONCAT44(uStack_a4,CONCAT22(uStack_a6,local_a8));
      plVar8 = (long *)(CONCAT26(uStack_9a,CONCAT24(uStack_9c,uStack_a0)) + 1);
      uStack_a0 = SUB84(plVar8,0);
      uStack_9c = (undefined2)((ulong)plVar8 >> 0x20);
      uStack_9a = (undefined2)((ulong)plVar8 >> 0x30);
    }
    FUN_1001a8fac(local_b8);
    FUN_1001a8fac(auStack_98);
    FUN_1001a7a94(local_1d0);
  }
  if (*local_d0 == 0) {
    uVar6 = FUN_1001cc310();
    cVar3 = _os_log_type_enabled(uVar6,0x10);
    if (cVar3 != '\0') {
      local_a8 = 0x202;
      uStack_a6 = 0x822;
      uStack_a4 = 0x7a0a90;
      uStack_a0 = 1;
      uStack_9c = 0x822;
      uStack_9a = 0xe9a0;
      auStack_98[0] = 0x1007e;
      __os_log_error_impl(0x100000000,uVar6,0x10,"%{public}s: (%{public}s)",&local_a8,0x16);
    }
    FUN_1001782e9(0,0);
    local_f8[2] = 0;
    plStack_e0 = (long *)0x0;
    FUN_10032f0f2();
  }
  else {
    local_58 = 0x8820f0;
    uStack_54 = 1;
    FUN_1001a7b90(&local_78);
    local_c8 = (long *)0x0;
    plStack_c0 = (long *)0x0;
    FUN_10032f0f2(&local_c8);
    FUN_10032f0f2(&local_a8);
    cVar3 = FUN_100329434(local_d0,&local_78,&local_a8);
    pplVar9 = &local_c8;
    if (cVar3 != '\0') {
      pplVar9 = (long **)&local_a8;
    }
    FUN_1001a7a9e(local_f8 + 2,pplVar9);
    FUN_1001a7a94(&local_a8);
    FUN_1001a7a94(&local_c8);
    FUN_1001ab240(&local_78);
  }
  if (local_f8[2] != 0) {
    FUN_1001a7a9e(local_1c0,local_f8 + 2);
    local_a8 = SUB82(local_1c0,0);
    uStack_a6 = (undefined2)((ulong)local_1c0 >> 0x10);
    uStack_a4 = (undefined4)((ulong)local_1c0 >> 0x20);
    uStack_a0 = 0;
    uStack_9c = 0;
    uStack_9a = 0;
    FUN_1001aa318(auStack_98);
    plStack_c0 = (long *)FUN_1001a7bfa(local_1c0);
    local_c8 = local_1c0;
    FUN_1001aa318();
    plVar7 = (long *)CONCAT44(uStack_a4,CONCAT22(uStack_a6,local_a8));
    plVar8 = (long *)CONCAT26(uStack_9a,CONCAT24(uStack_9c,uStack_a0));
    while ((plVar7 != local_c8 || (plVar8 != plStack_c0))) {
      FUN_1005b7934(&local_78);
      FUN_1001aaadc(auStack_98,&local_78);
      FUN_1001aae6c(&local_78);
      uVar6 = FUN_1001aaeaa(auStack_98,0);
      lVar12 = FUN_10048b5ec(lVar5,uVar6);
      if (lVar12 == 0) {
        if (DAT_1008c7660 != -1) {
          _dispatch_once(&DAT_1008c7660,&PTR___NSConcreteGlobalBlock_1008575c0);
        }
        uVar16 = DAT_1008c7658;
        cVar3 = _os_log_type_enabled(DAT_1008c7658,0x10);
        if (cVar3 != '\0') {
          local_78._0_4_ = 0x8000100;
          local_78._4_4_ = (undefined4)uVar6;
          uStack_70 = (undefined4)((ulong)uVar6 >> 0x20);
          __os_log_impl(0x100000000,uVar16,0x10,"ch> delete - couldn\'t find playlist %llx",
                        &local_78,0xc);
        }
      }
      else {
        if (DAT_1008c7660 != -1) {
          _dispatch_once(&DAT_1008c7660,&PTR___NSConcreteGlobalBlock_1008575c0);
        }
        uVar6 = DAT_1008c7658;
        cVar3 = _os_log_type_enabled(DAT_1008c7658,0);
        if (cVar3 != '\0') {
          uVar16 = *(undefined8 *)(lVar12 + 0x60);
          FUN_100486d8f(&local_58,lVar12);
          uVar15 = FUN_1001b83ae(&local_58);
          local_78._0_4_ = 0x8000202;
          local_78._4_4_ = (undefined4)uVar16;
          uStack_70 = (undefined4)((ulong)uVar16 >> 0x20);
          uStack_6c = 0x820;
          uStack_6a = (undefined2)uVar15;
          auStack_68[0] = (undefined6)((ulong)uVar15 >> 0x10);
          __os_log_impl(0x100000000,uVar6,0,"ch> deleting playlist %llx \'%s\'",&local_78,0x16);
          FUN_1001b7a50(&local_58);
        }
        FUN_100488d27(lVar12,0,0);
      }
      plVar7 = (long *)CONCAT44(uStack_a4,CONCAT22(uStack_a6,local_a8));
      plVar8 = (long *)(CONCAT26(uStack_9a,CONCAT24(uStack_9c,uStack_a0)) + 1);
      uStack_a0 = SUB84(plVar8,0);
      uStack_9c = (undefined2)((ulong)plVar8 >> 0x20);
      uStack_9a = (undefined2)((ulong)plVar8 >> 0x30);
    }
    FUN_1001aae6c(local_b8);
    FUN_1001aae6c(auStack_98);
    FUN_1001a7a94(local_1c0);
  }
  uVar6 = FUN_10025b8e3();
  lVar12 = local_d8[7];
  if (lVar12 - 1U < 0xfffffffffffffffe) {
    cVar3 = _os_signpost_enabled(uVar6);
    if (cVar3 != '\0') {
      local_a8 = 0;
      __os_signpost_emit_with_name_impl
                (0x100000000,uVar6,2,lVar12,"ampl_process_playlists","",&local_a8,2);
    }
  }
  if (*local_d0 == 0) {
    uVar6 = FUN_1001cc310();
    cVar3 = _os_log_type_enabled(uVar6,0x10);
    if (cVar3 != '\0') {
      local_a8 = 0x202;
      uStack_a6 = 0x822;
      uStack_a4 = 0x7a0a90;
      uStack_a0 = 1;
      uStack_9c = 0x822;
      uStack_9a = 0xe9a0;
      auStack_98[0] = 0x1007e;
      __os_log_error_impl(0x100000000,uVar6,0x10,"%{public}s: (%{public}s)",&local_a8,0x16);
    }
    FUN_1001782e9(0,0);
    local_188[0xe] = 0;
    local_188[0xf] = 0;
    FUN_10032f0f2();
  }
  else {
    local_58 = 0x882030;
    uStack_54 = 1;
    FUN_1001a7b90(&local_78);
    local_c8 = (long *)0x0;
    plStack_c0 = (long *)0x0;
    FUN_10032f0f2(&local_c8);
    FUN_10032f0f2(&local_a8);
    cVar3 = FUN_10026326c(local_d0,&local_78,&local_a8);
    pplVar9 = &local_c8;
    if (cVar3 != '\0') {
      pplVar9 = (long **)&local_a8;
    }
    FUN_1001a7a9e(local_188 + 0xe,pplVar9);
    FUN_1001a7a94(&local_a8);
    FUN_1001a7a94(&local_c8);
    FUN_1001ab240(&local_78);
  }
  if (local_188[0xe] != 0) {
    FUN_1001a7a9e(local_1b0,local_188 + 0xe);
    plStack_c0 = (long *)0x0;
    local_c8 = local_1b0;
    FUN_10032f0f2(local_b8);
    uVar6 = FUN_1001a7bfa(local_1b0);
    uStack_70 = (undefined4)uVar6;
    uStack_6c = (undefined2)((ulong)uVar6 >> 0x20);
    uStack_6a = (undefined2)((ulong)uVar6 >> 0x30);
    local_78 = local_1b0;
    FUN_10032f0f2(auStack_68);
    for (; (local_c8 != local_78 ||
           (plStack_c0 != (long *)CONCAT26(uStack_6a,CONCAT24(uStack_6c,uStack_70))));
        plStack_c0 = (long *)((long)plStack_c0 + 1)) {
      FUN_10025ee76(&local_a8);
      FUN_1001a7b1c(local_b8,&local_a8);
      FUN_1001a8fac(&local_a8);
      FUN_100262e82(&local_a8,local_b8);
      lVar12 = FUN_100300729(lVar5,CONCAT44(uStack_a4,CONCAT22(uStack_a6,local_a8)));
      if (lVar12 == 0) {
        if (DAT_1008c7660 != -1) {
          _dispatch_once(&DAT_1008c7660,&PTR___NSConcreteGlobalBlock_1008575c0);
        }
        uVar6 = DAT_1008c7658;
        cVar3 = _os_log_type_enabled(DAT_1008c7658,1);
        if (cVar3 != '\0') {
          uStack_54 = CONCAT22(uStack_a6,local_a8);
          local_58 = 0x8000100;
          local_50 = uStack_a4;
          __os_log_impl(0x100000000,uVar6,1,"ch> play data change - couldn\'t find trackInfo %llx",
                        &local_58,0xc);
        }
      }
      else {
        uVar6 = FUN_1001cc310();
        cVar3 = _os_log_type_enabled(uVar6,0x10);
        if (cVar3 != '\0') {
          local_58 = 0x8220202;
          uStack_54 = 0x7a0a90;
          local_50 = 1;
          uStack_4c = 0x822;
          uStack_4a = 0xe9a2;
          uStack_48 = 0x10079;
          __os_log_error_impl(0x100000000,uVar6,0x10,"%{public}s: (%{public}s)",&local_58,0x16);
        }
        FUN_1001782e9(0,0);
      }
    }
    FUN_1001a8fac(auStack_68);
    FUN_1001a8fac(local_b8);
    FUN_1001a7a94(local_1b0);
  }
  if (*local_d0 == 0) {
    uVar6 = FUN_1001cc310();
    cVar3 = _os_log_type_enabled(uVar6,0x10);
    if (cVar3 != '\0') {
      local_a8 = 0x202;
      uStack_a6 = 0x822;
      uStack_a4 = 0x7a0a90;
      uStack_a0 = 1;
      uStack_9c = 0x822;
      uStack_9a = 0xe9a0;
      auStack_98[0] = 0x1007e;
      __os_log_error_impl(0x100000000,uVar6,0x10,"%{public}s: (%{public}s)",&local_a8,0x16);
    }
    FUN_1001782e9(0,0);
    FUN_10032f0f2(&local_78);
  }
  else {
    FUN_1001a7b90(&local_58);
    FUN_10032f0f2(&local_c8);
    FUN_10032f0f2(&local_a8);
    cVar3 = FUN_1001a9164(local_d0,&local_58,&local_a8);
    pplVar9 = &local_c8;
    if (cVar3 != '\0') {
      pplVar9 = (long **)&local_a8;
    }
    FUN_1001a7a9e(&local_78,pplVar9);
    FUN_1001a8fac(&local_a8);
    FUN_1001a8fac(&local_c8);
    FUN_1001ab240(&local_58);
  }
  if (local_78 != (long *)0x0) {
    FUN_1001a7a9e(local_1a0,&local_78);
    FUN_1004a06c4(&local_c8,lVar5,local_1a0);
    if (local_c8 == (long *)0x0) {
      uVar6 = FUN_1001cc310();
      cVar3 = _os_log_type_enabled(uVar6,0x10);
      if (cVar3 != '\0') {
        local_a8 = 0x202;
        uStack_a6 = 0x822;
        uStack_a4 = 0x7a0a90;
        uStack_a0 = 1;
        uStack_9c = 0x822;
        uStack_9a = 0xd212;
        auStack_98[0] = 0x1007b;
        __os_log_error_impl(0x100000000,uVar6,0x10,"%{public}s: (%{public}s)",&local_a8,0x16);
      }
      FUN_1001782e9(0,0);
    }
    else {
      uStack_a4 = *(undefined4 *)((long)local_d8 + 0x4c);
      uStack_a0 = (undefined4)local_d8[10];
      local_a8 = (undefined2)(int)local_d8[9];
      uStack_a6 = (undefined2)((uint)(int)local_d8[9] >> 0x10);
      uStack_9c = (undefined2)*(undefined4 *)((long)local_d8 + 0x54);
      uStack_9a = (undefined2)((uint)*(undefined4 *)((long)local_d8 + 0x54) >> 0x10);
      if (local_d8[10] != 0) {
        LOCK();
        plVar7 = (long *)(local_d8[10] + 8);
        *plVar7 = *plVar7 + 1;
        UNLOCK();
      }
      FUN_100203686(local_c8 + 6,&local_a8);
      plVar7 = (long *)CONCAT26(uStack_9a,CONCAT24(uStack_9c,uStack_a0));
      if (plVar7 != (long *)0x0) {
        LOCK();
        plVar8 = plVar7 + 1;
        lVar12 = *plVar8;
        *plVar8 = *plVar8 + -1;
        UNLOCK();
        if (lVar12 == 0) {
          (**(code **)(*plVar7 + 0x10))(plVar7);
          std::__shared_weak_count::__release_weak();
        }
      }
      (**(code **)*local_c8)();
    }
    if (plStack_c0 != (long *)0x0) {
      LOCK();
      plVar7 = plStack_c0 + 1;
      lVar12 = *plVar7;
      *plVar7 = *plVar7 + -1;
      UNLOCK();
      if (lVar12 == 0) {
        (**(code **)(*plStack_c0 + 0x10))(plStack_c0);
        std::__shared_weak_count::__release_weak();
      }
    }
    FUN_1001a8fac(local_1a0);
  }
  for (puVar11 = (undefined8 *)local_d8[0x19]; puVar11 != (undefined8 *)0x0;
      puVar11 = (undefined8 *)*puVar11) {
    lVar12 = FUN_1004cfc63(local_d8[4],*(undefined4 *)(puVar11 + 2));
    if (lVar12 != 0) {
      FUN_1005e37a3(lVar12);
    }
  }
  for (puVar11 = (undefined8 *)local_d8[0x1e]; puVar11 != (undefined8 *)0x0;
      puVar11 = (undefined8 *)*puVar11) {
    lVar12 = FUN_1003a31e6(local_d8[4],*(undefined4 *)(puVar11 + 2));
    if (lVar12 != 0) {
      FUN_1003a040b(lVar12);
    }
  }
  if (DAT_1008c7660 != -1) {
    _dispatch_once(&DAT_1008c7660,&PTR___NSConcreteGlobalBlock_1008575c0);
  }
  uVar6 = DAT_1008c7658;
  cVar3 = _os_log_type_enabled(DAT_1008c7658,1);
  if (cVar3 != '\0') {
    local_a8 = 0;
    __os_log_impl(0x100000000,uVar6,1,"ch>      ----- END CHANGE PROCESSING -----",&local_a8,2);
  }
  FUN_1002fbbfc(lVar5);
  uVar6 = FUN_10025b8e3();
  lVar5 = local_d8[7];
  if (lVar5 - 1U < 0xfffffffffffffffe) {
    cVar3 = _os_signpost_enabled(uVar6);
    if (cVar3 != '\0') {
      local_a8 = 0;
      __os_signpost_emit_with_name_impl
                (0x100000000,uVar6,2,lVar5,"ampl_process_changes","",&local_a8,2);
    }
  }
  FUN_1001a8fac(&local_78);
  FUN_1001a7a94(local_188 + 0xe);
  FUN_1001a7a94(local_f8 + 2);
  FUN_1001a7a94(local_188 + 0xc);
  FUN_1001a7a94(local_188 + 10);
  FUN_1001a7a94(local_f8);
  FUN_1001a7a94(local_188 + 8);
  FUN_1001a7a94(local_188 + 6);
  FUN_1001a7a94(local_188 + 4);
  FUN_1001a7a94(local_188 + 2);
  FUN_1001a7a94(local_188);
  if (local_100 != (long *)0x0) {
    LOCK();
    plVar7 = local_100 + 1;
    lVar5 = *plVar7;
    *plVar7 = *plVar7 + -1;
    UNLOCK();
    if (lVar5 == 0) {
      (**(code **)(*local_100 + 0x10))(local_100);
      std::__shared_weak_count::__release_weak();
    }
  }
LAB_1005b6635:
  if (*(long *)PTR____stack_chk_guard_10082cb58 == local_38) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  ___stack_chk_fail();
}

