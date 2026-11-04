// name: FUN_1001e0077
// address: 1001e0077

short FUN_1001e0077(long param_1,uint param_2,short *param_3,undefined8 param_4)

{
  long lVar1;
  char cVar2;
  uint uVar3;
  int iVar4;
  uint uVar5;
  undefined8 uVar6;
  uint uVar7;
  uint uVar8;
  bool bVar10;
  ulong uVar11;
  uint uVar12;
  ulong uVar13;
  bool bVar14;
  short local_5c;
  undefined4 local_58;
  char *local_54;
  undefined2 local_4c;
  char *local_4a;
  long local_38;
  ulong uVar9;
  
  local_38 = *(long *)PTR____stack_chk_guard_10082cb58;
  uVar3 = FUN_1001dfe99(param_3);
  iVar4 = FUN_1001dfe99(param_4);
  uVar5 = FUN_1001dfe99(param_1);
  uVar13 = 0;
  if (uVar5 == 0) {
    local_5c = 0;
  }
  else {
    local_5c = 0;
    do {
      uVar12 = (uint)uVar13;
      uVar8 = uVar12;
      if ((uVar12 < uVar5 && uVar3 != 0) && *(short *)(param_1 + uVar13 * 2) == *param_3) {
        lVar1 = param_1 + uVar13 * 2;
        bVar10 = false;
        uVar9 = uVar13;
        uVar11 = 1;
        do {
          if (uVar3 == uVar11) {
            bVar10 = true;
          }
          uVar8 = (int)uVar9 + 1;
          uVar9 = (ulong)uVar8;
        } while (((uVar13 + uVar11 < (ulong)uVar5) &&
                 (*(short *)(lVar1 + uVar11 * 2) == param_3[uVar11])) &&
                (bVar14 = uVar11 < uVar3, uVar11 = uVar11 + 1, bVar14));
        if (bVar10) {
          uVar7 = (iVar4 - uVar3) + uVar5;
          if (param_2 < uVar7) {
            uVar6 = FUN_1001cc310();
            cVar2 = _os_log_type_enabled(uVar6,0x10);
            if (cVar2 != '\0') {
              local_58 = 0x8220202;
              local_54 = "Assertion failure";
              local_4c = 0x822;
              local_4a = "haveRoom";
              __os_log_error_impl(0x100000000,uVar6,0x10,"%{public}s: (%{public}s)",&local_58,0x16);
            }
            FUN_1001782e9(0,0);
          }
          else {
            FUN_1001c631b(param_1 + (ulong)(uVar12 + uVar3) * 2,
                          param_1 + (ulong)(uVar12 + iVar4) * 2,(uVar5 - (uVar12 + uVar3)) * 2 + 2);
            FUN_1001c631b(param_4,lVar1,iVar4 * 2);
            local_5c = local_5c + 1;
            uVar5 = uVar7;
          }
        }
      }
      uVar13 = (ulong)(uVar8 + 1);
    } while (uVar8 + 1 < uVar5);
  }
  if (*(long *)PTR____stack_chk_guard_10082cb58 != local_38) {
                    /* WARNING: Subroutine does not return */
    ___stack_chk_fail();
  }
  return local_5c;
}

