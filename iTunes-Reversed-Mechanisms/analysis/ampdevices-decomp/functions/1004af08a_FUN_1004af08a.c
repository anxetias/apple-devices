// name: FUN_1004af08a
// address: 1004af08a

int FUN_1004af08a(long param_1,long param_2,ulong param_3)

{
  uint uVar1;
  char cVar2;
  int iVar3;
  undefined8 uVar4;
  uint uVar5;
  undefined4 local_58;
  char *local_54;
  undefined2 local_4c;
  char *local_4a;
  long local_38;
  
  local_38 = *(long *)PTR____stack_chk_guard_10082cb58;
  cVar2 = FUN_1004aa626(param_2);
  if (cVar2 == '\0') {
    uVar4 = FUN_1001cc310();
    cVar2 = _os_log_type_enabled(uVar4,0x10);
    if (cVar2 != '\0') {
      local_58 = 0x8220202;
      local_54 = "Assertion failure";
      local_4c = 0x822;
      local_4a = "DownloadItem_IsValid(inItem)";
      __os_log_error_impl(0x100000000,uVar4,0x10,"%{public}s: (%{public}s)",&local_58,0x16);
    }
    FUN_1001782e9(0,0);
    iVar3 = 0x1f49;
  }
  else {
    uVar5 = (uint)param_3;
    if (((uVar5 >> 0x1c & 1) != 0) && (*(char *)(param_2 + 0x778) == '\0')) {
      *(undefined1 *)(param_2 + 0x12d0) = 1;
    }
    uVar1 = *(uint *)(param_2 + 0x144) & 0xfffffffe;
    if (-1 < (int)uVar5) {
      uVar1 = *(uint *)(param_2 + 0x144);
    }
    *(uint *)(param_2 + 0x144) = uVar1 | 0x80000000;
    if (*(int *)(param_2 + 0x118) - 1U < 3) {
      FUN_1004ac2b6(param_2,uVar5 >> 0x1f,0xffffff80,0);
      iVar3 = 0;
    }
    else {
      iVar3 = 0;
      if (((byte)(param_3 >> 0x1d) & 7 & *(int *)(param_2 + 0x118) == 4) == 0) {
        if ((uVar5 >> 0x1c & 1) != 0) {
          FUN_1004ac981(param_2);
        }
        iVar3 = FUN_1001e9de0(param_1 + 0x18);
        if (iVar3 != -0x80) {
          if (iVar3 == 0) {
            FUN_1001c2d56(param_1 + 0x68,param_2);
            *(int *)(param_1 + 0x60) = *(int *)(param_1 + 0x60) + -1;
            *(undefined8 *)(param_2 + 0x20) = 0;
            *(undefined8 *)(param_2 + 0x28) = 0;
            FUN_1001e9eb9(param_1 + 0x18);
            if (*(char *)(param_1 + 0x17) != '\0') {
              FUN_1001c6987(param_1 + 0x80,0x646d6972,param_2,0,0);
            }
            FUN_1004aa496(param_2);
            iVar3 = 0;
          }
          else {
            uVar4 = FUN_1001cc310();
            cVar2 = _os_log_type_enabled(uVar4,0x10);
            if (cVar2 != '\0') {
              local_58 = 0x8220202;
              local_54 = "Assertion failure";
              local_4c = 0x400;
              local_4a = (char *)CONCAT44(local_4a._4_4_,iVar3);
              __os_log_error_impl(0x100000000,uVar4,0x10,"%{public}s: err == (%d)",&local_58,0x12);
            }
          }
        }
      }
    }
  }
  if (*(long *)PTR____stack_chk_guard_10082cb58 != local_38) {
                    /* WARNING: Subroutine does not return */
    ___stack_chk_fail();
  }
  return iVar3;
}

