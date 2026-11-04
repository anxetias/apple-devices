// name: FUN_10031fbed
// address: 10031fbed

undefined8 FUN_10031fbed(long param_1,ulong param_2,void *param_3)

{
  char cVar1;
  undefined1 uVar2;
  int iVar3;
  undefined8 uVar4;
  undefined4 *puVar5;
  char local_879;
  undefined4 local_878 [264];
  undefined4 local_458;
  char *local_454;
  undefined2 local_44c;
  char *local_44a;
  long local_30;
  
  local_30 = *(long *)PTR____stack_chk_guard_10082cb58;
  local_879 = '\0';
  if (((param_1 == 0) || (*(long *)(param_1 + 8) == 0)) ||
     (*(long *)(*(long *)(param_1 + 8) + 0x10) == 0)) {
    uVar4 = FUN_1001cc310();
    cVar1 = _os_log_type_enabled(uVar4,0x10);
    if (cVar1 != '\0') {
      local_458 = 0x8220202;
      local_454 = "Assertion failure";
      local_44c = 0x822;
      local_44a = "TrackInstanceIsValid(trackInstance)";
      __os_log_error_impl(0x100000000,uVar4,0x10,"%{public}s: (%{public}s)",&local_458,0x16);
    }
    FUN_1001782e9(0,0);
    uVar4 = 0xce;
    goto LAB_10031fc88;
  }
  if (*(int *)(param_1 + 0x3c) != 0x46494c45) {
    uVar4 = FUN_1001cc310();
    cVar1 = _os_log_type_enabled(uVar4,0x10);
    if (cVar1 != '\0') {
      local_458 = 0x8220202;
      local_454 = "Assertion failure";
      local_44c = 0x822;
      local_44a = "trackInstance->trackKind == kITFileKind";
      __os_log_error_impl(0x100000000,uVar4,0x10,"%{public}s: (%{public}s)",&local_458,0x16);
    }
    FUN_1001782e9(0,0);
    uVar4 = 0xd5;
    goto LAB_10031fc88;
  }
  iVar3 = FUN_10031fe30(param_1,local_878,&local_879);
  if (iVar3 == 0) {
    cVar1 = FUN_100183bb2(local_878,*(undefined8 *)(param_1 + 0x80));
    if (cVar1 == '\0') {
      uVar4 = 0;
      if (((param_2 & 1) == 0) || (local_879 == '\0')) goto LAB_10031fc88;
      uVar2 = FUN_1002b458b(param_1);
      uVar4 = 0;
      iVar3 = FUN_100387b5c(0x3ee,uVar2,0,&local_458);
      if (iVar3 != 0) goto LAB_10031fc88;
      cVar1 = FUN_100183bb2(&local_458,*(undefined8 *)(param_1 + 0x80));
      if (cVar1 == '\0') goto LAB_10031fc5a;
      uVar4 = 1;
      if (param_3 == (void *)0x0) goto LAB_10031fc88;
      puVar5 = &local_458;
    }
    else {
      uVar4 = 1;
      if (param_3 == (void *)0x0) goto LAB_10031fc88;
      puVar5 = local_878;
    }
    uVar4 = 1;
    _memcpy(param_3,puVar5,0x420);
  }
  else {
LAB_10031fc5a:
    uVar4 = 0;
  }
LAB_10031fc88:
  if (*(long *)PTR____stack_chk_guard_10082cb58 == local_30) {
    return uVar4;
  }
                    /* WARNING: Subroutine does not return */
  ___stack_chk_fail();
}

