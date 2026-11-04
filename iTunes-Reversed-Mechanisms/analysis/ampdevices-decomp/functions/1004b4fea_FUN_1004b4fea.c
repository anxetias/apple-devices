// name: FUN_1004b4fea
// address: 1004b4fea

int FUN_1004b4fea(undefined8 *param_1,long param_2,ulong param_3)

{
  undefined8 *puVar1;
  char cVar2;
  int iVar3;
  undefined8 uVar4;
  long lVar5;
  ulong uVar6;
  long lVar7;
  ulong uVar8;
  ulong local_498;
  undefined8 *local_490;
  long local_488;
  long local_480;
  undefined4 local_478;
  char *local_474;
  undefined2 local_46c;
  char *local_46a;
  undefined4 local_58;
  char *local_54;
  undefined2 local_4c;
  char *local_4a;
  long local_38;
  
  local_38 = *(long *)PTR____stack_chk_guard_10082cb58;
  cVar2 = FUN_1004aa626(*param_1);
  if (cVar2 == '\0') {
    uVar4 = FUN_1001cc310();
    cVar2 = _os_log_type_enabled(uVar4,0x10);
    if (cVar2 != '\0') {
      local_478 = 0x8220202;
      local_474 = "Assertion failure";
      local_46c = 0x822;
      local_46a = "DownloadItem_IsValid(inHashInfo->downloadItem)";
      __os_log_error_impl(0x100000000,uVar4,0x10,"%{public}s: (%{public}s)",&local_478,0x16);
    }
    FUN_1001782e9(0,0);
    iVar3 = 0x1f49;
    goto LAB_1004b5126;
  }
  if (((*(char *)((long)param_1 + 9) == '\0') &&
      (((iVar3 = 0, *(char *)(param_1 + 0x22) == '\0' || (param_1[0x21] == 0)) ||
       (*(char *)((long)param_1 + 0x111) != '\0')))) || (iVar3 = 0, *(char *)(param_1 + 1) != '\0'))
  goto LAB_1004b5126;
  FUN_1004aa912(*param_1,&local_478);
  local_480 = 0;
  iVar3 = FUN_10017cc65(&local_478,0x64617461,1);
  if (iVar3 == -0x80) {
LAB_1004b53be:
    lVar5 = 0;
  }
  else {
    if (iVar3 != 0) {
      uVar4 = FUN_1001cc310();
      cVar2 = _os_log_type_enabled(uVar4,0x10);
      if (cVar2 != '\0') {
        local_4a = (char *)CONCAT44(local_4a._4_4_,iVar3);
LAB_1004b5261:
        local_4c = 0x400;
        local_54 = "Assertion failure";
        local_58 = 0x8220202;
        __os_log_error_impl(0x100000000,uVar4,0x10,"%{public}s: err == (%d)",&local_58,0x12);
      }
      goto LAB_1004b53be;
    }
    iVar3 = FUN_10017ce92(local_480,&local_498);
    if (iVar3 == -0x80) goto LAB_1004b53be;
    if (iVar3 != 0) {
      uVar4 = FUN_1001cc310();
      cVar2 = _os_log_type_enabled(uVar4,0x10);
      if (cVar2 != '\0') {
        local_4a = (char *)CONCAT44(local_4a._4_4_,iVar3);
        goto LAB_1004b5261;
      }
      goto LAB_1004b53be;
    }
    if (local_498 < param_3) {
      uVar4 = FUN_1001cc310();
      cVar2 = _os_log_type_enabled(uVar4,0x10);
      if (cVar2 != '\0') {
        local_4a = "eof >= inTargetOffset";
LAB_1004b550b:
        local_4c = 0x822;
        local_54 = "Assertion failure";
        local_58 = 0x8220202;
        __os_log_error_impl(0x100000000,uVar4,0x10,"%{public}s: (%{public}s)",&local_58,0x16);
      }
LAB_1004b529c:
      lVar5 = 0;
LAB_1004b529f:
      FUN_1001782e9(0,0);
      iVar3 = -0x32;
    }
    else {
      if ((long)param_3 < *(long *)(param_2 + 8)) {
        uVar4 = FUN_1001cc310();
        cVar2 = _os_log_type_enabled(uVar4,0x10);
        if (cVar2 != '\0') {
          local_4a = "inTargetOffset >= inHashComputation->hashStartOffset";
          goto LAB_1004b550b;
        }
        goto LAB_1004b529c;
      }
      puVar1 = (undefined8 *)(param_2 + 0xa8);
      if (*(long *)(param_2 + 0xa8) != 0) {
        FUN_100179a7b();
        *puVar1 = 0;
      }
      iVar3 = FUN_100179732(3,puVar1);
      if (iVar3 == -0x80) goto LAB_1004b53be;
      if (iVar3 != 0) {
        uVar4 = FUN_1001cc310();
        cVar2 = _os_log_type_enabled(uVar4,0x10);
        if (cVar2 != '\0') {
          local_4a = (char *)CONCAT44(local_4a._4_4_,iVar3);
          goto LAB_1004b5261;
        }
        goto LAB_1004b53be;
      }
      lVar5 = FUN_1001c63e1(0x200000);
      if (lVar5 != 0) {
        local_490 = puVar1;
        FUN_10017d068(local_480,*(undefined8 *)(param_2 + 8));
        uVar8 = param_3 - *(long *)(param_2 + 8);
        if (uVar8 <= *(long *)(param_2 + 0x10) - 1U) {
          if (uVar8 == 0) {
            lVar7 = 0;
          }
          else {
            do {
              uVar6 = 0x200000;
              if (uVar8 < 0x200000) {
                uVar6 = uVar8;
              }
              iVar3 = FUN_10017d186(local_480,lVar5,uVar6,0,&local_488);
              if (iVar3 != 0) {
                if (iVar3 == -0x80) {
                  iVar3 = -0x80;
                }
                else {
                  uVar4 = FUN_1001cc310();
                  cVar2 = _os_log_type_enabled(uVar4,0x10);
                  if (cVar2 != '\0') {
                    local_58 = 0x8220202;
                    local_54 = "Assertion failure";
                    local_4c = 0x400;
                    local_4a = (char *)CONCAT44(local_4a._4_4_,iVar3);
                    __os_log_error_impl(0x100000000,uVar4,0x10,"%{public}s: err == (%d)",&local_58,
                                        0x12);
                  }
                }
                goto LAB_1004b53c1;
              }
              FUN_10017983e(*local_490,lVar5,local_488);
              uVar8 = uVar8 - local_488;
            } while (uVar8 != 0);
            lVar7 = param_3 - *(long *)(param_2 + 8);
          }
          *(long *)(param_2 + 0x18) = lVar7;
          iVar3 = 0;
          goto LAB_1004b53c1;
        }
        uVar4 = FUN_1001cc310();
        cVar2 = _os_log_type_enabled(uVar4,0x10);
        if (cVar2 != '\0') {
          local_58 = 0x8220202;
          local_54 = "Assertion failure";
          local_4c = 0x822;
          local_4a = 
          "(inHashComputation->numBytesToHash == 0) || (bytesRemaining < inHashComputation->numBytesToHash)"
          ;
          __os_log_error_impl(0x100000000,uVar4,0x10,"%{public}s: (%{public}s)",&local_58,0x16);
        }
        goto LAB_1004b529f;
      }
      uVar4 = FUN_1001cc310();
      cVar2 = _os_log_type_enabled(uVar4,0x10);
      if (cVar2 != '\0') {
        local_58 = 0x8220202;
        local_54 = "Assertion failure";
        local_4c = 0x822;
        local_4a = "buffer != __null";
        __os_log_error_impl(0x100000000,uVar4,0x10,"%{public}s: (%{public}s)",&local_58,0x16);
      }
      lVar5 = 0;
      FUN_1001782e9(0,0);
      iVar3 = -0x6c;
    }
  }
LAB_1004b53c1:
  if (local_480 != 0) {
    FUN_10017cdfb();
  }
  if (lVar5 != 0) {
    FUN_1001c64c1(lVar5);
  }
  if ((iVar3 != -0x80) && (iVar3 != 0)) {
    uVar4 = FUN_1001cc310();
    cVar2 = _os_log_type_enabled(uVar4,0x10);
    if (cVar2 != '\0') {
      local_58 = 0x8220202;
      local_54 = "Assertion failure";
      local_4c = 0x400;
      local_4a = (char *)CONCAT44(local_4a._4_4_,iVar3);
      __os_log_error_impl(0x100000000,uVar4,0x10,"%{public}s: err == (%d)",&local_58,0x12);
    }
  }
LAB_1004b5126:
  if (*(long *)PTR____stack_chk_guard_10082cb58 != local_38) {
                    /* WARNING: Subroutine does not return */
    ___stack_chk_fail();
  }
  return iVar3;
}

