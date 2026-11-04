// name: FUN_1003922a8
// address: 1003922a8

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

int FUN_1003922a8(long param_1)

{
  long lVar1;
  char cVar2;
  int iVar3;
  long lVar4;
  undefined8 uVar5;
  undefined8 local_88;
  undefined8 uStack_80;
  char *local_78;
  undefined4 local_70;
  undefined8 local_68;
  undefined8 uStack_60;
  undefined8 local_58;
  undefined8 uStack_50;
  undefined4 local_48;
  char *local_44;
  undefined2 local_3c;
  int local_3a;
  long local_30;
  
  local_30 = *(long *)PTR____stack_chk_guard_10082cb58;
  local_88 = _DAT_100745d80;
  uStack_80 = _UNK_100745d88;
  local_78 = "";
  local_70 = 0;
  local_68 = 0;
  uStack_60 = 0;
  local_58 = 0;
  uStack_50 = 0;
  iVar3 = FUN_1001ec886(&local_88,param_1 + 0x10);
  if (iVar3 == -0x80) goto LAB_1003925a1;
  if (iVar3 == 0) {
    iVar3 = FUN_1002441f8(*(undefined4 *)(*(long *)(param_1 + 8) + 0x66b0),
                          *(long *)(param_1 + 8) + 0x6b40,0x74686d62,1,param_1 + 0xc88);
    if (iVar3 == -0x80) goto LAB_1003925a1;
    if (iVar3 == 0) {
      lVar1 = param_1 + 0x18;
      iVar3 = FUN_100337125(*(undefined8 *)(param_1 + 8),&cf_Photo,1,lVar1);
      if (iVar3 == -0x80) goto LAB_1003925a1;
      if (iVar3 == 0) {
        lVar4 = *(long *)(param_1 + 8);
        if (*(char *)(lVar4 + 0x341) != '\0') {
          iVar3 = FUN_1001888ba(lVar1,"IrisVideo",param_1 + 0x438,0);
          if (iVar3 != 0) {
            iVar3 = FUN_100188cfe(lVar1,"IrisVideo",param_1 + 0x438);
            if (iVar3 == -0x80) goto LAB_1003925a1;
            if (iVar3 != 0) {
              uVar5 = FUN_1001cc310();
              cVar2 = _os_log_type_enabled(uVar5,0x10);
              goto joined_r0x00010039244e;
            }
          }
          *(undefined1 *)(param_1 + 0x858) = 1;
          lVar4 = *(long *)(param_1 + 8);
        }
        if (*(char *)(lVar4 + 0x343) == '\0') {
          iVar3 = 0;
          goto LAB_1003925a1;
        }
        iVar3 = FUN_1001888ba(lVar1,"AAE",param_1 + 0x860,0);
        if (iVar3 != 0) {
          iVar3 = FUN_100188cfe(lVar1,"AAE",param_1 + 0x860);
          if (iVar3 == -0x80) goto LAB_1003925a1;
          if (iVar3 != 0) {
            uVar5 = FUN_1001cc310();
            cVar2 = _os_log_type_enabled(uVar5,0x10);
            if (cVar2 != '\0') {
              local_48 = 0x8220202;
              local_44 = "Assertion failure";
              local_3c = 0x400;
              local_3a = iVar3;
              __os_log_error_impl(0x100000000,uVar5,0x10,"%{public}s: err == (%d)",&local_48,0x12);
            }
            goto LAB_1003925a1;
          }
        }
        *(undefined1 *)(param_1 + 0xc80) = 1;
        iVar3 = 0;
        goto LAB_1003925a1;
      }
      uVar5 = FUN_1001cc310();
      cVar2 = _os_log_type_enabled(uVar5,0x10);
    }
    else {
      uVar5 = FUN_1001cc310();
      cVar2 = _os_log_type_enabled(uVar5,0x10);
    }
  }
  else {
    uVar5 = FUN_1001cc310();
    cVar2 = _os_log_type_enabled(uVar5,0x10);
  }
joined_r0x00010039244e:
  if (cVar2 != '\0') {
    local_3c = 0x400;
    local_44 = "Assertion failure";
    local_48 = 0x8220202;
    local_3a = iVar3;
    __os_log_error_impl(0x100000000,uVar5,0x10,"%{public}s: err == (%d)",&local_48,0x12);
  }
LAB_1003925a1:
  if (*(long *)PTR____stack_chk_guard_10082cb58 == local_30) {
    return iVar3;
  }
                    /* WARNING: Subroutine does not return */
  ___stack_chk_fail();
}

