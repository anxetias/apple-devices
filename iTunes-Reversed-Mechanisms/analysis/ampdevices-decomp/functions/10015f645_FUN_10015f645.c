// name: FUN_10015f645
// address: 10015f645

undefined4
FUN_10015f645(long param_1,uint param_2,long param_3,uint param_4,uint *param_5,ulong param_6)

{
  byte bVar1;
  byte bVar2;
  char cVar3;
  undefined4 uVar4;
  undefined8 uVar5;
  undefined *puVar6;
  uint uVar7;
  undefined2 uVar8;
  uint uVar9;
  long lVar10;
  uint uVar11;
  uint uVar12;
  ulong uVar13;
  int iVar14;
  uint uVar15;
  undefined4 local_5c;
  undefined4 local_58;
  char *local_54;
  undefined2 local_4c;
  char *local_4a;
  long local_38;
  
  local_38 = *(long *)PTR____stack_chk_guard_10082cb58;
  puVar6 = &DAT_10070c290;
  if ((param_6 & 1) == 0) {
    puVar6 = &DAT_10070c190;
  }
  if (param_2 == 0) {
    uVar11 = 0;
    iVar14 = 0;
    uVar9 = 0;
    local_5c = 0;
LAB_10015f882:
    uVar8 = (undefined2)(uVar9 >> 8);
    uVar4 = 0xffffff32;
    if (iVar14 == 0) {
      uVar4 = local_5c;
    }
    if ((param_6 & 2) != 0) {
      uVar4 = local_5c;
    }
  }
  else {
    uVar13 = 0;
    uVar12 = 0;
    uVar11 = 0;
    iVar14 = 0;
    uVar9 = 0;
    local_5c = 0;
    do {
      bVar1 = *(byte *)(param_1 + uVar13);
      bVar2 = puVar6[bVar1];
      if (bVar2 == 0xff) {
        if (bVar1 == 0x3d) {
          iVar14 = iVar14 + 1;
        }
        else {
          if ((char)bVar1 < '\0') {
            uVar7 = ___maskrune((uint)bVar1,0x4000);
          }
          else {
            uVar7 = *(uint *)(PTR___DefaultRuneLocale_10082cae8 + (ulong)bVar1 * 4 + 0x3c) & 0x4000;
          }
          if (uVar7 == 0) {
            local_5c = 0xffffff32;
          }
          if ((param_6 & 4) == 0) {
            local_5c = 0xffffff32;
          }
        }
      }
      else {
        if (iVar14 != 0) {
          uVar5 = FUN_1001cc310();
          cVar3 = _os_log_type_enabled(uVar5,0x10);
          if (cVar3 != '\0') {
            local_58 = 0x8220202;
            local_54 = "Assertion failure";
            local_4c = 0x822;
            local_4a = "padCount == 0";
            __os_log_error_impl(0x100000000,uVar5,0x10,"%{public}s: (%{public}s)",&local_58,0x16);
          }
          FUN_1001782e9(0,0);
        }
        uVar7 = uVar9 << 6;
        uVar9 = bVar2 | uVar7;
        uVar12 = uVar12 + 1;
        if ((uVar12 & 3) == 0) {
          if (param_3 == 0) {
            uVar9 = 0;
          }
          else {
            uVar15 = uVar11 + 2;
            if (param_4 <= uVar15) {
              uVar5 = FUN_1001cc310();
              cVar3 = _os_log_type_enabled(uVar5,0x10);
              if (cVar3 != '\0') {
                FUN_10066e40f(uVar5);
              }
              FUN_1001782e9(0,0);
              uVar4 = 0xffffffce;
              uVar9 = uVar11;
              goto LAB_10015f9c7;
            }
            *(char *)(param_3 + (ulong)uVar11) = (char)(uVar7 >> 0x10);
            *(char *)(param_3 + (ulong)(uVar11 + 1)) = (char)(uVar7 >> 8);
            uVar11 = uVar11 + 3;
            *(char *)(param_3 + (ulong)uVar15) = (char)uVar9;
            uVar9 = 0;
          }
        }
      }
      uVar13 = uVar13 + 1;
    } while (param_2 != uVar13);
    switch(uVar12 & 3) {
    case 0:
      goto LAB_10015f882;
    case 1:
      uVar4 = 0xffffff32;
      break;
    case 2:
      uVar4 = 0xffffff32;
      if (iVar14 == 2) {
        uVar4 = local_5c;
      }
      if ((param_6 & 2) != 0) {
        uVar4 = local_5c;
      }
      uVar9 = uVar9 << 0xc;
      iVar14 = 2;
      break;
    case 3:
      uVar4 = 0xffffff32;
      if (iVar14 == 1) {
        uVar4 = local_5c;
      }
      if ((param_6 & 2) != 0) {
        uVar4 = local_5c;
      }
      uVar9 = uVar9 << 6;
      iVar14 = 1;
    }
    uVar8 = (undefined2)(uVar9 >> 8);
  }
  uVar9 = uVar11;
  if (iVar14 != 0 && param_3 != 0) {
    if (uVar11 < param_4) {
      *(char *)(param_3 + (ulong)uVar11) = (char)((ushort)uVar8 >> 8);
      lVar10 = (ulong)uVar11 + 1;
      uVar9 = (uint)lVar10;
      if (iVar14 == 1) {
        if (uVar9 < param_4) {
          *(char *)(param_3 + lVar10) = (char)uVar8;
          uVar9 = uVar11 + 2;
        }
        else {
          uVar5 = FUN_1001cc310();
          cVar3 = _os_log_type_enabled(uVar5,0x10);
          if (cVar3 != '\0') {
            FUN_10066e4fb(uVar5);
          }
          FUN_1001782e9(0,0);
          uVar4 = 0xffffffce;
        }
      }
    }
    else {
      uVar5 = FUN_1001cc310();
      cVar3 = _os_log_type_enabled(uVar5,0x10);
      if (cVar3 != '\0') {
        FUN_10066e485(uVar5);
      }
      FUN_1001782e9(0,0);
      uVar4 = 0xffffffce;
    }
  }
LAB_10015f9c7:
  if (param_5 != (uint *)0x0) {
    *param_5 = uVar9;
  }
  if (*(long *)PTR____stack_chk_guard_10082cb58 != local_38) {
                    /* WARNING: Subroutine does not return */
    ___stack_chk_fail();
  }
  return uVar4;
}

