// name: FUN_100426ed6
// address: 100426ed6

void FUN_100426ed6(byte *param_1,byte *param_2,ulong param_3,long param_4,ulong param_5,
                  uint *param_6)

{
  byte bVar1;
  ushort uVar2;
  char cVar3;
  uint uVar4;
  long lVar5;
  ulong uVar6;
  undefined8 uVar7;
  ushort uVar8;
  uint uVar9;
  ulong uVar10;
  int iVar11;
  uint uVar12;
  ulong uVar13;
  undefined1 *puVar14;
  ushort *puVar15;
  byte *pbVar16;
  bool bVar17;
  undefined1 auVar18 [16];
  uint local_180 [3];
  undefined4 local_174;
  uint *local_170;
  byte *local_168;
  uint local_160;
  uint local_15c;
  undefined1 local_158 [256];
  undefined4 local_58;
  char *local_54;
  undefined2 local_4c;
  char *local_4a;
  long local_38;
  
  local_38 = *(long *)PTR____stack_chk_guard_10082cb58;
  *param_6 = 0;
  uVar9 = (uint)param_3;
  uVar6 = (ulong)(uVar9 == 0 || param_2 == (byte *)0x0);
  if (uVar9 == 0 || param_2 == (byte *)0x0) goto LAB_100426f11;
  param_3 = param_3 & 0xffffffff;
  bVar1 = *param_2;
  uVar4 = (uint)param_5;
  if (bVar1 == 0) {
    local_170 = param_6;
    if ((int)uVar9 < 0x100) {
      auVar18._8_8_ = 0;
      auVar18._0_8_ = local_158;
LAB_100426fb9:
      uVar10 = auVar18._8_8_;
      puVar14 = auVar18._0_8_;
      uVar4 = uVar9 - 1;
      uVar13 = param_3;
      if (uVar4 < uVar9) {
        uVar13 = (ulong)uVar4;
      }
      if ((int)uVar13 == 0) {
        uVar13 = 0;
      }
      else {
        if (param_3 < uVar4) {
          uVar4 = uVar9;
        }
        uVar6 = 0;
        do {
          bVar1 = param_2[uVar6 + 1];
          uVar10 = (ulong)bVar1;
          if (bVar1 == 0) {
            uVar13 = uVar6 & 0xffffffff;
            break;
          }
          puVar14[uVar6] = bVar1;
          uVar6 = uVar6 + 1;
        } while (uVar4 != (uint)uVar6);
      }
      uVar4 = (uint)uVar13;
      if ((param_1 != (byte *)0x0) && ((*param_1 & 1) == 0)) {
        FUN_1001e7d94(puVar14,uVar13,uVar10,uVar6,param_5);
        param_5 = param_5 & 0xffffffff;
      }
    }
    else {
      local_168 = param_1;
      local_15c = uVar4;
      auVar18 = FUN_1001c63e1(param_3);
      puVar14 = auVar18._0_8_;
      if (puVar14 == (undefined1 *)0x0) {
        uVar7 = FUN_1001cc310();
        cVar3 = _os_log_type_enabled(uVar7,0x10);
        if (cVar3 != '\0') {
          local_58 = 0x8220202;
          local_54 = "Assertion failure";
          local_4c = 0x822;
          local_4a = "textPtr != nullptr";
          __os_log_error_impl(0x100000000,uVar7,0x10,"%{public}s: (%{public}s)",&local_58,0x16);
        }
        FUN_1001782e9(0,0);
        goto LAB_100426f11;
      }
      local_160 = 0;
      if ((byte)(*param_2 - 1) < 3) {
        lVar5 = FUN_1001c63e1(uVar9 * 2);
        if (lVar5 == 0) {
          uVar7 = FUN_1001cc310();
          cVar3 = _os_log_type_enabled(uVar7,0x10);
          if (cVar3 != '\0') {
            local_58 = 0x8220202;
            local_54 = "Assertion failure";
            local_4c = 0x822;
            local_4a = "uText != nullptr";
            __os_log_error_impl(0x100000000,uVar7,0x10,"%{public}s: (%{public}s)",&local_58,0x16);
          }
          uVar13 = 0;
          FUN_1001782e9(0,0);
          param_5 = (ulong)local_15c;
          param_1 = local_168;
          uVar4 = local_160;
        }
        else {
          FUN_100426ed6(local_168,param_2,param_3,lVar5,param_3);
          FUN_1001e7247(lVar5,local_174,puVar14,param_3,local_180);
          uVar13 = (ulong)local_180[0];
          local_160 = local_180[0];
          FUN_1001c64c1(lVar5);
          param_5 = (ulong)local_15c;
          param_1 = local_168;
          uVar4 = local_160;
        }
      }
      else {
        uVar13 = 0;
        param_5 = (ulong)local_15c;
        param_1 = local_168;
        uVar4 = local_160;
        if (*param_2 == 0) {
          uVar6 = 0xffffffff;
          goto LAB_100426fb9;
        }
      }
    }
    local_160 = uVar4;
    FUN_10042753a(param_1,puVar14,uVar13,param_4,param_5,local_170);
    if (puVar14 != local_158) {
      FUN_1001c64c1(puVar14);
    }
    goto LAB_100426f11;
  }
  if (bVar1 < 3) {
    puVar15 = (ushort *)(param_2 + 1);
    iVar11 = uVar9 - 1;
    uVar6 = 0;
    if (bVar1 == 1) {
      if ((int)uVar9 < 3) goto LAB_100426f11;
      uVar2 = *puVar15;
      uVar8 = uVar2 << 8 | uVar2 >> 8;
      if ((uVar8 == 0xfffe) || (bVar17 = true, uVar8 == 0xfeff)) {
        bVar17 = uVar2 != 0xfffe;
        iVar11 = uVar9 - 3;
        puVar15 = (ushort *)(param_2 + 3);
      }
    }
    else {
      bVar17 = false;
    }
    uVar12 = iVar11 >> 1;
    uVar9 = uVar4;
    if (uVar12 < uVar4) {
      uVar9 = uVar12;
    }
    if (uVar9 != 0) {
      if ((ulong)uVar12 < (param_5 & 0xffffffff)) {
        uVar4 = uVar12;
      }
      uVar6 = 0;
      do {
        uVar2 = puVar15[uVar6];
        uVar8 = uVar2 << 8 | uVar2 >> 8;
        if (bVar17) {
          uVar8 = uVar2;
        }
        if (uVar8 == 0) goto LAB_100427150;
        *(ushort *)(param_4 + uVar6 * 2) = uVar8;
        uVar6 = uVar6 + 1;
      } while (uVar4 != (uint)uVar6);
      uVar6 = (ulong)uVar9;
    }
LAB_100427150:
    *param_6 = (uint)uVar6;
    goto LAB_100426f11;
  }
  if (bVar1 != 3) goto LAB_100426f11;
  pbVar16 = param_2 + 1;
  iVar11 = uVar9 - 1;
  if ((int)uVar9 < 4) {
LAB_10042702d:
    if (iVar11 == 0) goto LAB_100426f11;
  }
  else if (((*pbVar16 == 0xef) && (param_2[2] == 0xbb)) && (param_2[3] == 0xbf)) {
    pbVar16 = param_2 + 4;
    iVar11 = uVar9 - 4;
    goto LAB_10042702d;
  }
  FUN_1001e7237(pbVar16,(long)iVar11,param_4,param_5 & 0xffffffff,&local_160);
  *param_6 = local_160;
LAB_100426f11:
  if (*(long *)PTR____stack_chk_guard_10082cb58 != local_38) {
                    /* WARNING: Subroutine does not return */
    ___stack_chk_fail();
  }
  return;
}

