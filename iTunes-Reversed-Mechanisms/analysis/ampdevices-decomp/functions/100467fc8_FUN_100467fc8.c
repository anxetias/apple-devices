// name: FUN_100467fc8
// address: 100467fc8

undefined8 FUN_100467fc8(undefined8 param_1,long param_2,long *param_3,ulong *param_4)

{
  uint uVar1;
  int iVar2;
  undefined8 *puVar3;
  char cVar4;
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
  uVar1 = *(uint *)(param_2 + 0x9c);
  uVar7 = 0;
  *param_3 = 0;
  *param_4 = 0;
  if ((ulong)uVar1 == 0) goto LAB_100468176;
  FUN_10031c15f(param_2);
  lVar5 = FUN_1001c63e1((ulong)uVar1 << 3);
  if (lVar5 == 0) {
    uVar7 = FUN_1001cc310();
    cVar4 = _os_log_type_enabled(uVar7,0x10);
    if (cVar4 != '\0') {
      local_4a = "tracks != nullptr";
LAB_1004681bc:
      local_4c = 0x822;
      local_54 = "Assertion failure";
      local_58 = 0x8220202;
      __os_log_error_impl(0x100000000,uVar7,0x10,"%{public}s: (%{public}s)",&local_58,0x16);
    }
LAB_100468152:
    FUN_1001782e9(0,0);
    FUN_10031c15f(param_2);
    uVar7 = 0xffffff94;
  }
  else {
    lVar6 = FUN_1002f930c(param_2);
    uVar11 = 0;
    while (lVar6 != 0) {
      if ((*(int *)(lVar6 + 0xec) != 0) || (uVar9 = uVar11, *(int *)(lVar6 + 0x1b8) != 0)) {
        uVar9 = (ulong)((int)uVar11 + 1);
        *(long *)(lVar5 + uVar11 * 8) = lVar6;
      }
      lVar6 = FUN_1002f9451(lVar6);
      uVar11 = uVar9;
    }
    lVar6 = FUN_1001c6429(uVar11 << 4);
    if (lVar6 == 0) {
      uVar7 = FUN_1001cc310();
      cVar4 = _os_log_type_enabled(uVar7,0x10);
      if (cVar4 != '\0') {
        local_4a = "entries != nullptr";
        goto LAB_1004681bc;
      }
      goto LAB_100468152;
    }
    FUN_1003071cd(param_2);
    FUN_10046790a(lVar5,uVar11,&DAT_10074a9c4);
    if (uVar11 != 0) {
      lVar8 = 0;
      iVar10 = 0;
      uVar9 = 0;
      do {
        puVar3 = *(undefined8 **)(lVar5 + lVar8);
        *(undefined8 *)(lVar6 + lVar8 * 2) = *puVar3;
        *(ulong *)(lVar6 + 8 + lVar8 * 2) = uVar9;
        iVar2 = *(int *)((long)puVar3 + 0xc);
        if (iVar2 != iVar10) {
          uVar9 = (ulong)((int)uVar9 + 1);
          *(ulong *)(lVar6 + 8 + lVar8 * 2) = uVar9;
          iVar10 = iVar2;
        }
        lVar8 = lVar8 + 8;
      } while (uVar11 * 8 - lVar8 != 0);
    }
    *param_4 = uVar11;
    *param_3 = lVar6;
    FUN_10031c15f(param_2);
    FUN_100307383(param_2);
    uVar7 = 0;
  }
  if (lVar5 != 0) {
    FUN_1001c64c1(lVar5);
  }
LAB_100468176:
  if (*(long *)PTR____stack_chk_guard_10082cb58 == local_38) {
    return uVar7;
  }
                    /* WARNING: Subroutine does not return */
  ___stack_chk_fail();
}

