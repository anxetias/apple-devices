// name: FUN_1005061ab
// address: 1005061ab

void FUN_1005061ab(undefined8 param_1,long param_2)

{
  short *psVar1;
  bool bVar2;
  char cVar3;
  int iVar4;
  undefined8 uVar5;
  long lVar6;
  long lVar7;
  ulong uVar8;
  uint uVar9;
  long lVar10;
  undefined1 local_6a8 [16];
  long *local_698;
  ulong local_690;
  long local_688;
  long local_680;
  undefined4 local_678;
  char *local_674;
  undefined2 local_66c;
  int local_66a;
  uint local_658;
  char *local_654;
  undefined2 local_64c;
  char *local_64a;
  undefined1 local_238 [512];
  long local_38;
  
  local_38 = *(long *)PTR____stack_chk_guard_10082cb58;
  if (param_2 == 0) {
LAB_1005065f7:
    uVar5 = FUN_1001cc310();
    cVar3 = _os_log_type_enabled(uVar5,0x10);
    if (cVar3 != '\0') {
      local_658 = 0x8220202;
      local_654 = "Assertion failure";
      local_64c = 0x822;
      local_64a = "DulcimerHandlerDataIsValid(handlerData)";
      __os_log_error_impl(0x100000000,uVar5,0x10,"%{public}s: (%{public}s)",&local_658,0x16);
    }
    FUN_1001782e9(0,0);
    goto LAB_1005068d3;
  }
  local_680 = param_2;
  if (*(int *)(param_2 + 8) != 0x64756c63) {
    uVar5 = FUN_1001cc310();
    cVar3 = _os_log_type_enabled(uVar5,0x10);
    if (cVar3 != '\0') {
      local_658 = 0x8220202;
      local_654 = "Assertion failure (expected to be true)";
      local_64c = 0x822;
      local_64a = "handlerData->magic == kDulcimerHandlerDataMagic";
      __os_log_error_impl(0x100000000,uVar5,0x10,"%{public}s: (%{public}s)",&local_658,0x16);
    }
    cVar3 = FUN_1001782e9(0,1);
    if (cVar3 == '\0') goto LAB_1005065f7;
  }
  lVar10 = *(long *)(local_680 + 0x30);
  if (lVar10 == 0) {
LAB_100506622:
    uVar5 = FUN_1001cc310();
    cVar3 = _os_log_type_enabled(uVar5,0x10);
    if (cVar3 != '\0') {
      local_658 = 0x8220202;
      local_654 = "Assertion failure";
      local_64c = 0x822;
      local_64a = "TrackDataIsValid(trackData)";
      __os_log_error_impl(0x100000000,uVar5,0x10,"%{public}s: (%{public}s)",&local_658,0x16);
    }
    FUN_1001782e9(0,0);
    lVar10 = local_680;
  }
  else {
    if (*(int *)(lVar10 + 0x80) != 0x74646174) {
      uVar5 = FUN_1001cc310();
      cVar3 = _os_log_type_enabled(uVar5,0x10);
      if (cVar3 != '\0') {
        local_658 = 0x8220202;
        local_654 = "Assertion failure (expected to be true)";
        local_64c = 0x822;
        local_64a = "trackData->magic == \'tdat\'";
        __os_log_error_impl(0x100000000,uVar5,0x10,"%{public}s: (%{public}s)",&local_658,0x16);
      }
      cVar3 = FUN_1001782e9(0,1);
      if (cVar3 == '\0') goto LAB_100506622;
    }
    lVar6 = local_680;
    if (DAT_1008c75c0 != -1) {
      _dispatch_once(&DAT_1008c75c0,&PTR___NSConcreteGlobalBlock_100857068);
    }
    uVar5 = DAT_1008c75b8;
    cVar3 = _os_log_type_enabled(DAT_1008c75b8,1);
    if (cVar3 != '\0') {
      local_658 = local_658 & 0xffff0000;
      __os_log_impl(0x100000000,uVar5,1,"sync> starting cleanup",&local_658,2);
    }
    uVar5 = FUN_10048604a(*(undefined8 *)(lVar6 + 0x30));
    FUN_1001c334a(&local_678,0x110e0051);
    lVar6 = local_680;
    FUN_1004f0e83(local_680,&local_658);
    FUN_1001b8dfc(local_6a8,&local_658);
    FUN_1001bbec4(local_238,&local_678,local_6a8);
    FUN_1001b7b04(&local_658,"");
    local_698 = (long *)(lVar6 + 0x6758);
    iVar4 = FUN_100528802(uVar5,local_238,&local_658,0,0,1,0x894,local_698,0);
    FUN_1001b7a50(&local_658);
    FUN_1001b7a50(local_238);
    FUN_1001b7a50(local_6a8);
    FUN_1001b7a50(&local_678);
    if ((iVar4 != -0x80) && (iVar4 != 0)) {
      uVar5 = FUN_1001cc310();
      cVar3 = _os_log_type_enabled(uVar5,0x10);
      lVar6 = local_680;
      if (cVar3 != '\0') {
        local_658 = 0x8220202;
        local_654 = "Assertion failure";
        local_64c = 0x400;
        local_64a = (char *)CONCAT44(local_64a._4_4_,iVar4);
        __os_log_error_impl(0x100000000,uVar5,0x10,"%{public}s: err == (%d)",&local_658,0x12);
      }
    }
    FUN_1004ed4f6(lVar6);
    local_690 = (ulong)*(uint *)(lVar10 + 0x9c);
    local_688 = FUN_1001c6429(local_690 * 4);
    if (local_688 != 0) {
      lVar6 = FUN_1002f930c(lVar10);
      if ((int)local_690 != 0) {
        uVar8 = 0;
        do {
          *(undefined4 *)(local_688 + uVar8 * 4) = *(undefined4 *)(lVar6 + 8);
          lVar6 = FUN_1002f9451(lVar6);
          uVar8 = uVar8 + 1;
        } while (local_690 != uVar8);
        uVar8 = 0;
        bVar2 = false;
        do {
          lVar6 = FUN_1002f950a(*(undefined8 *)(local_680 + 0x30),
                                *(undefined4 *)(local_688 + uVar8 * 4));
          if (lVar6 == 0) {
LAB_1005064a2:
            *(undefined4 *)(local_688 + uVar8 * 4) = 0;
          }
          else {
            lVar7 = FUN_1005974ad(lVar6,0);
            if ((lVar7 != 0) && (iVar4 = FUN_1002b0559(lVar7,0x42), iVar4 != 0)) {
              *(byte *)(lVar6 + 0xc3) = *(byte *)(lVar6 + 0xc3) | 1;
              bVar2 = true;
              goto LAB_1005064a2;
            }
          }
          FUN_1001b1464();
          if (*(char *)(local_680 + 0x6ad3) != '\0') goto LAB_1005067bc;
          uVar8 = uVar8 + 1;
        } while (local_690 != uVar8);
        if (bVar2) {
          FUN_100313e0b(lVar10);
          FUN_10031c5b6(lVar10);
          FUN_1002fbbfc(lVar10);
        }
      }
      if (*(int *)(local_680 + 0x7e20) != 0) {
        lVar10 = local_680 + 0x7a00;
        uVar9 = 0;
        do {
          FUN_100506c08(uVar9,local_238);
          iVar4 = FUN_10017ecc9(lVar10,local_238,&local_658,0);
          if (((iVar4 == 0) &&
              (iVar4 = FUN_100506c82(local_680,0x736f6e67,&local_658,local_690,local_688),
              iVar4 != -0x80)) && (iVar4 != 0)) {
            uVar5 = FUN_1001cc310();
            cVar3 = _os_log_type_enabled(uVar5,0x10);
            if (cVar3 != '\0') {
              local_678 = 0x8220202;
              local_674 = "Assertion failure";
              local_66c = 0x400;
              local_66a = iVar4;
              __os_log_error_impl(0x100000000,uVar5,0x10,"%{public}s: err == (%d)",&local_678,0x12);
            }
          }
          uVar9 = uVar9 + 1;
        } while (uVar9 < *(uint *)(local_680 + 0x7e20));
      }
      if (((*(char *)(local_680 + 0x376) != '\0') ||
          (lVar10 = local_680, *(char *)(local_680 + 0x377) != '\0')) &&
         ((iVar4 = FUN_100507009(local_680,0x72696e67,local_690,local_688), lVar10 = local_680,
          iVar4 != -0x80 && (iVar4 != 0)))) {
        uVar5 = FUN_1001cc310();
        cVar3 = _os_log_type_enabled(uVar5,0x10);
        lVar10 = local_680;
        if (cVar3 != '\0') {
          local_658 = 0x8220202;
          local_654 = "Assertion failure";
          local_64c = 0x400;
          local_64a = (char *)CONCAT44(local_64a._4_4_,iVar4);
          __os_log_error_impl(0x100000000,uVar5,0x10,"%{public}s: err == (%d)",&local_658,0x12);
        }
      }
      if (((*(char *)(lVar10 + 0x39c) != '\0') &&
          (iVar4 = FUN_100507009(local_680,0x626f6f6b,local_690,local_688), iVar4 != -0x80)) &&
         (iVar4 != 0)) {
        uVar5 = FUN_1001cc310();
        cVar3 = _os_log_type_enabled(uVar5,0x10);
        if (cVar3 != '\0') {
          local_658 = 0x8220202;
          local_654 = "Assertion failure";
          local_64c = 0x400;
          local_64a = (char *)CONCAT44(local_64a._4_4_,iVar4);
          __os_log_error_impl(0x100000000,uVar5,0x10,"%{public}s: err == (%d)",&local_658,0x12);
        }
      }
    }
    if (*(char *)(local_680 + 0x389) != '\0') {
      iVar4 = FUN_1004e424e(local_680,1);
      lVar10 = local_680;
      if (iVar4 == 0x32d3) {
        if (DAT_1008c75c0 != -1) {
          _dispatch_once(&DAT_1008c75c0,&PTR___NSConcreteGlobalBlock_100857068);
        }
        uVar5 = DAT_1008c75b8;
        cVar3 = _os_log_type_enabled(DAT_1008c75b8,1);
        if (cVar3 != '\0') {
          local_658 = local_658 & 0xffff0000;
          __os_log_impl(0x100000000,uVar5,1,"genius sync>  sql corruption detected on mount",
                        &local_658,2);
        }
        *(undefined1 *)(lVar10 + 0x1666c) = 1;
        FUN_100369f3c(*(undefined8 *)(lVar10 + 0x30));
      }
      FUN_1004e4608(local_680);
    }
LAB_1005067bc:
    if (*local_698 != 0) {
      FUN_10052897c();
      if (*local_698 != 0) {
        uVar5 = FUN_1001cc310();
        cVar3 = _os_log_type_enabled(uVar5,0x10);
        if (cVar3 != '\0') {
          local_658 = 0x8220202;
          local_654 = "Assertion failure";
          local_64c = 0x822;
          local_64a = "handlerData->cleanupProgressBar == nullptr";
          __os_log_error_impl(0x100000000,uVar5,0x10,"%{public}s: (%{public}s)",&local_658,0x16);
        }
        FUN_1001782e9(0,0);
      }
      *local_698 = 0;
    }
    if (local_688 != 0) {
      FUN_1001c64c1();
    }
    FUN_1004ee22c(local_680);
    FUN_100321e5c(*(undefined8 *)(local_680 + 0x30));
    if (DAT_1008c75c0 != -1) {
      _dispatch_once(&DAT_1008c75c0,&PTR___NSConcreteGlobalBlock_100857068);
    }
    lVar10 = local_680;
    uVar5 = DAT_1008c75b8;
    cVar3 = _os_log_type_enabled(DAT_1008c75b8,1);
    if (cVar3 != '\0') {
      local_658 = local_658 & 0xffff0000;
      __os_log_impl(0x100000000,uVar5,1,"sync> finished cleanup",&local_658,2);
    }
  }
  FUN_1004dd69c(lVar10,"");
  *(undefined4 *)(local_680 + 0x6b14) = 0;
  if (*(long *)(local_680 + 0x30) != 0) {
    psVar1 = (short *)(*(long *)(local_680 + 0x30) + 0x27b0);
    *psVar1 = *psVar1 + -1;
  }
LAB_1005068d3:
  if (*(long *)PTR____stack_chk_guard_10082cb58 != local_38) {
                    /* WARNING: Subroutine does not return */
    ___stack_chk_fail();
  }
  return;
}

