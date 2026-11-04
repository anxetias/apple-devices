// name: FUN_1003a2334
// address: 1003a2334

void FUN_1003a2334(long param_1)

{
  ushort uVar1;
  char cVar2;
  int iVar3;
  int *piVar4;
  long lVar5;
  undefined8 uVar6;
  int iVar7;
  long lVar8;
  bool bVar9;
  bool bVar10;
  int local_5c;
  undefined4 local_58;
  char *local_54;
  undefined2 local_4c;
  char *local_4a;
  long local_38;
  
  local_38 = *(long *)PTR____stack_chk_guard_10082cb58;
  *(byte *)(param_1 + 0xfa) = *(byte *)(param_1 + 0xfa) & 0xfd;
  uVar1 = *(ushort *)(param_1 + 0xf8);
  *(ushort *)(param_1 + 0xf8) = uVar1 & 0xdfff;
  *(undefined4 *)(param_1 + 0x78) = 0;
  iVar3 = *(int *)(param_1 + 0x10);
  if (iVar3 == 1) goto LAB_1003a2581;
  if ((uVar1 & 2) == 0) {
    FUN_10055ea6a(param_1);
    iVar3 = *(int *)(param_1 + 0x10);
  }
  lVar8 = *(long *)(param_1 + 0x48);
  lVar5 = *(long *)(param_1 + 0x60);
  if (lVar5 == 0) {
    local_5c = 0;
    iVar7 = 0;
    if (iVar3 != 2) goto LAB_1003a2581;
  }
  else {
    if (iVar3 - 2U < 2) {
      piVar4 = (int *)(lVar5 + 0xe4);
LAB_1003a23e1:
      if (*piVar4 != 0) {
        FUN_1001de8c6(param_1 + 0xb8,*(undefined8 *)(param_1 + 0xb8));
      }
    }
    else {
      if (iVar3 == 4) {
        piVar4 = (int *)(*(long *)(lVar5 + 0x78) + 0x28);
        goto LAB_1003a23e1;
      }
      uVar6 = FUN_1001cc310();
      cVar2 = _os_log_type_enabled(uVar6,0x10);
      if (cVar2 != '\0') {
        local_58 = 0x8220202;
        local_54 = "Assertion failure";
        local_4c = 0x822;
        local_4a = "false";
        __os_log_error_impl(0x100000000,uVar6,0x10,"%{public}s: (%{public}s)",&local_58,0x16);
      }
      FUN_1001782e9(0,0);
    }
    if (*(int *)(param_1 + 0x10) != 2) goto LAB_1003a2581;
    bVar9 = true;
    iVar7 = 0;
    local_5c = 0;
    bVar10 = true;
    do {
      if (!(bool)(bVar10 | bVar9)) break;
      if (bVar9) {
        iVar3 = *(int *)(lVar5 + 0xe0);
        if (iVar3 == 0) {
          iVar3 = *(int *)(lVar5 + 0xdc);
        }
        if (iVar7 == 0) {
          bVar9 = true;
          iVar7 = iVar3;
        }
        else {
          bVar9 = iVar3 == iVar7;
          if (!bVar9) {
            iVar7 = 0;
          }
        }
      }
      else {
        bVar9 = false;
      }
      if (bVar10) {
        if (local_5c == 0) {
          bVar10 = true;
          local_5c = *(int *)(lVar5 + 0xe0);
        }
        else {
          bVar10 = *(int *)(lVar5 + 0xe0) == local_5c;
          if (!bVar10) {
            local_5c = 0;
          }
        }
      }
      else {
        bVar10 = false;
      }
      lVar5 = FUN_1003a095a();
    } while (lVar5 != 0);
  }
  if (iVar7 != *(int *)(param_1 + 0x100)) {
    lVar5 = lVar8 + 0x1cb0;
    FUN_1001dcff5(lVar5);
    iVar3 = FUN_1001dcecf(lVar5,iVar7);
    if ((iVar3 != -0x80) && (iVar3 != 0)) {
      uVar6 = FUN_1001cc310();
      cVar2 = _os_log_type_enabled(uVar6,0x10);
      if (cVar2 != '\0') {
        local_58 = 0x8220202;
        local_54 = "Assertion failure";
        local_4c = 0x400;
        local_4a = (char *)CONCAT44(local_4a._4_4_,iVar3);
        __os_log_error_impl(0x100000000,uVar6,0x10,"%{public}s: err == (%d)",&local_58,0x12);
      }
    }
    *(int *)(param_1 + 0x100) = iVar7;
  }
  if (local_5c != *(int *)(param_1 + 0x104)) {
    lVar8 = lVar8 + 0x1cb0;
    FUN_1001dcff5(lVar8);
    iVar3 = FUN_1001dcecf(lVar8,local_5c);
    if ((iVar3 != -0x80) && (iVar3 != 0)) {
      uVar6 = FUN_1001cc310();
      cVar2 = _os_log_type_enabled(uVar6,0x10);
      if (cVar2 != '\0') {
        local_58 = 0x8220202;
        local_54 = "Assertion failure";
        local_4c = 0x400;
        local_4a = (char *)CONCAT44(local_4a._4_4_,iVar3);
        __os_log_error_impl(0x100000000,uVar6,0x10,"%{public}s: err == (%d)",&local_58,0x12);
      }
    }
    *(int *)(param_1 + 0x104) = local_5c;
  }
LAB_1003a2581:
  if (*(long *)PTR____stack_chk_guard_10082cb58 != local_38) {
                    /* WARNING: Subroutine does not return */
    ___stack_chk_fail();
  }
  return;
}

