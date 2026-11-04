// name: FUN_1003d8029
// address: 1003d8029

undefined8
FUN_1003d8029(long param_1,char param_2,int param_3,char param_4,byte param_5,byte param_6)

{
  byte bVar1;
  uint uVar2;
  long lVar3;
  char cVar4;
  long lVar5;
  undefined8 uVar6;
  uint uVar7;
  int iVar8;
  long lVar9;
  undefined4 local_58;
  char *local_54;
  undefined2 local_4c;
  char *local_4a;
  long local_38;
  
  local_38 = *(long *)PTR____stack_chk_guard_10082cb58;
  cVar4 = FUN_100495380();
  if (cVar4 == '\0') {
    uVar6 = FUN_1001cc310();
    cVar4 = _os_log_type_enabled(uVar6,0x10);
    if (cVar4 != '\0') {
      local_58 = 0x8220202;
      local_54 = "Assertion failure";
      local_4c = 0x822;
      local_4a = "ITImageLibraryIsValid(imageLibrary)";
      __os_log_error_impl(0x100000000,uVar6,0x10,"%{public}s: (%{public}s)",&local_58,0x16);
    }
    FUN_1001782e9(0,0);
    uVar6 = 0xffffffce;
    goto LAB_1003d81f8;
  }
  if ((byte)(param_5 | param_6 | param_2 == '\0') == 1) {
    for (lVar5 = FUN_100496392(param_1); lVar5 != 0; lVar5 = FUN_100496449(lVar5)) {
      bVar1 = *(byte *)(lVar5 + 0x11);
      iVar8 = 1;
      if (bVar1 == 1) {
LAB_1003d80a1:
        *(int *)(lVar5 + 0xbc) = iVar8;
      }
      else if ((*(int *)(lVar5 + 0xbc) == 0) &&
              ((((uVar7 = (uint)bVar1, param_2 == '\0' && (bVar1 != 0xf)) && (uVar7 != 0xc)) ||
               (((param_5 != 0 && ((0x10 < uVar7 || ((0x19801U >> (uVar7 & 0x1f) & 1) == 0)))) ||
                (uVar7 == 0xf && param_6 == 1)))))) {
        iVar8 = (uint)*(ushort *)(lVar5 + 0x12) + param_3;
        goto LAB_1003d80a1;
      }
    }
    param_3 = param_3 + *(int *)(param_1 + 0x20);
    if (param_2 != '\0') goto LAB_1003d8167;
    lVar5 = FUN_100496019(param_1);
    if (lVar5 != 0) {
      do {
        if (*(int *)(lVar5 + 0xa4) == 0) {
          *(int *)(lVar5 + 0xa4) = param_3;
        }
        lVar5 = FUN_1004960d0(lVar5);
      } while (lVar5 != 0);
      goto LAB_1003d8167;
    }
  }
  else {
LAB_1003d8167:
    if (param_4 != -1 && param_2 == '\x01') {
      FUN_1003d1639(param_1,param_3,param_4,0);
    }
  }
  lVar5 = FUN_100496392();
  while (lVar5 != 0) {
    if (((*(char *)(lVar5 + 0x11) != '\x01') && (uVar7 = *(uint *)(lVar5 + 0xbc), uVar7 != 0)) &&
       (uVar2 = *(uint *)(lVar5 + 0x50), (ulong)uVar2 != 0)) {
      lVar5 = *(long *)(lVar5 + 0x58);
      lVar9 = 0;
      do {
        if (((*(char *)(lVar5 + 8 + lVar9) == '\0') &&
            (lVar3 = *(long *)(lVar5 + lVar9), lVar3 != 0)) &&
           (uVar7 <= *(int *)(lVar3 + 0xa4) - 1U)) {
          *(uint *)(lVar3 + 0xa4) = uVar7;
        }
        lVar9 = lVar9 + 0x10;
      } while ((ulong)uVar2 << 4 != lVar9);
    }
    lVar5 = FUN_100496449();
  }
  uVar6 = 0;
LAB_1003d81f8:
  if (*(long *)PTR____stack_chk_guard_10082cb58 == local_38) {
    return uVar6;
  }
                    /* WARNING: Subroutine does not return */
  ___stack_chk_fail();
}

