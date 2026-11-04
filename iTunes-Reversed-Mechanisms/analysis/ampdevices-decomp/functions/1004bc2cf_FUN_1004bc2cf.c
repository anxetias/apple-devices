// name: FUN_1004bc2cf
// address: 1004bc2cf

undefined8 FUN_1004bc2cf(long param_1,long param_2,void *param_3)

{
  long *plVar1;
  char cVar2;
  int iVar3;
  undefined8 uVar4;
  long lVar5;
  undefined1 local_b38 [48];
  undefined4 local_b08;
  undefined8 local_ae8;
  undefined8 uStack_ae0;
  long local_ad8;
  ulong local_ad0;
  long local_ac8;
  ulong local_ac0;
  undefined4 local_ab8;
  char *local_ab4;
  undefined2 local_aac;
  char *local_aaa;
  undefined1 local_a8c [1056];
  undefined4 local_66c;
  undefined1 local_658 [1056];
  undefined1 local_238 [512];
  long local_38;
  
  local_38 = *(long *)PTR____stack_chk_guard_10082cb58;
  cVar2 = FUN_1004aa626();
  if ((cVar2 == '\0') || (*(char *)(param_1 + 0x778) == '\0')) {
    local_ac8 = 0;
    local_ac0 = 0;
    local_ad0 = 0;
    local_ad8 = -1;
    cVar2 = FUN_1004aa626(param_1);
    if ((cVar2 != '\0') && (*(char *)(param_1 + 0x778) == '\0')) {
      if (((*(int *)(param_1 + 0x140) == 0x66696c65) && (*(int *)(param_1 + 0x1304) != 0x636f7079))
         && (*(int *)(param_1 + 0x7d8) < 0)) {
        if (param_2 != 0) {
          cVar2 = FUN_100166ce2(param_2,&cf_download_file_name,local_238);
          if (cVar2 != '\0') {
            uVar4 = 0;
            iVar3 = FUN_10017ecc9(param_3,local_238,local_658,0);
            if (iVar3 == -0x80) goto LAB_1004bc49c;
            if (iVar3 == 0) {
              iVar3 = FUN_10017cc65(local_658,0x64617461,2,&local_ac8);
              if (iVar3 == 0) {
                iVar3 = FUN_10017ce92(local_ac8,&local_ac0);
                if (iVar3 != -0x80) {
                  if (iVar3 == 0) {
                    if (local_ac0 != 0) goto LAB_1004bc7ce;
                  }
                  else {
                    uVar4 = FUN_1001cc310();
                    cVar2 = _os_log_type_enabled(uVar4,0x10);
                    if (cVar2 != '\0') {
                      local_aaa = (char *)CONCAT44(local_aaa._4_4_,iVar3);
                      goto LAB_1004bc6c9;
                    }
                  }
                }
              }
              else {
                if (iVar3 == -0x31) {
                  FUN_10017d477(local_658,local_b38,0);
                  FUN_1001c62d9(&local_ab8,0x460);
                  _memcpy(local_a8c,local_658,0x420);
                  local_66c = local_b08;
                  if (DAT_1008c7810 == (long *)0x0) {
                    local_ae8 = 0;
                    uStack_ae0 = 0;
                  }
                  else {
                    (**(code **)(*DAT_1008c7810 + 0x40))
                              (&local_ae8,DAT_1008c7810,0x46494c45,&local_ab8);
                  }
                  FUN_100217418(param_1 + 0x1258,&local_ae8);
                  FUN_10021e316(&local_ae8);
                  plVar1 = *(long **)(param_1 + 0x1258);
                  if (plVar1 == (long *)0x0) {
                    iVar3 = -0x31;
                  }
                  else {
                    (**(code **)(*plVar1 + 0x100))(plVar1,&local_ac0);
                    iVar3 = 0;
                  }
                }
                if (iVar3 != -0x80) {
                  if (iVar3 == 0) {
LAB_1004bc7ce:
                    cVar2 = FUN_100167ab3(param_2,&cf_bytes_read,&local_ad0);
                    if ((cVar2 != '\0') && (local_ad0 < local_ac0)) {
                      local_ac0 = local_ad0;
                    }
                    *(undefined1 *)(param_1 + 0x641) = 1;
                    FUN_1004a9316(param_1,local_658);
                    *(ulong *)(param_1 + 7000) = local_ac0;
                    *(ulong *)(param_1 + 0x1b78) = local_ac0;
                    *(ulong *)(param_1 + 0x12f0) = local_ac0;
                    FUN_1001705fc(param_2);
                    FUN_10017060f(*(undefined8 *)(param_1 + 0x218));
                    *(long *)(param_1 + 0x218) = param_2;
                    _memcpy((void *)(param_1 + 0x220),param_3,0x420);
                    *(undefined1 *)(param_1 + 0x640) = 1;
                    cVar2 = FUN_1001679fe(param_2,&cf_size,&local_ad8);
                    if (cVar2 == '\0' || local_ad8 == -1) {
                      lVar5 = *(long *)(param_1 + 0x1b60);
                    }
                    else {
                      *(long *)(param_1 + 0x1b60) = local_ad8;
                      *(long *)(param_1 + 0x200) = *(long *)(param_1 + 7000);
                      *(long *)(param_1 + 0x208) = local_ad8;
                      lVar5 = local_ad8;
                    }
                    uVar4 = 1;
                    if (*(long *)(param_1 + 7000) == lVar5) {
                      FUN_1004bcb5b(param_1 + 0x1bc0,param_2,param_3);
                    }
                    goto LAB_1004bc49c;
                  }
                  uVar4 = FUN_1001cc310();
                  cVar2 = _os_log_type_enabled(uVar4,0x10);
                  if (cVar2 != '\0') {
                    local_aaa = (char *)CONCAT44(local_aaa._4_4_,iVar3);
                    goto LAB_1004bc6c9;
                  }
                }
              }
            }
            else {
              uVar4 = FUN_1001cc310();
              cVar2 = _os_log_type_enabled(uVar4,0x10);
              if (cVar2 != '\0') {
                local_aaa = (char *)CONCAT44(local_aaa._4_4_,iVar3);
LAB_1004bc6c9:
                local_aac = 0x400;
                local_ab4 = "Assertion failure";
                local_ab8 = 0x8220202;
                __os_log_error_impl(0x100000000,uVar4,0x10,"%{public}s: err == (%d)",&local_ab8,0x12
                                   );
              }
            }
          }
          goto LAB_1004bc499;
        }
        uVar4 = FUN_1001cc310();
        cVar2 = _os_log_type_enabled(uVar4,0x10);
        if (cVar2 != '\0') {
          local_ab8 = 0x8220202;
          local_ab4 = "Assertion failure";
          local_aac = 0x822;
          local_aaa = "inDictionary != __null";
          __os_log_error_impl(0x100000000,uVar4,0x10,"%{public}s: (%{public}s)",&local_ab8,0x16);
        }
        uVar4 = 0;
        FUN_1001782e9(0,0);
      }
      else {
LAB_1004bc499:
        uVar4 = 0;
      }
LAB_1004bc49c:
      if (local_ac8 != 0) {
        FUN_10017cdfb();
      }
      goto LAB_1004bc447;
    }
    uVar4 = FUN_1001cc310();
    cVar2 = _os_log_type_enabled(uVar4,0x10);
    if (cVar2 != '\0') {
      local_aaa = "( DownloadItem_IsValid(inItem) && ((inItem)->isContainer == false) )";
      goto LAB_1004bc51c;
    }
  }
  else {
    cVar2 = FUN_1004aa626(param_1);
    if ((cVar2 == '\0') || (*(char *)(param_1 + 0x778) == '\0')) {
      uVar4 = FUN_1001cc310();
      cVar2 = _os_log_type_enabled(uVar4,0x10);
      if (cVar2 != '\0') {
        local_aaa = "( DownloadItem_IsValid(inItem) && (inItem)->isContainer )";
LAB_1004bc51c:
        local_aac = 0x822;
        local_ab4 = "Assertion failure";
        local_ab8 = 0x8220202;
        __os_log_error_impl(0x100000000,uVar4,0x10,"%{public}s: (%{public}s)",&local_ab8,0x16);
      }
    }
    else {
      if (param_2 != 0) {
        uVar4 = 0;
        cVar2 = FUN_100167dd2(param_2,&cf_is_container,0);
        if (cVar2 != '\0') {
          uVar4 = 1;
          *(undefined1 *)(param_1 + 0x641) = 1;
          FUN_1001705fc(param_2);
          FUN_10017060f(*(undefined8 *)(param_1 + 0x218));
          *(long *)(param_1 + 0x218) = param_2;
          _memcpy((void *)(param_1 + 0x220),param_3,0x420);
          *(undefined1 *)(param_1 + 0x640) = 1;
        }
        goto LAB_1004bc447;
      }
      uVar4 = FUN_1001cc310();
      cVar2 = _os_log_type_enabled(uVar4,0x10);
      if (cVar2 != '\0') {
        local_aaa = "inDictionary != __null";
        goto LAB_1004bc51c;
      }
    }
  }
  uVar4 = 0;
  FUN_1001782e9(0,0);
LAB_1004bc447:
  if (*(long *)PTR____stack_chk_guard_10082cb58 != local_38) {
                    /* WARNING: Subroutine does not return */
    ___stack_chk_fail();
  }
  return uVar4;
}

