// name: FUN_10027e3f2
// address: 10027e3f2

void FUN_10027e3f2(long param_1,undefined8 param_2,int param_3)

{
  long *plVar1;
  ulong uVar2;
  byte bVar3;
  long *plVar4;
  long *plVar5;
  char cVar6;
  long *plVar7;
  undefined8 uVar8;
  long *plVar9;
  ulong uVar10;
  long *plVar11;
  ulong uVar12;
  ulong uVar13;
  long lVar14;
  undefined8 local_60;
  undefined4 local_58;
  int local_54;
  undefined2 uStack_50;
  undefined2 uStack_4e;
  undefined6 uStack_4c;
  long local_38;
  
  local_38 = *(long *)PTR____stack_chk_guard_10082cb58;
  plVar1 = (long *)(param_1 + 0x138);
  local_60 = param_2;
  plVar7 = (long *)FUN_1002790a8(plVar1,&local_60);
  if (plVar7 == (long *)0x0) {
    if (DAT_1008c7568 != -1) {
      _dispatch_once(&DAT_1008c7568,&PTR___NSConcreteGlobalBlock_100855dc0);
    }
    uVar8 = (*(code *)PTR__objc_retain_10082c7b8)(DAT_1008c7560);
    cVar6 = _os_log_type_enabled(uVar8,2);
    if (cVar6 != '\0') {
      local_58 = 0x8000100;
      local_54 = (int)local_60;
      uStack_50 = (undefined2)((ulong)local_60 >> 0x20);
      uStack_4e = (undefined2)((ulong)local_60 >> 0x30);
      __os_log_impl(0x100000000,uVar8,2,"close: 0x%16.16llx (skipped)",&local_58,0xc);
    }
    (*(code *)PTR__objc_release_10082c7b0)(uVar8);
    goto LAB_10027e88a;
  }
  if (param_3 != 0) {
    if (DAT_1008c7568 != -1) {
      _dispatch_once(&DAT_1008c7568,&PTR___NSConcreteGlobalBlock_100855dc0);
    }
    uVar8 = (*(code *)PTR__objc_retain_10082c7b8)(DAT_1008c7560);
    cVar6 = _os_log_type_enabled(uVar8,2);
    if (cVar6 != '\0') {
      local_58 = 0x4000200;
      uStack_50 = 0x800;
      uStack_4e = (undefined2)local_60;
      uStack_4c = (undefined6)((ulong)local_60 >> 0x10);
      local_54 = param_3;
      __os_log_impl(0x100000000,uVar8,2,"close: removed clientID:%u for db:0x%16.16llx",&local_58,
                    0x12);
    }
    (*(code *)PTR__objc_release_10082c7b0)(uVar8);
    plVar4 = plVar7 + 5;
    plVar9 = (long *)FUN_100285854(plVar4,param_3);
    if (plVar9 != (long *)0x0) {
      lVar14 = *plVar9;
      uVar12 = plVar9[1];
      uVar2 = plVar7[6];
      uVar10 = uVar2 - (uVar2 >> 1 & 0x5555555555555555);
      uVar10 = (uVar10 >> 2 & 0x3333333333333333) + (uVar10 & 0x3333333333333333);
      uVar10 = ((uVar10 >> 4) + uVar10 & 0xf0f0f0f0f0f0f0f) * 0x101010101010101;
      if (uVar10 >> 0x38 < 2) {
        uVar12 = uVar12 & uVar2 - 1;
      }
      else if (uVar2 <= uVar12) {
        uVar12 = uVar12 % uVar2;
      }
      plVar5 = *(long **)(*plVar4 + uVar12 * 8);
      do {
        plVar11 = plVar5;
        plVar5 = (long *)*plVar11;
      } while ((long *)*plVar11 != plVar9);
      bVar3 = (byte)(uVar10 >> 0x38);
      if (plVar11 == plVar7 + 7) {
LAB_10027e613:
        if (lVar14 == 0) {
LAB_10027e640:
          *(undefined8 *)(*plVar4 + uVar12 * 8) = 0;
          lVar14 = *plVar9;
          goto LAB_10027e64c;
        }
        uVar10 = *(ulong *)(lVar14 + 8);
        if (bVar3 < 2) {
          uVar13 = uVar2 - 1 & uVar10;
        }
        else {
          uVar13 = uVar10;
          if (uVar2 <= uVar10) {
            uVar13 = uVar10 % uVar2;
          }
        }
        if (uVar13 != uVar12) goto LAB_10027e640;
LAB_10027e655:
        if (bVar3 < 2) {
          uVar10 = uVar10 & uVar2 - 1;
        }
        else if (uVar2 <= uVar10) {
          uVar10 = uVar10 % uVar2;
        }
        if (uVar10 != uVar12) {
          *(long **)(*plVar4 + uVar10 * 8) = plVar11;
          lVar14 = *plVar9;
        }
      }
      else {
        uVar10 = plVar11[1];
        if (bVar3 < 2) {
          uVar10 = uVar10 & uVar2 - 1;
        }
        else if (uVar2 <= uVar10) {
          uVar10 = uVar10 % uVar2;
        }
        if (uVar10 != uVar12) goto LAB_10027e613;
LAB_10027e64c:
        if (lVar14 != 0) {
          uVar10 = *(ulong *)(lVar14 + 8);
          goto LAB_10027e655;
        }
        lVar14 = 0;
      }
      *plVar11 = lVar14;
      *plVar9 = 0;
      plVar7[8] = plVar7[8] + -1;
      operator_delete(plVar9);
    }
  }
  if (plVar7[8] != 0) goto LAB_10027e88a;
  if (DAT_1008c7568 != -1) {
    _dispatch_once(&DAT_1008c7568,&PTR___NSConcreteGlobalBlock_100855dc0);
  }
  uVar8 = (*(code *)PTR__objc_retain_10082c7b8)(DAT_1008c7560);
  cVar6 = _os_log_type_enabled(uVar8,2);
  if (cVar6 != '\0') {
    local_58 = 0x8000100;
    local_54 = (int)local_60;
    uStack_50 = (undefined2)((ulong)local_60 >> 0x20);
    uStack_4e = (undefined2)((ulong)local_60 >> 0x30);
    __os_log_impl(0x100000000,uVar8,2,"closing db:0x%16.16llx",&local_58,0xc);
  }
  (*(code *)PTR__objc_release_10082c7b0)(uVar8);
  (*(code *)PTR__objc_msgSend_10082c770)
            (*(undefined8 *)(param_1 + 0x28),PTR_s_closeDatabase__10088c5c0,local_60);
  lVar14 = *plVar7;
  uVar12 = plVar7[1];
  uVar2 = *(ulong *)(param_1 + 0x140);
  uVar10 = uVar2 - (uVar2 >> 1 & 0x5555555555555555);
  uVar10 = (uVar10 >> 2 & 0x3333333333333333) + (uVar10 & 0x3333333333333333);
  uVar10 = ((uVar10 >> 4) + uVar10 & 0xf0f0f0f0f0f0f0f) * 0x101010101010101;
  if (uVar10 >> 0x38 < 2) {
    uVar12 = uVar12 & uVar2 - 1;
  }
  else if (uVar2 <= uVar12) {
    uVar12 = uVar12 % uVar2;
  }
  plVar4 = *(long **)(*plVar1 + uVar12 * 8);
  do {
    plVar9 = plVar4;
    plVar4 = (long *)*plVar9;
  } while ((long *)*plVar9 != plVar7);
  bVar3 = (byte)(uVar10 >> 0x38);
  if (plVar9 == (long *)(param_1 + 0x148)) {
LAB_10027e7f3:
    if (lVar14 == 0) {
LAB_10027e820:
      *(undefined8 *)(*plVar1 + uVar12 * 8) = 0;
      lVar14 = *plVar7;
      goto LAB_10027e82b;
    }
    uVar10 = *(ulong *)(lVar14 + 8);
    if (bVar3 < 2) {
      uVar13 = uVar2 - 1 & uVar10;
    }
    else {
      uVar13 = uVar10;
      if (uVar2 <= uVar10) {
        uVar13 = uVar10 % uVar2;
      }
    }
    if (uVar13 != uVar12) goto LAB_10027e820;
LAB_10027e834:
    if (bVar3 < 2) {
      uVar10 = uVar10 & uVar2 - 1;
    }
    else if (uVar2 <= uVar10) {
      uVar10 = uVar10 % uVar2;
    }
    if (uVar10 != uVar12) {
      *(long **)(*plVar1 + uVar10 * 8) = plVar9;
      lVar14 = *plVar7;
    }
  }
  else {
    uVar10 = plVar9[1];
    if (bVar3 < 2) {
      uVar10 = uVar10 & uVar2 - 1;
    }
    else if (uVar2 <= uVar10) {
      uVar10 = uVar10 % uVar2;
    }
    if (uVar10 != uVar12) goto LAB_10027e7f3;
LAB_10027e82b:
    if (lVar14 != 0) {
      uVar10 = *(ulong *)(lVar14 + 8);
      goto LAB_10027e834;
    }
    lVar14 = 0;
  }
  *plVar9 = lVar14;
  *plVar7 = 0;
  *(long *)(param_1 + 0x150) = *(long *)(param_1 + 0x150) + -1;
  FUN_1002842e4(plVar7 + 5);
  operator_delete(plVar7);
LAB_10027e88a:
  if (*(long *)PTR____stack_chk_guard_10082cb58 == local_38) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  ___stack_chk_fail();
}

