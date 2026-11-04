// name: FUN_1003450bf
// address: 1003450bf

/* WARNING: Type propagation algorithm not settling */

int FUN_1003450bf(long param_1,long param_2,undefined8 param_3,undefined8 param_4)

{
  undefined8 *puVar1;
  long lVar2;
  int iVar3;
  int iVar4;
  uint uVar5;
  uint uVar6;
  undefined2 uVar7;
  undefined2 uVar8;
  undefined2 uVar9;
  undefined2 uVar10;
  char cVar11;
  int iVar12;
  int iVar13;
  long lVar14;
  long lVar15;
  undefined8 uVar16;
  undefined8 uVar17;
  char *pcVar18;
  undefined1 local_70 [20];
  uint local_5c [3];
  undefined2 uStack_50;
  undefined2 uStack_4e;
  undefined2 local_4c;
  undefined4 local_4a;
  undefined2 uStack_46;
  undefined2 uStack_44;
  undefined6 uStack_42;
  long local_38;
  
  local_38 = *(long *)PTR____stack_chk_guard_10082cb58;
  puVar1 = *(undefined8 **)(param_2 + 8);
  if ((puVar1 == (undefined8 *)0x0) || (puVar1[2] == 0)) {
    uVar17 = FUN_1001cc310();
    cVar11 = _os_log_type_enabled(uVar17,0x10);
    if (cVar11 != '\0') {
      local_5c[1] = 0x8220202;
      local_5c[2] = 0x7a0a90;
      uStack_50 = 1;
      uStack_4e = 0;
      local_4c = 0x822;
      local_4a = 0x7b8d38;
      uStack_46 = 1;
      uStack_44 = 0;
      __os_log_error_impl(0x100000000,uVar17,0x10,"%{public}s: (%{public}s)",local_5c + 1,0x16);
    }
    FUN_1001782e9(0,0);
    iVar12 = 3;
    goto LAB_10034527c;
  }
  lVar14 = FUN_100166c1b(param_3,&cf_AssetID);
  if (lVar14 == 0) {
    uVar17 = FUN_1001cc310();
    cVar11 = _os_log_type_enabled(uVar17,0x10);
    if (cVar11 != '\0') {
      local_5c[1] = 0x8220202;
      local_5c[2] = 0x7a0a90;
      uStack_50 = 1;
      uStack_4e = 0;
      local_4c = 0x822;
      local_4a = 0x7c03e2;
      uStack_46 = 1;
      uStack_44 = 0;
      __os_log_error_impl(0x100000000,uVar17,0x10,"%{public}s: (%{public}s)",local_5c + 1,0x16);
    }
    FUN_1001782e9(0,0);
    iVar12 = 0xf;
    goto LAB_10034527c;
  }
  lVar15 = FUN_100166b7f(param_3,&cf_Variant);
  iVar12 = 0;
  if ((lVar15 == 0) ||
     (cVar11 = FUN_100167740(lVar15,&cf_AssetParts,local_5c), uVar9 = uStack_4e, uVar7 = uStack_50,
     uVar5 = local_5c[2], iVar12 = 0, cVar11 == '\0')) goto LAB_10034527c;
  if ((local_5c[0] & 0xf) == 0) {
    if (DAT_1008c75c0 != -1) {
      _dispatch_once(&DAT_1008c75c0,&PTR___NSConcreteGlobalBlock_100857068);
    }
    uVar17 = DAT_1008c75b8;
    cVar11 = _os_log_type_enabled(DAT_1008c75b8,0x10);
    uVar5 = local_5c[0];
    iVar12 = 0x15;
    if (cVar11 != '\0') {
      FUN_100476ac1(local_70,puVar1);
      uVar16 = FUN_1001b83ae(local_70);
      local_5c[1] = 0x4000302;
      local_5c[2] = uVar5;
      uStack_50 = 0x842;
      uStack_4e = (undefined2)lVar14;
      local_4c = (undefined2)((ulong)lVar14 >> 0x10);
      local_4a = (undefined4)((ulong)lVar14 >> 0x20);
      uStack_46 = 0x822;
      uStack_44 = (undefined2)uVar16;
      uStack_42 = (undefined6)((ulong)uVar16 >> 0x10);
      __os_log_impl(0x100000000,uVar17,0x10,
                    "airtraffic> unknown AssetParts (0x%X) for asset identifier \"%{public}@\" (\"%{public}s\")"
                    ,local_5c + 1,0x1c);
      FUN_1001b7a50(local_70);
    }
    goto LAB_10034527c;
  }
  iVar4 = 0;
  if ((local_5c[0] & 1) != 0) {
    param_3 = 0;
  }
  uStack_50 = (undefined2)((ulong)lVar14 >> 0x20);
  uVar8 = uStack_50;
  uStack_4e = (undefined2)((ulong)lVar14 >> 0x30);
  uVar10 = uStack_4e;
  local_5c[2] = (uint)lVar14;
  uVar6 = local_5c[2];
  local_5c[2] = uVar5;
  uStack_50 = uVar7;
  uStack_4e = uVar9;
  iVar3 = 0;
  if ((local_5c[0] & 2) != 0) {
    iVar12 = *(int *)((long)puVar1 + 0x174);
    if (DAT_1008c75c0 != -1) {
      _dispatch_once(&DAT_1008c75c0,&PTR___NSConcreteGlobalBlock_100857068);
    }
    uVar17 = DAT_1008c75b8;
    cVar11 = _os_log_type_enabled(DAT_1008c75b8,1);
    if (iVar12 == 0) {
      iVar12 = 0x10;
      if (cVar11 != '\0') {
        FUN_100476ac1(local_70,puVar1);
        uVar16 = FUN_1001b83ae(local_70);
        local_5c[1] = 0x8420202;
        local_4c = 0x822;
        local_4a = (undefined4)uVar16;
        uStack_46 = (undefined2)((ulong)uVar16 >> 0x20);
        uStack_44 = (undefined2)((ulong)uVar16 >> 0x30);
        local_5c[2] = uVar6;
        uStack_50 = uVar8;
        uStack_4e = uVar10;
        __os_log_impl(0x100000000,uVar17,1,
                      "airtraffic> no artwork for asset identifier \"%{public}@\" (\"%{public}s\")",
                      local_5c + 1,0x16);
        FUN_1001b7a50(local_70);
      }
    }
    else {
      if (cVar11 != '\0') {
        FUN_100476ac1(local_70,puVar1);
        uVar16 = FUN_1001b83ae(local_70);
        local_5c[1] = 0x8420202;
        local_4c = 0x822;
        local_4a = (undefined4)uVar16;
        uStack_46 = (undefined2)((ulong)uVar16 >> 0x20);
        uStack_44 = (undefined2)((ulong)uVar16 >> 0x30);
        local_5c[2] = uVar6;
        uStack_50 = uVar8;
        uStack_4e = uVar10;
        __os_log_impl(0x100000000,uVar17,1,
                      "airtraffic> copying artwork for asset identifier \"%{public}@\" (\"%{public}s\")"
                      ,local_5c + 1,0x16);
        FUN_1001b7a50(local_70);
      }
      iVar12 = FUN_1003444f3(param_1,lVar14,*(undefined4 *)((long)puVar1 + 0x174),param_3,param_4);
      iVar3 = 0;
      if (iVar12 == 0) goto LAB_100345446;
    }
    local_5c[0] = local_5c[0] & 0xfffffffd;
    FUN_100168746(lVar15,&cf_AssetParts,local_5c[0],0);
    iVar3 = iVar12;
  }
LAB_100345446:
  if ((local_5c[0] & 8) != 0) {
    iVar12 = *(int *)(param_2 + 0x7c);
    if (DAT_1008c75c0 != -1) {
      _dispatch_once(&DAT_1008c75c0,&PTR___NSConcreteGlobalBlock_100857068);
    }
    uVar17 = DAT_1008c75b8;
    cVar11 = _os_log_type_enabled(DAT_1008c75b8,1);
    if (iVar12 == 0) {
      iVar12 = 0x10;
      if (cVar11 != '\0') {
        FUN_100476ac1(local_70,puVar1);
        uVar16 = FUN_1001b83ae(local_70);
        local_5c[1] = 0x8420202;
        local_4c = 0x822;
        local_4a = (undefined4)uVar16;
        uStack_46 = (undefined2)((ulong)uVar16 >> 0x20);
        uStack_44 = (undefined2)((ulong)uVar16 >> 0x30);
        local_5c[2] = uVar6;
        uStack_50 = uVar8;
        uStack_4e = uVar10;
        __os_log_impl(0x100000000,uVar17,1,
                      "airtraffic> no lyrics for asset identifier \"%{public}@\" (\"%{public}s\")",
                      local_5c + 1,0x16);
        FUN_1001b7a50(local_70);
      }
    }
    else {
      if (cVar11 != '\0') {
        FUN_100476ac1(local_70,puVar1);
        uVar16 = FUN_1001b83ae(local_70);
        local_5c[1] = 0x8420202;
        local_4c = 0x822;
        local_4a = (undefined4)uVar16;
        uStack_46 = (undefined2)((ulong)uVar16 >> 0x20);
        uStack_44 = (undefined2)((ulong)uVar16 >> 0x30);
        local_5c[2] = uVar6;
        uStack_50 = uVar8;
        uStack_4e = uVar10;
        __os_log_impl(0x100000000,uVar17,1,
                      "airtraffic> copying lyrics for asset identifier \"%{public}@\" (\"%{public}s\")"
                      ,local_5c + 1,0x16);
        FUN_1001b7a50(local_70);
      }
      iVar12 = FUN_1003449ad(param_1,lVar14,*puVar1,param_3);
      if (iVar12 == 0) goto LAB_100345586;
    }
    local_5c[0] = local_5c[0] & 0xfffffff7;
    FUN_100168746(lVar15,&cf_AssetParts,local_5c[0],0);
    iVar4 = iVar12;
  }
LAB_100345586:
  iVar13 = 0;
  if ((local_5c[0] & 4) != 0) {
    if (*(char *)(param_1 + 0x14df8) == '\0') {
      lVar2 = puVar1[0x32];
      if (DAT_1008c75c0 != -1) {
        _dispatch_once(&DAT_1008c75c0,&PTR___NSConcreteGlobalBlock_100857068);
      }
      uVar17 = DAT_1008c75b8;
      cVar11 = _os_log_type_enabled(DAT_1008c75b8,1);
      if (lVar2 == 0) {
        iVar13 = 0x10;
        if (cVar11 != '\0') {
          FUN_100476ac1(local_70,puVar1);
          uVar16 = FUN_1001b83ae(local_70);
          local_4a = (undefined4)uVar16;
          uStack_46 = (undefined2)((ulong)uVar16 >> 0x20);
          uStack_44 = (undefined2)((ulong)uVar16 >> 0x30);
          pcVar18 = 
          "airtraffic> no Genius data for asset identifier \"%{public}@\" (\"%{public}s\")";
          goto LAB_10034561e;
        }
      }
      else {
        if (cVar11 != '\0') {
          FUN_100476ac1(local_70,puVar1);
          uVar16 = FUN_1001b83ae(local_70);
          local_5c[1] = 0x8420202;
          local_4c = 0x822;
          local_4a = (undefined4)uVar16;
          uStack_46 = (undefined2)((ulong)uVar16 >> 0x20);
          uStack_44 = (undefined2)((ulong)uVar16 >> 0x30);
          local_5c[2] = uVar6;
          uStack_50 = uVar8;
          uStack_4e = uVar10;
          __os_log_impl(0x100000000,uVar17,1,
                        "airtraffic> copying Genius data for asset identifier \"%{public}@\" (\"%{public}s\")"
                        ,local_5c + 1,0x16);
          FUN_1001b7a50(local_70);
        }
        iVar13 = FUN_100344d22(param_1,lVar14,puVar1[0x32],param_3);
        if (iVar13 == 0) {
          iVar13 = 0;
          goto LAB_1003457bb;
        }
      }
    }
    else {
      if (DAT_1008c75c0 != -1) {
        _dispatch_once(&DAT_1008c75c0,&PTR___NSConcreteGlobalBlock_100857068);
      }
      uVar17 = DAT_1008c75b8;
      cVar11 = _os_log_type_enabled(DAT_1008c75b8,1);
      iVar13 = 0x10;
      if (cVar11 != '\0') {
        FUN_100476ac1(local_70,puVar1);
        uVar16 = FUN_1001b83ae(local_70);
        local_4a = (undefined4)uVar16;
        uStack_46 = (undefined2)((ulong)uVar16 >> 0x20);
        uStack_44 = (undefined2)((ulong)uVar16 >> 0x30);
        pcVar18 = 
        "airtraffic> not syncing Genius data for asset identifier \"%{public}@\" (\"%{public}s\")";
LAB_10034561e:
        local_4c = 0x822;
        local_5c[1] = 0x8420202;
        iVar13 = 0x10;
        local_5c[2] = uVar6;
        uStack_50 = uVar8;
        uStack_4e = uVar10;
        __os_log_impl(0x100000000,uVar17,1,pcVar18,local_5c + 1,0x16);
        FUN_1001b7a50(local_70);
      }
    }
    local_5c[0] = local_5c[0] & 0xfffffffb;
    FUN_100168746(lVar15,&cf_AssetParts,local_5c[0],0);
  }
LAB_1003457bb:
  iVar12 = 0;
  if (local_5c[0] == 0) {
    if ((iVar4 == 0 && iVar3 == 0) && iVar13 == 0) {
      uVar17 = FUN_1001cc310();
      cVar11 = _os_log_type_enabled(uVar17,0x10);
      if (cVar11 != '\0') {
        local_5c[1] = 0x8220202;
        local_5c[2] = 0x7a0a90;
        uStack_50 = 1;
        uStack_4e = 0;
        local_4c = 0x822;
        local_4a = 0x7c1af3;
        uStack_46 = 1;
        uStack_44 = 0;
        __os_log_error_impl(0x100000000,uVar17,0x10,"%{public}s: (%{public}s)",local_5c + 1,0x16);
      }
      FUN_1001782e9(0,0);
    }
    if (iVar4 != 0) {
      iVar13 = iVar4;
    }
    iVar12 = iVar13;
    if (iVar3 != 0) {
      iVar12 = iVar3;
    }
  }
LAB_10034527c:
  if (*(long *)PTR____stack_chk_guard_10082cb58 != local_38) {
                    /* WARNING: Subroutine does not return */
    ___stack_chk_fail();
  }
  return iVar12;
}

