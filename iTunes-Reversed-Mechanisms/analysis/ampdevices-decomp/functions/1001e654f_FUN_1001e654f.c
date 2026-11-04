// name: FUN_1001e654f
// address: 1001e654f

void FUN_1001e654f(ushort *param_1)

{
  ushort uVar1;
  ushort uVar2;
  bool bVar3;
  char cVar4;
  undefined8 uVar5;
  ulong uVar6;
  int iVar7;
  bool bVar8;
  long lVar9;
  ushort local_218 [256];
  long local_18;
  
  local_18 = *(long *)PTR____stack_chk_guard_10082cb58;
  if (param_1 == (ushort *)0x0) {
    uVar5 = FUN_1001cc310();
    cVar4 = _os_log_type_enabled(uVar5,0x10);
    if (cVar4 != '\0') {
      FUN_1006bfb1c(uVar5);
    }
    FUN_1001782e9(0,0);
  }
  else {
    uVar1 = *param_1;
    if (uVar1 != 0) {
      uVar6 = 0;
      do {
        if ((0x20 < (ulong)param_1[uVar6 + 1]) ||
           ((0x100002600U >> ((ulong)param_1[uVar6 + 1] & 0x3f) & 1) == 0)) {
          if ((uint)uVar1 < (int)uVar6 + 1U) {
            local_218[0] = 0;
          }
          else {
            iVar7 = 1;
            bVar8 = false;
            do {
              uVar2 = param_1[uVar6 + 1];
              if ((0x20 < (ulong)uVar2) ||
                 (bVar3 = true, (0x100002600U >> ((ulong)uVar2 & 0x3f) & 1) == 0)) {
                if (bVar8) {
                  lVar9 = (long)iVar7;
                  iVar7 = iVar7 + 1;
                  local_218[lVar9] = 0x20;
                }
                lVar9 = (long)iVar7;
                iVar7 = iVar7 + 1;
                local_218[lVar9] = uVar2;
                bVar3 = false;
              }
              bVar8 = bVar3;
              uVar6 = uVar6 + 1;
            } while (uVar1 != uVar6);
            local_218[0] = (short)iVar7 - 1;
          }
          FUN_1001e1c39();
          goto LAB_1001e65cd;
        }
        uVar6 = uVar6 + 1;
      } while ((uint)uVar1 != uVar6);
      *param_1 = 0;
    }
  }
LAB_1001e65cd:
  if (*(long *)PTR____stack_chk_guard_10082cb58 == local_18) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  ___stack_chk_fail();
}

