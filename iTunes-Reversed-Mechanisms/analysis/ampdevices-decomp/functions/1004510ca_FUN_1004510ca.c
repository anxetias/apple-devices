// name: FUN_1004510ca
// address: 1004510ca

undefined8 FUN_1004510ca(int *param_1)

{
  char cVar1;
  undefined8 uVar2;
  undefined4 local_38;
  char *local_34;
  undefined2 local_2c;
  char *local_2a;
  long local_18;
  
  local_18 = *(long *)PTR____stack_chk_guard_10082cb58;
  if ((param_1 == (int *)0x0) || (*param_1 != 0x67746669)) {
    uVar2 = FUN_1001cc310();
    cVar1 = _os_log_type_enabled(uVar2,0x10);
    if (cVar1 != '\0') {
      local_2a = 
      "(getFileParams != nullptr) && (getFileParams->magic == kJRNavGetFileOrFolderParamsMagic)";
LAB_10045126a:
      local_2c = 0x822;
      local_34 = "Assertion failure";
      local_38 = 0x8220202;
      __os_log_error_impl(0x100000000,uVar2,0x10,"%{public}s: (%{public}s)",&local_38,0x16);
    }
  }
  else if ((param_1[1] & 6U) == 0) {
    uVar2 = FUN_1001cc310();
    cVar1 = _os_log_type_enabled(uVar2,0x10);
    if (cVar1 != '\0') {
      local_2a = "(getFileParams->allowableFlags & kGetFile_AllowFilesAndFolders) != 0";
      goto LAB_10045126a;
    }
  }
  else if ((param_1[1] & 1U) == 0) {
    if ((*(long *)(param_1 + 0x12) != 0) && (*(long *)(param_1 + 0x14) == 0)) {
LAB_10045122b:
      if (*(long *)PTR____stack_chk_guard_10082cb58 == local_18) {
        uVar2 = FUN_1006317d1();
        return uVar2;
      }
      goto LAB_100451294;
    }
    uVar2 = FUN_1001cc310();
    cVar1 = _os_log_type_enabled(uVar2,0x10);
    if (cVar1 != '\0') {
      local_2a = 
      "(getFileParams->selectedFileOrFolderSpec != nullptr) && (getFileParams->selectedFileOrFolderSpecs == nullptr)"
      ;
      goto LAB_10045126a;
    }
  }
  else {
    if ((*(long *)(param_1 + 0x14) != 0) && (*(long *)(param_1 + 0x12) == 0)) goto LAB_10045122b;
    uVar2 = FUN_1001cc310();
    cVar1 = _os_log_type_enabled(uVar2,0x10);
    if (cVar1 != '\0') {
      local_2a = 
      "(getFileParams->selectedFileOrFolderSpecs != nullptr) && (getFileParams->selectedFileOrFolderSpec == nullptr)"
      ;
      goto LAB_10045126a;
    }
  }
  FUN_1001782e9(0,0);
  if (*(long *)PTR____stack_chk_guard_10082cb58 == local_18) {
    return 0;
  }
LAB_100451294:
                    /* WARNING: Subroutine does not return */
  ___stack_chk_fail();
}

