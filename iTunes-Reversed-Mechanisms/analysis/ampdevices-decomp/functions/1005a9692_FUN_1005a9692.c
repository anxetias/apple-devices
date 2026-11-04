// name: FUN_1005a9692
// address: 1005a9692

int FUN_1005a9692(long *param_1,undefined8 param_2,undefined8 param_3,long *param_4)

{
  char cVar1;
  int iVar2;
  uint uVar3;
  undefined8 uVar4;
  ulong uVar5;
  ulong uVar6;
  char local_4b8 [32];
  long local_498;
  long local_490;
  undefined1 local_468 [1056];
  undefined4 local_48;
  char *local_44;
  undefined2 local_3c;
  char *local_3a;
  long local_28;
  
  local_28 = *(long *)PTR____stack_chk_guard_10082cb58;
  *param_4 = 0;
  iVar2 = FUN_1005ae2e4();
  if (iVar2 == 0) {
    *param_4 = 0;
    iVar2 = FUN_10017d477(local_468,local_4b8,0);
    if (iVar2 != -0x80) {
      if (iVar2 == 0) {
        if (local_4b8[0] == '\0') {
          uVar3 = *(uint *)(*param_1 + 0x6f60);
          if (uVar3 == 0) {
            uVar4 = FUN_1001cc310();
            cVar1 = _os_log_type_enabled(uVar4,0x10);
            if (cVar1 != '\0') {
              local_48 = 0x8220202;
              local_44 = "Assertion failure";
              local_3c = 0x822;
              local_3a = "mHandlerData->volumeBlockSize != 0";
              __os_log_error_impl(0x100000000,uVar4,0x10,"%{public}s: (%{public}s)",&local_48,0x16);
            }
            FUN_1001782e9(0,0);
            uVar3 = *(uint *)(*param_1 + 0x6f60);
          }
          uVar6 = (ulong)uVar3;
          uVar5 = (local_498 + uVar6) - 1;
          iVar2 = 0;
          *param_4 = (uVar5 - (((local_490 + uVar6) - 1) % uVar6 + uVar5 % uVar6)) +
                     local_490 + uVar6 + -1;
        }
        else {
          uVar4 = FUN_1001cc310();
          cVar1 = _os_log_type_enabled(uVar4,0x10);
          if (cVar1 != '\0') {
            local_48 = 0x8220202;
            local_44 = "Assertion failure";
            local_3c = 0x822;
            local_3a = "fileSpecInfo.isDirectory == false";
            __os_log_error_impl(0x100000000,uVar4,0x10,"%{public}s: (%{public}s)",&local_48,0x16);
          }
          FUN_1001782e9(0,0);
          iVar2 = -0x516;
        }
      }
      else {
        uVar4 = FUN_1001cc310();
        cVar1 = _os_log_type_enabled(uVar4,0x10);
        if (cVar1 != '\0') {
          local_48 = 0x8220202;
          local_44 = "Assertion failure";
          local_3c = 0x400;
          local_3a = (char *)CONCAT44(local_3a._4_4_,iVar2);
          __os_log_error_impl(0x100000000,uVar4,0x10,"%{public}s: err == (%d)",&local_48,0x12);
        }
      }
    }
  }
  if (*(long *)PTR____stack_chk_guard_10082cb58 == local_28) {
    return iVar2;
  }
                    /* WARNING: Subroutine does not return */
  ___stack_chk_fail();
}

