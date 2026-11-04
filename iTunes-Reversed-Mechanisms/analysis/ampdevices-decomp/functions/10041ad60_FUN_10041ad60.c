// name: FUN_10041ad60
// address: 10041ad60

undefined8 FUN_10041ad60(double param_1,long *param_2)

{
  int iVar1;
  char cVar2;
  undefined4 uVar3;
  undefined8 uVar4;
  long lVar5;
  undefined8 uVar6;
  long *plVar7;
  char *pcVar8;
  double dVar9;
  undefined1 local_80 [8];
  long *local_78;
  double local_70;
  undefined8 local_68;
  undefined4 uStack_60;
  undefined2 uStack_5c;
  undefined2 uStack_5a;
  undefined6 uStack_58;
  undefined2 local_52;
  long *local_50;
  long *local_48;
  long local_38;
  
  local_38 = *(long *)PTR____stack_chk_guard_10082cb58;
  local_70 = param_1;
  if ((param_1 == 0.0) && (!NAN(param_1))) {
    uVar6 = FUN_1001cc310();
    cVar2 = _os_log_type_enabled(uVar6,0x10);
    if (cVar2 != '\0') {
      local_68._0_4_ = 0x8220202;
      local_68._4_4_ = 0x7a0a90;
      uStack_60 = 1;
      uStack_5c = 0x822;
      uStack_5a = 0x2048;
      uStack_58 = 0x1007b;
      __os_log_error_impl(0x100000000,uVar6,0x10,"%{public}s: (%{public}s)",&local_68,0x16);
    }
    FUN_1001782e9(0,0);
    uVar6 = 0x686;
    goto LAB_10041b1ea;
  }
  if (DAT_1008c75c0 != -1) {
    _dispatch_once(&DAT_1008c75c0,&PTR___NSConcreteGlobalBlock_100857068);
  }
  uVar6 = DAT_1008c75b8;
  cVar2 = _os_log_type_enabled(DAT_1008c75b8,1);
  if (cVar2 != '\0') {
    uVar4 = FUN_1001b83ae(param_2 + 0xc);
    cVar2 = FUN_1001df957("","",0);
    pcVar8 = "in";
    if (cVar2 == '\0') {
      pcVar8 = "";
    }
    local_50 = (long *)FUN_1004194cc((int)param_2[0x260]);
    local_68._0_4_ = 0x8200302;
    local_68._4_4_ = (undefined4)uVar4;
    uStack_60 = (undefined4)((ulong)uVar4 >> 0x20);
    uStack_5c = 0x820;
    uStack_5a = SUB82(pcVar8,0);
    uStack_58 = (undefined6)((ulong)pcVar8 >> 0x10);
    local_52 = 0x820;
    __os_log_impl(0x100000000,uVar6,1,"\"%s\" %s state %s",&local_68,0x20);
  }
  if (2 < (int)param_2[0x260] - 6U) {
    uVar6 = FUN_1001cc310();
    cVar2 = _os_log_type_enabled(uVar6,0x10);
    if (cVar2 != '\0') {
      local_68._0_4_ = 0x8220202;
      local_68._4_4_ = 0x7a0a90;
      uStack_60 = 1;
      uStack_5c = 0x822;
      uStack_5a = 0xd2a1;
      uStack_58 = 0x1007c;
      __os_log_error_impl(0x100000000,uVar6,0x10,"%{public}s: (%{public}s)",&local_68,0x16);
    }
    FUN_1001782e9(0,0);
    uVar6 = 0xffffffee;
    goto LAB_10041b1ea;
  }
  dVar9 = (double)_CFAbsoluteTimeGetCurrent();
  local_68._0_4_ = 0x857fe0;
  local_68._4_4_ = 1;
  uStack_60 = 0x419852;
  uStack_5c = 1;
  uStack_5a = 0;
  uStack_58 = 0;
  local_52 = 0;
  local_50 = param_2;
  local_48 = &local_68;
  FUN_1001bde16(local_70 - dVar9,local_80,&local_68);
  FUN_100217418(param_2 + 0x268,local_80);
  if (local_78 != (long *)0x0) {
    LOCK();
    plVar7 = local_78 + 1;
    lVar5 = *plVar7;
    *plVar7 = *plVar7 + -1;
    UNLOCK();
    if (lVar5 == 0) {
      (**(code **)(*local_78 + 0x10))(local_78);
      std::__shared_weak_count::__release_weak();
    }
  }
  if (local_48 == &local_68) {
    lVar5 = 0x20;
LAB_10041af53:
    (**(code **)(*local_48 + lVar5))();
  }
  else {
    lVar5 = 0x28;
    if (local_48 != (long *)0x0) goto LAB_10041af53;
  }
  if (param_2[0x268] == 0) {
    uVar6 = FUN_1001cc310();
    cVar2 = _os_log_type_enabled(uVar6,0x10);
    if (cVar2 != '\0') {
      local_68._0_4_ = 0x8220202;
      local_68._4_4_ = 0x7a0a90;
      uStack_60 = 1;
      uStack_5c = 0x822;
      uStack_5a = 0xd324;
      uStack_58 = 0x1007c;
      __os_log_error_impl(0x100000000,uVar6,0x10,"%{public}s: (%{public}s)",&local_68,0x16);
    }
    FUN_1001782e9(0,0);
    uVar6 = 0xffffff94;
    goto LAB_10041b1ea;
  }
  iVar1 = (int)param_2[0x260];
  if (iVar1 == 8) {
    *(undefined4 *)(param_2 + 0x260) = 5;
    if (DAT_1008c75c0 != -1) {
      _dispatch_once(&DAT_1008c75c0,&PTR___NSConcreteGlobalBlock_100857068);
    }
    uVar6 = DAT_1008c75b8;
    cVar2 = _os_log_type_enabled(DAT_1008c75b8,1);
    if (cVar2 != '\0') {
      uVar4 = FUN_1001b83ae(param_2 + 0xc);
      cVar2 = FUN_1001df957("setting","",0);
      pcVar8 = "in";
      if (cVar2 == '\0') {
        pcVar8 = "setting";
      }
      local_50 = (long *)FUN_1004194cc((int)param_2[0x260]);
      local_68._4_4_ = (undefined4)uVar4;
      uStack_60 = (undefined4)((ulong)uVar4 >> 0x20);
      uStack_5a = SUB82(pcVar8,0);
      uStack_58 = (undefined6)((ulong)pcVar8 >> 0x10);
LAB_10041b1a7:
      local_52 = 0x820;
      uStack_5c = 0x820;
      local_68._0_4_ = 0x8200302;
      __os_log_impl(0x100000000,uVar6,1,"\"%s\" %s state %s",&local_68,0x20);
    }
  }
  else if (iVar1 == 7) {
    *(undefined4 *)(param_2 + 0x260) = 4;
    if (DAT_1008c75c0 != -1) {
      _dispatch_once(&DAT_1008c75c0,&PTR___NSConcreteGlobalBlock_100857068);
    }
    uVar6 = DAT_1008c75b8;
    cVar2 = _os_log_type_enabled(DAT_1008c75b8,1);
    if (cVar2 != '\0') {
      uVar4 = FUN_1001b83ae(param_2 + 0xc);
      cVar2 = FUN_1001df957("setting","",0);
      pcVar8 = "in";
      if (cVar2 == '\0') {
        pcVar8 = "setting";
      }
      local_50 = (long *)FUN_1004194cc((int)param_2[0x260]);
      local_68._4_4_ = (undefined4)uVar4;
      uStack_60 = (undefined4)((ulong)uVar4 >> 0x20);
      uStack_5a = SUB82(pcVar8,0);
      uStack_58 = (undefined6)((ulong)pcVar8 >> 0x10);
      goto LAB_10041b1a7;
    }
  }
  else if (iVar1 == 6) {
    *(undefined4 *)(param_2 + 0x260) = 3;
    if (DAT_1008c75c0 != -1) {
      _dispatch_once(&DAT_1008c75c0,&PTR___NSConcreteGlobalBlock_100857068);
    }
    uVar6 = DAT_1008c75b8;
    cVar2 = _os_log_type_enabled(DAT_1008c75b8,1);
    if (cVar2 != '\0') {
      uVar4 = FUN_1001b83ae(param_2 + 0xc);
      cVar2 = FUN_1001df957("setting","",0);
      pcVar8 = "in";
      if (cVar2 == '\0') {
        pcVar8 = "setting";
      }
      local_50 = (long *)FUN_1004194cc((int)param_2[0x260]);
      local_68._4_4_ = (undefined4)uVar4;
      uStack_60 = (undefined4)((ulong)uVar4 >> 0x20);
      uStack_5a = SUB82(pcVar8,0);
      uStack_58 = (undefined6)((ulong)pcVar8 >> 0x10);
      goto LAB_10041b1a7;
    }
  }
  plVar7 = (long *)FUN_10039a28c();
  uVar4 = (**(code **)(*plVar7 + 0x58))(plVar7);
  uVar3 = (**(code **)(*param_2 + 0x50))(param_2);
  uVar6 = 0;
  FUN_1001c6987(uVar4,0x6d647571,0,uVar3,0);
LAB_10041b1ea:
  if (*(long *)PTR____stack_chk_guard_10082cb58 != local_38) {
                    /* WARNING: Subroutine does not return */
    ___stack_chk_fail();
  }
  return uVar6;
}

