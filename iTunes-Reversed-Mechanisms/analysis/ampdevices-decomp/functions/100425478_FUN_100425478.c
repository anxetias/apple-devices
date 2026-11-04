// name: FUN_100425478
// address: 100425478

ulong FUN_100425478(undefined4 param_1,undefined2 *param_2,undefined4 *param_3,long *param_4)

{
  undefined4 uVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  char cVar4;
  undefined1 uVar5;
  undefined2 uVar6;
  uint uVar7;
  int iVar8;
  long lVar9;
  undefined8 uVar10;
  long *plVar11;
  long lVar12;
  undefined4 *puVar13;
  ulong uVar14;
  undefined8 *puVar15;
  ulong uVar16;
  undefined4 local_2c8 [2];
  undefined1 local_2c0 [8];
  undefined4 local_2b8 [2];
  undefined1 local_2b0 [8];
  undefined1 local_2a8 [16];
  undefined8 *local_298;
  undefined8 *local_290;
  undefined8 *local_288;
  undefined8 *local_280;
  undefined8 local_278;
  undefined4 local_26c;
  undefined4 local_268;
  undefined4 local_264;
  undefined8 *local_260;
  undefined4 local_258;
  char *local_254;
  undefined2 local_24c;
  char *local_24a;
  undefined4 local_238;
  char *local_234;
  undefined2 local_22c;
  char *local_22a;
  long local_38;
  
  local_38 = *(long *)PTR____stack_chk_guard_10082cb58;
  FUN_1001b7a44(local_2a8);
  if (param_4 == (long *)0x0) {
    uVar10 = FUN_1001cc310();
    cVar4 = _os_log_type_enabled(uVar10,0x10);
    if (cVar4 != '\0') {
      local_238 = 0x8220202;
      local_234 = "Assertion failure";
      local_22c = 0x822;
      local_22a = "outIPodSoftwareUpdateRestoreActionDelegate != nullptr";
      __os_log_error_impl(0x100000000,uVar10,0x10,"%{public}s: (%{public}s)",&local_238,0x16);
    }
    uVar16 = 0xffffffce;
    FUN_1001782e9(0,0);
    goto LAB_100425c08;
  }
  *param_4 = 0;
  lVar9 = FUN_1004de449(param_1);
  if (lVar9 == 0) {
    puVar13 = (undefined4 *)FUN_1001c629e(0x6878,&DAT_100711c6e);
    if (puVar13 == (undefined4 *)0x0) {
      uVar10 = FUN_1001cc310();
      cVar4 = _os_log_type_enabled(uVar10,0x10);
      if (cVar4 != '\0') {
        local_238 = 0x8220202;
        local_234 = "Assertion failure";
        local_22c = 0x822;
        local_22a = "rawDeviceDescription != __null";
        __os_log_error_impl(0x100000000,uVar10,0x10,"%{public}s: (%{public}s)",&local_238,0x16);
      }
      uVar16 = 0xffffff94;
      FUN_1001782e9(0,0);
      goto LAB_100425c08;
    }
    uVar10 = FUN_1005e9a2c();
    uVar14 = FUN_1005e7c6c(uVar10,param_1,puVar13);
    iVar8 = (int)uVar14;
    uVar16 = uVar14 & 0xffffffff;
    if (iVar8 != -0x80) {
      if (iVar8 == 0) {
        local_290 = (undefined8 *)CONCAT71(local_290._1_7_,*(undefined1 *)(puVar13 + 1));
        local_26c = (undefined4)CONCAT71((int7)(uVar14 >> 8),*(undefined1 *)((long)puVar13 + 6));
        local_288 = *(undefined8 **)(puVar13 + 2);
        local_280 = *(undefined8 **)(puVar13 + 0x16a);
        if (*(undefined8 **)(puVar13 + 0x16a) == (undefined8 *)0x0) {
          local_280 = local_288;
        }
        local_260 = (undefined8 *)CONCAT44(local_260._4_4_,*puVar13);
        uVar10 = FUN_100416f20(*puVar13,0x10cc007b);
        FUN_1001b81f2(local_2a8,uVar10);
        operator_delete(puVar13);
        local_264 = 0;
        local_278 = (undefined8 *)((ulong)local_278._4_4_ << 0x20);
        local_268 = param_1;
        goto LAB_10042558f;
      }
      uVar10 = FUN_1001cc310();
      cVar4 = _os_log_type_enabled(uVar10,0x10);
      if (cVar4 != '\0') {
        local_238 = 0x8220202;
        local_234 = "Assertion failure";
        local_22c = 0x400;
        local_22a = (char *)CONCAT44(local_22a._4_4_,iVar8);
        __os_log_error_impl(0x100000000,uVar10,0x10,"%{public}s: err == (%d)",&local_238,0x12);
      }
    }
    operator_delete(puVar13);
    goto LAB_100425c08;
  }
  local_260 = (undefined8 *)CONCAT44(local_260._4_4_,*(undefined4 *)(lVar9 + 0x66b0));
  cVar4 = FUN_1002669ba(*(undefined8 *)(lVar9 + 0x66d8));
  local_290 = (undefined8 *)CONCAT71(local_290._1_7_,cVar4 != '\0');
  uVar10 = FUN_100266cae(*(undefined8 *)(lVar9 + 0x66d8));
  local_278 = (undefined8 *)
              CONCAT44(local_278._4_4_,
                       (int)CONCAT71((int7)((ulong)uVar10 >> 8),(char)uVar10 != '\0'));
  local_288 = *(undefined8 **)(lVar9 + 0x38);
  local_280 = *(undefined8 **)(lVar9 + 0x40);
  FUN_1004f0e83(lVar9,&local_238);
  FUN_1001b8dfc(&local_258,&local_238);
  FUN_1001b80b2(local_2a8,&local_258);
  FUN_1001b7a50(&local_258);
  local_268 = 0;
  local_26c = 0;
  local_264 = param_1;
LAB_10042558f:
  plVar11 = (long *)FUN_10039a28c();
  uVar10 = (**(code **)(*plVar11 + 0x50))(plVar11);
  lVar12 = FUN_10039c016(uVar10,param_1,0);
  if (lVar12 != 0) {
    *(int *)(lVar12 + 8) = *(int *)(lVar12 + 8) + 1;
    *param_4 = lVar12;
    uVar16 = 0;
    goto LAB_100425c08;
  }
  FUN_100249c30(&local_238);
  local_2c8[0] = 0;
  FUN_1001c62d9(local_2c0,8);
  local_2b8[0] = 0;
  FUN_1001c62d9(local_2b0,8);
  uVar7 = FUN_100256203(param_1,&local_238,local_2c8);
  uVar16 = (ulong)uVar7;
  if (uVar7 != 0xffffff80) {
    if (uVar7 != 0) {
      uVar10 = FUN_1001cc310();
      cVar4 = _os_log_type_enabled(uVar10,0x10);
      if (cVar4 != '\0') {
        local_258 = 0x8220202;
        local_254 = "Assertion failure";
        local_24c = 0x400;
        local_24a = (char *)CONCAT44(local_24a._4_4_,uVar7);
        __os_log_error_impl(0x100000000,uVar10,0x10,"%{public}s: err == (%d)",&local_258,0x12);
      }
      if (uVar7 != 0) goto LAB_100425be4;
    }
    puVar15 = operator_new(0x1360,(nothrow_t *)PTR_nothrow_10082c970);
    if (puVar15 == (undefined8 *)0x0) {
      *param_4 = 0;
      uVar10 = FUN_1001cc310();
      cVar4 = _os_log_type_enabled(uVar10,0x10);
      if (cVar4 != '\0') {
        local_258 = 0x8220202;
        local_254 = "Assertion failure";
        local_24c = 0x822;
        local_24a = "*outIPodSoftwareUpdateRestoreActionDelegate != nullptr";
        __os_log_error_impl(0x100000000,uVar10,0x10,"%{public}s: (%{public}s)",&local_258,0x16);
      }
      uVar16 = 0xffffff94;
      FUN_1001782e9(0,0);
    }
    else {
      FUN_1001cee50(puVar15);
      *puVar15 = &PTR_FUN_100857f38;
      local_298 = puVar15 + 2;
      FUN_1001c75be();
      *puVar15 = &PTR_FUN_100857e10;
      puVar15[2] = &PTR_FUN_100857ec0;
      *(undefined4 *)(puVar15 + 0xb) = local_260._0_4_;
      *(undefined1 *)((long)puVar15 + 0x5c) = local_290._0_1_;
      *(char *)((long)puVar15 + 0x5d) = (char)local_26c;
      *(char *)((long)puVar15 + 0x5e) = (char)local_278;
      local_290 = puVar15 + 0xc;
      FUN_1001b7a5c(local_290,local_2a8);
      puVar15[0xe] = local_280;
      puVar15[0xf] = local_288;
      *(undefined4 *)(puVar15 + 0x10) = local_264;
      *(undefined4 *)((long)puVar15 + 0x84) = local_268;
      ___bzero(puVar15 + 0x11,0x424);
      FUN_1001c62d9(puVar15 + 0x96,8);
      puVar15[0x97] = 0;
      local_288 = puVar15 + 0x98;
      FUN_100249e02(local_288,&local_238);
      local_280 = puVar15 + 0xa5;
      FUN_100249ed4(local_280,local_2c8);
      local_278 = puVar15 + 0xa7;
      FUN_100249ed4(local_278,local_2b8);
      local_260 = puVar15 + 0xa9;
      FUN_10024f4f0();
      puVar15[0x260] = 0;
      puVar15[0x266] = 0;
      puVar15[0x268] = 0;
      puVar15[0x269] = 0;
      *(undefined2 *)((long)puVar15 + 0x1357) = 0;
      *(undefined4 *)((long)puVar15 + 0x1352) = 0;
      *(bool *)((long)puVar15 + 0x1359) = lVar9 != 0;
      *(undefined2 *)((long)puVar15 + 0x135a) = 0;
      if (param_3 != (undefined4 *)0x0) {
        *(undefined4 *)(local_260 + 2) = param_3[4];
        uVar1 = param_3[1];
        uVar2 = param_3[2];
        uVar3 = param_3[3];
        *(undefined4 *)local_260 = *param_3;
        *(undefined4 *)((long)local_260 + 4) = uVar1;
        *(undefined4 *)(local_260 + 1) = uVar2;
        *(undefined4 *)((long)local_260 + 0xc) = uVar3;
        FUN_10024adb0(puVar15 + 0xac,param_3 + 6);
        *(undefined4 *)(puVar15 + 0xb5) = param_3[0x18];
        FUN_10024adb0(puVar15 + 0xb6,param_3 + 0x1a);
        FUN_10024adb0(puVar15 + 0xbf,param_3 + 0x2c);
        FUN_100249f2c(puVar15 + 200,param_3 + 0x3e);
        FUN_100249f2c(puVar15 + 0xca,param_3 + 0x42);
        _memcpy(puVar15 + 0xcc,param_3 + 0x46,0x420);
        FUN_100249f2c(puVar15 + 0x150,param_3 + 0x14e);
        FUN_100249f2c(puVar15 + 0x152,param_3 + 0x152);
        _memcpy(puVar15 + 0x154,param_3 + 0x156,0x420);
        FUN_100249f2c(puVar15 + 0x1d8,param_3 + 0x25e);
        FUN_100249f2c(puVar15 + 0x1da,param_3 + 0x262);
        _memcpy(puVar15 + 0x1dc,param_3 + 0x266,0x420);
      }
      if (param_2 == (undefined2 *)0x0) {
        uVar6 = 2;
        uVar5 = 0;
      }
      else {
        uVar6 = *param_2;
        uVar5 = *(undefined1 *)(param_2 + 1);
      }
      *(undefined2 *)(puVar15 + 0x26a) = uVar6;
      *(undefined1 *)((long)puVar15 + 0x1356) = uVar5;
      FUN_1001c62d9(puVar15 + 0x11,0x420);
      uVar10 = FUN_1001c156e();
      iVar8 = FUN_1001c76b2(local_298,uVar10);
      if ((iVar8 != -0x80) && (iVar8 != 0)) {
        uVar10 = FUN_1001cc310();
        cVar4 = _os_log_type_enabled(uVar10,0x10);
        if (cVar4 != '\0') {
          local_258 = 0x8220202;
          local_254 = "Assertion failure";
          local_24c = 0x400;
          local_24a = (char *)CONCAT44(local_24a._4_4_,iVar8);
          __os_log_error_impl(0x100000000,uVar10,0x10,"%{public}s: err == (%d)",&local_258,0x12);
        }
      }
      if (*(int *)((long)puVar15 + 0x84) != 0) {
        lVar9 = FUN_1005e9a2c();
        lVar9 = *(long *)(lVar9 + 0x60);
        if (lVar9 != 0 && *(int *)((long)puVar15 + 0x84) != 0) {
          do {
            if (*(int *)(lVar9 + 0x6884) == *(int *)((long)puVar15 + 0x84)) {
              uVar5 = *(undefined1 *)(lVar9 + 0x68c5);
              goto LAB_100425bd6;
            }
            lVar9 = *(long *)(lVar9 + 0x6878);
          } while (lVar9 != 0);
        }
        uVar5 = 0;
LAB_100425bd6:
        *(undefined1 *)((long)puVar15 + 0x135b) = uVar5;
      }
      *param_4 = (long)puVar15;
      uVar16 = 0;
    }
  }
LAB_100425be4:
  FUN_100249fee(local_2b8);
  FUN_100249fca(local_2c8);
  FUN_100249ea6(&local_238);
LAB_100425c08:
  FUN_1001b7a50(local_2a8);
  if (*(long *)PTR____stack_chk_guard_10082cb58 == local_38) {
    return uVar16;
  }
                    /* WARNING: Subroutine does not return */
  ___stack_chk_fail();
}

