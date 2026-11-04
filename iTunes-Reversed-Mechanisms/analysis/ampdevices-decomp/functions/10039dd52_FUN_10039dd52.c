// name: FUN_10039dd52
// address: 10039dd52

int FUN_10039dd52(long param_1)

{
  char cVar1;
  int iVar2;
  undefined8 *puVar3;
  undefined8 uVar4;
  undefined4 local_58;
  char *local_54;
  undefined2 local_4c;
  char *local_4a;
  long local_38;
  
  local_38 = *(long *)PTR____stack_chk_guard_10082cb58;
  iVar2 = 0;
  if (*(long *)(param_1 + 8) == 0) {
    puVar3 = operator_new(0x730,(nothrow_t *)PTR_nothrow_10082c970);
    if (puVar3 == (undefined8 *)0x0) {
      *(undefined8 *)(param_1 + 8) = 0;
      uVar4 = FUN_1001cc310();
      cVar1 = _os_log_type_enabled(uVar4,0x10);
      if (cVar1 != '\0') {
        local_58 = 0x8220202;
        local_54 = "Assertion failure";
        local_4c = 0x822;
        local_4a = "mIPodIPhoneUpdaterManagerImp != nullptr";
        __os_log_error_impl(0x100000000,uVar4,0x10,"%{public}s: (%{public}s)",&local_58,0x16);
      }
      FUN_1001782e9(0,0);
      iVar2 = -0x6c;
    }
    else {
      *puVar3 = &PTR_FUN_100856230;
      ___bzero(puVar3 + 1,0x6a0);
      FUN_1001c75be(puVar3 + 0xd5);
      puVar3[0xd5] = &PTR_FUN_100856208;
      puVar3[0xde] = puVar3 + 0xde;
      puVar3[0xdf] = puVar3 + 0xde;
      puVar3[0xe0] = 0;
      puVar3[0xe1] = 0;
      puVar3[0xe2] = 0;
      puVar3[0xe3] = 0;
      puVar3[0xe4] = 0;
      puVar3[0xe5] = 0;
      iVar2 = FUN_1001c666e(puVar3 + 0xe1);
      if (iVar2 == 0) {
        iVar2 = FUN_1001c76b2(puVar3 + 0xd5,puVar3 + 0xe1);
        if ((iVar2 != -0x80) && (iVar2 != 0)) {
          uVar4 = FUN_1001cc310();
          cVar1 = _os_log_type_enabled(uVar4,0x10);
          if (cVar1 != '\0') {
            local_58 = 0x8220202;
            local_54 = "Assertion failure";
            local_4c = 0x400;
            local_4a = (char *)CONCAT44(local_4a._4_4_,iVar2);
            __os_log_error_impl(0x100000000,uVar4,0x10,"%{public}s: err == (%d)",&local_58,0x12);
          }
          if (iVar2 != -0x80) {
            uVar4 = FUN_1001cc310();
            cVar1 = _os_log_type_enabled(uVar4,0x10);
            if (cVar1 != '\0') {
              local_58 = 0x8220202;
              local_54 = "Assertion failure";
              local_4c = 0x400;
              local_4a = (char *)CONCAT44(local_4a._4_4_,iVar2);
              __os_log_error_impl(0x100000000,uVar4,0x10,"%{public}s: err == (%d)",&local_58,0x12);
            }
          }
        }
      }
      *(undefined8 **)(param_1 + 8) = puVar3;
      iVar2 = (**(code **)*puVar3)(puVar3);
      if ((iVar2 != -0x80) && (iVar2 != 0)) {
        uVar4 = FUN_1001cc310();
        cVar1 = _os_log_type_enabled(uVar4,0x10);
        if (cVar1 != '\0') {
          local_58 = 0x8220202;
          local_54 = "Assertion failure";
          local_4c = 0x400;
          local_4a = (char *)CONCAT44(local_4a._4_4_,iVar2);
          __os_log_error_impl(0x100000000,uVar4,0x10,"%{public}s: err == (%d)",&local_58,0x12);
        }
      }
    }
  }
  if (*(long *)PTR____stack_chk_guard_10082cb58 == local_38) {
    return iVar2;
  }
                    /* WARNING: Subroutine does not return */
  ___stack_chk_fail();
}

