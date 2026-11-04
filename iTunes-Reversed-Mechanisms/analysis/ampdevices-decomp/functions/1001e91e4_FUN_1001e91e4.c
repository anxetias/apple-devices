// name: FUN_1001e91e4
// address: 1001e91e4

int FUN_1001e91e4(int *param_1,ulong param_2)

{
  uint uVar1;
  bool bVar2;
  char cVar3;
  int iVar4;
  int iVar5;
  undefined8 uVar6;
  uint uVar7;
  long lVar8;
  uint uVar9;
  int iVar10;
  bool bVar11;
  undefined4 local_48;
  int local_44;
  long local_38;
  
  local_38 = *(long *)PTR____stack_chk_guard_10082cb58;
  if ((param_1 == (int *)0x0) || (*param_1 != 0x6c636d70)) {
    uVar6 = FUN_1001cc310();
    cVar3 = _os_log_type_enabled(uVar6,0x10);
    if (cVar3 != '\0') {
      FUN_1006c1983(uVar6);
    }
    FUN_1001782e9(0,0);
    iVar4 = -0x32;
  }
  else {
    lVar8 = *(long *)(param_1 + 4) + 0x18;
    bVar2 = false;
    do {
      uVar9 = param_1[2];
      do {
        if ((uVar9 & 1) != 0) {
          iVar4 = 0;
          iVar10 = 0;
          if (!bVar2) goto LAB_1001e9373;
          goto LAB_1001e93a2;
        }
        if (!bVar2) {
          iVar4 = FUN_1001ea458(lVar8);
          bVar2 = true;
          if (iVar4 != 0) {
            if (iVar4 != -0x80) {
              uVar6 = FUN_1001cc310();
              cVar3 = _os_log_type_enabled(uVar6,0x10);
              if (cVar3 != '\0') {
                FUN_1006c1917(iVar4,uVar6);
              }
            }
            goto LAB_1001e9373;
          }
        }
        LOCK();
        uVar7 = param_1[2];
        bVar11 = uVar9 == uVar7;
        if (bVar11) {
          param_1[2] = uVar9 | 2;
          uVar7 = uVar9;
        }
        uVar9 = uVar7;
        UNLOCK();
      } while (!bVar11);
      if (!bVar2) {
        iVar4 = 0;
        goto LAB_1001e9373;
      }
      iVar4 = FUN_1001ea3a0(lVar8,param_2);
      uVar9 = param_1[2];
      if ((uVar9 & 1) != 0) {
        iVar10 = 0;
        goto LAB_1001e93a2;
      }
      uVar7 = uVar9 & 0xfffffffc;
      while( true ) {
        LOCK();
        uVar1 = param_1[2];
        bVar11 = uVar9 == uVar1;
        if (bVar11) {
          param_1[2] = uVar7;
          uVar1 = uVar9;
        }
        uVar9 = uVar1;
        UNLOCK();
        if (bVar11) break;
        uVar7 = uVar9 & 0xfffffffd;
      }
      if (param_2 < 0x7fffffffffffffff && iVar4 == 0x3c) {
        iVar10 = 0x3c;
        goto LAB_1001e93a2;
      }
    } while (iVar4 == 0);
    uVar6 = FUN_1001cc310();
    cVar3 = _os_log_type_enabled(uVar6,0x10);
    if (cVar3 != '\0') {
      local_48 = 0x4000100;
      local_44 = iVar4;
      __os_log_impl(0x100000000,uVar6,0x10,"warning: unexpected synchronization wait result (%d)",
                    &local_48,8);
    }
    iVar10 = -0x80;
    if (iVar4 != -0x80) {
      uVar6 = FUN_1001cc310();
      cVar3 = _os_log_type_enabled(uVar6,0x10);
      iVar10 = iVar4;
      if (cVar3 != '\0') {
        FUN_1006c183f(iVar4,uVar6);
      }
    }
LAB_1001e93a2:
    iVar5 = FUN_1001ea4ac(lVar8);
    iVar4 = iVar10;
    if ((iVar5 != -0x80) && (iVar5 != 0)) {
      uVar6 = FUN_1001cc310();
      cVar3 = _os_log_type_enabled(uVar6,0x10);
      if (cVar3 != '\0') {
        FUN_1006c18ab(iVar5,uVar6);
      }
    }
  }
LAB_1001e9373:
  if (*(long *)PTR____stack_chk_guard_10082cb58 != local_38) {
                    /* WARNING: Subroutine does not return */
    ___stack_chk_fail();
  }
  return iVar4;
}

