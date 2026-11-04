// name: FUN_100570bfc
// address: 100570bfc

undefined8 FUN_100570bfc(long param_1,undefined8 param_2)

{
  char cVar1;
  long lVar2;
  long lVar3;
  undefined8 uVar4;
  undefined4 local_48;
  char *local_44;
  undefined2 local_3c;
  char *local_3a;
  long local_28;
  
  local_28 = *(long *)PTR____stack_chk_guard_10082cb58;
  lVar2 = FUN_100170ef7(param_2);
  *(undefined8 *)(param_1 + 0x20) = 0;
  *(long *)(param_1 + 0x28) = lVar2;
  *(undefined4 *)(param_1 + 0x30) = 0x6d6f6f76;
  *(undefined8 *)(param_1 + 0x38) = 8;
  *(long *)(param_1 + 0x40) = lVar2 + -8;
  lVar3 = FUN_1001c63e1(lVar2);
  *(long *)(param_1 + 0x18) = lVar3;
  if (lVar3 == 0) {
    uVar4 = FUN_1001cc310();
    cVar1 = _os_log_type_enabled(uVar4,0x10);
    if (cVar1 != '\0') {
      local_48 = 0x8220202;
      local_44 = "Assertion failure";
      local_3c = 0x822;
      local_3a = "mMoovData != nullptr";
      __os_log_error_impl(0x100000000,uVar4,0x10,"%{public}s: (%{public}s)",&local_48,0x16);
    }
    FUN_1001782e9(0,0);
    uVar4 = 0xffffff94;
  }
  else {
    uVar4 = FUN_100170f3b(param_2);
    FUN_1001c631b(uVar4,*(undefined8 *)(param_1 + 0x18),lVar2);
    uVar4 = 0;
  }
  if (*(long *)PTR____stack_chk_guard_10082cb58 == local_28) {
    return uVar4;
  }
                    /* WARNING: Subroutine does not return */
  ___stack_chk_fail();
}

