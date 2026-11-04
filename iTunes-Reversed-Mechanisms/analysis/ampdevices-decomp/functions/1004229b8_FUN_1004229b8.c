// name: FUN_1004229b8
// address: 1004229b8

undefined8 FUN_1004229b8(long *param_1,void *param_2,char param_3)

{
  char cVar1;
  byte bVar2;
  int iVar3;
  undefined8 uVar4;
  long lVar5;
  long *plVar6;
  undefined8 uVar7;
  char *pcVar8;
  undefined **local_c8;
  long *local_c0;
  undefined ***local_a8;
  undefined8 local_98;
  undefined4 uStack_90;
  undefined2 uStack_8c;
  undefined2 uStack_8a;
  undefined2 uStack_88;
  undefined4 uStack_86;
  undefined2 local_82;
  long *local_80;
  long *local_78;
  undefined8 local_68;
  undefined7 uStack_60;
  undefined4 uStack_59;
  undefined8 local_50;
  undefined8 uStack_48;
  long *local_40;
  long local_38;
  
  local_38 = *(long *)PTR____stack_chk_guard_10082cb58;
  if (DAT_1008c75c0 != -1) {
    _dispatch_once(&DAT_1008c75c0,&PTR___NSConcreteGlobalBlock_100857068);
  }
  uVar7 = DAT_1008c75b8;
  cVar1 = _os_log_type_enabled(DAT_1008c75b8,1);
  if (cVar1 != '\0') {
    uVar4 = FUN_1001b83ae(param_1 + 0xc);
    cVar1 = FUN_1001df957("","",0);
    pcVar8 = "in";
    if (cVar1 == '\0') {
      pcVar8 = "";
    }
    local_80 = (long *)FUN_1004194cc((int)param_1[0x260]);
    local_98._0_4_ = 0x8200302;
    local_98._4_4_ = (undefined4)uVar4;
    uStack_90 = (undefined4)((ulong)uVar4 >> 0x20);
    uStack_8c = 0x820;
    uStack_8a = SUB82(pcVar8,0);
    uStack_88 = (undefined2)((ulong)pcVar8 >> 0x10);
    uStack_86 = (undefined4)((ulong)pcVar8 >> 0x20);
    local_82 = 0x820;
    __os_log_impl(0x100000000,uVar7,1,"\"%s\" %s state %s",&local_98,0x20,param_2,uVar4);
  }
  if (param_3 == '\0') {
    if (2 < (int)param_1[0x260] - 6U) goto LAB_100422bbb;
    if (param_2 == (void *)0x0) {
      uVar7 = FUN_1001cc310();
      cVar1 = _os_log_type_enabled(uVar7,0x10);
      if (cVar1 != '\0') {
        local_98._0_4_ = 0x8220202;
        local_98._4_4_ = 0x7a0a90;
        uStack_90 = 1;
        uStack_8c = 0x822;
        uStack_8a = 0xdaff;
        uStack_88 = 0x7c;
        uStack_86 = 1;
        __os_log_error_impl(0x100000000,uVar7,0x10,"%{public}s: (%{public}s)",&local_98,0x16);
      }
      FUN_1001782e9(0,0);
      uVar7 = 0xffffffce;
      goto LAB_100422eb5;
    }
    iVar3 = FUN_100229ae7(param_1[0x97]);
    if ((iVar3 != -0x80) && (iVar3 != 0)) {
      uVar7 = FUN_1001cc310();
      cVar1 = _os_log_type_enabled(uVar7,0x10);
      if (cVar1 != '\0') {
        local_98._0_4_ = 0x8220202;
        local_98._4_4_ = 0x7a0a90;
        uStack_90 = 1;
        uStack_8c = 0x400;
        uStack_8a = (undefined2)iVar3;
        uStack_88 = (undefined2)((uint)iVar3 >> 0x10);
        __os_log_error_impl(0x100000000,uVar7,0x10,"%{public}s: err == (%d)",&local_98,0x12);
      }
    }
    _memcpy(param_1 + 0x11,param_2,0x420);
    plVar6 = (long *)FUN_10039a28c();
    uVar7 = (**(code **)(*plVar6 + 0x50))(plVar6);
    uVar4 = (**(code **)(*param_1 + 0x78))(param_1);
    local_98._0_4_ = 0x83f010;
    local_98._4_4_ = 1;
    uStack_90 = (undefined4)uVar4;
    uStack_8c = (undefined2)((ulong)uVar4 >> 0x20);
    uStack_8a = (undefined2)((ulong)uVar4 >> 0x30);
    local_c8 = &PTR_FUN_100858220;
    local_c0 = param_1;
    local_a8 = &local_c8;
    local_78 = &local_98;
    FUN_10039c5a6(uVar7,&local_98,&local_c8);
    if (local_a8 == &local_c8) {
      lVar5 = 0x20;
LAB_100422c20:
      (**(code **)((long)*local_a8 + lVar5))();
    }
    else {
      lVar5 = 0x28;
      if (local_a8 != (undefined ***)0x0) goto LAB_100422c20;
    }
    if (local_78 == &local_98) {
      lVar5 = 0x20;
LAB_100422c40:
      (**(code **)(*local_78 + lVar5))();
    }
    else {
      lVar5 = 0x28;
      if (local_78 != (long *)0x0) goto LAB_100422c40;
    }
    if ((*(uint *)(param_1 + 0x260) & 0xfffffffe) == 6) goto LAB_100422c58;
LAB_100422e02:
    FUN_10041c020(param_1,1);
  }
  else {
    if (1 < (int)param_1[0x260] - 9U) {
LAB_100422bbb:
      uVar7 = FUN_1001cc310();
      cVar1 = _os_log_type_enabled(uVar7,0x10);
      if (cVar1 != '\0') {
        local_98._0_4_ = 0x8220202;
        local_98._4_4_ = 0x7a0a90;
        uStack_90 = 1;
        uStack_8c = 0x822;
        uStack_8a = 0xda04;
        uStack_88 = 0x7c;
        uStack_86 = 1;
        __os_log_error_impl(0x100000000,uVar7,0x10,"%{public}s: (%{public}s)",&local_98,0x16);
      }
      FUN_1001782e9(0,0);
      uVar7 = 0xffffffee;
      goto LAB_100422eb5;
    }
    if (param_2 != (void *)0x0) {
      _memcpy(param_1 + 0x11,param_2,0x420);
    }
LAB_100422c58:
    lVar5 = FUN_1004de449((int)param_1[0x10]);
    if (lVar5 == 0) {
      uVar7 = FUN_1005e9a2c();
      iVar3 = FUN_1005e79a6(uVar7,*(undefined4 *)((long)param_1 + 0x84),&local_98);
      if (iVar3 != 0) goto LAB_100422e02;
    }
    plVar6 = (long *)FUN_10039a28c();
    bVar2 = (**(code **)(*plVar6 + 0x28))(plVar6,0,0,0,0);
    if ((bVar2 | DAT_1008c7590 != 0) == 1) {
      if ((*(uint *)(param_1 + 0x260) & 0xfffffffe) == 6) {
        *(uint *)(param_1 + 0x260) = (*(uint *)(param_1 + 0x260) != 6) + 9;
        if (DAT_1008c75c0 != -1) {
          _dispatch_once(&DAT_1008c75c0,&PTR___NSConcreteGlobalBlock_100857068);
        }
        uVar7 = DAT_1008c75b8;
        cVar1 = _os_log_type_enabled(DAT_1008c75b8,1);
        if (cVar1 != '\0') {
          uVar4 = FUN_1001b83ae(param_1 + 0xc);
          cVar1 = FUN_1001df957("setting","",0);
          pcVar8 = "in";
          if (cVar1 == '\0') {
            pcVar8 = "setting";
          }
          local_80 = (long *)FUN_1004194cc((int)param_1[0x260]);
          local_98._0_4_ = 0x8200302;
          local_98._4_4_ = (undefined4)uVar4;
          uStack_90 = (undefined4)((ulong)uVar4 >> 0x20);
          uStack_8c = 0x820;
          uStack_8a = SUB82(pcVar8,0);
          uStack_88 = (undefined2)((ulong)pcVar8 >> 0x10);
          uStack_86 = (undefined4)((ulong)pcVar8 >> 0x20);
          local_82 = 0x820;
          __os_log_impl(0x100000000,uVar7,1,"\"%s\" %s state %s",&local_98,0x20);
        }
      }
    }
    else {
      DAT_1008c7590 = 1;
      *(int *)(param_1 + 1) = (int)param_1[1] + 1;
      local_80 = param_1;
      if (*(char *)((long)param_1 + 0x1353) == '\x01') {
        local_78 = &local_98;
        local_98._0_4_ = 0x8582b0;
        local_98._4_4_ = 1;
        uStack_90 = 0x42305e;
        uStack_8c = 1;
        uStack_8a = 0;
        uStack_88 = 0;
        uStack_86 = 0;
        local_82 = 0;
        local_68 = 0;
        uStack_60 = 0;
        uStack_59 = 0;
        local_50 = 0;
        uStack_48 = 0;
        local_40 = (long *)0x0;
        FUN_10017869a(local_78);
      }
      else {
        local_78 = &local_98;
        local_98._0_4_ = 0x8582b0;
        local_98._4_4_ = 1;
        uStack_90 = 0x423156;
        uStack_8c = 1;
        uStack_8a = 0;
        uStack_88 = 0;
        uStack_86 = 0;
        local_82 = 0;
        local_68 = 0;
        uStack_60 = 0;
        uStack_59 = 0;
        local_50 = 0;
        uStack_48 = 0;
        local_40 = (long *)0x0;
        FUN_10017869a(local_78);
      }
      if (local_40 != (long *)0x0) {
        LOCK();
        plVar6 = local_40 + 1;
        lVar5 = *plVar6;
        *plVar6 = *plVar6 + -1;
        UNLOCK();
        if (lVar5 == 0) {
          (**(code **)(*local_40 + 0x10))(local_40);
          std::__shared_weak_count::__release_weak();
        }
      }
      if (local_78 == &local_98) {
        lVar5 = 0x20;
      }
      else {
        lVar5 = 0x28;
        if (local_78 == (long *)0x0) goto LAB_100422eab;
      }
      (**(code **)(*local_78 + lVar5))();
    }
  }
LAB_100422eab:
  FUN_10022509c((int)param_1[0xb]);
  uVar7 = 0;
LAB_100422eb5:
  if (*(long *)PTR____stack_chk_guard_10082cb58 != local_38) {
                    /* WARNING: Subroutine does not return */
    ___stack_chk_fail();
  }
  return uVar7;
}

