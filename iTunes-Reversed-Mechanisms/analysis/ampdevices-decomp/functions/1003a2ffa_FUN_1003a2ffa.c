// name: FUN_1003a2ffa
// address: 1003a2ffa

ulong FUN_1003a2ffa(long param_1,char param_2,uint param_3)

{
  char cVar1;
  undefined8 uVar2;
  undefined8 unaff_RBX;
  ulong uVar3;
  undefined4 local_38;
  char *local_34;
  undefined2 local_2c;
  char *local_2a;
  long local_18;
  
  local_18 = *(long *)PTR____stack_chk_guard_10082cb58;
  if (*(char *)(param_1 + 0xe6) == param_2) {
    if (param_3 <= *(uint *)(param_1 + 0x84)) {
      uVar3 = 0;
      goto LAB_1003a3075;
    }
LAB_1003a303a:
    *(uint *)(param_1 + 0x84) = param_3;
  }
  else {
    if (param_2 == '\0') {
      uVar2 = FUN_1001cc310();
      cVar1 = _os_log_type_enabled(uVar2,0x10);
      if (cVar1 != '\0') {
        local_38 = 0x8220202;
        local_34 = "Assertion failure";
        local_2c = 0x822;
        local_2a = "inLikedState != kITLikedState_Unknown";
        __os_log_error_impl(0x100000000,uVar2,0x10,"%{public}s: (%{public}s)",&local_38,0x16);
      }
      uVar3 = 0;
      FUN_1001782e9(0,0);
      goto LAB_1003a3075;
    }
    *(char *)(param_1 + 0xe6) = param_2;
    if (*(uint *)(param_1 + 0x84) < param_3) goto LAB_1003a303a;
  }
  FUN_1003a2686(param_1,0x10);
  uVar3 = CONCAT71((int7)((ulong)unaff_RBX >> 8),1);
LAB_1003a3075:
  if (*(long *)PTR____stack_chk_guard_10082cb58 == local_18) {
    return uVar3 & 0xffffffff;
  }
                    /* WARNING: Subroutine does not return */
  ___stack_chk_fail();
}

