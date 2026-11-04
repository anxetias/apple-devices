// name: FUN_10046866a
// address: 10046866a

undefined8 FUN_10046866a(undefined8 param_1,long param_2,ulong *param_3,long *param_4)

{
  int iVar1;
  char cVar2;
  int iVar3;
  long *plVar4;
  long lVar5;
  long lVar6;
  undefined8 uVar7;
  long lVar8;
  ulong uVar9;
  int iVar10;
  ulong uVar11;
  undefined4 local_58;
  char *local_54;
  undefined2 local_4c;
  char *local_4a;
  long local_38;
  
  local_38 = *(long *)PTR____stack_chk_guard_10082cb58;
  uVar7 = 0;
  *param_3 = 0;
  *param_4 = 0;
  if ((param_2 != 0) && (uVar11 = (ulong)*(uint *)(param_2 + 0xa4), uVar11 != 0)) {
    plVar4 = (long *)FUN_1001c63e1(uVar11 * 8);
    if (plVar4 == (long *)0x0) {
      uVar7 = FUN_1001cc310();
      cVar2 = _os_log_type_enabled(uVar7,0x10);
      if (cVar2 != '\0') {
        local_58 = 0x8220202;
        local_54 = "Assertion failure";
        local_4c = 0x822;
        local_4a = "albums != nullptr";
        __os_log_error_impl(0x100000000,uVar7,0x10,"%{public}s: (%{public}s)",&local_58,0x16);
      }
      FUN_1001782e9(0,0);
      uVar7 = 0xffffff94;
    }
    else {
      lVar5 = FUN_1001c63e1(uVar11 << 4);
      if (lVar5 == 0) {
        uVar7 = FUN_1001cc310();
        cVar2 = _os_log_type_enabled(uVar7,0x10);
        if (cVar2 != '\0') {
          local_58 = 0x8220202;
          local_54 = "Assertion failure";
          local_4c = 0x822;
          local_4a = "entries != nullptr";
          __os_log_error_impl(0x100000000,uVar7,0x10,"%{public}s: (%{public}s)",&local_58,0x16);
        }
        FUN_1001782e9(0,0);
        uVar7 = 0xffffff94;
      }
      else {
        FUN_1003a4518(param_2);
        lVar6 = FUN_100277149(param_2);
        if (lVar6 == 0) {
          uVar11 = 0;
        }
        else {
          uVar11 = 0;
          do {
            if ((*(int *)(lVar6 + 0x14) != 0) && (*(int *)(lVar6 + 0x10) != 1)) {
              iVar10 = (int)uVar11;
              uVar11 = (ulong)(iVar10 + 1);
              plVar4[iVar10] = lVar6;
            }
            lVar6 = FUN_10027728e(lVar6);
          } while (lVar6 != 0);
        }
        FUN_1001d26f2(plVar4,uVar11,FUN_100469836,0);
        lVar6 = *plVar4;
        *(undefined4 *)(lVar6 + 0xf0) = 100;
        if (1 < (uint)uVar11) {
          iVar10 = 100;
          uVar9 = 1;
          do {
            iVar3 = FUN_100469840(lVar6,plVar4[uVar9]);
            iVar1 = iVar10 + 100;
            if (iVar3 == 0) {
              iVar1 = iVar10;
            }
            iVar10 = iVar1;
            lVar6 = plVar4[uVar9];
            *(int *)(lVar6 + 0xf0) = iVar10;
            uVar9 = uVar9 + 1;
          } while (uVar11 != uVar9);
        }
        lVar6 = FUN_100277149(param_2);
        uVar11 = 0;
        if (lVar6 != 0) {
          do {
            if ((*(int *)(lVar6 + 0x14) != 0) && (*(int *)(lVar6 + 0x10) != 1)) {
              lVar8 = (long)(int)uVar11 * 0x10;
              *(undefined8 *)(lVar5 + lVar8) = *(undefined8 *)(lVar6 + 0x20);
              *(undefined4 *)(lVar5 + 8 + lVar8) = *(undefined4 *)(lVar6 + 0xf0);
              uVar11 = (ulong)((int)uVar11 + 1);
            }
            lVar6 = FUN_10027728e(lVar6);
          } while (lVar6 != 0);
          uVar11 = (ulong)(int)uVar11;
        }
        *param_3 = uVar11;
        *param_4 = lVar5;
        uVar7 = 0;
      }
      FUN_1001c64c1(plVar4);
      FUN_1003a4518(param_2);
    }
  }
  if (*(long *)PTR____stack_chk_guard_10082cb58 != local_38) {
                    /* WARNING: Subroutine does not return */
    ___stack_chk_fail();
  }
  return uVar7;
}

