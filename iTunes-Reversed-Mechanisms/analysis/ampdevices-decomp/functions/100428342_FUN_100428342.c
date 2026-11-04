// name: FUN_100428342
// address: 100428342

void FUN_100428342(undefined8 param_1,byte *param_2,uint param_3,long param_4,uint param_5,
                  uint *param_6)

{
  byte bVar1;
  ushort uVar2;
  char cVar3;
  undefined1 *puVar4;
  undefined8 uVar5;
  uint uVar6;
  uint uVar7;
  ushort uVar8;
  long lVar9;
  byte *pbVar10;
  ushort *puVar11;
  ushort *puVar12;
  byte *pbVar13;
  bool bVar14;
  undefined1 local_158 [256];
  uint local_58;
  char *local_54;
  undefined2 local_4c;
  char *local_4a;
  long local_38;
  
  local_38 = *(long *)PTR____stack_chk_guard_10082cb58;
  *param_6 = 0;
  if ((int)param_3 < 5 || param_2 == (byte *)0x0) goto LAB_10042837e;
  bVar1 = *param_2;
  if (bVar1 == 0) {
    puVar4 = local_158;
    if ((param_3 < 0x100) ||
       (puVar4 = (undefined1 *)FUN_1001c63e1(param_3), puVar4 != (undefined1 *)0x0)) {
      FUN_100428138(param_1,param_2,param_3,puVar4,param_3,&local_58);
      FUN_10042753a(param_1,puVar4,local_58,param_4,param_5,param_6);
      if (puVar4 != local_158) {
        FUN_1001c64c1(puVar4);
      }
    }
    else {
      uVar5 = FUN_1001cc310();
      cVar3 = _os_log_type_enabled(uVar5,0x10);
      if (cVar3 != '\0') {
        local_58 = 0x8220202;
        local_54 = "Assertion failure";
        local_4c = 0x822;
        local_4a = "textPtr != nullptr";
        __os_log_error_impl(0x100000000,uVar5,0x10,"%{public}s: (%{public}s)",&local_58,0x16);
      }
      FUN_1001782e9(0,0);
    }
    goto LAB_10042837e;
  }
  if (bVar1 < 3) {
    puVar11 = (ushort *)(param_2 + 4);
    if (param_3 - 4 < 2) {
      if (bVar1 == 1) goto LAB_10042837e;
      uVar6 = 1;
      bVar14 = false;
    }
    else {
      uVar7 = param_3 - 6;
      do {
        uVar6 = uVar7;
        puVar12 = puVar11;
        puVar11 = puVar12 + 1;
        if (*puVar12 == 0) break;
        uVar7 = uVar6 - 2;
      } while (1 < uVar6);
      if (bVar1 == 1) {
        if ((int)uVar6 < 2) goto LAB_10042837e;
        uVar2 = *puVar11;
        uVar8 = uVar2 << 8 | uVar2 >> 8;
        if ((uVar8 == 0xfeff) || (uVar8 == 0xfffe)) {
          bVar14 = uVar2 != 0xfffe;
          puVar11 = puVar12 + 2;
          uVar6 = uVar6 - 2;
        }
        else {
          bVar14 = true;
        }
      }
      else {
        bVar14 = false;
      }
    }
    uVar6 = (int)uVar6 >> 1;
    uVar7 = param_5;
    if (uVar6 < param_5) {
      uVar7 = uVar6;
    }
    if (uVar7 == 0) {
      uVar7 = 0;
    }
    else {
      if (uVar6 < param_5) {
        param_5 = uVar6;
      }
      lVar9 = 0;
      do {
        uVar2 = puVar11[lVar9];
        uVar8 = uVar2 << 8 | uVar2 >> 8;
        if (bVar14) {
          uVar8 = uVar2;
        }
        if (uVar8 == 0) {
          uVar7 = (uint)lVar9;
          break;
        }
        *(ushort *)(param_4 + lVar9 * 2) = uVar8;
        lVar9 = lVar9 + 1;
      } while (param_5 != (uint)lVar9);
    }
    *param_6 = uVar7;
    goto LAB_10042837e;
  }
  if (bVar1 != 3) goto LAB_10042837e;
  pbVar10 = param_2 + 4;
  uVar6 = param_3 - 7;
  do {
    uVar7 = uVar6;
    pbVar13 = pbVar10;
    if ((int)(uVar7 + 3) < 1) goto LAB_10042837e;
    pbVar10 = pbVar13 + 1;
    uVar6 = uVar7 - 1;
  } while (*pbVar13 != 0);
  uVar6 = uVar7 + 2;
  if (uVar6 < 3) {
LAB_1004285a9:
    if (uVar6 == 0) goto LAB_10042837e;
  }
  else if (((*pbVar10 == 0xef) && (pbVar13[2] == 0xbb)) && (pbVar13[3] == 0xbf)) {
    pbVar10 = pbVar13 + 4;
    uVar6 = uVar7 - 1;
    goto LAB_1004285a9;
  }
  FUN_1001e7237(pbVar10,uVar6,param_4,param_5,&local_58);
  *param_6 = local_58;
LAB_10042837e:
  if (*(long *)PTR____stack_chk_guard_10082cb58 != local_38) {
                    /* WARNING: Subroutine does not return */
    ___stack_chk_fail();
  }
  return;
}

