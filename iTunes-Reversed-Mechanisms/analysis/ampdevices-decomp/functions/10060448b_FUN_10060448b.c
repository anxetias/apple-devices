// name: FUN_10060448b
// address: 10060448b

void FUN_10060448b(undefined8 param_1,undefined4 *param_2)

{
  short *psVar1;
  long *plVar2;
  char cVar3;
  int iVar4;
  long lVar5;
  undefined8 uVar6;
  long lVar7;
  undefined8 local_98;
  undefined4 local_90;
  undefined2 uStack_8c;
  undefined2 uStack_8a;
  undefined2 uStack_88;
  undefined4 uStack_86;
  undefined2 uStack_82;
  uint local_80;
  long *local_78;
  long local_68;
  undefined7 uStack_60;
  undefined4 uStack_59;
  undefined8 local_50;
  undefined8 uStack_48;
  long *local_40;
  long local_30;
  
  local_30 = *(long *)PTR____stack_chk_guard_10082cb58;
  lVar5 = FUN_1004de449(*param_2);
  if (lVar5 == 0) {
    uVar6 = FUN_1001cc310();
    cVar3 = _os_log_type_enabled(uVar6,0x10);
    if (cVar3 != '\0') {
      local_98._0_4_ = 0x8220202;
      local_98._4_4_ = 0x7a0a90;
      local_90 = 1;
      uStack_8c = 0x822;
      uStack_8a = 0xde6a;
      uStack_88 = 0x7a;
      uStack_86 = 1;
      __os_log_error_impl(0x100000000,uVar6,0x10,"%{public}s: (%{public}s)",&local_98,0x16);
    }
    FUN_1001782e9(0,0);
    goto LAB_100604687;
  }
  if (*(char *)(param_2 + 4) == '\0') {
    iVar4 = FUN_1004dccf5(lVar5,"");
    if (iVar4 != -0x80) {
      if (iVar4 == 0) {
        *(undefined1 *)(param_2 + 4) = 1;
        FUN_10023318f(lVar5,"");
        goto LAB_1006044c8;
      }
      uVar6 = FUN_1001cc310();
      cVar3 = _os_log_type_enabled(uVar6,0x10);
      if (cVar3 != '\0') {
        local_98._0_4_ = 0x8220202;
        local_98._4_4_ = 0x7a0a90;
        local_90 = 1;
        uStack_8c = 0x400;
        uStack_8a = (undefined2)iVar4;
        uStack_88 = (undefined2)((uint)iVar4 >> 0x10);
        __os_log_error_impl(0x100000000,uVar6,0x10,"%{public}s: err == (%d)",&local_98,0x12);
      }
    }
    if (DAT_1008c75c0 != -1) {
      _dispatch_once(&DAT_1008c75c0,&PTR___NSConcreteGlobalBlock_100857068);
    }
    uVar6 = DAT_1008c75b8;
    cVar3 = _os_log_type_enabled(DAT_1008c75b8,1);
    if (cVar3 != '\0') {
      local_98._0_4_ = 0x4000100;
      local_98._4_4_ = iVar4;
      __os_log_impl(0x100000000,uVar6,1,"sync> RetainIPod failed (%d)",&local_98,8);
    }
    if (iVar4 != 0) {
      FUN_1004eeb56(lVar5,iVar4);
      uVar6 = FUN_1001c156e();
      FUN_1001c6987(uVar6,0x69707378,*(undefined4 *)(lVar5 + 0x28),0,0);
    }
  }
  else {
LAB_1006044c8:
    if ((*(char *)(lVar5 + 0x6ad4) != '\0') &&
       (*(undefined1 *)(lVar5 + 0x6ad4) = 0, *(char *)(lVar5 + 0x3a2) == '\0')) {
      FUN_1004efbf5(lVar5,FUN_1004efe05);
    }
    iVar4 = FUN_1004dccf5(lVar5,"");
    if (iVar4 != -0x80) {
      if (iVar4 != 0) {
        uVar6 = FUN_1001cc310();
        cVar3 = _os_log_type_enabled(uVar6,0x10);
        if (cVar3 != '\0') {
          local_98._0_4_ = 0x8220202;
          local_98._4_4_ = 0x7a0a90;
          local_90 = 1;
          uStack_8c = 0x400;
          uStack_8a = (undefined2)iVar4;
          uStack_88 = (undefined2)((uint)iVar4 >> 0x10);
          __os_log_error_impl(0x100000000,uVar6,0x10,"%{public}s: err == (%d)",&local_98,0x12);
        }
        if (iVar4 != 0) goto LAB_100604646;
      }
      local_80 = *(uint *)(lVar5 + 0x28);
      uVar6 = *(undefined8 *)(param_2 + 2);
      local_98._0_4_ = 0x870ab0;
      local_98._4_4_ = 1;
      local_90 = 0x6048fe;
      uStack_8c = 1;
      uStack_8a = 0;
      uStack_88 = (undefined2)uVar6;
      uStack_86 = (undefined4)((ulong)uVar6 >> 0x10);
      uStack_82 = (undefined2)((ulong)uVar6 >> 0x30);
      uStack_60 = 0;
      uStack_59 = 0;
      local_50 = 0;
      uStack_48 = 0;
      local_40 = (long *)0x0;
      local_68 = (ulong)local_80 << 0x20;
      local_78 = &local_98;
      FUN_10017869a(&local_98);
      if (local_40 != (long *)0x0) {
        LOCK();
        plVar2 = local_40 + 1;
        lVar7 = *plVar2;
        *plVar2 = *plVar2 + -1;
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
        if (local_78 == (long *)0x0) goto LAB_100604646;
      }
      (**(code **)(*local_78 + lVar7))();
    }
LAB_100604646:
    FUN_1004ed4f6(lVar5);
    FUN_1004dd69c(lVar5,"");
  }
  if (*(long *)(lVar5 + 0x30) != 0) {
    psVar1 = (short *)(*(long *)(lVar5 + 0x30) + 0x27b0);
    *psVar1 = *psVar1 + -1;
  }
  *(undefined4 *)(lVar5 + 0x6b0c) = 0;
  FUN_10023318f(lVar5,"");
LAB_100604687:
  operator_delete(param_2);
  if (*(long *)PTR____stack_chk_guard_10082cb58 != local_30) {
                    /* WARNING: Subroutine does not return */
    ___stack_chk_fail();
  }
  return;
}

