// name: FUN_100209fde
// address: 100209fde

undefined8 FUN_100209fde(undefined8 param_1,int param_2,undefined8 *param_3)

{
  char cVar1;
  undefined8 uVar2;
  int iVar3;
  undefined4 local_48;
  char *local_44;
  undefined2 local_3c;
  char *local_3a;
  long local_28;
  
  local_28 = *(long *)PTR____stack_chk_guard_10082cb58;
  if (param_3 == (undefined8 *)0x0) {
    uVar2 = FUN_1001cc310();
    cVar1 = _os_log_type_enabled(uVar2,0x10);
    if (cVar1 != '\0') {
      local_3a = "uncompressedSize != nullptr";
LAB_10020a0f8:
      local_3c = 0x822;
      local_44 = "Assertion failure";
      local_48 = 0x8220202;
      __os_log_error_impl(0x100000000,uVar2,0x10,"%{public}s: (%{public}s)",&local_48,0x16);
    }
  }
  else {
    *param_3 = 0;
    cVar1 = FUN_10017cbd0();
    if (cVar1 != '\0') {
      iVar3 = 0x1000;
      if (param_2 != 0) {
        iVar3 = param_2;
      }
      if (*(long *)PTR____stack_chk_guard_10082cb58 == local_28) {
        uVar2 = FUN_1001f8a3d(param_1,"Payload",iVar3,param_3);
        return uVar2;
      }
      goto LAB_10020a11f;
    }
    uVar2 = FUN_1001cc310();
    cVar1 = _os_log_type_enabled(uVar2,0x10);
    if (cVar1 != '\0') {
      local_3a = "JRFileSpecIsValid(archiveFileSpec)";
      goto LAB_10020a0f8;
    }
  }
  FUN_1001782e9(0,0);
  if (*(long *)PTR____stack_chk_guard_10082cb58 == local_28) {
    return 0xffffffce;
  }
LAB_10020a11f:
                    /* WARNING: Subroutine does not return */
  ___stack_chk_fail();
}

