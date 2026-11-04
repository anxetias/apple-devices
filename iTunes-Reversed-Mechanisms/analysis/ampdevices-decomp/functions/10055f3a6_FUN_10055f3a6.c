// name: FUN_10055f3a6
// address: 10055f3a6

ulong FUN_10055f3a6(long param_1,long param_2,int *param_3)

{
  uint uVar1;
  uint uVar2;
  char cVar3;
  uint uVar4;
  int *piVar5;
  undefined8 uVar6;
  uint uVar7;
  int iVar8;
  long lVar9;
  ulong uVar10;
  bool bVar11;
  undefined4 local_58;
  char *local_54;
  undefined2 local_4c;
  char *local_4a;
  long local_38;
  
  local_38 = *(long *)PTR____stack_chk_guard_10082cb58;
  if (param_3 == (int *)0x0) {
    uVar6 = FUN_1001cc310();
    cVar3 = _os_log_type_enabled(uVar6,0x10);
    if (cVar3 != '\0') {
      local_4a = "inSortParams != __null";
LAB_10055f533:
      local_4c = 0x822;
      local_54 = "Assertion failure";
      local_58 = 0x8220202;
      __os_log_error_impl(0x100000000,uVar6,0x10,"%{public}s: (%{public}s)",&local_58,0x16);
    }
LAB_10055f558:
    uVar10 = 0;
    FUN_1001782e9(0,0);
  }
  else {
    uVar10 = 0;
    if (param_1 != param_2 && *param_3 != 10000) {
      piVar5 = (int *)FUN_1002ddacc();
      if (piVar5 != (int *)0x0) {
        uVar1 = param_3[1];
        bVar11 = (uVar1 & 1) == 0;
        uVar2 = uVar1 & 0xfffffff4;
        if (bVar11) {
          uVar2 = uVar1 & 0xfffffffc;
        }
        iVar8 = *piVar5;
        if (iVar8 != 0) {
          lVar9 = 0;
          do {
            uVar4 = FUN_10055ef56(param_1,param_2,iVar8,uVar2);
            uVar7 = -uVar4;
            if (bVar11) {
              uVar7 = uVar4;
            }
            uVar4 = -uVar7;
            if ((int)lVar9 != 1) {
              uVar4 = uVar7;
            }
            if ((uVar1 & 2) == 0) {
              uVar4 = uVar7;
            }
            uVar10 = (ulong)uVar4;
            if (uVar4 != 0) goto LAB_10055f564;
            iVar8 = piVar5[lVar9 + 1];
            lVar9 = lVar9 + 1;
            bVar11 = true;
          } while (iVar8 != 0);
        }
        if (*(long *)PTR____stack_chk_guard_10082cb58 == local_38) {
          uVar10 = FUN_10055ef56(param_1,param_2,0x1e,uVar1 & 0xfffffffc);
          return uVar10;
        }
        goto LAB_10055f586;
      }
      uVar6 = FUN_1001cc310();
      cVar3 = _os_log_type_enabled(uVar6,0x10);
      if (cVar3 != '\0') {
        local_4a = "sortHierarchy != __null";
        goto LAB_10055f533;
      }
      goto LAB_10055f558;
    }
  }
LAB_10055f564:
  if (*(long *)PTR____stack_chk_guard_10082cb58 == local_38) {
    return uVar10;
  }
LAB_10055f586:
                    /* WARNING: Subroutine does not return */
  ___stack_chk_fail();
}

