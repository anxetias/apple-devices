// name: FUN_100345905
// address: 100345905

void FUN_100345905(long param_1,undefined8 param_2,int param_3,undefined4 param_4)

{
  ulong *puVar1;
  char *pcVar2;
  ulong uVar3;
  char cVar4;
  undefined1 uVar5;
  int iVar6;
  uint uVar7;
  undefined4 uVar8;
  long lVar9;
  undefined8 uVar10;
  char *pcVar11;
  void *pvVar12;
  void *pvVar13;
  long lVar14;
  bool bVar15;
  undefined8 local_b10;
  long local_b08;
  undefined4 local_afc;
  long local_af8;
  long local_af0;
  undefined4 local_ae8;
  char *local_ae4;
  undefined2 local_adc;
  int local_ada;
  undefined4 local_ac8;
  char *local_ac4;
  undefined2 local_abc;
  char *local_aba;
  undefined2 local_ab2;
  undefined8 local_ab0;
  undefined1 local_a78 [32];
  undefined1 local_a58 [512];
  undefined1 local_858 [512];
  ushort local_658 [256];
  undefined4 local_458;
  char *local_454;
  undefined2 local_44c;
  char *local_44a;
  undefined2 local_442;
  int local_440;
  undefined2 local_43c;
  int local_43a;
  long local_38;
  
  local_38 = *(long *)PTR____stack_chk_guard_10082cb58;
  local_afc = 0;
  if (((param_1 == 0) || (puVar1 = *(ulong **)(param_1 + 8), puVar1 == (ulong *)0x0)) ||
     (puVar1[2] == 0)) {
    uVar10 = FUN_1001cc310();
    cVar4 = _os_log_type_enabled(uVar10,0x10);
    if (cVar4 != '\0') {
      local_458 = 0x8220202;
      local_454 = "Assertion failure";
      local_44c = 0x822;
      local_44a = "TrackInstanceIsValid(trackInstance)";
      __os_log_error_impl(0x100000000,uVar10,0x10,"%{public}s: (%{public}s)",&local_458,0x16);
    }
    FUN_1001782e9(0,0);
    goto LAB_100345a9c;
  }
  lVar9 = FUN_1004de449(param_4);
  if (lVar9 == 0) {
    uVar10 = FUN_1001cc310();
    cVar4 = _os_log_type_enabled(uVar10,0x10);
    if (cVar4 != '\0') {
      local_458 = 0x8220202;
      local_454 = "Assertion failure";
      local_44c = 0x822;
      local_44a = "handlerData != nullptr";
      __os_log_error_impl(0x100000000,uVar10,0x10,"%{public}s: (%{public}s)",&local_458,0x16);
    }
    FUN_1001782e9(0,0);
    goto LAB_100345a9c;
  }
  local_b08 = FUN_100165701(DAT_1008c4d90,*puVar1);
  local_af0 = lVar9;
  if (local_b08 == 0) {
    uVar10 = FUN_1001cc310();
    cVar4 = _os_log_type_enabled(uVar10,0x10);
    if (cVar4 != '\0') {
      local_458 = 0x8220202;
      local_454 = "Assertion failure";
      local_44c = 0x822;
      local_44a = "assetKey != nullptr";
      __os_log_error_impl(0x100000000,uVar10,0x10,"%{public}s: (%{public}s)",&local_458,0x16);
    }
    FUN_1001782e9(0,0);
LAB_100345c1b:
    uVar10 = 0;
    lVar9 = 0;
    local_af8 = 0;
  }
  else {
    local_af8 = FUN_100166b7f(*(undefined8 *)(lVar9 + 0x167f0),local_b08);
    if (local_af8 == 0) {
      uVar10 = FUN_1001cc310();
      cVar4 = _os_log_type_enabled(uVar10,0x10);
      if (cVar4 != '\0') {
        local_458 = 0x8220202;
        local_454 = "Assertion failure";
        local_44c = 0x822;
        local_44a = "assetInfoDict != nullptr";
        __os_log_error_impl(0x100000000,uVar10,0x10,"%{public}s: (%{public}s)",&local_458,0x16);
      }
      FUN_1001782e9(0,0);
      if (DAT_1008c75c0 != -1) {
        _dispatch_once(&DAT_1008c75c0,&PTR___NSConcreteGlobalBlock_100857068);
      }
      uVar10 = DAT_1008c75b8;
      cVar4 = _os_log_type_enabled(DAT_1008c75b8,0x10);
      if (cVar4 != '\0') {
        pcVar2 = (char *)*puVar1;
        FUN_100476ac1(local_658,puVar1);
        local_44a = (char *)FUN_1001b83ae(local_658);
        local_458 = 0x8000202;
        local_44c = 0x822;
        local_454 = pcVar2;
        __os_log_impl(0x100000000,uVar10,0x10,
                      "airtraffic> failed to find asset info for track %lld (\"%{public}s\")",
                      &local_458,0x16);
        FUN_1001b7a50(local_658);
      }
      goto LAB_100345c1b;
    }
    FUN_1001705fc(local_af8);
    if (param_3 == 0) {
      param_3 = FUN_1002b1039(param_1,&local_458);
      if (param_3 == -0x80) goto LAB_10034611d;
      if (param_3 != 0) {
        uVar10 = FUN_1001cc310();
        cVar4 = _os_log_type_enabled(uVar10,0x10);
        if (cVar4 != '\0') {
          local_aba = (char *)CONCAT44(local_aba._4_4_,param_3);
LAB_100346233:
          local_abc = 0x400;
          local_ac4 = "Assertion failure";
          local_ac8 = 0x8220202;
          __os_log_error_impl(0x100000000,uVar10,0x10,"%{public}s: err == (%d)",&local_ac8,0x12);
        }
        goto LAB_10034611d;
      }
      lVar9 = *(long *)(*(long *)(local_af0 + 0x30) + 0x2d20);
      lVar14 = local_af0;
      if ((lVar9 != 0) && (pvVar12 = *(void **)(lVar9 + 8), pvVar12 != (void *)0x0)) {
        uVar3 = *puVar1;
        pvVar13 = (void *)(lVar9 + 8);
        do {
          bVar15 = *(ulong *)((long)pvVar12 + 0x20) < uVar3;
          if (!bVar15) {
            pvVar13 = pvVar12;
          }
          pvVar12 = *(void **)((long)pvVar12 + (ulong)bVar15 * 8);
        } while (pvVar12 != (void *)0x0);
        if ((pvVar13 != (void *)(lVar9 + 8)) && (*(ulong *)((long)pvVar13 + 0x20) <= uVar3)) {
          cVar4 = FUN_10017f77e(param_2,(long)pvVar13 + 0x28);
          if (cVar4 == '\0') {
            uVar10 = FUN_1001cc310();
            cVar4 = _os_log_type_enabled(uVar10,0x10);
            if (cVar4 != '\0') {
              local_ac8 = 0x8220202;
              local_ac4 = "Assertion failure";
              local_abc = 0x822;
              local_aba = "JRFileSpecsAreEqual(sourceFileSpec, &copyFileSpecIter->second)";
              __os_log_error_impl(0x100000000,uVar10,0x10,"%{public}s: (%{public}s)",&local_ac8,0x16
                                 );
            }
            FUN_1001782e9(0,0);
          }
          lVar14 = local_af0;
          FUN_100346d36(*(undefined8 *)(*(long *)(local_af0 + 0x30) + 0x2d20),pvVar13);
          operator_delete(pvVar13);
        }
      }
      FUN_1003450bf(lVar14,param_1,local_af8,param_2);
      param_3 = FUN_10034654d(local_af0,param_1,param_2,local_658,local_858,local_a78);
      if (param_3 == -0x80) goto LAB_10034611d;
      if (param_3 != 0) {
        uVar10 = FUN_1001cc310();
        cVar4 = _os_log_type_enabled(uVar10,0x10);
        if (cVar4 != '\0') {
          local_aba = (char *)CONCAT44(local_aba._4_4_,param_3);
          goto LAB_100346233;
        }
        goto LAB_10034611d;
      }
      if (DAT_1008c75c0 != -1) {
        _dispatch_once(&DAT_1008c75c0,&PTR___NSConcreteGlobalBlock_100857068);
      }
      uVar10 = DAT_1008c75b8;
      cVar4 = _os_log_type_enabled(DAT_1008c75b8,1);
      if (cVar4 != '\0') {
        pcVar2 = (char *)*puVar1;
        FUN_100476ac1(&local_ae8,puVar1);
        pcVar11 = (char *)FUN_1001b83ae(&local_ae8);
        local_b10 = FUN_100346a6d(local_658);
        local_ac8 = 0x8000302;
        local_abc = 0x822;
        local_ab2 = 0x842;
        local_ac4 = pcVar2;
        local_aba = pcVar11;
        local_ab0 = local_b10;
        __os_log_impl(0x100000000,uVar10,1,
                      "airtraffic> setting perm location of track %lld (\"%{public}s\") to %{public}@"
                      ,&local_ac8,0x20);
        FUN_10014d890(&local_b10);
        FUN_1001b7a50(&local_ae8);
      }
      iVar6 = FUN_100320e05(param_1,(uint)local_658[0] * 2);
      if (iVar6 != 0) {
        uVar10 = FUN_1001cc310();
        cVar4 = _os_log_type_enabled(uVar10,0x10);
        if (cVar4 != '\0') {
          local_ac8 = 0x8220202;
          local_ac4 = "Assertion failure";
          local_abc = 0x400;
          local_aba = (char *)CONCAT44(local_aba._4_4_,iVar6);
          __os_log_error_impl(0x100000000,uVar10,0x10,"%{public}s: err == (%d)",&local_ac8,0x12);
        }
      }
      if (*(int *)(param_1 + 0x40) == 0) {
        uVar8 = FUN_1001e215a(local_a78);
        *(undefined4 *)(param_1 + 0x40) = uVar8;
      }
      FUN_1002b765a(param_1);
      uVar7 = FUN_1004744bf(puVar1,0);
      if ((uVar7 >> 0x14 & 1) != 0) {
        iVar6 = FUN_10017d477(&local_458,&local_ac8,0);
        if ((iVar6 != -0x80) && (iVar6 != 0)) {
          uVar10 = FUN_1001cc310();
          cVar4 = _os_log_type_enabled(uVar10,0x10);
          if (cVar4 != '\0') {
            local_ae8 = 0x8220202;
            local_ae4 = "Assertion failure";
            local_adc = 0x400;
            local_ada = iVar6;
            __os_log_error_impl(0x100000000,uVar10,0x10,"%{public}s: err == (%d)",&local_ae8,0x12);
          }
        }
        iVar6 = FUN_10032e4ee(local_af0,puVar1,local_858,&local_ac8);
        if ((iVar6 != -0x80) && (iVar6 != 0)) {
          uVar10 = FUN_1001cc310();
          cVar4 = _os_log_type_enabled(uVar10,0x10);
          if (cVar4 != '\0') {
            local_ae8 = 0x8220202;
            local_ae4 = "Assertion failure";
            local_adc = 0x400;
            local_ada = iVar6;
            __os_log_error_impl(0x100000000,uVar10,0x10,"%{public}s: err == (%d)",&local_ae8,0x12);
          }
        }
      }
      FUN_1002fef76(puVar1);
      lVar9 = FUN_100346a6d(local_658);
      if (lVar9 == 0) {
        uVar10 = FUN_1001cc310();
        cVar4 = _os_log_type_enabled(uVar10,0x10);
        if (cVar4 != '\0') {
          local_ac8 = 0x8220202;
          local_ac4 = "Assertion failure";
          local_abc = 0x822;
          local_aba = "assetPath != nullptr";
          __os_log_error_impl(0x100000000,uVar10,0x10,"%{public}s: (%{public}s)",&local_ac8,0x16);
        }
        FUN_1001782e9(0,0);
      }
      iVar6 = FUN_10017d489(&local_458,local_858);
      if ((iVar6 != -0x80) && (iVar6 != 0)) {
        uVar10 = FUN_1001cc310();
        cVar4 = _os_log_type_enabled(uVar10,0x10);
        if (cVar4 != '\0') {
          local_ac8 = 0x8220202;
          local_ac4 = "Assertion failure";
          local_abc = 0x400;
          local_aba = (char *)CONCAT44(local_aba._4_4_,iVar6);
          __os_log_error_impl(0x100000000,uVar10,0x10,"%{public}s: err == (%d)",&local_ac8,0x12);
        }
      }
      FUN_1001e40a7(local_858,local_a58,local_a78);
      iVar6 = FUN_1001894bc(&local_458,local_a58,&local_458);
      if ((iVar6 != -0x80) && (iVar6 != 0)) {
        uVar10 = FUN_1001cc310();
        cVar4 = _os_log_type_enabled(uVar10,0x10);
        if (cVar4 != '\0') {
          local_ac8 = 0x8220202;
          local_ac4 = "Assertion failure";
          local_abc = 0x400;
          local_aba = (char *)CONCAT44(local_aba._4_4_,iVar6);
          __os_log_error_impl(0x100000000,uVar10,0x10,"%{public}s: err == (%d)",&local_ac8,0x12);
        }
      }
      param_3 = 0;
      if (*(ushort *)(local_af0 + 100) < 0x600) {
        uVar10 = 0;
      }
      else {
        uVar10 = FUN_100346acf(local_af0,puVar1,&local_afc);
      }
    }
    else {
      if (DAT_1008c75c0 != -1) {
        _dispatch_once(&DAT_1008c75c0,&PTR___NSConcreteGlobalBlock_100857068);
      }
      uVar10 = DAT_1008c75b8;
      cVar4 = _os_log_type_enabled(DAT_1008c75b8,0x10);
      if (cVar4 != '\0') {
        pcVar2 = (char *)*puVar1;
        FUN_100476ac1(local_658,puVar1);
        local_44a = (char *)FUN_1001b83ae(local_658);
        local_458 = 0x8000402;
        local_44c = 0x822;
        local_442 = 0x400;
        local_43c = 0x400;
        local_454 = pcVar2;
        local_440 = param_3;
        local_43a = param_3;
        __os_log_impl(0x100000000,uVar10,0x10,
                      "airtraffic> failed to copy asset for track %lld (\"%{public}s\") (%d / 0x%08X)"
                      ,&local_458,0x22);
        FUN_1001b7a50(local_658);
      }
LAB_10034611d:
      uVar10 = 0;
      lVar9 = 0;
    }
  }
  uVar8 = FUN_10032f3b4(param_3);
  uVar5 = FUN_1003471b5(local_af0,param_1,0,0,param_3);
  FUN_100346d75(local_af0,1,local_b08,1,lVar9,uVar10,local_afc,uVar8,uVar5);
  FUN_10017060f(lVar9);
  FUN_10017060f(local_b08);
  FUN_10017060f(local_af8);
  FUN_10017060f(uVar10);
LAB_100345a9c:
  if (*(long *)PTR____stack_chk_guard_10082cb58 == local_38) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  ___stack_chk_fail();
}

