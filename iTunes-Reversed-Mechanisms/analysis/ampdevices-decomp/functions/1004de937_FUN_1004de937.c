// name: FUN_1004de937
// address: 1004de937

void FUN_1004de937(long param_1)

{
  char cVar1;
  int iVar2;
  undefined8 uVar3;
  undefined4 *puVar4;
  undefined4 local_48;
  char *local_44;
  undefined2 local_3c;
  char *local_3a;
  long local_28;
  
  local_28 = *(long *)PTR____stack_chk_guard_10082cb58;
  if (*(long *)(param_1 + 0x66b8) != 0) {
    *(undefined4 *)(param_1 + 0x153c0) = *(undefined4 *)(*(long *)(param_1 + 0x66b8) + 8);
    uVar3 = FUN_1003572fc(param_1);
    *(undefined8 *)(param_1 + 0x153c8) = uVar3;
  }
  if ((*(char *)(param_1 + 0x344) != '\0') && (*(char *)(param_1 + 0x3a2) == '\0')) {
    puVar4 = operator_new(0x440,(nothrow_t *)PTR_nothrow_10082c970);
    if (puVar4 == (undefined4 *)0x0) {
      uVar3 = FUN_1001cc310();
      cVar1 = _os_log_type_enabled(uVar3,0x10);
      if (cVar1 != '\0') {
        local_48 = 0x8220202;
        local_44 = "Assertion failure";
        local_3c = 0x822;
        local_3a = "context != nullptr";
        __os_log_error_impl(0x100000000,uVar3,0x10,"%{public}s: (%{public}s)",&local_48,0x16);
      }
      FUN_1001782e9(0,0);
    }
    else {
      FUN_1001c62d9(puVar4,0x440);
      *puVar4 = *(undefined4 *)(param_1 + 0x28);
      _memcpy(puVar4 + 2,(void *)(param_1 + 0x6b40),0x420);
      puVar4[0x10a] = *(undefined4 *)(param_1 + 0x6f60);
      iVar2 = FUN_1001ee6ff(FUN_1004deb23,puVar4,0xfffffffe,0,0,
                            "UpdateTotalPhotoCountAndTotalPhotoBytesPreemptiveThread");
      if (iVar2 != -0x80) {
        if (iVar2 == 0) goto LAB_1004de98e;
        uVar3 = FUN_1001cc310();
        cVar1 = _os_log_type_enabled(uVar3,0x10);
        if (cVar1 != '\0') {
          local_48 = 0x8220202;
          local_44 = "Assertion failure";
          local_3c = 0x400;
          local_3a = (char *)CONCAT44(local_3a._4_4_,iVar2);
          __os_log_error_impl(0x100000000,uVar3,0x10,"%{public}s: err == (%d)",&local_48,0x12);
        }
        if (iVar2 == 0) goto LAB_1004de98e;
      }
      operator_delete(puVar4);
    }
  }
LAB_1004de98e:
  if (*(long *)PTR____stack_chk_guard_10082cb58 == local_28) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  ___stack_chk_fail();
}

