// name: FUN_1003ff738
// address: 1003ff738

int FUN_1003ff738(long param_1,int param_2)

{
  char cVar1;
  int iVar2;
  undefined8 uVar3;
  long lVar4;
  undefined4 local_48;
  char *local_44;
  undefined2 local_3c;
  char *local_3a;
  long local_30;
  
  local_30 = *(long *)PTR____stack_chk_guard_10082cb58;
  if (param_2 == 0) {
    iVar2 = 0;
  }
  else {
    cVar1 = FUN_1001b8428(*(long *)(param_1 + 0x100008) + 0x2740);
    if (cVar1 == '\0') {
      uVar3 = FUN_1001cc310();
      cVar1 = _os_log_type_enabled(uVar3,0x10);
      if (cVar1 != '\0') {
        local_48 = 0x8220202;
        local_44 = "Assertion failure";
        local_3c = 0x822;
        local_3a = "context->trackData->geniusCUID.IsEmpty()";
        __os_log_error_impl(0x100000000,uVar3,0x10,"%{public}s: (%{public}s)",&local_48,0x16);
      }
      FUN_1001782e9(0,0);
    }
    FUN_1001b811c(*(long *)(param_1 + 0x100008) + 0x2740);
    lVar4 = FUN_1001c63e1(param_2);
    if (lVar4 == 0) {
      uVar3 = FUN_1001cc310();
      cVar1 = _os_log_type_enabled(uVar3,0x10);
      if (cVar1 != '\0') {
        local_48 = 0x8220202;
        local_44 = "Assertion failure";
        local_3c = 0x822;
        local_3a = "geniusCUID != nullptr";
        __os_log_error_impl(0x100000000,uVar3,0x10,"%{public}s: (%{public}s)",&local_48,0x16);
      }
      FUN_1001782e9(0,0);
      iVar2 = -0x6c;
    }
    else {
      iVar2 = FUN_1003f0368(param_1,lVar4,param_2);
      if (iVar2 != -0x80) {
        if (iVar2 == 0) {
          FUN_1001b7b34(&local_48,lVar4,param_2);
          FUN_1001b80b2(*(long *)(param_1 + 0x100008) + 0x2740,&local_48);
          FUN_1001b7a50(&local_48);
        }
        else {
          uVar3 = FUN_1001cc310();
          cVar1 = _os_log_type_enabled(uVar3,0x10);
          if (cVar1 != '\0') {
            local_48 = 0x8220202;
            local_44 = "Assertion failure";
            local_3c = 0x400;
            local_3a = (char *)CONCAT44(local_3a._4_4_,iVar2);
            __os_log_error_impl(0x100000000,uVar3,0x10,"%{public}s: err == (%d)",&local_48,0x12);
          }
        }
      }
      FUN_1001c64c1(lVar4);
    }
  }
  if (*(long *)PTR____stack_chk_guard_10082cb58 == local_30) {
    return iVar2;
  }
                    /* WARNING: Subroutine does not return */
  ___stack_chk_fail();
}

