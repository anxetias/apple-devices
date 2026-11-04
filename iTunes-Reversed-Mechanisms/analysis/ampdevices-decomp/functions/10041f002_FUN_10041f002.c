// name: FUN_10041f002
// address: 10041f002

/* WARNING: Removing unreachable block (ram,0x00010041f06a) */
/* WARNING: Removing unreachable block (ram,0x00010041f07c) */

undefined4 FUN_10041f002(long param_1,uint param_2,undefined8 param_3)

{
  char cVar1;
  int iVar2;
  undefined4 uVar3;
  undefined8 *puVar4;
  long lVar5;
  undefined8 uVar6;
  undefined4 local_58;
  char *local_54;
  undefined2 local_4c;
  char *local_4a;
  long local_38;
  
  local_38 = *(long *)PTR____stack_chk_guard_10082cb58;
  puVar4 = (undefined8 *)(param_1 + 0x588);
  if (param_2 != 0) {
    puVar4 = (undefined8 *)(param_1 + 0x620);
  }
  iVar2 = FUN_1002281fa(*(undefined4 *)(param_1 + 0x58),*puVar4);
  if (iVar2 != -0x80) {
    if (iVar2 == 0) {
      lVar5 = FUN_100222261(0,*(undefined4 *)(param_1 + 0x520),*(undefined4 *)(param_1 + 0x524),
                            (char)param_2);
      if (lVar5 != 0) {
        uVar3 = FUN_100255870(*(undefined4 *)(param_1 + 0x58),*(undefined4 *)(param_1 + 0x520),
                              *(undefined4 *)(param_1 + 0x524),lVar5,param_2 & 0xff,param_3);
        goto LAB_10041f16c;
      }
      uVar6 = FUN_1001cc310();
      cVar1 = _os_log_type_enabled(uVar6,0x10);
      if (cVar1 != '\0') {
        local_58 = 0x8220202;
        local_54 = "Assertion failure";
        local_4c = 0x822;
        local_4a = "requiredMobileDeviceVersionString != nullptr";
        __os_log_error_impl(0x100000000,uVar6,0x10,"%{public}s: (%{public}s)",&local_58,0x16);
      }
      FUN_1001782e9(0,0);
    }
    else {
      uVar6 = FUN_1001cc310();
      cVar1 = _os_log_type_enabled(uVar6,0x10);
      if (cVar1 != '\0') {
        local_58 = 0x8220202;
        local_54 = "Assertion failure";
        local_4c = 0x400;
        local_4a = (char *)CONCAT44(local_4a._4_4_,iVar2);
        __os_log_error_impl(0x100000000,uVar6,0x10,"%{public}s: err == (%d)",&local_58,0x12);
      }
    }
  }
  uVar3 = 0;
LAB_10041f16c:
  FUN_10017060f(0);
  if (*(long *)PTR____stack_chk_guard_10082cb58 != local_38) {
                    /* WARNING: Subroutine does not return */
    ___stack_chk_fail();
  }
  return uVar3;
}

