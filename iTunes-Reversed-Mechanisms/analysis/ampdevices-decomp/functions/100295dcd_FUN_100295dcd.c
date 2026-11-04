// name: FUN_100295dcd
// address: 100295dcd

undefined8 FUN_100295dcd(long param_1,undefined4 *param_2)

{
  uint uVar1;
  char cVar2;
  int iVar3;
  undefined4 uVar4;
  undefined8 uVar5;
  short sVar6;
  long local_50;
  undefined4 local_48;
  char *local_44;
  undefined2 local_3c;
  char *local_3a;
  long local_30;
  
  local_30 = *(long *)PTR____stack_chk_guard_10082cb58;
  local_50 = 0;
  if ((*(long **)(param_1 + 0xca8) != (long *)0x0) &&
     (cVar2 = (**(code **)(**(long **)(param_1 + 0xca8) + 0x78))(), cVar2 == '\0')) {
    if (*(char *)(param_1 + 0xd21) == '\0') {
      uVar5 = FUN_1001cc310();
      cVar2 = _os_log_type_enabled(uVar5,0x10);
      if (cVar2 != '\0') {
        local_48 = 0x8220202;
        local_44 = "Assertion failure";
        local_3c = 0x822;
        local_3a = "connectionData->playerOpen";
        __os_log_error_impl(0x100000000,uVar5,0x10,"%{public}s: (%{public}s)",&local_48,0x16);
      }
      uVar5 = 0;
      FUN_1001782e9(0,0);
      goto LAB_100295e11;
    }
    uVar5 = 1;
    if (param_2 == (undefined4 *)0x0) goto LAB_100295e11;
    uVar5 = 0;
    iVar3 = (**(code **)(**(long **)(param_1 + 0xca8) + 0x68))
                      (*(long **)(param_1 + 0xca8),0,&local_50);
    if (iVar3 == -0x80) goto LAB_100295e11;
    if (iVar3 == 0) {
      if (*(char *)(param_1 + 0xc84) != '\0') {
        uVar4 = 0;
        if ((ulong)*(uint *)(param_1 + 0x47c) != 0) {
          uVar1 = *(uint *)(param_1 + 0x478);
          if ((long)(ulong)uVar1 <= local_50) {
            uVar4 = (undefined4)
                    ((long)((local_50 - (ulong)uVar1) * (ulong)*(uint *)(param_1 + 0x47c)) /
                    (long)(ulong)(*(int *)(param_1 + 0x474) - uVar1));
          }
        }
LAB_100295fd7:
        *param_2 = uVar4;
        uVar5 = 1;
        goto LAB_100295e11;
      }
      if (*(uint *)(param_1 + 0x480) != 0) {
        sVar6 = 0;
        do {
          if (local_50 <= (long)(ulong)*(uint *)(param_1 + 0x488 + (long)sVar6 * 8)) {
            uVar4 = *(undefined4 *)(param_1 + 0x484 + (long)sVar6 * 8);
            goto LAB_100295fd7;
          }
          sVar6 = sVar6 + 1;
          uVar5 = 0;
        } while ((uint)(int)sVar6 < *(uint *)(param_1 + 0x480));
        goto LAB_100295e11;
      }
    }
    else {
      uVar5 = FUN_1001cc310();
      cVar2 = _os_log_type_enabled(uVar5,0x10);
      if (cVar2 != '\0') {
        local_48 = 0x8220202;
        local_44 = "Assertion failure";
        local_3c = 0x400;
        local_3a = (char *)CONCAT44(local_3a._4_4_,iVar3);
        __os_log_error_impl(0x100000000,uVar5,0x10,"%{public}s: err == (%d)",&local_48,0x12);
      }
    }
  }
  uVar5 = 0;
LAB_100295e11:
  if (*(long *)PTR____stack_chk_guard_10082cb58 != local_30) {
                    /* WARNING: Subroutine does not return */
    ___stack_chk_fail();
  }
  return uVar5;
}

