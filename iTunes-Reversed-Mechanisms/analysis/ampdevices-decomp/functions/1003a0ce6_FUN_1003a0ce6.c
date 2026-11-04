// name: FUN_1003a0ce6
// address: 1003a0ce6

undefined4 FUN_1003a0ce6(long param_1,ulong param_2,short *param_3)

{
  int iVar1;
  char cVar2;
  undefined4 uVar3;
  long lVar4;
  undefined8 uVar5;
  undefined4 local_48;
  char *local_44;
  undefined2 local_3c;
  char *local_3a;
  long local_30;
  
  local_30 = *(long *)PTR____stack_chk_guard_10082cb58;
  if (param_3 == (short *)0x0) {
    uVar5 = FUN_1001cc310();
    cVar2 = _os_log_type_enabled(uVar5,0x10);
    if (cVar2 != '\0') {
      local_48 = 0x8220202;
      local_44 = "Assertion failure";
      local_3c = 0x822;
      local_3a = "outAlbumName != nullptr";
      __os_log_error_impl(0x100000000,uVar5,0x10,"%{public}s: (%{public}s)",&local_48,0x16);
    }
    uVar3 = 0;
    FUN_1001782e9(0,0);
    goto LAB_1003a0e42;
  }
  *param_3 = 0;
  if ((*(byte *)(param_1 + 0xf8) & 2) == 0) {
    FUN_10055ea6a(param_1);
  }
  iVar1 = *(int *)(param_1 + 0x10);
  if (iVar1 == 4) {
    if ((*(byte *)(param_1 + 0xf8) & 2) == 0) {
      FUN_10055ea6a(param_1);
    }
    if (*(long *)(param_1 + 0x60) != 0) {
      FUN_10047e0c8(*(long *)(param_1 + 0x60),param_3);
    }
  }
  else if (iVar1 == 3) {
    if ((*(byte *)(param_1 + 0xf8) & 2) == 0) {
      FUN_10055ea6a(param_1);
    }
    if ((*(long *)(param_1 + 0x60) != 0) &&
       (FUN_1004777d6(*(long *)(param_1 + 0x60),param_3), *param_3 == 0)) {
      lVar4 = FUN_1003a095a();
      goto joined_r0x0001003a0dd3;
    }
  }
  else if (iVar1 == 2) {
    if ((*(byte *)(param_1 + 0xf8) & 2) == 0) {
      FUN_10055ea6a(param_1);
    }
    lVar4 = *(long *)(param_1 + 0x60);
joined_r0x0001003a0dd3:
    if (lVar4 != 0) {
      FUN_1004777d6(lVar4,param_3);
    }
  }
  else {
    uVar5 = FUN_1001cc310();
    cVar2 = _os_log_type_enabled(uVar5,0x10);
    if (cVar2 != '\0') {
      local_48 = 0x8220202;
      local_44 = "Assertion failure";
      local_3c = 0x822;
      local_3a = "false";
      __os_log_error_impl(0x100000000,uVar5,0x10,"%{public}s: (%{public}s)",&local_48,0x16);
    }
    FUN_1001782e9(0,0);
  }
  uVar3 = 0;
  if (((param_2 & 2) != 0) && (*param_3 == 0)) {
    uVar3 = FUN_1003a0f08(param_1,param_3);
  }
LAB_1003a0e42:
  if (*(long *)PTR____stack_chk_guard_10082cb58 == local_30) {
    return uVar3;
  }
                    /* WARNING: Subroutine does not return */
  ___stack_chk_fail();
}

