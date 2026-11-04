// name: FUN_10055ea6a
// address: 10055ea6a

void FUN_10055ea6a(long param_1)

{
  long *plVar1;
  long lVar2;
  bool bVar3;
  bool bVar4;
  char cVar5;
  long lVar6;
  undefined8 uVar7;
  long *plVar8;
  ulong uVar9;
  long *plVar10;
  long lVar11;
  long *plVar12;
  uint uVar13;
  undefined4 local_58;
  undefined4 uStack_54;
  undefined4 local_50;
  undefined2 uStack_4c;
  undefined2 uStack_4a;
  undefined6 local_48;
  undefined8 local_40;
  long local_38;
  
  local_38 = *(long *)PTR____stack_chk_guard_10082cb58;
  if ((*(int *)(param_1 + 0x10) == 1) || ((*(byte *)(param_1 + 0xf8) & 2) != 0)) goto LAB_10055ec71;
  FUN_1003071cd(*(undefined8 *)(param_1 + 0x48));
  lVar6 = *(long *)(param_1 + 0x60);
  uVar13 = 0;
  if (lVar6 == 0) {
LAB_10055ec56:
    plVar8 = (long *)0x0;
  }
  else {
    plVar1 = (long *)(param_1 + 0x60);
    do {
      uVar13 = uVar13 + 1;
      lVar6 = *(long *)(lVar6 + 0x30);
    } while (lVar6 != 0);
    if (*(uint *)(param_1 + 0x14) != uVar13) {
      uVar7 = FUN_1001cc310();
      cVar5 = _os_log_type_enabled(uVar7,0x10);
      if (cVar5 != '\0') {
        local_58 = 0x8220202;
        uStack_54 = 0x7a0a90;
        local_50 = 1;
        uStack_4c = 0x822;
        uStack_4a = 0x7c1d;
        local_48 = 0x1007e;
        __os_log_error_impl(0x100000000,uVar7,0x10,"%{public}s: (%{public}s)",&local_58,0x16);
      }
      FUN_1001782e9(0,0);
    }
    if (uVar13 < 2) goto LAB_10055ec56;
    plVar8 = (long *)FUN_1001c63e1((ulong)uVar13 << 3);
    if (plVar8 == (long *)0x0) {
      uVar7 = FUN_1001cc310();
      cVar5 = _os_log_type_enabled(uVar7,0x10);
      if (cVar5 != '\0') {
        local_58 = 0x8220202;
        uStack_54 = 0x7a0a90;
        local_50 = 1;
        uStack_4c = 0x822;
        uStack_4a = 0x26e3;
        local_48 = 0x1007c;
        __os_log_error_impl(0x100000000,uVar7,0x10,"%{public}s: (%{public}s)",&local_58,0x16);
      }
      plVar8 = (long *)0x0;
      FUN_1001782e9(0,0);
    }
    else {
      lVar6 = *plVar1;
      bVar3 = false;
      bVar4 = false;
      plVar10 = plVar8;
      do {
        *plVar10 = lVar6;
        uVar9 = FUN_100474dd0(lVar6,0);
        if ((uVar9 & 0x10090) == 0) {
          bVar4 = true;
        }
        else {
          bVar3 = true;
        }
        lVar6 = *(long *)(lVar6 + 0x30);
        plVar10 = plVar10 + 1;
      } while (lVar6 != 0);
      FUN_1001c62d9(&local_58,0x20);
      local_58 = 0x74736370;
      local_50 = (undefined4)param_1;
      uStack_4c = (undefined2)((ulong)param_1 >> 0x20);
      uStack_4a = (undefined2)((ulong)param_1 >> 0x30);
      local_40 = FUN_10055ed62(param_1,&local_48);
      FUN_1001d26f2(plVar8,uVar13,FUN_10055ee62);
      *plVar1 = 0;
      *(undefined8 *)(param_1 + 0x68) = 0;
      lVar6 = 0;
      plVar10 = plVar8;
      lVar11 = 0;
      do {
        plVar12 = (long *)(lVar11 + 0x30);
        if (lVar11 == 0) {
          plVar12 = plVar1;
        }
        lVar2 = *plVar10;
        if (lVar11 == 0) {
          lVar6 = lVar2;
        }
        *plVar12 = lVar2;
        *(long *)(lVar2 + 0x38) = lVar11;
        *(undefined8 *)(lVar2 + 0x30) = 0;
        plVar10 = plVar10 + 1;
        uVar13 = uVar13 - 1;
        lVar11 = lVar2;
      } while (uVar13 != 0);
      *(long *)(param_1 + 0x68) = lVar2;
      if (bVar4 && bVar3) {
        uVar9 = FUN_100474dd0(lVar6,0);
        while ((uVar9 & 0x10090) != 0) {
          FUN_1003a414a(lVar6,1);
          FUN_1003a3b18(param_1,lVar6);
          lVar6 = *(long *)(param_1 + 0x60);
          uVar9 = FUN_100474dd0(lVar6,0);
        }
      }
    }
  }
  FUN_1001c64c1(plVar8);
  FUN_100307383(*(undefined8 *)(param_1 + 0x48));
  *(byte *)(param_1 + 0xf8) = *(byte *)(param_1 + 0xf8) | 2;
LAB_10055ec71:
  if (*(long *)PTR____stack_chk_guard_10082cb58 != local_38) {
                    /* WARNING: Subroutine does not return */
    ___stack_chk_fail();
  }
  return;
}

