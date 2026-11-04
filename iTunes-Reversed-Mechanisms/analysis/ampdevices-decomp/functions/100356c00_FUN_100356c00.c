// name: FUN_100356c00
// address: 100356c00

int FUN_100356c00(long param_1)

{
  char cVar1;
  int iVar2;
  long lVar3;
  undefined8 uVar4;
  int iVar5;
  int iVar6;
  int *local_60;
  undefined4 local_58;
  char *local_54;
  undefined2 local_4c;
  char *local_4a;
  long local_38;
  
  local_38 = *(long *)PTR____stack_chk_guard_10082cb58;
  local_60 = (int *)0x0;
  iVar2 = 0;
  if ((((*(char *)(param_1 + 0x37c) == '\0') || (*(char *)(param_1 + 0x353) == '\0')) ||
      (*(char *)(param_1 + 0x14d00) == '\0')) ||
     (iVar2 = FUN_100594adc(&local_60,0), iVar2 == -0x80)) goto LAB_100356def;
  if (iVar2 == 0) {
    for (lVar3 = FUN_1002f930c(*(undefined8 *)(param_1 + 0x30)); lVar3 != 0;
        lVar3 = FUN_1002f9451(lVar3)) {
      if ((*(int *)(lVar3 + 0xc2) < 0) && (iVar2 = FUN_10059563f(local_60,lVar3,0), iVar2 != 0)) {
        if (iVar2 == -0x80) goto LAB_100356def;
        uVar4 = FUN_1001cc310();
        cVar1 = _os_log_type_enabled(uVar4,0x10);
        if (cVar1 == '\0') goto LAB_100356def;
        local_4a = (char *)CONCAT44(local_4a._4_4_,iVar2);
        goto LAB_100356e9d;
      }
    }
    iVar2 = 0;
    if (((local_60 == (int *)0x0) || (*local_60 != 0x4f4c5354)) ||
       ((local_60[1] == 0 ||
        ((iVar5 = (int)((ulong)(*(long *)(local_60 + 4) - *(long *)(local_60 + 2)) >> 3) *
                  -0x49249249, iVar5 == 0 || (iVar2 = FUN_1004f2b0b(param_1,1), iVar2 == -0x80))))))
    goto LAB_100356def;
    if (iVar2 == 0) {
      iVar6 = 0;
      iVar2 = 0;
      do {
        lVar3 = FUN_1005968ea(local_60,iVar6,0);
        if (lVar3 == 0) {
          uVar4 = FUN_1001cc310();
          cVar1 = _os_log_type_enabled(uVar4,0x10);
          if (cVar1 != '\0') {
            local_58 = 0x8220202;
            local_54 = "Assertion failure";
            local_4c = 0x822;
            local_4a = "trackInfo != nullptr";
            __os_log_error_impl(0x100000000,uVar4,0x10,"%{public}s: (%{public}s)",&local_58,0x16);
          }
          FUN_1001782e9(0,0);
        }
        else {
          iVar2 = FUN_100354d30(param_1,lVar3,lVar3,1,2,0);
          if (iVar2 == 0) {
            *(undefined1 *)(lVar3 + 0xb9) = 1;
          }
          FUN_1001b1464();
        }
        iVar6 = iVar6 + 1;
      } while (iVar5 != iVar6);
      goto LAB_100356def;
    }
    uVar4 = FUN_1001cc310();
    cVar1 = _os_log_type_enabled(uVar4,0x10);
    if (cVar1 == '\0') goto LAB_100356def;
    local_4a = (char *)CONCAT44(local_4a._4_4_,iVar2);
  }
  else {
    uVar4 = FUN_1001cc310();
    cVar1 = _os_log_type_enabled(uVar4,0x10);
    if (cVar1 == '\0') goto LAB_100356def;
    local_4a = (char *)CONCAT44(local_4a._4_4_,iVar2);
  }
LAB_100356e9d:
  local_4c = 0x400;
  local_54 = "Assertion failure";
  local_58 = 0x8220202;
  __os_log_error_impl(0x100000000,uVar4,0x10,"%{public}s: err == (%d)",&local_58,0x12);
LAB_100356def:
  FUN_100595344(local_60);
  if (*(long *)PTR____stack_chk_guard_10082cb58 == local_38) {
    return iVar2;
  }
                    /* WARNING: Subroutine does not return */
  ___stack_chk_fail();
}

