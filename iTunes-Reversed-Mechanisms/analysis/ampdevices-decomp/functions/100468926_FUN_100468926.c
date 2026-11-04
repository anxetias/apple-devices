// name: FUN_100468926
// address: 100468926

undefined8 FUN_100468926(undefined8 param_1,long param_2,ulong *param_3,long *param_4)

{
  int iVar1;
  char cVar2;
  int iVar3;
  undefined4 uVar4;
  undefined8 *puVar5;
  long lVar6;
  long lVar7;
  undefined8 uVar8;
  long *plVar9;
  ulong uVar10;
  ulong uVar11;
  int iVar12;
  undefined4 local_58;
  char *local_54;
  undefined2 local_4c;
  char *local_4a;
  long local_38;
  
  local_38 = *(long *)PTR____stack_chk_guard_10082cb58;
  uVar8 = 0;
  *param_3 = 0;
  *param_4 = 0;
  if ((param_2 != 0) && (uVar11 = (ulong)*(uint *)(param_2 + 0xa8), uVar11 != 0)) {
    puVar5 = (undefined8 *)FUN_1001c63e1(uVar11 * 8);
    if (puVar5 == (undefined8 *)0x0) {
      uVar8 = FUN_1001cc310();
      cVar2 = _os_log_type_enabled(uVar8,0x10);
      if (cVar2 != '\0') {
        local_58 = 0x8220202;
        local_54 = "Assertion failure";
        local_4c = 0x822;
        local_4a = "artists != nullptr";
        __os_log_error_impl(0x100000000,uVar8,0x10,"%{public}s: (%{public}s)",&local_58,0x16);
      }
      FUN_1001782e9(0,0);
      uVar8 = 0xffffff94;
    }
    else {
      lVar6 = FUN_1001c63e1(uVar11 << 4);
      if (lVar6 == 0) {
        uVar8 = FUN_1001cc310();
        cVar2 = _os_log_type_enabled(uVar8,0x10);
        if (cVar2 != '\0') {
          local_58 = 0x8220202;
          local_54 = "Assertion failure";
          local_4c = 0x822;
          local_4a = "entries != nullptr";
          __os_log_error_impl(0x100000000,uVar8,0x10,"%{public}s: (%{public}s)",&local_58,0x16);
        }
        FUN_1001782e9(0,0);
        uVar8 = 0xffffff94;
      }
      else {
        FUN_1005e4192(param_2);
        lVar7 = FUN_1004cf9b5(param_2);
        if (lVar7 == 0) {
          uVar11 = 0;
        }
        else {
          uVar11 = 0;
          do {
            if ((*(int *)(lVar7 + 0x84) != 0) && (*(short *)(lVar7 + 0x62) == 2)) {
              iVar12 = (int)uVar11;
              uVar11 = (ulong)(iVar12 + 1);
              puVar5[iVar12] = lVar7;
            }
            lVar7 = FUN_1005e386a(lVar7);
          } while (lVar7 != 0);
        }
        FUN_1001d26f2(puVar5,uVar11,FUN_1004698c5,0);
        iVar12 = 100;
        (**(code **)(*(long *)*puVar5 + 0x18))((long *)*puVar5,100);
        if (1 < (uint)uVar11) {
          uVar10 = 1;
          do {
            iVar3 = FUN_1004698cf(puVar5[uVar10 - 1],puVar5[uVar10]);
            iVar1 = iVar12 + 100;
            if (iVar3 == 0) {
              iVar1 = iVar12;
            }
            iVar12 = iVar1;
            (**(code **)(*(long *)puVar5[uVar10] + 0x18))((long *)puVar5[uVar10],iVar12);
            uVar10 = uVar10 + 1;
          } while (uVar11 != uVar10);
        }
        plVar9 = (long *)FUN_1004cf9b5(param_2);
        uVar11 = 0;
        if (plVar9 != (long *)0x0) {
          do {
            if ((*(int *)((long)plVar9 + 0x84) != 0) && (*(short *)((long)plVar9 + 0x62) == 2)) {
              lVar7 = (long)(int)uVar11 * 0x10;
              *(long *)(lVar6 + lVar7) = plVar9[3];
              uVar4 = (**(code **)(*plVar9 + 0x20))(plVar9);
              *(undefined4 *)(lVar6 + 8 + lVar7) = uVar4;
              uVar11 = (ulong)((int)uVar11 + 1);
            }
            plVar9 = (long *)FUN_1005e386a(plVar9);
          } while (plVar9 != (long *)0x0);
          uVar11 = (ulong)(int)uVar11;
        }
        *param_3 = uVar11;
        *param_4 = lVar6;
        uVar8 = 0;
      }
      FUN_1001c64c1(puVar5);
      FUN_1005e4192(param_2);
    }
  }
  if (*(long *)PTR____stack_chk_guard_10082cb58 != local_38) {
                    /* WARNING: Subroutine does not return */
    ___stack_chk_fail();
  }
  return uVar8;
}

