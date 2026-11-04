// name: FUN_1004f17ec
// address: 1004f17ec

undefined1 FUN_1004f17ec(long param_1)

{
  int iVar1;
  char cVar2;
  undefined8 uVar3;
  undefined1 uVar4;
  undefined4 local_38;
  char *local_34;
  undefined2 local_2c;
  char *local_2a;
  long local_20;
  
  local_20 = *(long *)PTR____stack_chk_guard_10082cb58;
  if (param_1 == 0) {
    uVar3 = FUN_1001cc310();
    cVar2 = _os_log_type_enabled(uVar3,0x10);
    if (cVar2 != '\0') {
      local_38 = 0x8220202;
      local_34 = "Assertion failure";
      local_2c = 0x822;
      local_2a = "handlerData != nullptr";
      __os_log_error_impl(0x100000000,uVar3,0x10,"%{public}s: (%{public}s)",&local_38,0x16);
    }
    uVar4 = 0;
    FUN_1001782e9(0,0);
    goto LAB_1004f1883;
  }
  if (*(char *)(param_1 + 0x6af5) != '\0') {
    iVar1 = *(int *)(param_1 + 0x66b0);
    uVar4 = 0;
    if (iVar1 < 0x69506f64) {
      if ((iVar1 != 0x69506164) && (iVar1 != 0x6950686e)) goto LAB_1004f1883;
    }
    else if ((iVar1 != 0x69506f74) && (uVar4 = 0, iVar1 != 0x69506f64)) goto LAB_1004f1883;
    cVar2 = FUN_1004f1712(param_1);
    if (((cVar2 == '\0') && (*(char *)(param_1 + 0x6aec) == '\0')) &&
       ((*(char *)(DAT_1008c76a0 + 0x1a91) == '\0' || (*(char *)(param_1 + 0x6afa) != '\0')))) {
      uVar4 = 1;
      goto LAB_1004f1883;
    }
  }
  uVar4 = 0;
LAB_1004f1883:
  if (*(long *)PTR____stack_chk_guard_10082cb58 != local_20) {
                    /* WARNING: Subroutine does not return */
    ___stack_chk_fail();
  }
  return uVar4;
}

