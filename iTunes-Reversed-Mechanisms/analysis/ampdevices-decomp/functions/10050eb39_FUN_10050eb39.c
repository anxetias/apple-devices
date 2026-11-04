// name: FUN_10050eb39
// address: 10050eb39

void FUN_10050eb39(long param_1,long param_2,char param_3,char param_4)

{
  long *plVar1;
  char cVar2;
  int iVar3;
  uint uVar4;
  long lVar5;
  char *pcVar6;
  undefined8 uVar7;
  uint uVar8;
  char *pcVar9;
  undefined8 uVar10;
  undefined8 local_98;
  undefined4 uStack_90;
  undefined2 uStack_8c;
  undefined2 uStack_8a;
  undefined2 uStack_88;
  undefined4 uStack_86;
  uint local_80;
  long *local_78;
  long local_68;
  undefined7 uStack_60;
  undefined1 uStack_59;
  undefined1 uStack_58;
  undefined1 uStack_57;
  undefined1 uStack_56;
  undefined8 local_50;
  undefined8 uStack_48;
  long *local_40;
  long local_38;
  
  local_38 = *(long *)PTR____stack_chk_guard_10082cb58;
  if (*(long *)(param_1 + 0x7168) == param_2) goto LAB_10050ef2e;
  lVar5 = FUN_1001705fc(param_2);
  FUN_10017060f(*(undefined8 *)(param_1 + 0x7168));
  *(long *)(param_1 + 0x7168) = lVar5;
  if (DAT_1008c75c0 != -1) {
    _dispatch_once(&DAT_1008c75c0,&PTR___NSConcreteGlobalBlock_100857068);
  }
  uVar7 = DAT_1008c75b8;
  cVar2 = _os_log_type_enabled(DAT_1008c75b8,1);
  if (lVar5 == 0) {
    if (cVar2 != '\0') {
      local_98._0_2_ = 0;
      pcVar9 = "support> current AMDeviceRef is NULL";
      uVar10 = 2;
      goto LAB_10050ec55;
    }
  }
  else if (cVar2 != '\0') {
    uVar10 = *(undefined8 *)(param_1 + 0x7168);
    iVar3 = _AMDeviceGetInterfaceType(uVar10);
    pcVar9 = "UNKNOWN";
    if (iVar3 == 2) {
      pcVar9 = "WiFi";
    }
    pcVar6 = "USB";
    if (iVar3 != 1) {
      pcVar6 = pcVar9;
    }
    local_98._0_2_ = 0x202;
    local_98._2_2_ = 0x800;
    local_98._4_4_ = (undefined4)uVar10;
    uStack_90 = (undefined4)((ulong)uVar10 >> 0x20);
    uStack_8c = 0x822;
    uStack_8a = SUB82(pcVar6,0);
    uStack_88 = (undefined2)((ulong)pcVar6 >> 0x10);
    uStack_86 = (undefined4)((ulong)pcVar6 >> 0x20);
    pcVar9 = "support> current AMDeviceRef is %p (%{public}s interface)";
    uVar10 = 0x16;
LAB_10050ec55:
    __os_log_impl(0x100000000,uVar7,1,pcVar9,&local_98,uVar10);
  }
  uVar7 = FUN_1001c156e();
  FUN_1001c6987(uVar7,0x69706d64,*(undefined4 *)(param_1 + 0x28),*(undefined8 *)(param_1 + 0x7168),0
               );
  if (*(long *)(param_1 + 0x7168) != 0) {
    iVar3 = _AMDeviceGetInterfaceType();
    if (iVar3 == 1) {
      if (*(char *)(param_1 + 0x3a2) != '\0') {
        *(undefined1 *)(param_1 + 0x16840) = 1;
      }
      FUN_1004e8318(param_1,1);
    }
    else {
      *(undefined1 *)(param_1 + 0x151e3) = 1;
      if (*(char *)(param_1 + 0x3a2) != '\0') {
        *(undefined1 *)(param_1 + 0x16840) = 0;
      }
    }
    if ((*(long *)(param_1 + 0x30) != 0) && (cVar2 = FUN_100317605(), cVar2 != '\0')) {
      if (DAT_1008c75c0 != -1) {
        _dispatch_once(&DAT_1008c75c0,&PTR___NSConcreteGlobalBlock_100857068);
      }
      uVar7 = DAT_1008c75b8;
      cVar2 = _os_log_type_enabled(DAT_1008c75b8,1);
      if (cVar2 != '\0') {
        local_98._0_2_ = 0x100;
        local_98._2_2_ = 0x800;
        local_98._4_4_ = (undefined4)*(undefined8 *)(param_1 + 0x38);
        uStack_90 = (undefined4)((ulong)*(undefined8 *)(param_1 + 0x38) >> 0x20);
        __os_log_impl(0x100000000,uVar7,1,"sync> showing device id %016llX",&local_98,0xc);
      }
      FUN_100317329(*(undefined8 *)(param_1 + 0x30),1);
    }
    if (param_4 != '\0') {
      FUN_100500aa3(param_1,0,1,0x69706463);
    }
    if (param_3 == '\0') {
      FUN_100332bcb(param_1,0);
    }
    else {
      iVar3 = FUN_1005bfc22(*(undefined8 *)(param_1 + 0x7168),0x5ff < *(ushort *)(param_1 + 100));
      if ((iVar3 != -0x80) && (iVar3 != 0)) {
        uVar7 = FUN_1001cc310();
        cVar2 = _os_log_type_enabled(uVar7,0x10);
        if (cVar2 != '\0') {
          local_98._0_2_ = 0x202;
          local_98._2_2_ = 0x822;
          local_98._4_4_ = 0x7a0a90;
          uStack_90 = 1;
          uStack_8c = 0x400;
          uStack_8a = (undefined2)iVar3;
          uStack_88 = (undefined2)((uint)iVar3 >> 0x10);
          __os_log_error_impl(0x100000000,uVar7,0x10,"%{public}s: err == (%d)",&local_98,0x12);
        }
      }
      FUN_1004e4afa(param_1,0);
    }
  }
  if (*(long *)(param_1 + 0x153e8) != 0) {
    FUN_1001eeea0(0);
  }
  local_80 = *(uint *)(param_1 + 0x28);
  local_98._0_2_ = 0xf548;
  local_98._2_2_ = 0x85;
  local_98._4_4_ = 1;
  uStack_90 = 0x511a02;
  uStack_8c = 1;
  uStack_8a = 0;
  uStack_60 = 0;
  uStack_59 = 0;
  uStack_58 = 0;
  uStack_56 = 0;
  local_50 = 0;
  uStack_48 = 0;
  local_40 = (long *)0x0;
  local_68 = (ulong)local_80 << 0x20;
  uStack_57 = 1;
  local_78 = &local_98;
  FUN_10017869a(&local_98);
  if (local_40 != (long *)0x0) {
    LOCK();
    plVar1 = local_40 + 1;
    lVar5 = *plVar1;
    *plVar1 = *plVar1 + -1;
    UNLOCK();
    if (lVar5 == 0) {
      (**(code **)(*local_40 + 0x10))(local_40);
      std::__shared_weak_count::__release_weak();
    }
  }
  if (local_78 == &local_98) {
    lVar5 = 0x20;
LAB_10050ee6e:
    (**(code **)(*local_78 + lVar5))();
  }
  else {
    lVar5 = 0x28;
    if (local_78 != (long *)0x0) goto LAB_10050ee6e;
  }
  if (*(long *)(param_1 + 0x30) != 0) {
    if ((*(char *)(param_1 + 0x151d0) == '\0') && (*(char *)(param_1 + 0x151d1) == '\0')) {
      cVar2 = FUN_1004ed388(param_1);
    }
    else {
      cVar2 = FUN_1004ed02d(param_1);
    }
    for (lVar5 = FUN_100315ede(*(undefined8 *)(param_1 + 0x30)); lVar5 != 0;
        lVar5 = FUN_100316031(lVar5)) {
      if (cVar2 == '\0') {
        uVar4 = *(uint *)(lVar5 + 0x240);
        if (-1 < (char)uVar4) {
LAB_10050eee9:
          uVar8 = 0x80;
          goto LAB_10050eeee;
        }
      }
      else {
        uVar4 = *(uint *)(lVar5 + 0x240);
        if (-1 < (char)uVar4 == (*(short *)(lVar5 + 0x10) == 7)) {
          uVar8 = 0;
          if (*(short *)(lVar5 + 0x10) == 7) goto LAB_10050eee9;
LAB_10050eeee:
          *(uint *)(lVar5 + 0x240) = uVar4 & 0xffffff7f | uVar8;
          FUN_1001c6987(lVar5 + 200,0x63706c6b,lVar5,0,0);
        }
      }
    }
  }
  FUN_10023318f(param_1,"");
LAB_10050ef2e:
  if (*(long *)PTR____stack_chk_guard_10082cb58 != local_38) {
                    /* WARNING: Subroutine does not return */
    ___stack_chk_fail();
  }
  return;
}

