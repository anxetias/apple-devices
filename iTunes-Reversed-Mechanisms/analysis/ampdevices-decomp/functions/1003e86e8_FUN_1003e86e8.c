// name: FUN_1003e86e8
// address: 1003e86e8

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

int FUN_1003e86e8(long param_1,int param_2)

{
  undefined1 uVar1;
  byte bVar2;
  char cVar3;
  int iVar4;
  long lVar5;
  long lVar6;
  undefined8 uVar7;
  undefined4 *puVar8;
  uint uVar9;
  uint uVar10;
  undefined1 auVar11 [16];
  undefined1 auVar12 [16];
  undefined1 local_138 [6] [16];
  undefined8 local_d8;
  int local_d0 [2];
  undefined4 local_c8;
  undefined4 local_c4;
  uint local_c0;
  byte local_ba;
  undefined1 local_b9;
  undefined4 local_b8;
  undefined4 uStack_b4;
  undefined4 uStack_b0;
  undefined2 local_ac;
  int local_aa;
  undefined4 local_98;
  undefined4 uStack_94;
  uint local_90;
  undefined2 local_8c;
  int local_8a;
  long local_38;
  
  local_38 = *(long *)PTR____stack_chk_guard_10082cb58;
  lVar6 = *(long *)(param_1 + 0x100008);
  FUN_1001c62d9(local_138,0x60);
  local_138[0]._0_8_ = 0x606473686d;
  local_138[0]._12_4_ = param_2;
  iVar4 = FUN_100160255(*(undefined8 *)(param_1 + 0x100000),&local_d8);
  if (iVar4 == -0x80) goto LAB_1003e8cd2;
  if (iVar4 == 0) {
    local_98 = 0x60;
    uStack_94 = 0;
    iVar4 = FUN_100160894(*(undefined8 *)(param_1 + 0x100000),&local_98,local_138);
    if (iVar4 == -0x80) goto LAB_1003e8cd2;
    if (iVar4 == 0) {
      FUN_1001c62d9(&local_98,0x5c);
      local_98 = 0x706c686d;
      uStack_94 = 0x5c;
      if (lVar6 == 0) {
        local_c0 = 0;
      }
      else {
        local_c0 = *(uint *)(lVar6 + 0x98);
      }
      local_c8 = 0;
      local_ba = param_2 != 5;
      local_c4 = 0;
      local_b9 = param_2 != 2;
      if ((*(byte *)(param_1 + 0x100019) & 1) == 0) {
        if (local_c0 == 0) {
LAB_1003e8937:
          uVar9 = 0;
        }
        else {
          uVar9 = 0;
          uVar10 = 0;
          do {
            lVar5 = FUN_1002f8ed5(lVar6,uVar10,1);
            if (lVar5 != 0) {
              bVar2 = FUN_1003f68bf(param_1,param_2,lVar5);
              uVar9 = uVar9 + bVar2;
            }
            uVar10 = uVar10 + 1;
          } while (local_c0 != uVar10);
        }
      }
      else {
        lVar5 = FUN_100315ede(lVar6);
        if (lVar5 == 0) goto LAB_1003e8937;
        uVar9 = 0;
        do {
          bVar2 = FUN_1003f68bf(param_1,param_2,lVar5);
          uVar9 = uVar9 + bVar2;
          lVar5 = FUN_100316031(lVar5);
        } while (lVar5 != 0);
      }
      local_90 = uVar9;
      if (*(char *)(param_1 + 0x100127) != '\0') {
        auVar11._4_4_ = uStack_94;
        auVar11._0_4_ = local_98;
        auVar11._8_8_ = 0;
        auVar11 = pshufb(auVar11,_DAT_10070e4b0);
        local_98 = auVar11._0_4_;
        uStack_94 = auVar11._4_4_;
        local_90 = uVar9 >> 0x18 | (uVar9 & 0xff0000) >> 8 | (uVar9 & 0xff00) << 8 | uVar9 << 0x18;
      }
      local_b8 = 0x5c;
      uStack_b4 = 0;
      iVar4 = FUN_100160894(*(undefined8 *)(param_1 + 0x100000),&local_b8,&local_98);
      if (iVar4 == -0x80) goto LAB_1003e8cd2;
      if (iVar4 == 0) {
        if ((*(byte *)(param_1 + 0x100019) & 1) == 0) {
          if (local_c0 != 0) {
            uVar9 = 0;
            local_c8 = CONCAT31((int3)((uint)local_c8 >> 8),local_ba);
            local_c4 = CONCAT31((int3)((uint)local_c4 >> 8),local_b9);
            do {
              lVar5 = FUN_1002f8ed5(lVar6,uVar9,1);
              if (((lVar5 != 0) && (cVar3 = FUN_1003f68bf(param_1,param_2,lVar5), cVar3 != '\0')) &&
                 (iVar4 = FUN_1003f6a41(param_1,lVar5,local_c8,local_c4), iVar4 != 0)) {
                if (iVar4 == -0x80) goto LAB_1003e8cd2;
                uVar7 = FUN_1001cc310();
                cVar3 = _os_log_type_enabled(uVar7,0x10);
                if (cVar3 == '\0') goto LAB_1003e8cd2;
                puVar8 = &local_b8;
                local_b8 = 0x8220202;
                uStack_b4 = 0x7a0a90;
                uStack_b0 = 1;
                local_ac = 0x400;
                local_aa = iVar4;
                goto LAB_1003e8a91;
              }
              uVar9 = uVar9 + 1;
            } while (local_c0 != uVar9);
          }
        }
        else {
          lVar6 = FUN_100315ede(lVar6);
          uVar1 = local_b9;
          if (lVar6 != 0) {
            local_c0 = (uint)local_ba;
            do {
              cVar3 = FUN_1003f68bf(param_1,param_2,lVar6);
              if ((cVar3 != '\0') &&
                 (iVar4 = FUN_1003f6a41(param_1,lVar6,local_c0,uVar1), iVar4 != 0)) {
                if (iVar4 == -0x80) goto LAB_1003e8cd2;
                uVar7 = FUN_1001cc310();
                cVar3 = _os_log_type_enabled(uVar7,0x10);
                if (cVar3 == '\0') goto LAB_1003e8cd2;
                puVar8 = &local_b8;
                local_b8 = 0x8220202;
                uStack_b4 = 0x7a0a90;
                uStack_b0 = 1;
                local_ac = 0x400;
                local_aa = iVar4;
                goto LAB_1003e8a91;
              }
              lVar6 = FUN_100316031(lVar6);
            } while (lVar6 != 0);
          }
        }
        iVar4 = FUN_100160255(*(undefined8 *)(param_1 + 0x100000),local_d0);
        if (iVar4 == -0x80) goto LAB_1003e8cd2;
        if (iVar4 == 0) {
          local_d0[0] = local_d0[0] - (int)local_d8;
          local_138[0]._8_4_ = local_d0[0];
          if (*(char *)(param_1 + 0x100127) != '\0') {
            auVar12._12_4_ = local_138[0]._12_4_;
            auVar12._8_4_ = local_d0[0];
            auVar12._0_8_ = local_138[0]._0_8_;
            local_138[0] = pshufb(auVar12,_DAT_100718a70);
          }
          local_b8 = 0x60;
          uStack_b4 = 0;
          iVar4 = FUN_100160a0d(*(undefined8 *)(param_1 + 0x100000),local_d8,&local_b8,local_138);
          if ((iVar4 == -0x80) || (iVar4 == 0)) goto LAB_1003e8cd2;
          uVar7 = FUN_1001cc310();
          cVar3 = _os_log_type_enabled(uVar7,0x10);
          if (cVar3 == '\0') goto LAB_1003e8cd2;
          puVar8 = &local_b8;
          local_b8 = 0x8220202;
          uStack_b4 = 0x7a0a90;
          uStack_b0 = 1;
          local_ac = 0x400;
          local_aa = iVar4;
        }
        else {
          uVar7 = FUN_1001cc310();
          cVar3 = _os_log_type_enabled(uVar7,0x10);
          if (cVar3 == '\0') goto LAB_1003e8cd2;
          puVar8 = &local_b8;
          local_b8 = 0x8220202;
          uStack_b4 = 0x7a0a90;
          uStack_b0 = 1;
          local_ac = 0x400;
          local_aa = iVar4;
        }
      }
      else {
        uVar7 = FUN_1001cc310();
        cVar3 = _os_log_type_enabled(uVar7,0x10);
        if (cVar3 == '\0') goto LAB_1003e8cd2;
        puVar8 = &local_b8;
        local_b8 = 0x8220202;
        uStack_b4 = 0x7a0a90;
        uStack_b0 = 1;
        local_ac = 0x400;
        local_aa = iVar4;
      }
    }
    else {
      uVar7 = FUN_1001cc310();
      cVar3 = _os_log_type_enabled(uVar7,0x10);
      if (cVar3 == '\0') goto LAB_1003e8cd2;
      puVar8 = &local_98;
      local_98 = 0x8220202;
      uStack_94 = 0x7a0a90;
      local_90 = 1;
      local_8c = 0x400;
      local_8a = iVar4;
    }
  }
  else {
    uVar7 = FUN_1001cc310();
    cVar3 = _os_log_type_enabled(uVar7,0x10);
    if (cVar3 == '\0') goto LAB_1003e8cd2;
    puVar8 = &local_98;
    local_98 = 0x8220202;
    uStack_94 = 0x7a0a90;
    local_90 = 1;
    local_8c = 0x400;
    local_8a = iVar4;
  }
LAB_1003e8a91:
  __os_log_error_impl(0x100000000,uVar7,0x10,"%{public}s: err == (%d)",puVar8,0x12);
LAB_1003e8cd2:
  if (*(long *)PTR____stack_chk_guard_10082cb58 != local_38) {
                    /* WARNING: Subroutine does not return */
    ___stack_chk_fail();
  }
  return iVar4;
}

