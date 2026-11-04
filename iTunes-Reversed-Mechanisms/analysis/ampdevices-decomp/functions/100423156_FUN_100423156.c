// name: FUN_100423156
// address: 100423156

void FUN_100423156(long *param_1)

{
  uint uVar1;
  char cVar2;
  int iVar3;
  undefined4 uVar4;
  undefined8 uVar5;
  long *plVar6;
  long *plVar7;
  long lVar8;
  char *pcVar9;
  undefined1 local_80 [8];
  long *local_78;
  undefined1 local_70 [8];
  long *local_68;
  char *local_60;
  undefined4 local_58;
  char *local_54;
  undefined2 local_4c;
  char *local_4a;
  undefined2 local_42;
  undefined8 local_40;
  long local_38;
  
  local_38 = *(long *)PTR____stack_chk_guard_10082cb58;
  uVar1 = *(uint *)(param_1 + 0x260);
  if ((uVar1 < 0xb) && ((0x6c0U >> (uVar1 & 0x1f) & 1) != 0)) {
    iVar3 = FUN_1002226f9(param_1 + 0x11,(uVar1 != 7) + '\x01',param_1 + 0x98,param_1 + 0xa5,0,0);
    if (iVar3 != -0x80) {
      if (iVar3 != 0) {
        uVar5 = FUN_1001cc310();
        cVar2 = _os_log_type_enabled(uVar5,0x10);
        if (cVar2 != '\0') {
          local_58 = 0x8220202;
          local_54 = "Assertion failure";
          local_4c = 0x400;
          local_4a = (char *)CONCAT44(local_4a._4_4_,iVar3);
          __os_log_error_impl(0x100000000,uVar5,0x10,"%{public}s: err == (%d)",&local_58,0x12);
        }
        if (iVar3 != 0) goto LAB_100423286;
      }
      if (((((int)param_1[0x260] == 9) || ((int)param_1[0x260] == 6)) &&
          (*(char *)((long)param_1 + 0x1354) == '\x01')) &&
         (*(char *)((long)param_1 + 0x1355) == '\0')) {
        lVar8 = 1;
      }
      else {
        lVar8 = 0;
        if (*(char *)((long)param_1 + 0x1357) == '\0') {
          lVar8 = (ulong)*(byte *)(param_1 + 0x26b) << 2;
        }
      }
      iVar3 = FUN_10041c30c(param_1,param_1 + 0x11,param_1 + 0x95,lVar8,
                            *(undefined1 *)((long)param_1 + 0x1356));
    }
LAB_100423286:
    if (((int)param_1[0x260] == 10) || ((int)param_1[0x260] == 7)) {
      *(undefined4 *)(param_1 + 0x260) = 2;
      if (DAT_1008c75c0 != -1) {
        _dispatch_once(&DAT_1008c75c0,&PTR___NSConcreteGlobalBlock_100857068);
      }
      uVar5 = DAT_1008c75b8;
      cVar2 = _os_log_type_enabled(DAT_1008c75b8,1);
      if (cVar2 != '\0') {
        local_60 = (char *)FUN_1001b83ae(param_1 + 0xc);
        cVar2 = FUN_1001df957("setting","",0);
        pcVar9 = "in";
        if (cVar2 == '\0') {
          pcVar9 = "setting";
        }
        local_40 = FUN_1004194cc((int)param_1[0x260]);
        local_4a = pcVar9;
LAB_1004233ef:
        local_42 = 0x820;
        local_4c = 0x820;
        local_58 = 0x8200302;
        local_54 = local_60;
        __os_log_impl(0x100000000,uVar5,1,"\"%s\" %s state %s",&local_58,0x20);
      }
    }
    else {
      *(undefined4 *)(param_1 + 0x260) = 1;
      if (DAT_1008c75c0 != -1) {
        _dispatch_once(&DAT_1008c75c0,&PTR___NSConcreteGlobalBlock_100857068);
      }
      uVar5 = DAT_1008c75b8;
      cVar2 = _os_log_type_enabled(DAT_1008c75b8,1);
      if (cVar2 != '\0') {
        local_60 = (char *)FUN_1001b83ae(param_1 + 0xc);
        cVar2 = FUN_1001df957("setting","",0);
        pcVar9 = "in";
        if (cVar2 == '\0') {
          pcVar9 = "setting";
        }
        local_40 = FUN_1004194cc((int)param_1[0x260]);
        local_4a = pcVar9;
        goto LAB_1004233ef;
      }
    }
  }
  else {
    uVar5 = FUN_1001cc310();
    cVar2 = _os_log_type_enabled(uVar5,0x10);
    if (cVar2 != '\0') {
      local_58 = 0x8220202;
      local_54 = "Assertion failure";
      local_4c = 0x822;
      local_4a = 
      "(mState == kUpdatingWaitingForDownload) || (mState == kRestoringWaitingForDownload) || (mState == kUpdatingWaitingForController) || (mState == kRestoringWaitingForController)"
      ;
      __os_log_error_impl(0x100000000,uVar5,0x10,"%{public}s: (%{public}s)",&local_58,0x16);
    }
    FUN_1001782e9(0,0);
    iVar3 = -0x12;
  }
  FUN_10041bf60(param_1);
  plVar6 = (long *)FUN_10039a28c();
  uVar5 = (**(code **)(*plVar6 + 0x58))(plVar6);
  uVar4 = (**(code **)(*param_1 + 0x50))(param_1);
  FUN_1001c6987(uVar5,0x73776465,iVar3 == 0,uVar4,0);
  if (iVar3 == 0) {
    lVar8 = param_1[0x260];
    plVar7 = (long *)FUN_10039a28c();
    plVar6 = (long *)param_1[0x266];
    if ((int)lVar8 == 2) {
      if (plVar6 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
        FUN_10016bf14();
      }
      (**(code **)(*plVar6 + 0x30))(local_80);
      iVar3 = (**(code **)(*plVar7 + 0x18))(plVar7,local_80);
    }
    else {
      if (plVar6 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
        FUN_10016bf14();
      }
      (**(code **)(*plVar6 + 0x30))(local_70);
      iVar3 = (**(code **)(*plVar7 + 0x20))(plVar7,local_70,0);
      local_78 = local_68;
    }
    if (local_78 != (long *)0x0) {
      LOCK();
      plVar6 = local_78 + 1;
      lVar8 = *plVar6;
      *plVar6 = *plVar6 + -1;
      UNLOCK();
      if (lVar8 == 0) {
        (**(code **)(*local_78 + 0x10))(local_78);
        std::__shared_weak_count::__release_weak();
      }
    }
    if (iVar3 == 0) goto LAB_10042351b;
  }
  if ((char)param_1[0x26b] == '\x01') {
    uVar5 = FUN_1005e9a2c();
    FUN_1005edc94(uVar5,iVar3);
  }
  else {
    FUN_10041aad0(param_1,iVar3,0);
  }
LAB_10042351b:
  FUN_1001ceee0(param_1);
  FUN_10039c7eb(0);
  if (*(long *)PTR____stack_chk_guard_10082cb58 == local_38) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  ___stack_chk_fail();
}

