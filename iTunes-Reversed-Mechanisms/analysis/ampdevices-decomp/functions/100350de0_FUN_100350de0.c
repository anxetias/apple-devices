// name: FUN_100350de0
// address: 100350de0

void FUN_100350de0(long param_1)

{
  long *plVar1;
  long lVar2;
  long lVar3;
  char cVar4;
  long *plVar5;
  long lVar6;
  undefined8 uVar7;
  long *plVar8;
  long *plVar9;
  uint uVar10;
  undefined4 local_58;
  undefined4 uStack_54;
  undefined4 uStack_50;
  undefined2 local_4c;
  char *local_4a;
  long local_38;
  
  local_38 = *(long *)PTR____stack_chk_guard_10082cb58;
  if ((*(short *)(param_1 + 0x62) != 2) || ((*(byte *)(param_1 + 0x5c) & 4) != 0))
  goto LAB_100350f29;
  lVar2 = *(long *)(param_1 + 8);
  if (lVar2 == 0) {
    uVar7 = FUN_1001cc310();
    cVar4 = _os_log_type_enabled(uVar7,0x10);
    if (cVar4 != '\0') {
      local_58 = 0x8220202;
      uStack_54 = 0x7a0a90;
      uStack_50 = 1;
      local_4c = 0x822;
      local_4a = "trackData != nullptr";
      __os_log_error_impl(0x100000000,uVar7,0x10,"%{public}s: (%{public}s)",&local_58,0x16);
    }
    FUN_1001782e9(0,0);
    FUN_1001c64c1(0);
  }
  else {
    FUN_1003071cd(lVar2);
    lVar6 = *(long *)(param_1 + 200);
    uVar10 = 0;
    if (lVar6 == 0) {
LAB_100350ee7:
      plVar5 = (long *)0x0;
    }
    else {
      plVar1 = (long *)(param_1 + 200);
      do {
        uVar10 = uVar10 + 1;
        lVar6 = *(long *)(lVar6 + 0x48);
      } while (lVar6 != 0);
      if (uVar10 < 2) goto LAB_100350ee7;
      plVar5 = (long *)FUN_1001c63e1((ulong)uVar10 << 3);
      if (plVar5 == (long *)0x0) {
        uVar7 = FUN_1001cc310();
        cVar4 = _os_log_type_enabled(uVar7,0x10);
        if (cVar4 != '\0') {
          local_58 = 0x8220202;
          uStack_54 = 0x7a0a90;
          uStack_50 = 1;
          local_4c = 0x822;
          local_4a = "list != __null";
          __os_log_error_impl(0x100000000,uVar7,0x10,"%{public}s: (%{public}s)",&local_58,0x16);
        }
        plVar5 = (long *)0x0;
        FUN_1001782e9(0,0);
      }
      else {
        lVar6 = *plVar1;
        plVar8 = plVar5;
        do {
          *plVar8 = lVar6;
          lVar6 = *(long *)(lVar6 + 0x48);
          plVar8 = plVar8 + 1;
        } while (lVar6 != 0);
        local_58 = 0x2712;
        uStack_54 = 0;
        FUN_1001d26f2(plVar5,uVar10,FUN_10055f58b);
        *plVar1 = 0;
        *(undefined8 *)(param_1 + 0xd0) = 0;
        lVar6 = 0;
        plVar8 = plVar5;
        do {
          lVar3 = *plVar8;
          plVar9 = (long *)(lVar6 + 0x48);
          if (lVar6 == 0) {
            plVar9 = plVar1;
          }
          *plVar9 = lVar3;
          *(long *)(lVar3 + 0x50) = lVar6;
          *(undefined8 *)(lVar3 + 0x48) = 0;
          plVar8 = plVar8 + 1;
          uVar10 = uVar10 - 1;
          lVar6 = lVar3;
        } while (uVar10 != 0);
        *(long *)(param_1 + 0xd0) = lVar3;
      }
    }
    FUN_1001c64c1(plVar5);
    FUN_100307383(lVar2);
  }
  *(byte *)(param_1 + 0x5c) = *(byte *)(param_1 + 0x5c) | 4;
LAB_100350f29:
  if (*(long *)PTR____stack_chk_guard_10082cb58 == local_38) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  ___stack_chk_fail();
}

