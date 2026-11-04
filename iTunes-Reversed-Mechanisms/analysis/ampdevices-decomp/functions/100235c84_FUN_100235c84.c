// name: FUN_100235c84
// address: 100235c84

/* WARNING: Removing unreachable block (ram,0x000100235d93) */

int FUN_100235c84(long param_1,undefined4 *param_2)

{
  char cVar1;
  short sVar2;
  int iVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined4 local_38;
  char *local_34;
  undefined2 local_2c;
  char *local_2a;
  long local_20;
  
  local_20 = *(long *)PTR____stack_chk_guard_10082cb58;
  if (param_1 == 0) {
    uVar5 = FUN_1001cc310();
    cVar1 = _os_log_type_enabled(uVar5,0x10);
    if (cVar1 != '\0') {
      local_2a = "fileSpec != nullptr";
LAB_100235ddb:
      local_2c = 0x822;
      local_34 = "Assertion failure";
      local_38 = 0x8220202;
      __os_log_error_impl(0x100000000,uVar5,0x10,"%{public}s: err == (%d)",&local_38,0x16);
    }
  }
  else {
    if (param_2 != (undefined4 *)0x0) {
      *param_2 = 0x6e756c6c;
      *(undefined8 *)(param_2 + 1) = 0;
      iVar3 = FUN_10018e323(0,param_1);
      uVar5 = uRam0000000000000000;
      if (iVar3 != -0x80) {
        if (iVar3 == 0) {
          uVar4 = _GetHandleSize();
          sVar2 = _AECreateDesc(0x616c6973,uVar5,uVar4,param_2);
          iVar3 = (int)sVar2;
        }
        else {
          uVar5 = FUN_1001cc310();
          cVar1 = _os_log_type_enabled(uVar5,0x10);
          if (cVar1 != '\0') {
            local_38 = 0x8220202;
            local_34 = "Assertion failure";
            local_2c = 0x400;
            local_2a = (char *)CONCAT44(local_2a._4_4_,iVar3);
            __os_log_error_impl(0x100000000,uVar5,0x10,"%{public}s: err == (%d)",&local_38,0x12);
          }
        }
      }
      goto LAB_100235d98;
    }
    uVar5 = FUN_1001cc310();
    cVar1 = _os_log_type_enabled(uVar5,0x10);
    if (cVar1 != '\0') {
      local_2a = "aeDesc != nullptr";
      goto LAB_100235ddb;
    }
  }
  FUN_1001782e9(0,0);
  iVar3 = -0x32;
LAB_100235d98:
  if (*(long *)PTR____stack_chk_guard_10082cb58 == local_20) {
    return iVar3;
  }
                    /* WARNING: Subroutine does not return */
  ___stack_chk_fail();
}

