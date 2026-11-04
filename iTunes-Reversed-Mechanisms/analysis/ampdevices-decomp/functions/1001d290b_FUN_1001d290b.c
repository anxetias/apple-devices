// name: FUN_1001d290b
// address: 1001d290b

void FUN_1001d290b(ulong param_1,uint param_2,uint param_3,code *param_4,undefined8 param_5)

{
  long lVar1;
  char cVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  long lVar6;
  long lVar7;
  undefined8 uVar8;
  ulong uVar9;
  ulong uVar10;
  ulong uVar11;
  ulong uVar12;
  ulong uVar13;
  ulong local_448;
  ulong local_438 [64];
  ulong local_238 [64];
  long local_38;
  
  local_38 = *(long *)PTR____stack_chk_guard_10082cb58;
  if (1 < param_2) {
    uVar10 = (ulong)param_3;
    lVar6 = FUN_1001c63e1(uVar10);
    if (lVar6 != 0) {
      local_238[0] = param_1;
      local_438[0] = (param_2 - 1) * param_3 + param_1;
      lVar7 = -uVar10;
      local_448 = 1;
      do {
        local_448 = (ulong)((int)local_448 - 1);
        uVar12 = local_238[local_448];
        uVar13 = local_438[local_448];
LAB_1001d29d7:
        iVar3 = (int)local_448;
        if (uVar12 < uVar13) {
          uVar9 = uVar12;
          if (param_3 << 4 <= (uint)(uVar13 - uVar12)) {
            lVar1 = ((long)(uVar13 - uVar12) / (long)uVar10 >> 1) * uVar10 + uVar12;
            FUN_1001c631b(uVar12,lVar6,uVar10);
            FUN_1001c631b(lVar1,uVar12,uVar10);
            FUN_1001c631b(lVar6,lVar1,uVar10);
            uVar11 = uVar13;
LAB_1001d2a51:
            uVar9 = uVar9 + uVar10;
            if (uVar9 < uVar11) goto code_r0x0001001d2a59;
            goto LAB_1001d2a7c;
          }
          while (uVar11 = uVar10 + uVar9, uVar11 <= uVar13) {
            iVar4 = 0;
            if (uVar12 <= uVar9) {
              iVar4 = 0;
              do {
                iVar5 = (*param_4)(uVar9,uVar11,param_5);
                if (iVar5 < 1) break;
                uVar9 = uVar9 + lVar7;
                iVar4 = iVar4 + 1;
              } while (uVar12 <= uVar9);
            }
            FUN_1001c631b(uVar11,lVar6,uVar10);
            FUN_1001c631b(uVar9 + uVar10,uVar9 + param_3 * 2,iVar4 * param_3);
            FUN_1001c631b(lVar6,uVar9 + uVar10,uVar10);
            uVar9 = uVar11;
          }
        }
        if (iVar3 == 0) {
          if (*(long *)PTR____stack_chk_guard_10082cb58 == local_38) {
            FUN_1001c64c1(lVar6);
            return;
          }
          goto LAB_1001d2d09;
        }
      } while( true );
    }
    uVar8 = FUN_1001cc310();
    cVar2 = _os_log_type_enabled(uVar8,0x10);
    if (cVar2 != '\0') {
      FUN_1006b2cb6(uVar8);
    }
    FUN_1001782e9(0,0);
  }
  if (*(long *)PTR____stack_chk_guard_10082cb58 == local_38) {
    return;
  }
LAB_1001d2d09:
                    /* WARNING: Subroutine does not return */
  ___stack_chk_fail();
code_r0x0001001d2a59:
  iVar4 = (*param_4)(uVar12,uVar9,param_5);
  if (0 < iVar4) goto LAB_1001d2a51;
LAB_1001d2a7c:
  while ((uVar9 <= uVar11 && (iVar4 = (*param_4)(uVar11,uVar12,param_5), 0 < iVar4))) {
    uVar11 = uVar11 + lVar7;
  }
  if (uVar9 < uVar11) {
    FUN_1001c631b(uVar9,lVar6,uVar10);
    FUN_1001c631b(uVar11,uVar9,uVar10);
    FUN_1001c631b(lVar6,uVar11,uVar10);
    uVar11 = uVar11 + lVar7;
    goto LAB_1001d2a51;
  }
  FUN_1001c631b(uVar12,lVar6,uVar10);
  FUN_1001c631b(uVar11,uVar12,uVar10);
  FUN_1001c631b(lVar6,uVar11,uVar10);
  if ((long)(uVar13 - uVar11) < (long)(uVar11 - uVar12)) {
    if (uVar12 < lVar7 + uVar11) {
      local_238[local_448] = uVar12;
      local_438[local_448] = lVar7 + uVar11;
      local_448 = (ulong)(iVar3 + 1);
    }
    uVar12 = uVar11 + uVar10;
  }
  else {
    if (uVar11 + uVar10 < uVar13) {
      local_238[local_448] = uVar11 + uVar10;
      local_438[local_448] = uVar13;
      local_448 = (ulong)(iVar3 + 1);
    }
    uVar13 = uVar11 + lVar7;
  }
  goto LAB_1001d29d7;
}

