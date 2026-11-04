// name: FUN_1005a4672
// address: 1005a4672

void FUN_1005a4672(long param_1)

{
  int iVar1;
  char cVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined4 local_58;
  char *local_54;
  undefined2 local_4c;
  char *local_4a;
  long local_38;
  
  local_38 = *(long *)PTR____stack_chk_guard_10082cb58;
  iVar1 = *(int *)(param_1 + 0x16b0);
  *(int *)(param_1 + 0x16b0) = iVar1 + 1;
  if ((iVar1 == 0) && (*(char *)(param_1 + 0x15a0) != '\0')) {
    uVar3 = FUN_10016ff43(DAT_1008c4d90,param_1 + 0x4f0);
    uVar4 = FUN_100174a21(DAT_1008c4d90,uVar3,&cf_VoiceOverDB,0);
    uVar5 = FUN_100174622(uVar4,0);
    if (*(long *)(param_1 + 0x16b8) != 0) {
      uVar6 = FUN_1001cc310();
      cVar2 = _os_log_type_enabled(uVar6,0x10);
      if (cVar2 != '\0') {
        local_58 = 0x8220202;
        local_54 = "Assertion failure";
        local_4c = 0x822;
        local_4a = "mNuanceSession == nullptr";
        __os_log_error_impl(0x100000000,uVar6,0x10,"%{public}s: (%{public}s)",&local_58,0x16);
      }
      FUN_1001782e9(0,0);
    }
    FUN_1002f558c(*(undefined8 *)(param_1 + 0x1598),uVar5,*(undefined8 *)(param_1 + 0x15d8),
                  param_1 + 0x16b8);
    FUN_10017060f(uVar5);
    FUN_10017060f(uVar4);
    FUN_10017060f(uVar3);
  }
  if (*(long *)PTR____stack_chk_guard_10082cb58 == local_38) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  ___stack_chk_fail();
}

