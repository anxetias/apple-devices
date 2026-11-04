// name: FUN_1002c1a05
// address: 1002c1a05

ulong FUN_1002c1a05(long param_1,undefined8 param_2,long *param_3)

{
  long lVar1;
  undefined4 uVar2;
  code *pcVar3;
  long *plVar4;
  char cVar5;
  undefined8 uVar6;
  long lVar7;
  ulong uVar8;
  long lVar9;
  ulong uVar10;
  long *plVar11;
  size_t sVar12;
  ulong uVar13;
  long *plVar14;
  void *pvVar15;
  long lVar16;
  long *plVar17;
  void *pvVar18;
  long *plVar19;
  undefined1 auVar20 [16];
  ulong local_68;
  undefined8 local_58;
  undefined4 uStack_50;
  undefined2 uStack_4c;
  undefined2 uStack_4a;
  undefined6 uStack_48;
  undefined2 uStack_42;
  long local_38;
  
  local_38 = *(long *)PTR____stack_chk_guard_10082cb58;
  if (param_1 == 0) {
LAB_1002c1b71:
    uVar6 = FUN_1001cc310();
    cVar5 = _os_log_type_enabled(uVar6,0x10);
    if (cVar5 != '\0') {
      local_58._0_4_ = 0x8220202;
      local_58._4_4_ = 0x7a0a90;
      uStack_50 = 1;
      uStack_4c = 0x822;
      uStack_4a = 0xe894;
      uStack_48 = 0x1007a;
      __os_log_error_impl(0x100000000,uVar6,0x10,"%{public}s: (%{public}s)",&local_58,0x16);
    }
    local_68 = 0;
    FUN_1001782e9(0,0);
  }
  else {
    if (*(int *)(param_1 + 0x80) != 0x74646174) {
      uVar6 = FUN_1001cc310();
      cVar5 = _os_log_type_enabled(uVar6,0x10);
      if (cVar5 != '\0') {
        local_58._0_4_ = 0x8220202;
        local_58._4_4_ = 0x7ab58c;
        uStack_50 = 1;
        uStack_4c = 0x822;
        uStack_4a = 0xec03;
        uStack_48 = 0x1007a;
        __os_log_error_impl(0x100000000,uVar6,0x10,"%{public}s: (%{public}s)",&local_58,0x16);
      }
      cVar5 = FUN_1001782e9(0,1);
      if (cVar5 == '\0') goto LAB_1002c1b71;
    }
    local_58._0_4_ = 0;
    local_58._4_4_ = 0;
    uStack_50 = 0;
    uStack_4c = 0;
    uStack_4a = 0;
    uStack_48 = 0;
    uStack_42 = 0;
    lVar7 = FUN_1002f930c(param_1);
    pvVar15 = (void *)CONCAT44(local_58._4_4_,(undefined4)local_58);
    while (local_58 = pvVar15, lVar7 != 0) {
      if (*(int *)(lVar7 + 0xc) != 0) {
        plVar17 = (long *)CONCAT26(uStack_4a,CONCAT24(uStack_4c,uStack_50));
        if (plVar17 < (long *)CONCAT26(uStack_42,uStack_48)) {
          *plVar17 = lVar7;
          plVar17 = plVar17 + 1;
        }
        else {
          lVar16 = (long)plVar17 - (long)pvVar15 >> 3;
          uVar10 = lVar16 + 1;
          if (0x1fffffffffffffff < uVar10) {
            FUN_1002c2cdc(&local_58);
                    /* WARNING: Does not return */
            pcVar3 = (code *)invalidInstructionException();
            (*pcVar3)();
          }
          uVar8 = (long)CONCAT26(uStack_42,uStack_48) - (long)pvVar15;
          uVar13 = (long)uVar8 >> 2;
          if (uVar13 <= uVar10) {
            uVar13 = uVar10;
          }
          if (0x7ffffffffffffff7 < uVar8) {
            uVar13 = 0x1fffffffffffffff;
          }
          if (uVar13 == 0) {
            auVar20 = ZEXT816(0);
          }
          else {
            auVar20 = FUN_100249b6c(&uStack_48);
            pvVar15 = local_58;
          }
          lVar9 = auVar20._0_8_;
          plVar14 = (long *)(lVar9 + lVar16 * 8);
          lVar1 = lVar9 + auVar20._8_8_ * 8;
          *plVar14 = lVar7;
          plVar17 = (long *)(lVar9 + lVar16 * 8 + 8);
          sVar12 = CONCAT26(uStack_4a,CONCAT24(uStack_4c,uStack_50)) - (long)pvVar15;
          pvVar18 = (void *)((long)plVar14 - sVar12);
          local_58 = pvVar15;
          _memcpy(pvVar18,pvVar15,sVar12);
          uStack_50 = SUB84(plVar17,0);
          uStack_4c = (undefined2)((ulong)plVar17 >> 0x20);
          uStack_4a = (undefined2)((ulong)plVar17 >> 0x30);
          uStack_48 = (undefined6)lVar1;
          uStack_42 = (undefined2)((ulong)lVar1 >> 0x30);
          pvVar15 = pvVar18;
          if (local_58 != (void *)0x0) {
            operator_delete(local_58);
            local_58 = pvVar18;
            pvVar15 = local_58;
          }
        }
        uStack_50 = SUB84(plVar17,0);
        uStack_4c = (undefined2)((ulong)plVar17 >> 0x20);
        uStack_4a = (undefined2)((ulong)plVar17 >> 0x30);
      }
      local_58 = pvVar15;
      lVar7 = FUN_1002f9451(lVar7);
      pvVar15 = local_58;
    }
    pvVar18 = (void *)CONCAT26(uStack_4a,CONCAT24(uStack_4c,uStack_50));
    local_68 = (ulong)((long)pvVar18 - (long)pvVar15) >> 3;
    if (1 < (uint)local_68) {
      if (pvVar15 != pvVar18) {
        FUN_1001d26f2(pvVar15,local_68 & 0xffffffff,FUN_1002c1df6,0);
      }
      uVar10 = local_68 & 0xffffffff;
      plVar17 = param_3 + 1;
      uVar13 = 1;
      pvVar15 = local_58;
      do {
        lVar7 = *(long *)((long)pvVar15 + uVar13 * 8 + -8);
        lVar16 = *(long *)((long)pvVar15 + uVar13 * 8);
        local_58 = pvVar15;
        cVar5 = FUN_10030272d(*(undefined8 *)(lVar7 + 0x58),*(undefined8 *)(lVar16 + 0x58),param_2,0
                              ,0,0,0);
        pvVar15 = local_58;
        if (cVar5 != '\0') {
          if (param_3 != (long *)0x0) {
            uVar2 = *(undefined4 *)(lVar7 + 8);
            plVar14 = plVar17;
            plVar19 = plVar17;
            if ((long *)*plVar17 != (long *)0x0) {
              plVar4 = (long *)*plVar17;
              do {
                while (plVar11 = plVar4, plVar14 = plVar11,
                      *(uint *)((long)plVar11 + 0x1c) <= *(uint *)(lVar16 + 8)) {
                  if (*(uint *)(lVar16 + 8) <= *(uint *)((long)plVar11 + 0x1c)) goto LAB_1002c1cc0;
                  plVar4 = (long *)plVar11[1];
                  if ((long *)plVar11[1] == (long *)0x0) {
                    plVar19 = plVar11 + 1;
                    goto LAB_1002c1c67;
                  }
                }
                plVar4 = (long *)*plVar11;
                plVar19 = plVar11;
              } while ((long *)*plVar11 != (long *)0x0);
            }
LAB_1002c1c67:
            plVar11 = operator_new(0x28);
            *(undefined4 *)((long)plVar11 + 0x1c) = *(undefined4 *)(lVar16 + 8);
            *(undefined4 *)(plVar11 + 4) = 0;
            *plVar11 = 0;
            plVar11[1] = 0;
            plVar11[2] = (long)plVar14;
            *plVar19 = (long)plVar11;
            plVar14 = plVar11;
            if (*(long *)*param_3 != 0) {
              *param_3 = *(long *)*param_3;
              plVar14 = (long *)*plVar19;
            }
            FUN_1001ad344(param_3[1],plVar14);
            param_3[2] = param_3[2] + 1;
            pvVar15 = local_58;
LAB_1002c1cc0:
            *(undefined4 *)(plVar11 + 4) = uVar2;
          }
          *(undefined4 *)(lVar16 + 0xc) = 0;
          local_68 = (ulong)((int)local_68 - 1);
        }
        uVar13 = uVar13 + 1;
      } while (uVar13 != uVar10);
    }
    local_58 = pvVar15;
    if (pvVar15 != (void *)0x0) {
      uStack_50 = SUB84(pvVar15,0);
      uStack_4c = (undefined2)((ulong)pvVar15 >> 0x20);
      uStack_4a = (undefined2)((ulong)pvVar15 >> 0x30);
      operator_delete(pvVar15);
    }
  }
  if (*(long *)PTR____stack_chk_guard_10082cb58 != local_38) {
                    /* WARNING: Subroutine does not return */
    ___stack_chk_fail();
  }
  return local_68 & 0xffffffff;
}

