// name: FUN_1003a5e8f
// address: 1003a5e8f

void FUN_1003a5e8f(long *param_1,char param_2)

{
  long *plVar1;
  long lVar2;
  long lVar3;
  ulong uVar4;
  byte bVar5;
  long *plVar6;
  char cVar7;
  undefined8 uVar8;
  long lVar9;
  long *plVar10;
  ulong uVar11;
  long *plVar12;
  ulong uVar13;
  ulong uVar14;
  int local_58;
  undefined4 uStack_54;
  undefined4 uStack_50;
  undefined2 uStack_4c;
  undefined2 uStack_4a;
  undefined6 uStack_48;
  long local_38;
  
  local_38 = *(long *)PTR____stack_chk_guard_10082cb58;
  if ((param_1 != (long *)0x0) && ((int *)*param_1 != (int *)0x0)) {
    if (*(int *)*param_1 != 0x706c7374) {
      uVar8 = FUN_1001cc310();
      cVar7 = _os_log_type_enabled(uVar8,0x10);
      if (cVar7 != '\0') {
        local_58 = 0x8220202;
        uStack_54 = 0x7ab58c;
        uStack_50 = 1;
        uStack_4c = 0x822;
        uStack_4a = 0x2d50;
        uStack_48 = 0x1007b;
        __os_log_error_impl(0x100000000,uVar8,0x10,"%{public}s: (%{public}s)",&local_58,0x16);
      }
      cVar7 = FUN_1001782e9(0,1);
      if (cVar7 == '\0') goto LAB_1003a5fff;
    }
    if ((int)param_1[8] != 0) {
      lVar2 = param_1[2];
      if (lVar2 == 0) goto LAB_1003a6021;
      lVar3 = *param_1;
      if (lVar3 == 0) {
        uVar8 = FUN_1001cc310();
        cVar7 = _os_log_type_enabled(uVar8,0x10);
        if (cVar7 != '\0') {
          local_58 = 0x8220202;
          uStack_54 = 0x7a0a90;
          uStack_50 = 1;
          uStack_4c = 0x822;
          uStack_4a = 0x8d24;
          uStack_48 = 0x1007b;
          __os_log_error_impl(0x100000000,uVar8,0x10,"%{public}s: (%{public}s)",&local_58,0x16);
        }
        FUN_1001782e9(0,0);
      }
      if (*(int *)(lVar2 + 0x18) == 0) {
        uVar8 = FUN_1001cc310();
        cVar7 = _os_log_type_enabled(uVar8,0x10);
        if (cVar7 != '\0') {
          local_58 = 0x8220202;
          uStack_54 = 0x7a0a90;
          uStack_50 = 1;
          uStack_4c = 0x822;
          uStack_4a = 0x8672;
          uStack_48 = 0x1007c;
          __os_log_error_impl(0x100000000,uVar8,0x10,"%{public}s: (%{public}s)",&local_58,0x16);
        }
        FUN_1001782e9(0,0);
      }
      if (*(long *)(lVar2 + 8) == 0) {
        uVar8 = FUN_1001cc310();
        cVar7 = _os_log_type_enabled(uVar8,0x10);
        if (cVar7 != '\0') {
          local_58 = 0x8220202;
          uStack_54 = 0x7a0a90;
          uStack_50 = 1;
          uStack_4c = 0x822;
          uStack_4a = 0x8689;
          uStack_48 = 0x1007c;
          __os_log_error_impl(0x100000000,uVar8,0x10,"%{public}s: (%{public}s)",&local_58,0x16);
        }
        FUN_1001782e9(0,0);
      }
      if (*(long *)(lVar2 + 0x10) == 0) {
        uVar8 = FUN_1001cc310();
        cVar7 = _os_log_type_enabled(uVar8,0x10);
        if (cVar7 != '\0') {
          local_58 = 0x8220202;
          uStack_54 = 0x7a0a90;
          uStack_50 = 1;
          uStack_4c = 0x822;
          uStack_4a = 0x86a7;
          uStack_48 = 0x1007c;
          __os_log_error_impl(0x100000000,uVar8,0x10,"%{public}s: (%{public}s)",&local_58,0x16);
        }
        FUN_1001782e9(0,0);
      }
      if (param_2 != '\0') {
        *(undefined8 *)(lVar3 + 0x14) = 0;
        *(undefined4 *)(lVar3 + 500) = 0;
      }
      if (param_1[4] == 0) {
        if (*(long **)(lVar2 + 8) != param_1) {
          uVar8 = FUN_1001cc310();
          cVar7 = _os_log_type_enabled(uVar8,0x10);
          if (cVar7 != '\0') {
            local_58 = 0x8220202;
            uStack_54 = 0x7a0a90;
            uStack_50 = 1;
            uStack_4c = 0x822;
            uStack_4a = 0x86c4;
            uStack_48 = 0x1007c;
            __os_log_error_impl(0x100000000,uVar8,0x10,"%{public}s: (%{public}s)",&local_58,0x16);
          }
          FUN_1001782e9(0,0);
        }
        lVar9 = param_1[3];
        *(long *)(lVar2 + 8) = lVar9;
      }
      else {
        lVar9 = param_1[3];
        *(long *)(param_1[4] + 0x18) = lVar9;
      }
      if (lVar9 == 0) {
        if (*(long **)(lVar2 + 0x10) != param_1) {
          uVar8 = FUN_1001cc310();
          cVar7 = _os_log_type_enabled(uVar8,0x10);
          if (cVar7 != '\0') {
            local_58 = 0x8220202;
            uStack_54 = 0x7a0a90;
            uStack_50 = 1;
            uStack_4c = 0x822;
            uStack_4a = 0x86e7;
            uStack_48 = 0x1007c;
            __os_log_error_impl(0x100000000,uVar8,0x10,"%{public}s: (%{public}s)",&local_58,0x16);
          }
          FUN_1001782e9(0,0);
        }
        *(long *)(lVar2 + 0x10) = param_1[4];
      }
      else {
        *(long *)(lVar9 + 0x20) = param_1[4];
      }
      param_1[2] = 0;
      param_1[3] = 0;
      param_1[4] = 0;
      if ((int)param_1[8] != 0) {
        plVar1 = (long *)(lVar3 + 0x450);
        local_58 = (int)param_1[8];
        plVar10 = (long *)FUN_1002b7f7c(plVar1);
        if (plVar10 != (long *)0x0) {
          lVar9 = *plVar10;
          uVar13 = plVar10[1];
          uVar4 = *(ulong *)(lVar3 + 0x458);
          uVar11 = uVar4 - (uVar4 >> 1 & 0x5555555555555555);
          uVar11 = (uVar11 >> 2 & 0x3333333333333333) + (uVar11 & 0x3333333333333333);
          uVar11 = ((uVar11 >> 4) + uVar11 & 0xf0f0f0f0f0f0f0f) * 0x101010101010101;
          if (uVar11 >> 0x38 < 2) {
            uVar13 = uVar13 & uVar4 - 1;
          }
          else if (uVar4 <= uVar13) {
            uVar13 = uVar13 % uVar4;
          }
          plVar6 = *(long **)(*plVar1 + uVar13 * 8);
          do {
            plVar12 = plVar6;
            plVar6 = (long *)*plVar12;
          } while ((long *)*plVar12 != plVar10);
          bVar5 = (byte)(uVar11 >> 0x38);
          if (plVar12 == (long *)(lVar3 + 0x460)) {
LAB_1003a621a:
            if (lVar9 == 0) {
LAB_1003a6295:
              *(undefined8 *)(*plVar1 + uVar13 * 8) = 0;
              lVar9 = *plVar10;
              goto LAB_1003a62a0;
            }
            uVar11 = *(ulong *)(lVar9 + 8);
            if (bVar5 < 2) {
              uVar14 = uVar4 - 1 & uVar11;
            }
            else {
              uVar14 = uVar11;
              if (uVar4 <= uVar11) {
                uVar14 = uVar11 % uVar4;
              }
            }
            if (uVar14 != uVar13) goto LAB_1003a6295;
LAB_1003a62a9:
            if (bVar5 < 2) {
              uVar11 = uVar11 & uVar4 - 1;
            }
            else if (uVar4 <= uVar11) {
              uVar11 = uVar11 % uVar4;
            }
            if (uVar11 != uVar13) {
              *(long **)(*plVar1 + uVar11 * 8) = plVar12;
              lVar9 = *plVar10;
            }
          }
          else {
            uVar11 = plVar12[1];
            if (bVar5 < 2) {
              uVar11 = uVar11 & uVar4 - 1;
            }
            else if (uVar4 <= uVar11) {
              uVar11 = uVar11 % uVar4;
            }
            if (uVar11 != uVar13) goto LAB_1003a621a;
LAB_1003a62a0:
            if (lVar9 != 0) {
              uVar11 = *(ulong *)(lVar9 + 8);
              goto LAB_1003a62a9;
            }
            lVar9 = 0;
          }
          *plVar12 = lVar9;
          *plVar10 = 0;
          *(long *)(lVar3 + 0x468) = *(long *)(lVar3 + 0x468) + -1;
          operator_delete(plVar10);
        }
      }
      lVar9 = param_1[5];
      if (lVar9 != 0) {
        plVar1 = (long *)(lVar3 + 0x478);
        local_58 = (int)lVar9;
        uStack_54 = (undefined4)((ulong)lVar9 >> 0x20);
        plVar10 = (long *)FUN_1002790a8(plVar1);
        if (plVar10 != (long *)0x0) {
          lVar9 = *plVar10;
          uVar13 = plVar10[1];
          uVar4 = *(ulong *)(lVar3 + 0x480);
          uVar11 = uVar4 - (uVar4 >> 1 & 0x5555555555555555);
          uVar11 = (uVar11 >> 2 & 0x3333333333333333) + (uVar11 & 0x3333333333333333);
          uVar11 = ((uVar11 >> 4) + uVar11 & 0xf0f0f0f0f0f0f0f) * 0x101010101010101;
          if (uVar11 >> 0x38 < 2) {
            uVar13 = uVar13 & uVar4 - 1;
          }
          else if (uVar4 <= uVar13) {
            uVar13 = uVar13 % uVar4;
          }
          plVar6 = *(long **)(*plVar1 + uVar13 * 8);
          do {
            plVar12 = plVar6;
            plVar6 = (long *)*plVar12;
          } while ((long *)*plVar12 != plVar10);
          bVar5 = (byte)(uVar11 >> 0x38);
          if (plVar12 == (long *)(lVar3 + 0x488)) {
LAB_1003a63f9:
            if (lVar9 == 0) {
LAB_1003a6426:
              *(undefined8 *)(*plVar1 + uVar13 * 8) = 0;
              lVar9 = *plVar10;
              goto LAB_1003a6431;
            }
            uVar11 = *(ulong *)(lVar9 + 8);
            if (bVar5 < 2) {
              uVar14 = uVar4 - 1 & uVar11;
            }
            else {
              uVar14 = uVar11;
              if (uVar4 <= uVar11) {
                uVar14 = uVar11 % uVar4;
              }
            }
            if (uVar14 != uVar13) goto LAB_1003a6426;
LAB_1003a643a:
            if (bVar5 < 2) {
              uVar11 = uVar11 & uVar4 - 1;
            }
            else if (uVar4 <= uVar11) {
              uVar11 = uVar11 % uVar4;
            }
            if (uVar11 != uVar13) {
              *(long **)(*plVar1 + uVar11 * 8) = plVar12;
              lVar9 = *plVar10;
            }
          }
          else {
            uVar11 = plVar12[1];
            if (bVar5 < 2) {
              uVar11 = uVar11 & uVar4 - 1;
            }
            else if (uVar4 <= uVar11) {
              uVar11 = uVar11 % uVar4;
            }
            if (uVar11 != uVar13) goto LAB_1003a63f9;
LAB_1003a6431:
            if (lVar9 != 0) {
              uVar11 = *(ulong *)(lVar9 + 8);
              goto LAB_1003a643a;
            }
            lVar9 = 0;
          }
          *plVar12 = lVar9;
          *plVar10 = 0;
          *(long *)(lVar3 + 0x490) = *(long *)(lVar3 + 0x490) + -1;
          operator_delete(plVar10);
        }
      }
      if ((*(byte *)((long)param_1 + 0x61) & 8) != 0) {
        local_58 = 0;
        uStack_54 = 0;
        uStack_50 = 0;
        uStack_4c = 0;
        uStack_4a = 0;
        FUN_100217418(*(long *)(lVar3 + 8) + 0x2758,&local_58);
        plVar1 = (long *)CONCAT26(uStack_4a,CONCAT24(uStack_4c,uStack_50));
        if (plVar1 != (long *)0x0) {
          LOCK();
          plVar10 = plVar1 + 1;
          lVar9 = *plVar10;
          *plVar10 = *plVar10 + -1;
          UNLOCK();
          if (lVar9 == 0) {
            (**(code **)(*plVar1 + 0x10))(plVar1);
            std::__shared_weak_count::__release_weak();
          }
        }
      }
      *(int *)(lVar2 + 0x18) = *(int *)(lVar2 + 0x18) + -1;
      FUN_100484c95(lVar3);
      if (param_2 == '\0') {
        FUN_10037ee15(lVar3,1);
      }
      else {
        FUN_100380783(lVar3);
        FUN_100484df3(lVar3);
      }
      goto LAB_1003a6021;
    }
  }
LAB_1003a5fff:
  uVar8 = FUN_1001cc310();
  cVar7 = _os_log_type_enabled(uVar8,0x10);
  if (cVar7 != '\0') {
    local_58 = 0x8220202;
    uStack_54 = 0x7a0a90;
    uStack_50 = 1;
    uStack_4c = 0x822;
    uStack_4a = 0x2d2e;
    uStack_48 = 0x1007b;
    __os_log_error_impl(0x100000000,uVar8,0x10,"%{public}s: (%{public}s)",&local_58,0x16);
  }
  FUN_1001782e9(0,0);
LAB_1003a6021:
  if (*(long *)PTR____stack_chk_guard_10082cb58 == local_38) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  ___stack_chk_fail();
}

