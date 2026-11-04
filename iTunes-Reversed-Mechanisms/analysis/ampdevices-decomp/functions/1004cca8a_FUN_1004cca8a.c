// name: FUN_1004cca8a
// address: 1004cca8a

int FUN_1004cca8a(long param_1,undefined8 param_2)

{
  long *plVar1;
  long lVar2;
  int *piVar3;
  long lVar4;
  long *plVar5;
  undefined4 uVar6;
  undefined4 uVar7;
  undefined4 uVar8;
  undefined4 uVar9;
  char cVar10;
  int iVar11;
  undefined8 *puVar12;
  char *pcVar13;
  undefined8 uVar14;
  char *pcVar15;
  undefined8 uVar16;
  undefined8 uVar17;
  undefined8 local_7f8;
  undefined8 *puStack_7f0;
  undefined8 local_7e8;
  undefined6 uStack_7e0;
  undefined2 uStack_7da;
  undefined6 uStack_7d8;
  undefined4 local_7d0;
  undefined1 local_7cc;
  undefined2 uStack_7cb;
  undefined8 local_7c8;
  undefined8 local_7c0;
  undefined1 uStack_7b8;
  undefined7 uStack_7b7;
  undefined1 uStack_7b0;
  undefined8 uStack_7af;
  undefined8 local_798;
  undefined1 *puStack_790;
  undefined8 local_788;
  undefined6 uStack_780;
  undefined2 uStack_77a;
  undefined4 uStack_778;
  undefined2 uStack_774;
  undefined4 local_770;
  undefined3 uStack_76c;
  undefined8 local_768;
  undefined8 local_760;
  undefined1 uStack_758;
  undefined7 uStack_757;
  undefined1 uStack_750;
  undefined8 uStack_74f;
  undefined1 local_740 [16];
  undefined1 local_730 [16];
  undefined1 local_720 [16];
  undefined1 local_710 [16];
  undefined8 local_700;
  undefined1 local_6f8 [16];
  undefined4 local_6e8;
  undefined4 uStack_6e4;
  undefined4 local_6e0;
  undefined2 local_6dc;
  char *local_6da;
  undefined8 local_69c;
  code *local_694;
  undefined8 *local_68c;
  undefined1 local_458 [512];
  undefined8 local_258;
  undefined8 uStack_250;
  uint local_58;
  char *local_54;
  undefined2 local_4c;
  char *local_4a;
  long local_38;
  
  lVar4 = DAT_1008bfc00;
  local_38 = *(long *)PTR____stack_chk_guard_10082cb58;
  if (DAT_1008bfc00 == 0) {
    uVar14 = FUN_1001cc310();
    cVar10 = _os_log_type_enabled(uVar14,0x10);
    if (cVar10 != '\0') {
      local_6e8 = 0x8220202;
      uStack_6e4 = 0x7a0a90;
      local_6e0 = 1;
      local_6dc = 0x822;
      local_6da = "sLibraryClient != nullptr";
      __os_log_error_impl(0x100000000,uVar14,0x10,"%{public}s: (%{public}s)",&local_6e8,0x16);
    }
    FUN_1001782e9(0,0);
    iVar11 = 0x234f;
    goto LAB_1004cd2f5;
  }
  piVar3 = *(int **)(param_1 + 0x50);
  if (*piVar3 != 0x6c686c72) {
    uVar14 = FUN_1001cc310();
    cVar10 = _os_log_type_enabled(uVar14,0x10);
    if (cVar10 != '\0') {
      local_6e8 = 0x8220202;
      uStack_6e4 = 0x7a0a90;
      local_6e0 = 1;
      local_6dc = 0x822;
      local_6da = "pluginData->magic == \'lhlr\'";
      __os_log_error_impl(0x100000000,uVar14,0x10,"%{public}s: (%{public}s)",&local_6e8,0x16);
    }
    FUN_1001782e9(0,0);
    iVar11 = -0x32;
    goto LAB_1004cd2f5;
  }
  puVar12 = operator_new(0x888,(nothrow_t *)PTR_nothrow_10082c970);
  if (puVar12 == (undefined8 *)0x0) {
    uVar14 = FUN_1001cc310();
    cVar10 = _os_log_type_enabled(uVar14,0x10);
    if (cVar10 != '\0') {
      local_6e8 = 0x8220202;
      uStack_6e4 = 0x7a0a90;
      local_6e0 = 1;
      local_6dc = 0x822;
      local_6da = "handlerData != nullptr";
      __os_log_error_impl(0x100000000,uVar14,0x10,"%{public}s: (%{public}s)",&local_6e8,0x16);
    }
    FUN_1001782e9(0,0);
    iVar11 = -0x6c;
    goto LAB_1004cd2f5;
  }
  *(undefined4 *)((long)puVar12 + 0x2c) = 0;
  *(undefined1 *)(puVar12 + 6) = 0;
  *(undefined4 *)(puVar12 + 8) = 0;
  *(undefined2 *)((long)puVar12 + 0x44) = 0;
  *(undefined4 *)(puVar12 + 9) = 0;
  *(undefined4 *)(puVar12 + 0x8d) = 0;
  *puVar12 = 0;
  puVar12[1] = 0;
  puVar12[2] = 0;
  puVar12[3] = 0;
  *(undefined8 *)((long)puVar12 + 0x1a) = 0;
  *(undefined8 *)((long)puVar12 + 0x22) = 0;
  ___bzero(puVar12 + 10,0x416);
  ___bzero(puVar12 + 0x8e,0x411);
  puVar12[3] = piVar3;
  *(undefined4 *)((long)puVar12 + 0x34) = *(undefined4 *)(lVar4 + 0x30);
  *(undefined1 *)(puVar12 + 7) = *(undefined1 *)(lVar4 + 0x34);
  FUN_1001ea897(puVar12,piVar3 + 6);
  FUN_1001c62d9(&local_6e8,0x284);
  FUN_1001dfbb3("_AMPLibraryDBPlugin_",&local_6dc,0x40);
  local_69c = 0x2062696c00000000;
  local_694 = FUN_1004cd4a7;
  local_6e8 = 10;
  uStack_6e4 = 9;
  local_6e0 = 0x284;
  local_68c = puVar12;
  iVar11 = (**(code **)(piVar3 + 4))(*(undefined8 *)(piVar3 + 2),0x72646220);
  if (iVar11 != 0) {
    FUN_1001ea9a5(puVar12,piVar3 + 6);
    operator_delete(puVar12);
    goto LAB_1004cd2f5;
  }
  lVar4 = puVar12[4];
  local_7e8 = 0;
  uStack_7e0 = 0;
  local_7f8 = 0;
  puStack_7f0 = (undefined8 *)0x0;
  uStack_7da = 0;
  uStack_7d8 = 0;
  local_7d0 = 0;
  local_7cc = 0;
  uStack_7cb = 0;
  local_7c8 = 0x3ff0000000000000;
  local_7c0 = 0;
  uStack_7b8 = 0;
  uStack_7b7 = 0;
  uStack_7b0 = 0;
  uStack_7af = 0;
  FUN_100314834(lVar4,FUN_1004cda24,puVar12);
  *(byte *)(lVar4 + 0x2be0) = *(byte *)(lVar4 + 0x2be0) | 1;
  *(ulong *)(lVar4 + 0x1bb0) = *(ulong *)(lVar4 + 0x1bb0) | 0x1e010800001;
  FUN_100385eae(&local_258);
  uVar6 = (undefined4)local_258;
  uVar7 = local_258._4_4_;
  uVar8 = (undefined4)uStack_250;
  uVar9 = uStack_250._4_4_;
  local_258 = 0;
  uStack_250 = (long *)0x0;
  plVar5 = *(long **)(lVar4 + 0x2d00);
  *(undefined4 *)(lVar4 + 0x2cf8) = uVar6;
  *(undefined4 *)(lVar4 + 0x2cfc) = uVar7;
  *(undefined4 *)(lVar4 + 0x2d00) = uVar8;
  *(undefined4 *)(lVar4 + 0x2d04) = uVar9;
  if (plVar5 != (long *)0x0) {
    LOCK();
    plVar1 = plVar5 + 1;
    lVar2 = *plVar1;
    *plVar1 = *plVar1 + -1;
    UNLOCK();
    if (lVar2 == 0) {
      (**(code **)(*plVar5 + 0x10))(plVar5);
      std::__shared_weak_count::__release_weak();
    }
  }
  if (uStack_250 != (long *)0x0) {
    LOCK();
    plVar5 = uStack_250 + 1;
    lVar2 = *plVar5;
    *plVar5 = *plVar5 + -1;
    UNLOCK();
    if (lVar2 == 0) {
      (**(code **)(*uStack_250 + 0x10))(uStack_250);
      std::__shared_weak_count::__release_weak();
    }
  }
  FUN_1001c34b7(0x7f0001,&local_258);
  local_7cc = 1;
  puStack_7f0 = &local_258;
  iVar11 = FUN_1002e2674(lVar4,0xf,&local_7f8,&local_700);
  if (iVar11 != 0) goto LAB_1004cd2f5;
  local_788 = 0;
  uStack_780 = 0;
  local_798 = 0;
  puStack_790 = (undefined1 *)0x0;
  uStack_77a = 0;
  uStack_778 = 0;
  uStack_774 = 0;
  local_770 = 0;
  uStack_76c = 0;
  local_768 = 0x3ff0000000000000;
  local_760 = 0;
  uStack_758 = 0;
  uStack_757 = 0;
  uStack_750 = 0;
  uStack_74f = 0;
  FUN_100488970(local_700);
  FUN_1001c34b7(0x2328004c,local_458);
  uStack_774 = 0x29;
  puStack_790 = local_458;
  FUN_1002e2674(lVar4,0,&local_798,&local_700);
  FUN_100488970(local_700);
  FUN_10032f0f2(local_720);
  if (DAT_1008bfc00 == 0) {
    uVar14 = FUN_1001cc310();
    cVar10 = _os_log_type_enabled(uVar14,0x10);
    if (cVar10 != '\0') {
      local_58 = 0x8220202;
      local_54 = "Assertion failure";
      local_4c = 0x822;
      local_4a = "sLibraryClient != nullptr";
      __os_log_error_impl(0x100000000,uVar14,0x10,"%{public}s: (%{public}s)",&local_58,0x16);
    }
    FUN_1001782e9(0,0);
    FUN_1001a8fac(local_720);
    iVar11 = 0x234f;
  }
  else {
    FUN_10032f0f2(local_710);
    FUN_1001b7a44(local_6f8);
    iVar11 = FUN_1005fb50a(DAT_1008bfc00,lVar4,local_6f8);
    if (iVar11 == 0) {
      uVar14 = FUN_10053c43a();
      FUN_1001b7f2a(local_740,uVar14);
      iVar11 = FUN_1001b9c66(local_6f8,local_740);
      if (iVar11 == 0) {
        iVar11 = 0;
      }
      else {
        FUN_1001b7a44(local_730);
        uVar14 = FUN_1001b8336(local_6f8);
        FUN_1001bb78a(&local_58,"allow-protocol-version-%S",uVar14);
        FUN_1001b80b2(local_730,&local_58);
        FUN_1001b7a50(&local_58);
        uVar14 = FUN_1001b83ae(local_730);
        cVar10 = FUN_1001cd44e(uVar14,0,0);
        if (cVar10 == '\0') {
          if (DAT_1008c7d20 != -1) {
            _dispatch_once(&DAT_1008c7d20,&PTR___NSConcreteGlobalBlock_100870418);
          }
          uVar14 = DAT_1008c7d18;
          cVar10 = _os_log_type_enabled(DAT_1008c7d18,0x10);
          iVar11 = 0x40a;
          if (cVar10 != '\0') {
            pcVar13 = (char *)FUN_1001b83ae(local_740);
            local_4a = (char *)FUN_1001b83ae(local_6f8);
            local_58 = 0x8220202;
            local_4c = 0x822;
            pcVar15 = 
            "**ERROR**: Running with mismatched build versions of AMPLibrary! client version:%{public}s agent version:%{public}s"
            ;
            uVar16 = 0x10;
            uVar17 = 0x16;
            local_54 = pcVar13;
            goto LAB_1004cd1cb;
          }
        }
        else {
          if (DAT_1008c7d20 != -1) {
            _dispatch_once(&DAT_1008c7d20,&PTR___NSConcreteGlobalBlock_100870418);
          }
          uVar14 = DAT_1008c7d18;
          iVar11 = 0;
          cVar10 = _os_log_type_enabled(DAT_1008c7d18,0);
          if (cVar10 != '\0') {
            local_54 = (char *)FUN_1001b83ae(local_6f8);
            local_58 = 0x8200102;
            pcVar15 = "Allowing mismatched agent protocol version %s";
            iVar11 = 0;
            uVar16 = 0;
            uVar17 = 0xc;
LAB_1004cd1cb:
            __os_log_impl(0x100000000,uVar14,uVar16,pcVar15,&local_58,uVar17);
          }
        }
        FUN_1001b7a50(local_730);
      }
      FUN_1001b7a50(local_740);
      FUN_1001b7a50(local_6f8);
      if (DAT_1008c7d20 != -1) {
        _dispatch_once(&DAT_1008c7d20,&PTR___NSConcreteGlobalBlock_100870418);
      }
      uVar14 = DAT_1008c7d18;
      cVar10 = _os_log_type_enabled(DAT_1008c7d18,0);
      if (cVar10 != '\0') {
        local_58 = local_58 & 0xffff0000;
        __os_log_impl(0x100000000,uVar14,0,
                      "amplc> starting async fetch of the domain info from the library...",&local_58
                      ,2);
      }
      if (iVar11 == 0) {
        iVar11 = FUN_1005fb73c(DAT_1008bfc00,param_2,local_720,local_710);
        if (iVar11 == 0) {
          if (DAT_1008c7d20 != -1) {
            _dispatch_once(&DAT_1008c7d20,&PTR___NSConcreteGlobalBlock_100870418);
          }
          uVar14 = DAT_1008c7d18;
          iVar11 = 0;
          cVar10 = _os_log_type_enabled(DAT_1008c7d18,0);
          if (cVar10 != '\0') {
            local_58 = local_58 & 0xffff0000;
            iVar11 = 0;
            __os_log_impl(0x100000000,uVar14,0,
                          "amplc> successfully fetched the domain info from the library.",&local_58,
                          2);
          }
        }
      }
    }
    else {
      if (DAT_1008c7d20 != -1) {
        _dispatch_once(&DAT_1008c7d20,&PTR___NSConcreteGlobalBlock_100870418);
      }
      uVar14 = DAT_1008c7d18;
      cVar10 = _os_log_type_enabled(DAT_1008c7d18,0x10);
      if (cVar10 != '\0') {
        local_58 = 0x4000100;
        local_54 = (char *)CONCAT44(local_54._4_4_,iVar11);
        __os_log_impl(0x100000000,uVar14,0x10,"**ERROR**: RegisterWithLibrary() failed! error:%d",
                      &local_58,8);
      }
      FUN_1001b7a50(local_6f8);
    }
    FUN_1001a8fac(local_710);
    FUN_1001a8fac(local_720);
    if ((iVar11 == -0x80) || (iVar11 == 0)) goto LAB_1004cd2f5;
  }
  uVar14 = FUN_1001cc310();
  cVar10 = _os_log_type_enabled(uVar14,0x10);
  if (cVar10 != '\0') {
    local_58 = 0x8220202;
    local_54 = "Assertion failure";
    local_4c = 0x400;
    local_4a = (char *)CONCAT44(local_4a._4_4_,iVar11);
    __os_log_error_impl(0x100000000,uVar14,0x10,"%{public}s: err == (%d)",&local_58,0x12);
  }
LAB_1004cd2f5:
  if (*(long *)PTR____stack_chk_guard_10082cb58 == local_38) {
    return iVar11;
  }
                    /* WARNING: Subroutine does not return */
  ___stack_chk_fail();
}

