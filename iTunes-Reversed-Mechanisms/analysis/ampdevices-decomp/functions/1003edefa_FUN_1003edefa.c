// name: FUN_1003edefa
// address: 1003edefa

int FUN_1003edefa(int *param_1,long param_2,undefined8 param_3,undefined8 param_4)

{
  short sVar1;
  uint uVar2;
  char cVar3;
  undefined4 uVar4;
  undefined8 uVar5;
  long lVar6;
  ulong uVar7;
  long lVar8;
  long lVar9;
  long lVar10;
  undefined1 uVar11;
  int iVar12;
  ulong uVar13;
  size_t sVar14;
  ulong uVar15;
  int iVar16;
  long *plVar17;
  int iVar18;
  long *plVar19;
  int *piVar20;
  bool bVar21;
  undefined1 auVar22 [16];
  long local_a8;
  undefined8 local_a0;
  uint local_98;
  undefined4 local_94;
  int *local_90;
  undefined4 *local_88;
  char local_7d;
  int local_7c;
  undefined8 local_78;
  undefined4 uStack_70;
  undefined2 uStack_6c;
  undefined2 uStack_6a;
  undefined2 uStack_68;
  undefined4 uStack_66;
  undefined2 uStack_62;
  undefined4 local_58;
  char *local_54;
  undefined2 local_4c;
  char *local_4a;
  long local_38;
  
  local_38 = *(long *)PTR____stack_chk_guard_10082cb58;
  local_a0 = param_3;
  local_90 = param_1;
  if (param_1 == (int *)0x0) {
LAB_1003edf75:
    uVar5 = FUN_1001cc310();
    cVar3 = _os_log_type_enabled(uVar5,0x10);
    if (cVar3 != '\0') {
      local_78._0_4_ = 0x8220202;
      local_78._4_4_ = 0x7a0a90;
      uStack_70 = 1;
      uStack_6c = 0x822;
      uStack_6a = 0xa159;
      uStack_68 = 0x7b;
      uStack_66 = 1;
      __os_log_error_impl(0x100000000,uVar5,0x10,"%{public}s: (%{public}s)",&local_78,0x16);
    }
    bVar21 = local_90 != (int *)0x0;
    FUN_1001782e9(0,0);
    uVar13 = 0;
    if (bVar21) goto LAB_1003edfb6;
  }
  else {
    if (*param_1 != 0x706c7374) {
      uVar5 = FUN_1001cc310();
      cVar3 = _os_log_type_enabled(uVar5,0x10);
      if (cVar3 != '\0') {
        local_78._0_4_ = 0x8220202;
        local_78._4_4_ = 0x7ab58c;
        uStack_70 = 1;
        uStack_6c = 0x822;
        uStack_6a = 0x2d50;
        uStack_68 = 0x7b;
        uStack_66 = 1;
        __os_log_error_impl(0x100000000,uVar5,0x10,"%{public}s: (%{public}s)",&local_78,0x16);
      }
      cVar3 = FUN_1001782e9(0,1);
      if (cVar3 == '\0') goto LAB_1003edf75;
    }
LAB_1003edfb6:
    uVar13 = (ulong)*(uint *)(*(long *)(local_90 + 0x1e) + 0x18);
  }
  local_98 = 0;
  local_94 = 0;
  local_7c = (int)uVar13;
  local_a8 = uVar13 * 4 + 0x2c;
  local_88 = (undefined4 *)FUN_1001c6429();
  plVar17 = (long *)CONCAT44(local_78._4_4_,(undefined4)local_78);
  if (local_88 == (undefined4 *)0x0) {
    uVar5 = FUN_1001cc310();
    cVar3 = _os_log_type_enabled(uVar5,0x10);
    if (cVar3 != '\0') {
      local_78._0_4_ = 0x8220202;
      local_78._4_4_ = 0x7a0a90;
      uStack_70 = 1;
      uStack_6c = 0x822;
      uStack_6a = 0xb869;
      uStack_68 = 0x7c;
      uStack_66 = 1;
      __os_log_error_impl(0x100000000,uVar5,0x10,"%{public}s: (%{public}s)",&local_78,0x16);
    }
    FUN_1001782e9(0,0);
    iVar18 = -0x6c;
    goto LAB_1003ee586;
  }
  if (((short)local_90[4] == 0xb) && (*(char *)(param_2 + 0x313) != '\0')) {
    local_78 = (long *)0x0;
    uStack_70 = 0;
    uStack_6c = 0;
    uStack_6a = 0;
    uStack_68 = 0;
    uStack_66 = 0;
    uStack_62 = 0;
    plVar17 = (long *)0x0;
    if (local_7c != 0) {
      iVar18 = 0;
      piVar20 = local_90;
      do {
        lVar6 = FUN_10037ddf6(*(undefined8 *)(piVar20 + 0xf0),5,0,iVar18);
        if (lVar6 == 0) {
          uVar5 = FUN_1001cc310();
          cVar3 = _os_log_type_enabled(uVar5,0x10);
          if (cVar3 != '\0') {
            local_58 = 0x8220202;
            local_54 = "Assertion failure";
            local_4c = 0x822;
            local_4a = "playlistItem != nullptr";
            __os_log_error_impl(0x100000000,uVar5,0x10,"%{public}s: (%{public}s)",&local_58,0x16);
          }
          FUN_1001782e9(0,0);
        }
        else if ((*(long *)(lVar6 + 8) != 0) && ((*(byte *)(*(long *)(lVar6 + 8) + 0xc5) & 4) != 0))
        {
          plVar17 = (long *)CONCAT26(uStack_6a,CONCAT24(uStack_6c,uStack_70));
          plVar19 = (long *)CONCAT26(uStack_62,CONCAT42(uStack_66,uStack_68));
          if (plVar17 < plVar19) {
            *plVar17 = lVar6;
            plVar17 = plVar17 + 1;
            plVar19 = local_78;
          }
          else {
            lVar9 = (long)plVar17 - (long)local_78 >> 3;
            uVar13 = lVar9 + 1;
            if (0x1fffffffffffffff < uVar13) {
                    /* WARNING: Subroutine does not return */
              FUN_100382d90(&local_78);
            }
            uVar7 = (long)plVar19 - (long)local_78;
            uVar15 = (long)uVar7 >> 2;
            if (uVar15 <= uVar13) {
              uVar15 = uVar13;
            }
            if (0x7ffffffffffffff7 < uVar7) {
              uVar15 = 0x1fffffffffffffff;
            }
            if (uVar15 == 0) {
              auVar22 = ZEXT816(0);
            }
            else {
              auVar22 = FUN_100249b6c(&uStack_68);
            }
            lVar8 = auVar22._0_8_;
            plVar19 = (long *)(lVar8 + lVar9 * 8);
            lVar10 = lVar8 + auVar22._8_8_ * 8;
            *plVar19 = lVar6;
            plVar17 = (long *)(lVar8 + lVar9 * 8 + 8);
            sVar14 = CONCAT26(uStack_6a,CONCAT24(uStack_6c,uStack_70)) - (long)local_78;
            plVar19 = (long *)((long)plVar19 - sVar14);
            _memcpy(plVar19,local_78,sVar14);
            uStack_70 = SUB84(plVar17,0);
            uStack_6c = (undefined2)((ulong)plVar17 >> 0x20);
            uStack_6a = (undefined2)((ulong)plVar17 >> 0x30);
            uStack_68 = (undefined2)lVar10;
            uStack_66 = (undefined4)((ulong)lVar10 >> 0x10);
            uStack_62 = (undefined2)((ulong)lVar10 >> 0x30);
            piVar20 = local_90;
            if (local_78 != (long *)0x0) {
              operator_delete(local_78);
              local_78 = plVar19;
              piVar20 = local_90;
              plVar19 = local_78;
            }
          }
          uStack_70 = SUB84(plVar17,0);
          uStack_6c = (undefined2)((ulong)plVar17 >> 0x20);
          uStack_6a = (undefined2)((ulong)plVar17 >> 0x30);
          local_78 = plVar19;
        }
        iVar18 = iVar18 + 1;
      } while (local_7c != iVar18);
      if (local_78 != (long *)CONCAT26(uStack_6a,CONCAT24(uStack_6c,uStack_70))) {
        local_7d = '\0';
        uVar4 = FUN_10049273a(piVar20);
        plVar17 = (long *)CONCAT26(uStack_6a,CONCAT24(uStack_6c,uStack_70));
        if (local_78 != plVar17) {
          local_7c = local_7c + -1;
          plVar19 = local_78;
          do {
            lVar6 = *plVar19;
            iVar16 = 0;
            iVar18 = local_7c;
            do {
              iVar12 = iVar18;
              if (local_7d == '\0') {
                iVar12 = iVar16;
              }
              lVar9 = FUN_10037ddf6(*(undefined8 *)(local_90 + 0xf0),uVar4,0,iVar12);
              if (lVar9 == 0) {
                uVar5 = FUN_1001cc310();
                cVar3 = _os_log_type_enabled(uVar5,0x10);
                if (cVar3 != '\0') {
                  local_58 = 0x8220202;
                  local_54 = "Assertion failure";
                  local_4c = 0x822;
                  local_4a = "playlistItem != nullptr";
                  __os_log_error_impl(0x100000000,uVar5,0x10,"%{public}s: (%{public}s)",&local_58,
                                      0x16);
                }
                FUN_1001782e9(0,0);
              }
              else if ((*(long *)(lVar9 + 8) == 0) ||
                      ((*(byte *)(*(long *)(lVar9 + 8) + 0xc5) & 4) == 0)) {
                lVar10 = FUN_1002ba359(lVar9);
                if (lVar10 == *(long *)(*(long *)(*(long *)(lVar6 + 8) + 0x70) + 0x38)) {
                  FUN_1003f99ce(lVar9,local_88,&local_98,&local_94);
                }
              }
              iVar16 = iVar16 + 1;
              bVar21 = iVar18 != 0;
              iVar18 = iVar18 + -1;
            } while (bVar21);
            plVar19 = plVar19 + 1;
          } while (plVar19 != plVar17);
        }
      }
      plVar17 = local_78;
      if (local_78 != (long *)0x0) {
        uStack_70 = SUB84(local_78,0);
        uStack_6c = (undefined2)((ulong)local_78 >> 0x20);
        uStack_6a = (undefined2)((ulong)local_78 >> 0x30);
        operator_delete(local_78);
        plVar17 = local_78;
      }
    }
  }
  else if (local_7c != 0) {
    iVar18 = 0;
    do {
      lVar6 = FUN_10037ddf6(*(undefined8 *)(local_90 + 0xf0),0x77,0,iVar18);
      if (lVar6 == 0) {
        uVar5 = FUN_1001cc310();
        cVar3 = _os_log_type_enabled(uVar5,0x10);
        if (cVar3 != '\0') {
          local_78._0_4_ = 0x8220202;
          local_78._4_4_ = 0x7a0a90;
          uStack_70 = 1;
          uStack_6c = 0x822;
          uStack_6a = 0xfbaa;
          uStack_68 = 0x7b;
          uStack_66 = 1;
          __os_log_error_impl(0x100000000,uVar5,0x10,"%{public}s: (%{public}s)",&local_78,0x16);
        }
        FUN_1001782e9(0,0);
      }
      else {
        FUN_1003f99ce(lVar6,local_88,&local_98,&local_94);
      }
      plVar17 = (long *)CONCAT44(local_78._4_4_,(undefined4)local_78);
      iVar18 = iVar18 + 1;
    } while (local_7c != iVar18);
  }
  uVar2 = local_98;
  uVar13 = (ulong)local_98;
  local_78 = plVar17;
  if (uVar13 == 0) {
    uVar5 = FUN_1001cc310();
    cVar3 = _os_log_type_enabled(uVar5,0x10);
    if (cVar3 != '\0') {
      local_78._0_4_ = 0x8220202;
      local_78._4_4_ = 0x7a0a90;
      uStack_70 = 1;
      uStack_6c = 0x822;
      uStack_6a = 0xb87f;
      uStack_68 = 0x7c;
      uStack_66 = 1;
      __os_log_error_impl(0x100000000,uVar5,0x10,"%{public}s: (%{public}s)",&local_78,0x16);
    }
    FUN_1001782e9(0,0);
  }
  local_a8 = uVar13 * 4 + 0x2c;
  *local_88 = 0x7368706c;
  sVar1 = (short)local_90[4];
  if (sVar1 == 4) {
    *(undefined8 *)(local_88 + 4) = 0;
    local_88[1] = (int)local_a8;
    local_88[2] = uVar2;
    local_88[3] = local_94;
    uVar11 = 1;
LAB_1003ee497:
    *(undefined1 *)(local_88 + 6) = uVar11;
  }
  else {
    *(undefined8 *)(local_88 + 4) = *(undefined8 *)(local_90 + 0x18);
    local_88[1] = (int)local_a8;
    local_88[2] = uVar2;
    local_88[3] = local_94;
    if (sVar1 == 0xb) {
      uVar11 = 3;
      goto LAB_1003ee497;
    }
    if (sVar1 == 0x20) {
      uVar11 = 6;
      goto LAB_1003ee497;
    }
    if (sVar1 == 0x1e) {
      uVar11 = 4;
      goto LAB_1003ee497;
    }
    cVar3 = FUN_1002bded4();
    uVar11 = 2;
    if (cVar3 != '\0') goto LAB_1003ee497;
  }
  iVar18 = FUN_100160255(local_a0,param_4);
  if (iVar18 == -0x80) goto LAB_1003ee586;
  if (iVar18 == 0) {
    iVar18 = FUN_100160894(local_a0,&local_a8,local_88);
    if ((iVar18 == -0x80) || (iVar18 == 0)) goto LAB_1003ee586;
    uVar5 = FUN_1001cc310();
    cVar3 = _os_log_type_enabled(uVar5,0x10);
    if (cVar3 == '\0') goto LAB_1003ee586;
    uStack_6a = (undefined2)iVar18;
    uStack_68 = (undefined2)((uint)iVar18 >> 0x10);
  }
  else {
    uVar5 = FUN_1001cc310();
    cVar3 = _os_log_type_enabled(uVar5,0x10);
    if (cVar3 == '\0') goto LAB_1003ee586;
    uStack_6a = (undefined2)iVar18;
    uStack_68 = (undefined2)((uint)iVar18 >> 0x10);
  }
  uStack_6c = 0x400;
  uStack_70 = 1;
  local_78._4_4_ = 0x7a0a90;
  local_78._0_4_ = 0x8220202;
  __os_log_error_impl(0x100000000,uVar5,0x10,"%{public}s: err == (%d)",&local_78,0x12);
LAB_1003ee586:
  FUN_1001c64c1(local_88);
  if (*(long *)PTR____stack_chk_guard_10082cb58 != local_38) {
                    /* WARNING: Subroutine does not return */
    ___stack_chk_fail();
  }
  return iVar18;
}

