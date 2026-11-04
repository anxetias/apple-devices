// name: FUN_1002dbd00
// address: 1002dbd00

int FUN_1002dbd00(char *param_1,undefined8 param_2,undefined8 param_3)

{
  char *pcVar1;
  char cVar2;
  int iVar3;
  undefined8 uVar4;
  undefined8 local_50;
  undefined4 local_48;
  char *local_44;
  undefined2 local_3c;
  char *local_3a;
  long local_30;
  
  local_30 = *(long *)PTR____stack_chk_guard_10082cb58;
  local_50 = param_3;
  if (*param_1 != '\0') {
    uVar4 = FUN_1001cc310();
    cVar2 = _os_log_type_enabled(uVar4,0x10);
    if (cVar2 != '\0') {
      local_48 = 0x8220202;
      local_44 = "Assertion failure";
      local_3c = 0x822;
      local_3a = "keybagFileData->bufferValid == false";
      __os_log_error_impl(0x100000000,uVar4,0x10,"%{public}s: (%{public}s)",&local_48,0x16);
    }
    FUN_1001782e9(0,0);
  }
  pcVar1 = param_1 + 8;
  iVar3 = FUN_1001601fd(pcVar1,param_3);
  if (iVar3 != -0x80) {
    if (iVar3 == 0) {
      iVar3 = FUN_100160894(pcVar1,&local_50,param_2);
      if (iVar3 != -0x80) {
        if (iVar3 == 0) {
          *param_1 = '\x01';
          iVar3 = 0;
          goto LAB_1002dbe0c;
        }
        uVar4 = FUN_1001cc310();
        cVar2 = _os_log_type_enabled(uVar4,0x10);
        if (cVar2 != '\0') {
          local_3a = (char *)CONCAT44(local_3a._4_4_,iVar3);
          goto LAB_1002dbead;
        }
      }
    }
    else {
      uVar4 = FUN_1001cc310();
      cVar2 = _os_log_type_enabled(uVar4,0x10);
      if (cVar2 != '\0') {
        local_3a = (char *)CONCAT44(local_3a._4_4_,iVar3);
LAB_1002dbead:
        local_3c = 0x400;
        local_44 = "Assertion failure";
        local_48 = 0x8220202;
        __os_log_error_impl(0x100000000,uVar4,0x10,"%{public}s: err == (%d)",&local_48,0x12);
      }
    }
  }
  if (*param_1 == '\0') {
    FUN_10016013b(pcVar1);
  }
LAB_1002dbe0c:
  if (*(long *)PTR____stack_chk_guard_10082cb58 == local_30) {
    return iVar3;
  }
                    /* WARNING: Subroutine does not return */
  ___stack_chk_fail();
}

