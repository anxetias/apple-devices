// name: FUN_10041d668
// address: 10041d668

int FUN_10041d668(long *param_1,char param_2,uint param_3,undefined4 param_4,undefined8 param_5)

{
  ulong uVar1;
  char cVar2;
  undefined1 uVar3;
  int iVar4;
  undefined4 uVar5;
  long lVar6;
  undefined8 uVar7;
  long *plVar8;
  long *plVar9;
  undefined8 uVar10;
  byte bVar11;
  char *pcVar12;
  bool bVar13;
  undefined4 local_758;
  undefined4 uStack_754;
  undefined4 uStack_750;
  undefined4 uStack_74c;
  undefined8 local_748;
  long *local_740;
  undefined8 local_738;
  undefined8 uStack_730;
  undefined4 local_724;
  undefined8 local_720;
  undefined4 local_718;
  short local_70e;
  uint local_70c;
  undefined **local_708 [4];
  undefined ***local_6e8;
  undefined4 local_6d8;
  undefined4 uStack_6d4;
  undefined4 uStack_6d0;
  undefined2 uStack_6cc;
  undefined2 uStack_6ca;
  undefined6 uStack_6c8;
  undefined2 local_6c2;
  undefined8 local_6c0;
  undefined1 local_60 [8];
  undefined4 local_58;
  char *local_54;
  undefined2 local_4c;
  char *local_4a;
  long local_38;
  
  local_38 = *(long *)PTR____stack_chk_guard_10082cb58;
  local_718 = 0;
  local_720 = 0;
  local_738 = 0;
  uStack_730 = (long *)0x0;
  local_70e = 0x10e5;
  local_724 = param_4;
  local_70c = param_3;
  lVar6 = FUN_100279b99();
  iVar4 = (int)param_1[0xb];
  if ((*(char *)(lVar6 + 0x1b) == '\0' && param_2 == '\0') &&
     (bVar13 = iVar4 != 0x57617463, iVar4 = 0x57617463, bVar13)) {
    *(int *)(param_1 + 1) = (int)param_1[1] + 1;
    *(uint *)(param_1 + 0x260) = (local_70c & 0xff) + 0xb;
    if (DAT_1008c75c0 != -1) {
      _dispatch_once(&DAT_1008c75c0,&PTR___NSConcreteGlobalBlock_100857068);
    }
    uVar10 = DAT_1008c75b8;
    cVar2 = _os_log_type_enabled(DAT_1008c75b8,1);
    if (cVar2 != '\0') {
      uVar7 = FUN_1001b83ae(param_1 + 0xc);
      cVar2 = FUN_1001df957("setting","",0);
      pcVar12 = "in";
      if (cVar2 == '\0') {
        pcVar12 = "setting";
      }
      local_6c0 = FUN_1004194cc((int)param_1[0x260]);
      local_6d8 = 0x8200302;
      uStack_6d4 = (undefined4)uVar7;
      uStack_6d0 = (undefined4)((ulong)uVar7 >> 0x20);
      uStack_6cc = 0x820;
      uStack_6ca = SUB82(pcVar12,0);
      uStack_6c8 = (undefined6)((ulong)pcVar12 >> 0x10);
      local_6c2 = 0x820;
      __os_log_impl(0x100000000,uVar10,1,"\"%s\" %s state %s",&local_6d8,0x20);
    }
    FUN_10041dd48(param_1 + 0x262,param_5);
    if ((long *)param_1[0x266] == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
      FUN_10016bf14();
    }
    (**(code **)(*(long *)param_1[0x266] + 0x30))(&local_6d8);
    uVar10 = CONCAT44(uStack_6d4,local_6d8);
    plVar9 = (long *)CONCAT26(uStack_6ca,CONCAT24(uStack_6cc,uStack_6d0));
    local_738 = uVar10;
    uStack_730 = plVar9;
    if ((char)local_70c != '\0') {
      plVar8 = (long *)FUN_10039a28c();
      uVar7 = (**(code **)(*plVar8 + 0x50))(plVar8);
      FUN_10039bdfc(uVar7,param_1);
      plVar8 = (long *)FUN_10039a28c();
      uVar7 = (**(code **)(*plVar8 + 0x58))(plVar8);
      uVar5 = (**(code **)(*param_1 + 0x50))(param_1);
      FUN_1001c6987(uVar7,0x73776373,0,uVar5,0);
    }
    uVar7 = FUN_100416f20((int)param_1[0xb],0x10cc00fd);
    FUN_1001e115f(uVar7,&local_6d8);
    if (plVar9 != (long *)0x0) {
      LOCK();
      plVar9[1] = plVar9[1] + 1;
      UNLOCK();
    }
    local_748 = uVar10;
    local_740 = plVar9;
    FUN_1001ceb3c(&local_748,0x7570726d,0,0xffffffffffffffff,&local_6d8);
    if (local_740 != (long *)0x0) {
      LOCK();
      plVar9 = local_740 + 1;
      lVar6 = *plVar9;
      *plVar9 = *plVar9 + -1;
      UNLOCK();
      if (lVar6 == 0) {
        (**(code **)(*local_740 + 0x10))(local_740);
        std::__shared_weak_count::__release_weak();
      }
    }
    iVar4 = FUN_10024f5ea(param_1 + 0x99,(int)param_1[0xb],0,1,0,0,0,0);
    if (iVar4 == 0) {
      lVar6 = FUN_1004de449((int)param_1[0x10]);
      if (lVar6 == 0) {
        uVar10 = FUN_1001cc310();
        cVar2 = _os_log_type_enabled(uVar10,0x10);
        if (cVar2 != '\0') {
          local_58 = 0x8220202;
          local_54 = "Assertion failure";
          local_4c = 0x822;
          local_4a = "handlerData != nullptr";
          __os_log_error_impl(0x100000000,uVar10,0x10,"%{public}s: (%{public}s)",&local_58,0x16);
        }
        iVar4 = 0x45f;
        FUN_1001782e9(0,0);
        goto LAB_10041d9ae;
      }
      iVar4 = FUN_10025a150(1,lVar6,1,0);
      uVar1 = local_720;
      if (iVar4 == -0x80) goto LAB_10041d9ae;
      if (iVar4 != 0) {
        uVar10 = FUN_1001cc310();
        cVar2 = _os_log_type_enabled(uVar10,0x10);
        if (cVar2 != '\0') {
          local_4a = (char *)CONCAT44(local_4a._4_4_,iVar4);
LAB_10041dc4d:
          local_4c = 0x400;
          local_54 = "Assertion failure";
          local_58 = 0x8220202;
          __os_log_error_impl(0x100000000,uVar10,0x10,"%{public}s: err == (%d)",&local_58,0x12);
        }
        goto LAB_10041d9ae;
      }
      uVar3 = (undefined1)local_70c;
      local_720._0_2_ = CONCAT11(uVar3,1);
      local_720._5_3_ = SUB83(uVar1,5);
      local_720 = CONCAT35(local_720._5_3_,
                           CONCAT14((char)local_724,
                                    CONCAT13(uVar3,CONCAT12(uVar3,(undefined2)local_720)))) ^
                  0x1010000;
      local_758 = (undefined4)local_738;
      uStack_754 = local_738._4_4_;
      uStack_750 = (undefined4)uStack_730;
      uStack_74c = uStack_730._4_4_;
      if (uStack_730 != (long *)0x0) {
        LOCK();
        uStack_730[1] = uStack_730[1] + 1;
        UNLOCK();
      }
      iVar4 = FUN_100256606(lVar6,0,&local_720,&local_70e,&local_758);
      plVar9 = (long *)CONCAT44(uStack_74c,uStack_750);
      if (plVar9 != (long *)0x0) {
        LOCK();
        plVar8 = plVar9 + 1;
        lVar6 = *plVar8;
        *plVar8 = *plVar8 + -1;
        UNLOCK();
        if (lVar6 == 0) {
          (**(code **)(*plVar9 + 0x10))(plVar9);
          std::__shared_weak_count::__release_weak();
        }
      }
      if (iVar4 == -0x80) goto LAB_10041d9ae;
      if (iVar4 != 0) {
        uVar10 = FUN_1001cc310();
        cVar2 = _os_log_type_enabled(uVar10,0x10);
        if (cVar2 != '\0') {
          local_4a = (char *)CONCAT44(local_4a._4_4_,iVar4);
          goto LAB_10041dc4d;
        }
        goto LAB_10041d9ae;
      }
      iVar4 = 0;
      if ((local_718._3_1_ == '\0' & (byte)local_70c) != 0) {
        bVar11 = (byte)local_70c & (byte)local_718 &
                 (local_718._1_1_ == '\0' && local_718._3_1_ == '\0');
        goto LAB_10041d9ba;
      }
    }
    else {
LAB_10041d9ae:
      if ((char)local_70c != '\0') {
        bVar11 = 0;
LAB_10041d9ba:
        plVar9 = (long *)FUN_10039a28c();
        uVar10 = (**(code **)(*plVar9 + 0x50))(plVar9);
        FUN_10039c194(uVar10,param_1);
        plVar9 = (long *)FUN_10039a28c();
        uVar10 = (**(code **)(*plVar9 + 0x58))(plVar9);
        uVar5 = (**(code **)(*param_1 + 0x50))(param_1);
        FUN_1001c6987(uVar10,0x73776365,uVar5,bVar11,(long)iVar4);
      }
    }
    FUN_10041c7bc(param_1,(int)local_70e,iVar4,0);
    FUN_1001ceee0(param_1);
    if (uStack_730 != (long *)0x0) {
      LOCK();
      plVar9 = uStack_730 + 1;
      lVar6 = *plVar9;
      *plVar9 = *plVar9 + -1;
      UNLOCK();
      if (lVar6 == 0) {
        (**(code **)(*uStack_730 + 0x10))(uStack_730);
        std::__shared_weak_count::__release_weak();
      }
    }
    goto LAB_10041d76e;
  }
  FUN_10041c242(&local_6d8,param_1,0,0);
  local_708[0] = &PTR_FUN_100858120;
  local_6e8 = local_708;
  iVar4 = FUN_100259071(iVar4,1,param_1 + 0x98,param_1 + 0xa5,&local_6d8,local_708);
  if (local_6e8 == local_708) {
    lVar6 = 0x20;
LAB_10041d75f:
    (**(code **)((long)*local_6e8 + lVar6))();
  }
  else {
    lVar6 = 0x28;
    if (local_6e8 != (undefined ***)0x0) goto LAB_10041d75f;
  }
  FUN_10026340c(local_60);
LAB_10041d76e:
  if (*(long *)PTR____stack_chk_guard_10082cb58 != local_38) {
                    /* WARNING: Subroutine does not return */
    ___stack_chk_fail();
  }
  return iVar4;
}

