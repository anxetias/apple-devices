// name: FUN_100596940
// address: 100596940

int FUN_100596940(int *param_1,undefined8 *param_2)

{
  undefined4 *puVar1;
  long lVar2;
  long lVar3;
  char cVar4;
  uint uVar5;
  uint uVar6;
  int iVar7;
  undefined8 *puVar8;
  undefined8 uVar9;
  ulong uVar10;
  undefined4 *puVar11;
  ulong uVar12;
  long lVar13;
  undefined4 local_88;
  char *local_84;
  undefined2 local_7c;
  int local_7a;
  undefined4 local_68;
  char *pcStack_64;
  undefined2 uStack_5c;
  undefined2 uStack_5a;
  undefined4 uStack_58;
  undefined2 uStack_54;
  undefined2 uStack_52;
  undefined4 uStack_50;
  undefined4 local_4c;
  undefined4 uStack_48;
  undefined4 uStack_44;
  undefined4 uStack_40;
  long local_38;
  
  local_38 = *(long *)PTR____stack_chk_guard_10082cb58;
  if (((param_1 == (int *)0x0) || (*param_1 != 0x4f4c5354)) || (iVar7 = param_1[1], iVar7 == 0)) {
    uVar9 = FUN_1001cc310();
    cVar4 = _os_log_type_enabled(uVar9,0x10);
    if (cVar4 != '\0') {
      local_68 = 0x8220202;
      pcStack_64 = "Assertion failure";
      uStack_5c = 0x822;
      uStack_5a = 0xaa7a;
      uStack_58 = 0x1007e;
      uStack_54 = 0;
      __os_log_error_impl(0x100000000,uVar9,0x10,"%{public}s: err == (%d)",&local_68,0x16);
    }
    FUN_1001782e9(0,0);
  }
  else {
    if (param_2 != (undefined8 *)0x0) {
      uVar5 = (int)((ulong)(*(long *)(param_1 + 4) - *(long *)(param_1 + 2)) >> 3) * -0x49249249;
      *param_2 = 0;
      if (uVar5 != 0) {
        puVar11 = *(undefined4 **)(param_1 + 2);
        lVar13 = *(long *)(param_1 + 4) - (long)puVar11;
        uVar12 = 0;
        do {
          if ((lVar13 >> 3) * 0x6db6db6db6db6db7 - uVar12 == 0) {
            uVar9 = FUN_1001cc310();
            cVar4 = _os_log_type_enabled(uVar9,0x10);
            iVar7 = -0x32;
            if (cVar4 != '\0') {
              local_88 = 0x8220202;
              local_84 = "Assertion failure";
              local_7c = 0x400;
              local_7a = -0x32;
              __os_log_error_impl(0x100000000,uVar9,0x10,"%{public}s: err == (%d)",&local_88,0x12);
            }
            goto LAB_100596b38;
          }
          local_68 = *puVar11;
          pcStack_64 = *(char **)(puVar11 + 1);
          uStack_58 = puVar11[4];
          uStack_50 = puVar11[6];
          local_4c = puVar11[7];
          uStack_48 = puVar11[8];
          uStack_44 = puVar11[9];
          uStack_40 = puVar11[10];
          uStack_54 = (undefined2)puVar11[5];
          uStack_52 = (undefined2)((uint)puVar11[5] >> 0x10);
          uStack_5c = (undefined2)puVar11[3];
          uStack_5a = (undefined2)((uint)puVar11[3] >> 0x10);
          uVar6 = FUN_100595fc8(&local_68);
          if ((9 < uVar6) || ((0x328U >> (uVar6 & 0x1f) & 1) == 0)) {
            puVar8 = (undefined8 *)FUN_1001c629e(0x20,&DAT_100711c6e);
            if (puVar8 != (undefined8 *)0x0) {
              puVar8[1] = 0;
              puVar8[2] = 0;
              puVar8[3] = 0;
              *puVar8 = 0x14f4c5354;
              *param_2 = puVar8;
              lVar13 = 0x30;
              uVar12 = 0;
              goto LAB_100596b95;
            }
            *param_2 = 0;
            uVar9 = FUN_1001cc310();
            cVar4 = _os_log_type_enabled(uVar9,0x10);
            iVar7 = -0x6c;
            if (cVar4 == '\0') goto LAB_100596b38;
            local_7a = -0x6c;
            goto LAB_100596d37;
          }
          uVar12 = uVar12 + 1;
          puVar11 = puVar11 + 0xe;
        } while (uVar5 != uVar12);
      }
      param_1[1] = iVar7 + 1;
      *param_2 = param_1;
LAB_100596a45:
      iVar7 = 0;
      goto LAB_100596a72;
    }
    uVar9 = FUN_1001cc310();
    cVar4 = _os_log_type_enabled(uVar9,0x10);
    if (cVar4 != '\0') {
      local_68 = 0x8220202;
      pcStack_64 = "Assertion failure";
      uStack_5c = 0x822;
      uStack_5a = 0xaa9e;
      uStack_58 = 0x1007e;
      uStack_54 = 0;
      __os_log_error_impl(0x100000000,uVar9,0x10,"%{public}s: err == (%d)",&local_68,0x16);
    }
    FUN_1001782e9(0,0);
  }
  iVar7 = -0x32;
  goto LAB_100596a72;
LAB_100596b95:
  if (((*param_1 != 0x4f4c5354) || (param_1[1] == 0)) ||
     (lVar3 = *(long *)(param_1 + 2),
     uVar10 = (*(long *)(param_1 + 4) - lVar3 >> 3) * 0x6db6db6db6db6db7,
     uVar10 < uVar12 || uVar10 - uVar12 == 0)) {
    uVar9 = FUN_1001cc310();
    cVar4 = _os_log_type_enabled(uVar9,0x10);
    iVar7 = -0x32;
    if (cVar4 != '\0') {
      local_7a = -0x32;
LAB_100596d37:
      local_7c = 0x400;
      local_84 = "Assertion failure";
      local_88 = 0x8220202;
      __os_log_error_impl(0x100000000,uVar9,0x10,"%{public}s: err == (%d)",&local_88,0x12);
    }
    goto LAB_100596b38;
  }
  puVar11 = (undefined4 *)(lVar3 + -0x30 + lVar13);
  local_68 = *puVar11;
  pcStack_64 = *(char **)(puVar11 + 1);
  puVar1 = (undefined4 *)(lVar3 + -0x20 + lVar13);
  uStack_58 = *puVar1;
  uStack_50 = puVar1[2];
  local_4c = puVar1[3];
  lVar2 = lVar3 + -0x14 + lVar13;
  uStack_48 = *(undefined4 *)(lVar2 + 4);
  uStack_44 = *(undefined4 *)(lVar2 + 8);
  uStack_40 = *(undefined4 *)(lVar2 + 0xc);
  uStack_54 = (undefined2)puVar1[1];
  uStack_52 = (undefined2)((uint)puVar1[1] >> 0x10);
  uStack_5c = (undefined2)puVar11[3];
  uStack_5a = (undefined2)((uint)puVar11[3] >> 0x10);
  iVar7 = FUN_100594f1e(*param_2,&local_68,1,*(undefined8 *)(lVar3 + lVar13));
  if (iVar7 == 0) {
    uVar12 = uVar12 + 1;
    lVar13 = lVar13 + 0x38;
    iVar7 = 0;
    if (uVar5 == uVar12) goto LAB_100596a72;
    goto LAB_100596b95;
  }
  if (iVar7 == -0x80) goto LAB_100596b38;
  uVar9 = FUN_1001cc310();
  cVar4 = _os_log_type_enabled(uVar9,0x10);
  if (cVar4 != '\0') {
    local_88 = 0x8220202;
    local_84 = "Assertion failure";
    local_7c = 0x400;
    local_7a = iVar7;
    __os_log_error_impl(0x100000000,uVar9,0x10,"%{public}s: err == (%d)",&local_88,0x12);
  }
  if (iVar7 == 0) goto LAB_100596a45;
LAB_100596b38:
  FUN_100595344(*param_2);
  *param_2 = 0;
LAB_100596a72:
  if (*(long *)PTR____stack_chk_guard_10082cb58 != local_38) {
                    /* WARNING: Subroutine does not return */
    ___stack_chk_fail();
  }
  return iVar7;
}

