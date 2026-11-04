// name: FUN_1003da016
// address: 1003da016

/* WARNING: Type propagation algorithm not settling */

int FUN_1003da016(long param_1,long param_2)

{
  undefined4 uVar1;
  long lVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  undefined4 uVar6;
  undefined4 uVar7;
  undefined4 uVar8;
  char cVar9;
  int iVar10;
  long lVar11;
  undefined8 uVar12;
  undefined4 *puVar13;
  uint *puVar14;
  undefined1 auVar15 [16];
  undefined1 local_1758 [32];
  undefined4 local_1738;
  undefined2 local_1708;
  ushort local_1706;
  ushort local_1704;
  uint local_16fc [2];
  char *local_16f4;
  undefined2 local_16ec;
  int local_16ea;
  undefined1 local_12d8 [1056];
  undefined1 local_eb8 [1056];
  uint local_a98;
  char *local_a94;
  undefined2 local_a8c;
  int local_a8a;
  undefined1 local_a78;
  undefined2 local_a77;
  undefined2 local_a6a;
  code *local_a48;
  long local_a40;
  undefined4 local_658;
  char *local_654;
  undefined2 local_64c;
  int local_64a;
  undefined4 local_238;
  char *local_234;
  undefined2 local_22c;
  char *local_22a;
  undefined8 uStack_40;
  long local_38;
  
  uStack_40 = 0x1003da02e;
  auVar15 = FUN_100108310();
  lVar2 = -auVar15._0_8_;
  local_38 = *(long *)PTR____stack_chk_guard_10082cb58;
  *(undefined8 *)((long)&local_38 + lVar2) = 0x1003da05a;
  iVar10 = FUN_10049980b(param_2,local_eb8,0);
  if (iVar10 == -0x80) goto LAB_1003da2d7;
  if (iVar10 == 0) {
    *(undefined8 *)((long)&local_38 + lVar2) = 0x1003da082;
    iVar10 = FUN_10017d477(local_eb8,local_1758,0);
    if (iVar10 == -0x80) goto LAB_1003da2d7;
    if (iVar10 != 0) {
      *(undefined8 *)((long)&local_38 + lVar2) = 0x1003da22d;
      uVar12 = FUN_1001cc310();
      *(undefined8 *)((long)&local_38 + lVar2) = 0x1003da23d;
      cVar9 = _os_log_type_enabled(uVar12,0x10);
      if (cVar9 == '\0') goto LAB_1003da2d7;
      puVar13 = &local_658;
      local_658 = 0x8220202;
      local_654 = "Assertion failure";
      local_64c = 0x400;
      local_64a = iVar10;
      goto LAB_1003da2c4;
    }
    lVar11 = *(long *)(param_1 + 0x10);
    uVar1 = *(undefined4 *)(lVar11 + 0x66b0);
    uVar12 = 0x66756c6c;
    if (*(int *)(param_2 + 0x10) == 4) {
      uVar12 = 0x70687669;
    }
    *(undefined8 *)((long)&local_38 + lVar2) = 0x1003da0c9;
    iVar10 = FUN_1002441f8(uVar1,lVar11 + 0x6b40,uVar12,1,local_12d8);
    if (iVar10 == -0x80) goto LAB_1003da2d7;
    if (iVar10 != 0) {
      *(undefined8 *)((long)&local_38 + lVar2) = 0x1003da27e;
      uVar12 = FUN_1001cc310();
      *(undefined8 *)((long)&local_38 + lVar2) = 0x1003da28e;
      cVar9 = _os_log_type_enabled(uVar12,0x10);
      if (cVar9 == '\0') goto LAB_1003da2d7;
      puVar13 = &local_658;
      local_658 = 0x8220202;
      local_654 = "Assertion failure";
      local_64c = 0x400;
      local_64a = iVar10;
      goto LAB_1003da2c4;
    }
    *(undefined8 *)((long)&local_38 + lVar2) = 0x1003da0ef;
    cVar9 = FUN_100183bb2(local_12d8,local_eb8);
    iVar10 = 0;
    if (cVar9 != '\0') goto LAB_1003da2d7;
    local_16fc[0] = *(uint *)(*(long *)(param_2 + 8) + 0x58);
    if (local_16fc[0] < 2) {
      local_16fc[0] = *(uint *)(*(long *)(param_2 + 8) + 0x8c);
      if (local_16fc[0] == 0) {
        *(undefined8 *)((long)&local_38 + lVar2) = 0x1003da12a;
        FUN_100177cff(local_16fc);
      }
    }
    *(undefined8 *)((long)&local_38 + lVar2) = 0x1003da13b;
    FUN_100178093(local_16fc[0],&local_1708);
    *(undefined8 *)((long)&local_38 + lVar2) = 0x1003da14d;
    FUN_1001e1b6d(local_1708,&local_238);
    *(undefined8 *)((long)&local_38 + lVar2) = 0x1003da165;
    iVar10 = FUN_10017ecc9(local_12d8,&local_238,&local_658,0);
    if (iVar10 == 0) {
LAB_1003da196:
      if (local_1706 < 10) {
        *(undefined8 *)((long)&local_38 + lVar2) = 0x1003da1bd;
        FUN_1001e04f5("0%1",&local_238);
        *(undefined8 *)((long)&local_38 + lVar2) = 0x1003da1cf;
        FUN_1001e5722(&local_238,&local_238,local_1706);
      }
      else {
        *(undefined8 *)((long)&local_38 + lVar2) = 0x1003da30b;
        FUN_1001e1b6d(local_1706,&local_238);
      }
      *(undefined8 *)((long)&local_38 + lVar2) = 0x1003da327;
      iVar10 = FUN_10017ecc9(&local_658,&local_238,&local_a78,0);
      if (iVar10 != 0) {
        *(undefined8 *)((long)&local_38 + lVar2) = 0x1003da345;
        iVar10 = FUN_100181256(&local_658,&local_238,&local_a78);
        if (iVar10 == -0x80) goto LAB_1003da38f;
        if (iVar10 == 0) goto LAB_1003da354;
        *(undefined8 *)((long)&local_38 + lVar2) = 0x1003da497;
        uVar12 = FUN_1001cc310();
        *(undefined8 *)((long)&local_38 + lVar2) = 0x1003da4a7;
        cVar9 = _os_log_type_enabled(uVar12,0x10);
        if (cVar9 != '\0') {
          puVar14 = local_16fc + 1;
          local_16fc[1] = 0x8220202;
          local_16f4 = "Assertion failure";
          local_16ec = 0x400;
          local_16ea = iVar10;
          goto LAB_1003da74c;
        }
        goto LAB_1003da4af;
      }
LAB_1003da354:
      if (local_1704 < 10) {
        *(undefined8 *)((long)&local_38 + lVar2) = 0x1003da37b;
        FUN_1001e04f5("0%1",&local_238);
        *(undefined8 *)((long)&local_38 + lVar2) = 0x1003da38d;
        FUN_1001e5722(&local_238,&local_238,local_1704);
      }
      else {
        *(undefined8 *)((long)&local_38 + lVar2) = 0x1003da3f9;
        FUN_1001e1b6d(local_1704,&local_238);
      }
      *(undefined8 *)((long)&local_38 + lVar2) = 0x1003da415;
      iVar10 = FUN_10017ecc9(&local_a78,&local_238,local_16fc + 1,0);
      if (iVar10 != 0) {
        *(undefined8 *)((long)&local_38 + lVar2) = 0x1003da437;
        iVar10 = FUN_100181256(&local_a78,&local_238,local_16fc + 1);
        if ((iVar10 != -0x80) && (iVar10 != 0)) {
          *(undefined8 *)((long)&local_38 + lVar2) = 0x1003da447;
          uVar12 = FUN_1001cc310();
          *(undefined8 *)((long)&local_38 + lVar2) = 0x1003da457;
          cVar9 = _os_log_type_enabled(uVar12,0x10);
          if (cVar9 != '\0') {
            puVar14 = &local_a98;
            local_a98 = 0x8220202;
            local_a94 = "Assertion failure";
            local_a8c = 0x400;
            local_a8a = iVar10;
            goto LAB_1003da74c;
          }
        }
        goto LAB_1003da4af;
      }
    }
    else {
      *(undefined8 *)((long)&local_38 + lVar2) = 0x1003da183;
      iVar10 = FUN_100181256(local_12d8,&local_238,&local_658);
      if (iVar10 == -0x80) {
LAB_1003da38f:
        iVar10 = -0x80;
        goto LAB_1003da2d7;
      }
      if (iVar10 == 0) goto LAB_1003da196;
      *(undefined8 *)((long)&local_38 + lVar2) = 0x1003da39e;
      uVar12 = FUN_1001cc310();
      *(undefined8 *)((long)&local_38 + lVar2) = 0x1003da3ae;
      cVar9 = _os_log_type_enabled(uVar12,0x10);
      if (cVar9 == '\0') goto LAB_1003da4af;
      puVar14 = local_16fc + 1;
      local_16fc[1] = 0x8220202;
      local_16f4 = "Assertion failure";
      local_16ec = 0x400;
      local_16ea = iVar10;
LAB_1003da74c:
      *(undefined8 *)((long)&local_38 + lVar2) = 0x1003da75f;
      __os_log_error_impl(0x100000000,uVar12,0x10,"%{public}s: err == (%d)",puVar14,0x12);
LAB_1003da4af:
      if (iVar10 == -0x80) goto LAB_1003da2d7;
      if (iVar10 != 0) {
        *(undefined8 *)((long)&local_38 + lVar2) = 0x1003da5f3;
        uVar12 = FUN_1001cc310();
        *(undefined8 *)((long)&local_38 + lVar2) = 0x1003da603;
        cVar9 = _os_log_type_enabled(uVar12,0x10);
        if (cVar9 == '\0') goto LAB_1003da2d7;
        puVar13 = &local_658;
        local_658 = 0x8220202;
        local_654 = "Assertion failure";
        local_64c = 0x400;
        local_64a = iVar10;
        goto LAB_1003da2c4;
      }
    }
    *(undefined8 *)((long)&local_38 + lVar2) = 0x1003da4d4;
    FUN_1001c62d9(&local_a78,0x50);
    local_a77 = 0x101;
    local_a6a = 0x201;
    local_a48 = FUN_1003da7ba;
    *(undefined8 *)((long)&local_38 + lVar2) = 0x1003da511;
    local_a40 = param_1;
    iVar10 = FUN_100182f89(1,local_eb8,local_16fc + 1,&local_658,&local_a78);
    if (iVar10 == -0x80) goto LAB_1003da2d7;
    if (iVar10 == 0) {
      uVar1 = *(undefined4 *)(param_2 + 0x10);
      *(undefined8 *)((long)&local_38 + lVar2) = 0x1003da532;
      lVar11 = FUN_100499159(auVar15._8_8_,uVar1,0);
      if (lVar11 == 0) {
        *(undefined8 *)((long)&local_38 + lVar2) = 0x1003da69b;
        uVar12 = FUN_1001cc310();
        *(undefined8 *)((long)&local_38 + lVar2) = 0x1003da6ab;
        cVar9 = _os_log_type_enabled(uVar12,0x10);
        if (cVar9 != '\0') {
          local_238 = 0x8220202;
          local_234 = "Assertion failure";
          local_22c = 0x822;
          local_22a = "destImageInstance != nullptr";
          *(undefined8 *)((long)&local_38 + lVar2) = 0x1003da7b0;
          __os_log_error_impl(0x100000000,uVar12,0x10,"%{public}s: (%{public}s)",&local_238,0x16);
        }
        *(undefined8 *)((long)&local_38 + lVar2) = 0x1003da6bc;
        FUN_1001782e9(0,0);
        iVar10 = -0x6c;
        goto LAB_1003da2d7;
      }
      uVar1 = *(undefined4 *)(param_2 + 0x18);
      uVar3 = *(undefined4 *)(param_2 + 0x1c);
      uVar4 = *(undefined4 *)(param_2 + 0x20);
      uVar5 = *(undefined4 *)(param_2 + 0x24);
      uVar6 = *(undefined4 *)(param_2 + 0x2c);
      uVar7 = *(undefined4 *)(param_2 + 0x30);
      uVar8 = *(undefined4 *)(param_2 + 0x34);
      *(undefined4 *)(lVar11 + 0x28) = *(undefined4 *)(param_2 + 0x28);
      *(undefined4 *)(lVar11 + 0x2c) = uVar6;
      *(undefined4 *)(lVar11 + 0x30) = uVar7;
      *(undefined4 *)(lVar11 + 0x34) = uVar8;
      *(undefined4 *)(lVar11 + 0x18) = uVar1;
      *(undefined4 *)(lVar11 + 0x1c) = uVar3;
      *(undefined4 *)(lVar11 + 0x20) = uVar4;
      *(undefined4 *)(lVar11 + 0x24) = uVar5;
      *(undefined4 *)(lVar11 + 0x3c) = local_1738;
      *(undefined4 *)(lVar11 + 0x40) = local_1738;
      *(undefined8 *)((long)&local_38 + lVar2) = 0x1003da56c;
      iVar10 = FUN_10049a09d(lVar11,&local_658,0,0);
      if (iVar10 == -0x80) goto LAB_1003da2d7;
      if (iVar10 == 0) {
        *(undefined8 *)((long)&local_38 + lVar2) = 0x1003da587;
        iVar10 = FUN_100601f45(param_1);
        if ((iVar10 == -0x80) || (iVar10 == 0)) goto LAB_1003da2d7;
        *(undefined8 *)((long)&local_38 + lVar2) = 0x1003da59f;
        uVar12 = FUN_1001cc310();
        *(undefined8 *)((long)&local_38 + lVar2) = 0x1003da5af;
        cVar9 = _os_log_type_enabled(uVar12,0x10);
        if (cVar9 == '\0') goto LAB_1003da2d7;
        puVar13 = &local_238;
        local_238 = 0x8220202;
        local_234 = "Assertion failure";
        local_22c = 0x400;
        local_22a = (char *)CONCAT44(local_22a._4_4_,iVar10);
      }
      else {
        *(undefined8 *)((long)&local_38 + lVar2) = 0x1003da6cb;
        uVar12 = FUN_1001cc310();
        *(undefined8 *)((long)&local_38 + lVar2) = 0x1003da6db;
        cVar9 = _os_log_type_enabled(uVar12,0x10);
        if (cVar9 == '\0') goto LAB_1003da2d7;
        puVar13 = &local_238;
        local_238 = 0x8220202;
        local_234 = "Assertion failure";
        local_22c = 0x400;
        local_22a = (char *)CONCAT44(local_22a._4_4_,iVar10);
      }
    }
    else {
      *(undefined8 *)((long)&local_38 + lVar2) = 0x1003da647;
      uVar12 = FUN_1001cc310();
      *(undefined8 *)((long)&local_38 + lVar2) = 0x1003da657;
      cVar9 = _os_log_type_enabled(uVar12,0x10);
      if (cVar9 == '\0') goto LAB_1003da2d7;
      puVar13 = &local_238;
      local_238 = 0x8220202;
      local_234 = "Assertion failure";
      local_22c = 0x400;
      local_22a = (char *)CONCAT44(local_22a._4_4_,iVar10);
    }
  }
  else {
    *(undefined8 *)((long)&local_38 + lVar2) = 0x1003da1d9;
    uVar12 = FUN_1001cc310();
    *(undefined8 *)((long)&local_38 + lVar2) = 0x1003da1e9;
    cVar9 = _os_log_type_enabled(uVar12,0x10);
    if (cVar9 == '\0') goto LAB_1003da2d7;
    puVar13 = &local_658;
    local_658 = 0x8220202;
    local_654 = "Assertion failure";
    local_64c = 0x400;
    local_64a = iVar10;
  }
LAB_1003da2c4:
  *(undefined8 *)((long)&local_38 + lVar2) = 0x1003da2d7;
  __os_log_error_impl(0x100000000,uVar12,0x10,"%{public}s: err == (%d)",puVar13,0x12);
LAB_1003da2d7:
  if (*(long *)PTR____stack_chk_guard_10082cb58 == local_38) {
    return iVar10;
  }
                    /* WARNING: Subroutine does not return */
  *(code **)((long)&local_38 + lVar2) = FUN_1003da7ba;
  ___stack_chk_fail();
}

