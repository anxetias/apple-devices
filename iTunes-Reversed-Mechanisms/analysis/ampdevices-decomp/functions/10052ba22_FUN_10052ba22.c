// name: FUN_10052ba22
// address: 10052ba22

int FUN_10052ba22(long *param_1,int *param_2)

{
  char cVar1;
  int iVar2;
  undefined8 uVar3;
  undefined4 local_48;
  char *local_44;
  undefined2 local_3c;
  char *local_3a;
  long local_28;
  
  local_28 = *(long *)PTR____stack_chk_guard_10082cb58;
  iVar2 = *param_2;
  if (((iVar2 == 0x44574e4c) || (iVar2 == 0x46494c45)) || (iVar2 == 0x4d46494c)) {
    *(undefined4 *)(param_1 + 0xf) = 0x44415448;
    *(int *)(param_1 + 0x10) = iVar2;
    FUN_1001c631b(param_2 + 1,(long)param_1 + 0x84,0x460);
    *(undefined1 *)(param_1 + 0xa0) = *(undefined1 *)((long)param_2 + 0x469);
    *(undefined4 *)((long)param_1 + 0x7c) = 0x66696c65;
    iVar2 = FUN_1001e9c3e(param_1 + 0xaa);
    if (iVar2 != -0x80) {
      if (iVar2 == 0) {
        if (param_2[0x119] != 0) {
          *(int *)(param_1 + 0xb3) = param_2[0x119];
        }
        *(undefined1 *)(param_1 + 0xa0) = *(undefined1 *)((long)param_2 + 0x469);
        *(char *)(param_1 + 0xb9) = (char)param_2[0x11a];
        iVar2 = (**(code **)(*param_1 + 0x1e0))(param_1);
        if ((iVar2 == -0x80) || (iVar2 == 0)) goto LAB_10052bb93;
        uVar3 = FUN_1001cc310();
        cVar1 = _os_log_type_enabled(uVar3,0x10);
        if (cVar1 == '\0') goto LAB_10052bb93;
        local_3a = (char *)CONCAT44(local_3a._4_4_,iVar2);
      }
      else {
        uVar3 = FUN_1001cc310();
        cVar1 = _os_log_type_enabled(uVar3,0x10);
        if (cVar1 == '\0') goto LAB_10052bb93;
        local_3a = (char *)CONCAT44(local_3a._4_4_,iVar2);
      }
      local_3c = 0x400;
      local_44 = "Assertion failure";
      local_48 = 0x8220202;
      __os_log_error_impl(0x100000000,uVar3,0x10,"%{public}s: err == (%d)",&local_48,0x12);
    }
  }
  else {
    uVar3 = FUN_1001cc310();
    cVar1 = _os_log_type_enabled(uVar3,0x10);
    if (cVar1 != '\0') {
      local_48 = 0x8220202;
      local_44 = "Assertion failure";
      local_3c = 0x822;
      local_3a = 
      "(inParams->trackKind == kITFileKind) || (inParams->trackKind == kITMemoryFileKind) || (inParams->trackKind == kITDownloadKind)"
      ;
      __os_log_error_impl(0x100000000,uVar3,0x10,"%{public}s: (%{public}s)",&local_48,0x16);
    }
    FUN_1001782e9(0,0);
    iVar2 = -0x32;
  }
LAB_10052bb93:
  if (*(long *)PTR____stack_chk_guard_10082cb58 == local_28) {
    return iVar2;
  }
                    /* WARNING: Subroutine does not return */
  ___stack_chk_fail();
}

