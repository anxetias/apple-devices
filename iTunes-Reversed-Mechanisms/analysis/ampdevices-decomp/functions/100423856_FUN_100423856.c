// name: FUN_100423856
// address: 100423856

undefined8 FUN_100423856(long *param_1,int param_2,long param_3)

{
  bool bVar1;
  char cVar2;
  int iVar3;
  undefined4 uVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  long lVar7;
  long *plVar8;
  long lVar9;
  char *pcVar10;
  undefined8 local_e0;
  long local_d8;
  double local_d0;
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
  uVar6 = DAT_1008c75b8;
  cVar2 = _os_log_type_enabled(DAT_1008c75b8,1);
  if (cVar2 != '\0') {
    uVar5 = FUN_1001b83ae(param_1 + 0xc);
    cVar2 = FUN_1001df957("","",0);
    local_d0 = (double)CONCAT44(local_d0._4_4_,param_2);
    pcVar10 = "in";
    if (cVar2 == '\0') {
      pcVar10 = "";
    }
    local_80 = (long *)FUN_1004194cc((int)param_1[0x260]);
    local_98._0_4_ = 0x8200302;
    local_98._4_4_ = (undefined4)uVar5;
    uStack_90 = (undefined4)((ulong)uVar5 >> 0x20);
    uStack_8c = 0x820;
    uStack_8a = SUB82(pcVar10,0);
    uStack_88 = (undefined2)((ulong)pcVar10 >> 0x10);
    uStack_86 = (undefined4)((ulong)pcVar10 >> 0x20);
    param_2 = local_d0._0_4_;
    local_82 = 0x820;
    __os_log_impl(0x100000000,uVar6,1,"\"%s\" %s state %s",&local_98,0x20,uVar5);
  }
  if (2 < (int)param_1[0x260] - 6U) {
    uVar6 = FUN_1001cc310();
    cVar2 = _os_log_type_enabled(uVar6,0x10);
    if (cVar2 != '\0') {
      local_98._0_4_ = 0x8220202;
      local_98._4_4_ = 0x7a0a90;
      uStack_90 = 1;
      uStack_8c = 0x822;
      uStack_8a = 0xdb59;
      uStack_88 = 0x7c;
      uStack_86 = 1;
      __os_log_error_impl(0x100000000,uVar6,0x10,"%{public}s: (%{public}s)",&local_98,0x16);
    }
    FUN_1001782e9(0,0);
  }
  if ((param_2 == 0x1f7) && (param_2 = 0x1f7, *(char *)((long)param_1 + 0x1353) == '\x01')) {
    if ((*(char *)(param_3 + 0x778) == '\0') &&
       ((*(int *)(param_3 + 0x1304) == 0x68747470 &&
        (lVar7 = FUN_1001705fc(*(undefined8 *)(param_3 + 0x1350)), lVar7 != 0)))) {
      local_d8 = FUN_100171a6c(lVar7,&cf_X_Apple_JADownloadQueue_Token);
      local_e0 = FUN_100171a6c(lVar7,&cf_Retry_After);
      iVar3 = FUN_1001740d5(local_e0);
      if (iVar3 == 0) {
        uVar6 = FUN_1001cc310();
        cVar2 = _os_log_type_enabled(uVar6,0x10);
        if (cVar2 != '\0') {
          local_98._0_4_ = 0x8220202;
          local_98._4_4_ = 0x7a0a90;
          uStack_90 = 1;
          uStack_8c = 0x822;
          uStack_8a = 0xdf8a;
          uStack_88 = 0x7c;
          uStack_86 = 1;
          __os_log_error_impl(0x100000000,uVar6,0x10,"%{public}s: (%{public}s)",&local_98,0x16);
        }
        FUN_1001782e9(0,0);
        local_d0 = 0.0;
      }
      else {
        local_d0 = (double)_CFAbsoluteTimeGetCurrent();
        local_d0 = local_d0 + (double)iVar3;
      }
      FUN_1001c631b(param_3 + 0x90,&local_c8,0x30);
      local_c0 = (long *)0x1;
      FUN_1001c631b(&local_c8,param_3 + 0x90,0x30);
      local_98._0_4_ = 0x8582b0;
      local_98._4_4_ = 1;
      uStack_90 = 0x423640;
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
      local_80 = param_1;
      local_78 = &local_98;
      FUN_10017869a(&local_98);
      if (local_40 != (long *)0x0) {
        LOCK();
        plVar8 = local_40 + 1;
        lVar9 = *plVar8;
        *plVar8 = *plVar8 + -1;
        UNLOCK();
        if (lVar9 == 0) {
          (**(code **)(*local_40 + 0x10))(local_40);
          std::__shared_weak_count::__release_weak();
        }
      }
      if (local_78 == &local_98) {
        lVar9 = 0x20;
LAB_100423e5b:
        (**(code **)(*local_78 + lVar9))();
      }
      else {
        lVar9 = 0x28;
        if (local_78 != (long *)0x0) goto LAB_100423e5b;
      }
      if ((local_d8 == 0) || ((local_d0 == 0.0 && (!NAN(local_d0))))) {
        iVar3 = FUN_100229ae7(param_1[0x97]);
        if ((iVar3 != -0x80) && (iVar3 != 0)) {
          local_d0 = (double)FUN_1001cc310();
          cVar2 = _os_log_type_enabled(local_d0,0x10);
          if (cVar2 != '\0') {
            local_98._0_4_ = 0x8220202;
            local_98._4_4_ = 0x7a0a90;
            uStack_90 = 1;
            uStack_8c = 0x400;
            uStack_8a = (undefined2)iVar3;
            uStack_88 = (undefined2)((uint)iVar3 >> 0x10);
            __os_log_error_impl(0x100000000,local_d0,0x10,"%{public}s: err == (%d)",&local_98,0x12);
          }
        }
        DAT_1008c7590 = DAT_1008c7590 + 1;
        *(int *)(param_1 + 1) = (int)param_1[1] + 1;
        local_98._0_4_ = 0x8582b0;
        local_98._4_4_ = 1;
        uStack_90 = 0x42420e;
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
        local_80 = param_1;
        local_78 = &local_98;
        FUN_10017869a(&local_98);
        if (local_40 != (long *)0x0) {
          LOCK();
          plVar8 = local_40 + 1;
          lVar9 = *plVar8;
          *plVar8 = *plVar8 + -1;
          UNLOCK();
          if (lVar9 == 0) {
            (**(code **)(*local_40 + 0x10))(local_40);
            std::__shared_weak_count::__release_weak();
          }
        }
        if (local_78 == &local_98) {
          lVar9 = 0x20;
LAB_100423fe1:
          (**(code **)(*local_78 + lVar9))();
        }
        else {
          lVar9 = 0x28;
          if (local_78 != (long *)0x0) goto LAB_100423fe1;
        }
LAB_100423fe7:
        bVar1 = true;
        param_2 = 0x1f7;
      }
      else {
        param_2 = FUN_100224366();
        if (param_2 != -0x80) {
          if (param_2 == 0) {
            param_2 = FUN_10041ad60(local_d0,param_1);
            if (param_2 == 0) goto LAB_100423fe7;
            uVar6 = FUN_1001cc310();
            cVar2 = _os_log_type_enabled(uVar6,0x10);
            if (cVar2 != '\0') {
              uStack_8a = (undefined2)param_2;
              uStack_88 = (undefined2)((uint)param_2 >> 0x10);
              goto LAB_100424129;
            }
          }
          else {
            uVar6 = FUN_1001cc310();
            cVar2 = _os_log_type_enabled(uVar6,0x10);
            if (cVar2 != '\0') {
              uStack_8a = (undefined2)param_2;
              uStack_88 = (undefined2)((uint)param_2 >> 0x10);
LAB_100424129:
              uStack_8c = 0x400;
              uStack_90 = 1;
              local_98._4_4_ = 0x7a0a90;
              local_98._0_4_ = 0x8220202;
              __os_log_error_impl(0x100000000,uVar6,0x10,"%{public}s: err == (%d)",&local_98,0x12);
            }
          }
        }
        bVar1 = false;
      }
      FUN_10014d890(&local_e0);
      FUN_10014d890(&local_d8);
      FUN_10042690a(lVar7);
      if (bVar1) goto LAB_100423c38;
    }
    else {
      uVar6 = FUN_1001cc310();
      cVar2 = _os_log_type_enabled(uVar6,0x10);
      if (cVar2 != '\0') {
        local_98._0_4_ = 0x8220202;
        local_98._4_4_ = 0x7a0a90;
        uStack_90 = 1;
        uStack_8c = 0x822;
        uStack_8a = 0xdbd6;
        uStack_88 = 0x7c;
        uStack_86 = 1;
        __os_log_error_impl(0x100000000,uVar6,0x10,"%{public}s: (%{public}s)",&local_98,0x16);
      }
      FUN_1001782e9(0,0);
      FUN_10042690a(0);
    }
  }
  *(int *)(param_1 + 1) = (int)param_1[1] + 1;
  local_98._0_4_ = 0;
  FUN_1001c62d9(&uStack_90,8);
  FUN_100249f2c(param_1 + 0x95,&local_98);
  FUN_100249fca(&local_98);
  iVar3 = FUN_100229ae7(param_1[0x97]);
  if ((iVar3 != -0x80) && (iVar3 != 0)) {
    uVar6 = FUN_1001cc310();
    cVar2 = _os_log_type_enabled(uVar6,0x10);
    if (cVar2 != '\0') {
      local_98._0_4_ = 0x8220202;
      local_98._4_4_ = 0x7a0a90;
      uStack_90 = 1;
      uStack_8c = 0x400;
      uStack_8a = (undefined2)iVar3;
      uStack_88 = (undefined2)((uint)iVar3 >> 0x10);
      __os_log_error_impl(0x100000000,uVar6,0x10,"%{public}s: err == (%d)",&local_98,0x12);
    }
  }
  plVar8 = (long *)FUN_10039a28c();
  uVar6 = (**(code **)(*plVar8 + 0x50))(plVar8);
  uVar5 = (**(code **)(*param_1 + 0x78))(param_1);
  local_98._0_4_ = 0x83f010;
  local_98._4_4_ = 1;
  uStack_90 = (undefined4)uVar5;
  uStack_8c = (undefined2)((ulong)uVar5 >> 0x20);
  uStack_8a = (undefined2)((ulong)uVar5 >> 0x30);
  local_c8 = &PTR_FUN_100858360;
  local_c0 = param_1;
  local_a8 = &local_c8;
  local_78 = &local_98;
  FUN_10039c5a6(uVar6,&local_98,&local_c8);
  if (local_a8 == &local_c8) {
    lVar7 = 0x20;
LAB_100423b2e:
    (**(code **)((long)*local_a8 + lVar7))();
  }
  else {
    lVar7 = 0x28;
    if (local_a8 != (undefined ***)0x0) goto LAB_100423b2e;
  }
  if (local_78 == &local_98) {
    lVar7 = 0x20;
LAB_100423b4e:
    (**(code **)(*local_78 + lVar7))();
  }
  else {
    lVar7 = 0x28;
    if (local_78 != (long *)0x0) goto LAB_100423b4e;
  }
  FUN_10041bf60(param_1);
  plVar8 = (long *)FUN_10039a28c();
  uVar6 = (**(code **)(*plVar8 + 0x58))(plVar8);
  uVar4 = (**(code **)(*param_1 + 0x50))(param_1);
  FUN_1001c6987(uVar6,0x73776465,0,uVar4,0);
  DAT_1008c7590 = DAT_1008c7590 + 1;
  local_78 = operator_new(0x28);
  *local_78 = (long)&PTR_FUN_1008583e0;
  local_78[1] = (long)FUN_1004242ca;
  local_78[2] = 0;
  local_78[3] = (long)param_1;
  *(int *)(local_78 + 4) = param_2;
  local_68 = 0;
  uStack_60 = 0;
  uStack_59 = 0;
  local_50 = 0;
  uStack_48 = 0;
  local_40 = (long *)0x0;
  FUN_10017869a(&local_98);
  if (local_40 != (long *)0x0) {
    LOCK();
    plVar8 = local_40 + 1;
    lVar7 = *plVar8;
    *plVar8 = *plVar8 + -1;
    UNLOCK();
    if (lVar7 == 0) {
      (**(code **)(*local_40 + 0x10))(local_40);
      std::__shared_weak_count::__release_weak();
    }
  }
  if (local_78 == &local_98) {
    lVar7 = 0x20;
  }
  else {
    lVar7 = 0x28;
    if (local_78 == (long *)0x0) goto LAB_100423c38;
  }
  (**(code **)(*local_78 + lVar7))();
LAB_100423c38:
  if (*(long *)PTR____stack_chk_guard_10082cb58 != local_38) {
                    /* WARNING: Subroutine does not return */
    ___stack_chk_fail();
  }
  return 0;
}

