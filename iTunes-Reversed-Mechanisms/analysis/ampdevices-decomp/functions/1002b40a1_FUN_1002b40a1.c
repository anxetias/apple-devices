// name: FUN_1002b40a1
// address: 1002b40a1

int FUN_1002b40a1(long param_1,undefined8 param_2)

{
  char cVar1;
  int iVar2;
  undefined8 uVar3;
  long lVar4;
  long local_90;
  undefined1 *local_88;
  undefined1 local_58 [16];
  undefined4 local_48;
  char *local_44;
  undefined2 local_3c;
  char *local_3a;
  long local_28;
  
  local_28 = *(long *)PTR____stack_chk_guard_10082cb58;
  FUN_1001b7a44(local_58);
  if (((param_1 == 0) || (*(long *)(param_1 + 8) == 0)) ||
     (*(long *)(*(long *)(param_1 + 8) + 0x10) == 0)) {
    uVar3 = FUN_1001cc310();
    cVar1 = _os_log_type_enabled(uVar3,0x10);
    if (cVar1 != '\0') {
      local_48 = 0x8220202;
      local_44 = "Assertion failure";
      local_3c = 0x822;
      local_3a = "TrackInstanceIsValid(trackInstance)";
      __os_log_error_impl(0x100000000,uVar3,0x10,"%{public}s: (%{public}s)",&local_48,0x16);
    }
    iVar2 = -0x32;
    FUN_1001782e9(0,0);
    goto LAB_1002b419c;
  }
  FUN_1001b811c(param_2);
  FUN_1001c62d9(&local_90,0x38);
  local_90 = param_1;
  local_88 = local_58;
  if ((*(long *)(param_1 + 8) == 0) ||
     (lVar4 = *(long *)(*(long *)(param_1 + 8) + 0x10), lVar4 == 0)) {
    lVar4 = 0;
LAB_1002b41ca:
    uVar3 = FUN_1001cc310();
    cVar1 = _os_log_type_enabled(uVar3,0x10);
    if (cVar1 != '\0') {
      local_48 = 0x8220202;
      local_44 = "Assertion failure";
      local_3c = 0x822;
      local_3a = "TrackDataIsValid(trackData)";
      __os_log_error_impl(0x100000000,uVar3,0x10,"%{public}s: (%{public}s)",&local_48,0x16);
    }
    FUN_1001782e9(0,0);
  }
  else if (*(int *)(lVar4 + 0x80) != 0x74646174) {
    uVar3 = FUN_1001cc310();
    cVar1 = _os_log_type_enabled(uVar3,0x10);
    if (cVar1 != '\0') {
      local_48 = 0x8220202;
      local_44 = "Assertion failure (expected to be true)";
      local_3c = 0x822;
      local_3a = "trackData->magic == \'tdat\'";
      __os_log_error_impl(0x100000000,uVar3,0x10,"%{public}s: (%{public}s)",&local_48,0x16);
    }
    cVar1 = FUN_1001782e9(0,1);
    if (cVar1 == '\0') goto LAB_1002b41ca;
  }
  iVar2 = FUN_1002fc1ae(lVar4,0x74646c73,&local_90);
  if (iVar2 == 0) {
    iVar2 = 0;
    FUN_1001b8172(param_2,local_58);
  }
LAB_1002b419c:
  FUN_1001b7a50(local_58);
  if (*(long *)PTR____stack_chk_guard_10082cb58 != local_28) {
                    /* WARNING: Subroutine does not return */
    ___stack_chk_fail();
  }
  return iVar2;
}

