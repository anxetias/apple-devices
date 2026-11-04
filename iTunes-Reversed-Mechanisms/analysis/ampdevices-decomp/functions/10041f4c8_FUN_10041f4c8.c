// name: FUN_10041f4c8
// address: 10041f4c8

int FUN_10041f4c8(long param_1,int param_2,undefined8 param_3)

{
  char cVar1;
  int iVar2;
  undefined8 uVar3;
  long lVar4;
  undefined **local_88;
  long local_80;
  undefined ***local_68;
  undefined4 local_58;
  char *local_54;
  undefined2 local_4c;
  char *local_4a;
  long local_38;
  
  local_38 = *(long *)PTR____stack_chk_guard_10082cb58;
  if (param_2 == 1) {
    if (*(char *)(param_1 + 0x1354) == '\x01') {
      local_88 = &PTR_FUN_1008581a0;
      local_80 = param_1;
      local_68 = &local_88;
      iVar2 = FUN_10041bb58(param_1,&local_88);
      if (local_68 == &local_88) {
        lVar4 = 0x20;
LAB_10041f577:
        (**(code **)((long)*local_68 + lVar4))();
      }
      else {
        lVar4 = 0x28;
        if (local_68 != (undefined ***)0x0) goto LAB_10041f577;
      }
      if (iVar2 != -0x80) {
        if (iVar2 == 0) {
          *(undefined4 *)(param_1 + 0x1304) = 1;
          iVar2 = 0;
        }
        goto LAB_10041f5d0;
      }
    }
  }
  else if (param_2 != 6) {
    uVar3 = FUN_1001cc310();
    cVar1 = _os_log_type_enabled(uVar3,0x10);
    if (cVar1 != '\0') {
      local_58 = 0x8220202;
      local_54 = "Assertion failure";
      local_4c = 0x822;
      local_4a = "state == kRestoring || state == kRestoringWaitingForDownload";
      __os_log_error_impl(0x100000000,uVar3,0x10,"%{public}s: (%{public}s)",&local_58,0x16);
    }
    FUN_1001782e9(0,0);
    iVar2 = 0x234f;
    goto LAB_10041f5d0;
  }
  *(int *)(param_1 + 0x1304) = param_2;
  iVar2 = FUN_10041f200(param_1,1,param_3);
  if ((iVar2 != -0x80) && (iVar2 != 0)) {
    uVar3 = FUN_1001cc310();
    cVar1 = _os_log_type_enabled(uVar3,0x10);
    if (cVar1 != '\0') {
      local_58 = 0x8220202;
      local_54 = "Assertion failure";
      local_4c = 0x400;
      local_4a = (char *)CONCAT44(local_4a._4_4_,iVar2);
      __os_log_error_impl(0x100000000,uVar3,0x10,"%{public}s: err == (%d)",&local_58,0x12);
    }
  }
LAB_10041f5d0:
  if (*(long *)PTR____stack_chk_guard_10082cb58 != local_38) {
                    /* WARNING: Subroutine does not return */
    ___stack_chk_fail();
  }
  return iVar2;
}

