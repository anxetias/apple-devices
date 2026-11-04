// name: FUN_100590118
// address: 100590118

bool FUN_100590118(int param_1)

{
  int *piVar1;
  char cVar2;
  int iVar3;
  long lVar4;
  ulong uVar5;
  int *piVar6;
  long lVar7;
  undefined8 uVar8;
  ulong uVar9;
  bool bVar10;
  long local_268;
  undefined4 local_258;
  char *local_254;
  undefined2 local_24c;
  char *local_24a;
  undefined4 local_58;
  char *local_54;
  undefined2 local_4c;
  char *local_4a;
  long local_38;
  
  local_38 = *(long *)PTR____stack_chk_guard_10082cb58;
  if (DAT_1008c2f98 != (int *)0x0) {
LAB_100590149:
    iVar3 = *DAT_1008c2f98;
    piVar6 = DAT_1008c2f98;
    do {
      piVar6 = piVar6 + 1;
      bVar10 = iVar3 == param_1;
      if (bVar10) break;
      iVar3 = *piVar6;
    } while (iVar3 != 0);
    goto LAB_100590528;
  }
  lVar4 = _CGImageSourceCopyTypeExtensions(&cf_public_camera_raw_image);
  if (lVar4 == 0) {
    uVar8 = FUN_1001cc310();
    cVar2 = _os_log_type_enabled(uVar8,0x10);
    if (cVar2 != '\0') {
      local_24a = "extensionsCFArray != nullptr";
LAB_1005904ce:
      local_24c = 0x822;
      local_254 = "Assertion failure";
      local_258 = 0x8220202;
      __os_log_error_impl(0x100000000,uVar8,0x10,"%{public}s: (%{public}s)",&local_258,0x16);
    }
LAB_1005904f3:
    FUN_1001782e9(0,0);
    FUN_10017060f(lVar4);
    uVar8 = FUN_1001cc310();
  }
  else {
    uVar5 = _CFArrayGetCount(lVar4);
    if ((long)uVar5 < 1) {
      uVar8 = FUN_1001cc310();
      cVar2 = _os_log_type_enabled(uVar8,0x10);
      if (cVar2 != '\0') {
        local_24a = "extensionsCount > 0";
        goto LAB_1005904ce;
      }
      goto LAB_1005904f3;
    }
    uVar9 = 0xffffffffffffffff;
    if (uVar5 < 0x3fffffffffffffff) {
      uVar9 = uVar5 * 4 + 4;
    }
    piVar6 = operator_new__(uVar9,(nothrow_t *)PTR_nothrow_10082c970);
    if (piVar6 == (int *)0x0) {
      uVar8 = FUN_1001cc310();
      cVar2 = _os_log_type_enabled(uVar8,0x10);
      if (cVar2 != '\0') {
        local_24a = "ostypeArray != nullptr";
        goto LAB_1005904ce;
      }
      goto LAB_1005904f3;
    }
    local_268 = 0;
    uVar9 = 0;
    do {
      lVar7 = FUN_100164a01(lVar4,uVar9);
      if (lVar7 == 0) {
        uVar8 = FUN_1001cc310();
        cVar2 = _os_log_type_enabled(uVar8,0x10);
        if (cVar2 != '\0') {
          local_258 = 0x8220202;
          local_254 = "Assertion failure";
          local_24c = 0x822;
          local_24a = "extensionString != nullptr";
          __os_log_error_impl(0x100000000,uVar8,0x10,"%{public}s: (%{public}s)",&local_258,0x16);
        }
        FUN_1001782e9(0,0);
      }
      else {
        cVar2 = FUN_100169c4c(lVar7,&local_258);
        if (cVar2 == '\0') {
          uVar8 = FUN_1001cc310();
          cVar2 = _os_log_type_enabled(uVar8,0x10);
          if (cVar2 != '\0') {
            local_58 = 0x8220202;
            local_54 = "Assertion failure";
            local_4c = 0x822;
            local_4a = "JRCFStringGetUString(extensionString, extensionUString)";
            __os_log_error_impl(0x100000000,uVar8,0x10,"%{public}s: (%{public}s)",&local_58,0x16);
          }
          FUN_1001782e9(0,0);
        }
        else if ((ushort)local_258 < 5) {
          iVar3 = FUN_1001e215a(&local_258);
          piVar6[local_268] = iVar3;
          local_268 = local_268 + 1;
        }
        else {
          uVar8 = FUN_1001cc310();
          cVar2 = _os_log_type_enabled(uVar8,0x10);
          if (cVar2 != '\0') {
            local_58 = 0x8220202;
            local_54 = "Assertion failure";
            local_4c = 0x822;
            local_4a = "extensionUString[0] <= 4";
            __os_log_error_impl(0x100000000,uVar8,0x10,"%{public}s: (%{public}s)",&local_58,0x16);
          }
          FUN_1001782e9(0,0);
        }
      }
      uVar9 = uVar9 + 1;
    } while (uVar5 != uVar9);
    piVar6[local_268] = 0;
    FUN_10017060f(lVar4);
    LOCK();
    bVar10 = DAT_1008c2f98 != (int *)0x0;
    piVar1 = piVar6;
    if (bVar10) {
      piVar1 = DAT_1008c2f98;
    }
    DAT_1008c2f98 = piVar1;
    UNLOCK();
    if (bVar10) {
      operator_delete__(piVar6);
    }
    if (DAT_1008c2f98 != (int *)0x0) goto LAB_100590149;
    uVar8 = FUN_1001cc310();
  }
  cVar2 = _os_log_type_enabled(uVar8,0x10);
  if (cVar2 != '\0') {
    local_258 = 0x8220202;
    local_254 = "Assertion failure";
    local_24c = 0x822;
    local_24a = "ostypeArray != nullptr";
    __os_log_error_impl(0x100000000,uVar8,0x10,"%{public}s: (%{public}s)",&local_258,0x16);
  }
  FUN_1001782e9(0,0);
  bVar10 = false;
LAB_100590528:
  if (*(long *)PTR____stack_chk_guard_10082cb58 != local_38) {
                    /* WARNING: Subroutine does not return */
    ___stack_chk_fail();
  }
  return bVar10;
}

