// name: FUN_1001d0daf
// address: 1001d0daf

int FUN_1001d0daf(ulong param_1,undefined1 *param_2,ulong param_3,long param_4,ulong param_5,
                 undefined8 param_6,undefined4 param_7,byte *param_8)

{
  bool bVar1;
  char cVar2;
  byte bVar3;
  int iVar4;
  int iVar5;
  undefined8 uVar6;
  ulong uVar7;
  bool bVar8;
  ulong uVar9;
  uint uVar10;
  uint uVar11;
  uint uVar12;
  uint uVar13;
  uint uVar14;
  ushort local_438;
  undefined1 local_436 [1022];
  long local_38;
  
  uVar11 = (uint)param_1;
  local_38 = *(long *)PTR____stack_chk_guard_10082cb58;
  if (param_2 == (undefined1 *)0x0) {
    uVar6 = FUN_1001cc310();
    cVar2 = _os_log_type_enabled(uVar6,0x10);
    if (cVar2 != '\0') {
      FUN_1006b1400(uVar6);
    }
LAB_1001d0ec0:
    FUN_1001782e9(0,0);
    iVar4 = -0x32;
    goto LAB_1001d0ece;
  }
  if (param_4 == 0) {
    uVar6 = FUN_1001cc310();
    cVar2 = _os_log_type_enabled(uVar6,0x10);
    if (cVar2 != '\0') {
      FUN_1006b138a(uVar6);
    }
    goto LAB_1001d0ec0;
  }
  if (param_8 == (byte *)0x0) {
    uVar6 = FUN_1001cc310();
    cVar2 = _os_log_type_enabled(uVar6,0x10);
    if (cVar2 != '\0') {
      FUN_1006b1314(uVar6);
    }
    goto LAB_1001d0ec0;
  }
  *param_8 = 0;
  uVar13 = ((uint)(param_1 >> 0x18) & 1 | (uint)(param_1 >> 0x19) & 8) ^ 8;
  uVar14 = uVar11 & 0xffffff;
  uVar12 = (uint)param_5;
  switch(uVar14) {
  case 1:
    bVar3 = FUN_1001e339d(param_2,param_3 & 0xffffffff,param_4,param_5 & 0xffffffff,uVar13);
    goto LAB_1001d0f64;
  case 2:
    if ((~uVar11 & 0xc000000) == 0) {
      iVar4 = FUN_1001d0daf(uVar11 & 0xf7ffffff,param_2,param_3,param_4,param_5,param_6,param_7,
                            param_8);
      if (iVar4 != 0) {
        uVar6 = FUN_1001cc310();
        cVar2 = _os_log_type_enabled(uVar6,0x10);
        if (cVar2 != '\0') {
          FUN_1006b12a8(iVar4,uVar6);
        }
        goto LAB_1001d0ece;
      }
      param_3 = param_3 & 0xffffffff;
      if (*param_8 != 0) goto LAB_1001d0ece;
LAB_1001d10f6:
      FUN_1001e622e(param_2,param_3 & 0xffffffff,0x200,&local_438);
      param_5 = param_5 & 0xffffffff;
      param_2 = local_436;
      param_3 = (ulong)local_438;
    }
    else if ((uVar11 >> 0x1b & 1) != 0) goto LAB_1001d10f6;
    if ((uint)param_5 <= (uint)param_3) {
      uVar7 = param_3 & 0xffffffff;
      uVar14 = FUN_1001e4f5a(param_2,param_3 & 0xffffffff,param_4,param_5 & 0xffffffff,uVar13);
      if (uVar14 != 0) {
        if (((uVar11 >> 0x1a & 1) == 0) || (uVar14 == 1)) {
LAB_1001d1268:
          *param_8 = 1;
        }
        else {
          bVar8 = false;
          do {
            uVar9 = (ulong)uVar14;
            if ((uVar11 >> 0x1b & 1) == 0) {
              iVar4 = FUN_1001e39bb(*(undefined2 *)(param_2 + (long)(int)uVar14 * 2 + -4));
              if (iVar4 == 4) goto LAB_1001d1268;
            }
            else {
              if ((int)uVar14 < 2) {
LAB_1001d1200:
                iVar4 = (int)uVar9;
                if ((!bVar8) && (iVar4 == 1)) goto LAB_1001d1268;
              }
              else {
                do {
                  iVar4 = FUN_1001e39bb(*(undefined2 *)(param_2 + uVar9 * 2 + -4));
                  if (iVar4 != 4) goto LAB_1001d1200;
                  bVar1 = 2 < (long)uVar9;
                  uVar9 = uVar9 - 1;
                } while (bVar1);
                iVar4 = 1;
                if (!bVar8) goto LAB_1001d1268;
              }
              iVar4 = FUN_1001e39bb(*(undefined2 *)(param_2 + (long)iVar4 * 2 + -4));
            }
            if (iVar4 == 8) goto LAB_1001d1268;
            uVar10 = (int)uVar7 - uVar14;
            if (uVar10 < uVar12) break;
            param_2 = param_2 + (long)(int)uVar14 * 2;
            uVar14 = FUN_1001e4f5a(param_2,uVar10,param_4,uVar12,uVar13);
            uVar7 = (ulong)uVar10;
            bVar8 = true;
          } while (uVar14 != 0);
        }
      }
    }
    iVar4 = 0;
    break;
  case 3:
  case 5:
  case 6:
  case 7:
switchD_1001d0e3f_caseD_3:
    iVar5 = FUN_1001e43b6(param_2,param_3 & 0xffffffff,param_4,param_5 & 0xffffffff,uVar13);
    iVar4 = -0x32;
    switch(uVar11 << 0x1c | uVar14 - 0x10 >> 4) {
    case 0:
      *param_8 = 0 < iVar5;
      break;
    case 1:
      *param_8 = -1 < iVar5;
      break;
    default:
      goto switchD_1001d0fb9_caseD_2;
    case 3:
      *param_8 = (byte)((uint)iVar5 >> 0x1f);
      break;
    case 7:
      *param_8 = iVar5 < 1;
    }
    goto LAB_1001d0f6a;
  case 4:
    iVar4 = 0;
    if (uVar12 <= (uint)param_3) {
      iVar5 = FUN_1001e4f5a(param_2,param_5 & 0xffffffff,param_4,param_5 & 0xffffffff,uVar13);
      *param_8 = iVar5 == 1;
    }
    break;
  case 8:
    iVar4 = 0;
    if (uVar12 <= (uint)param_3) {
      bVar3 = FUN_1001e339d(param_2 + (param_5 & 0xffffffff) * -2 + (param_3 & 0xffffffff) * 2,
                            param_5 & 0xffffffff,param_4,param_5 & 0xffffffff,uVar13);
      *param_8 = bVar3;
    }
    break;
  default:
    if ((uVar14 != 0x100) && (uVar14 != 0x200)) goto switchD_1001d0e3f_caseD_3;
    iVar4 = FUN_1001e43b6(param_2,param_3 & 0xffffffff,param_4,param_5 & 0xffffffff,uVar13);
    iVar5 = FUN_1001e43b6(param_2,param_3 & 0xffffffff,param_6,param_7,uVar13);
    bVar3 = iVar5 < (int)(uint)(uVar14 == 0x100) && (int)-(uint)(uVar14 == 0x100) < iVar4;
LAB_1001d0f64:
    *param_8 = bVar3;
LAB_1001d0f6a:
    iVar4 = 0;
  }
switchD_1001d0fb9_caseD_2:
  if ((uVar11 >> 0x19 & 1) != 0) {
    *param_8 = *param_8 == 0;
  }
LAB_1001d0ece:
  if (*(long *)PTR____stack_chk_guard_10082cb58 == local_38) {
    return iVar4;
  }
                    /* WARNING: Subroutine does not return */
  ___stack_chk_fail();
}

