// name: FUN_10049a863
// address: 10049a863

long FUN_10049a863(long param_1,uint param_2,char param_3)

{
  char cVar1;
  long lVar2;
  undefined4 *puVar3;
  undefined8 uVar4;
  int *piVar5;
  ulong uVar6;
  ulong uVar7;
  uint uVar8;
  uint uVar10;
  ulong uVar11;
  undefined4 local_48;
  char *local_44;
  undefined2 local_3c;
  char *local_3a;
  long local_28;
  ulong uVar9;
  
  local_28 = *(long *)PTR____stack_chk_guard_10082cb58;
  cVar1 = FUN_100495380();
  if (cVar1 == '\0') {
    uVar4 = FUN_1001cc310();
    cVar1 = _os_log_type_enabled(uVar4,0x10);
    if (cVar1 != '\0') {
      local_48 = 0x8220202;
      local_44 = "Assertion failure";
      local_3c = 0x822;
      local_3a = "ITImageLibraryIsValid(imageLibrary)";
      __os_log_error_impl(0x100000000,uVar4,0x10,"%{public}s: err == (%d)",&local_48,0x16);
    }
    lVar2 = 0;
    FUN_1001782e9(0,0);
    goto LAB_10049a8eb;
  }
  if ((param_3 == '\0') || (*(char *)(param_1 + 7) != '\0')) {
LAB_10049a89b:
    for (lVar2 = FUN_100496392(param_1); lVar2 != 0; lVar2 = FUN_100496449(lVar2)) {
      if (*(uint *)(lVar2 + 0x18) == param_2) goto LAB_10049a8eb;
    }
LAB_10049a8c1:
    lVar2 = 0;
  }
  else {
    piVar5 = *(int **)(param_1 + 0x13f8);
    if (piVar5 == (int *)0x0) {
      puVar3 = (undefined4 *)FUN_10049a729(param_1);
      *(undefined4 **)(param_1 + 0x13f8) = puVar3;
      if (puVar3 == (undefined4 *)0x0) {
        uVar4 = FUN_1001cc310();
        cVar1 = _os_log_type_enabled(uVar4,0x10);
        if (cVar1 != '\0') {
          local_48 = 0x8220202;
          local_44 = "Assertion failure";
          local_3c = 0x822;
          local_3a = "imageLibrary->albumRecordIDLookupTable != nullptr";
          __os_log_error_impl(0x100000000,uVar4,0x10,"%{public}s: err == (%d)",&local_48,0x16);
        }
        FUN_1001782e9(0,0);
      }
      else {
        FUN_1001d26f2(puVar3 + 2,*puVar3,FUN_10049a83f);
      }
      piVar5 = *(int **)(param_1 + 0x13f8);
      if (piVar5 == (int *)0x0) goto LAB_10049a89b;
    }
    uVar8 = *piVar5 - 1;
    uVar9 = (ulong)uVar8;
    uVar7 = 0;
    uVar10 = uVar8;
    while (1 < (int)uVar10) {
      uVar11 = (ulong)((uint)((int)uVar9 + (int)uVar7) >> 1);
      lVar2 = *(long *)(piVar5 + uVar11 * 2 + 2);
      if (*(uint *)(lVar2 + 0x18) == param_2) goto LAB_10049a8eb;
      uVar6 = uVar11;
      if (param_2 <= *(uint *)(lVar2 + 0x18)) {
        uVar6 = uVar7;
        uVar9 = uVar11;
      }
      uVar8 = (uint)uVar9;
      uVar7 = uVar6;
      uVar10 = uVar8 - (int)uVar6;
    }
    do {
      if ((long)(int)uVar8 < (long)uVar7) goto LAB_10049a8c1;
      lVar2 = *(long *)(piVar5 + uVar7 * 2 + 2);
      uVar7 = uVar7 + 1;
    } while (*(uint *)(lVar2 + 0x18) != param_2);
  }
LAB_10049a8eb:
  if (*(long *)PTR____stack_chk_guard_10082cb58 == local_28) {
    return lVar2;
  }
                    /* WARNING: Subroutine does not return */
  ___stack_chk_fail();
}

