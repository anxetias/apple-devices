// name: FUN_100405ee3
// address: 100405ee3

int FUN_100405ee3(long param_1)

{
  int *piVar1;
  char cVar2;
  int iVar3;
  undefined8 uVar4;
  undefined1 local_458 [1056];
  undefined4 local_38;
  char *local_34;
  undefined2 local_2c;
  char *local_2a;
  long local_20;
  
  local_20 = *(long *)PTR____stack_chk_guard_10082cb58;
  if ((*(int *)(param_1 + 0x2c08) != 0) && (iVar3 = 0, *(int *)(param_1 + 0x2c28) != 0))
  goto LAB_100405fa8;
  piVar1 = (int *)(param_1 + 0x2c08);
  cVar2 = FUN_1002f7abe(param_1,1,local_458);
  if (cVar2 == '\0') {
LAB_100405f7f:
    if (*piVar1 == 0) {
      *piVar1 = 0x200;
    }
  }
  else {
    iVar3 = FUN_1001829d6(local_458,piVar1,0,0);
    if (iVar3 == -0x80) goto LAB_100405fa8;
    if (iVar3 != 0) {
      uVar4 = FUN_1001cc310();
      cVar2 = _os_log_type_enabled(uVar4,0x10);
      if (cVar2 != '\0') {
        local_38 = 0x8220202;
        local_34 = "Assertion failure";
        local_2c = 0x400;
        local_2a = (char *)CONCAT44(local_2a._4_4_,iVar3);
        __os_log_error_impl(0x100000000,uVar4,0x10,"%{public}s: err == (%d)",&local_38,0x12);
      }
      goto LAB_100405fa8;
    }
    if (*piVar1 == 0) {
      uVar4 = FUN_1001cc310();
      cVar2 = _os_log_type_enabled(uVar4,0x10);
      if (cVar2 != '\0') {
        local_38 = 0x8220202;
        local_34 = "Assertion failure";
        local_2c = 0x822;
        local_2a = "trackData->copyVolumeBlockSize != 0";
        __os_log_error_impl(0x100000000,uVar4,0x10,"%{public}s: (%{public}s)",&local_38,0x16);
      }
      FUN_1001782e9(0,0);
      goto LAB_100405f7f;
    }
  }
  iVar3 = 0;
LAB_100405fa8:
  if (*(long *)PTR____stack_chk_guard_10082cb58 == local_20) {
    return iVar3;
  }
                    /* WARNING: Subroutine does not return */
  ___stack_chk_fail();
}

