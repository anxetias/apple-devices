// name: FUN_1005e963c
// address: 1005e963c

ulong FUN_1005e963c(long param_1,int param_2,undefined4 *param_3)

{
  char cVar1;
  long lVar2;
  undefined8 uVar3;
  undefined8 unaff_RBX;
  ulong uVar4;
  undefined4 local_38;
  char *local_34;
  undefined2 local_2c;
  char *local_2a;
  long local_18;
  
  local_18 = *(long *)PTR____stack_chk_guard_10082cb58;
  if (param_2 != 0) {
    for (lVar2 = *(long *)(param_1 + 0x60); lVar2 != 0; lVar2 = *(long *)(lVar2 + 0x6878)) {
      if (*(int *)(lVar2 + 0x6884) == param_2) {
        if (param_3 != (undefined4 *)0x0) {
          *param_3 = *(undefined4 *)(lVar2 + 0x6888);
        }
        uVar4 = CONCAT71((int7)((ulong)unaff_RBX >> 8),*(undefined1 *)(lVar2 + 5));
        goto LAB_1005e9695;
      }
    }
  }
  uVar3 = FUN_1001cc310();
  cVar1 = _os_log_type_enabled(uVar3,0x10);
  if (cVar1 != '\0') {
    local_38 = 0x8220202;
    local_34 = "Assertion failure";
    local_2c = 0x822;
    local_2a = "device != nullptr";
    __os_log_error_impl(0x100000000,uVar3,0x10,"%{public}s: (%{public}s)",&local_38,0x16);
  }
  uVar4 = 0;
  FUN_1001782e9(0,0);
LAB_1005e9695:
  if (*(long *)PTR____stack_chk_guard_10082cb58 == local_18) {
    return uVar4 & 0xffffffff;
  }
                    /* WARNING: Subroutine does not return */
  ___stack_chk_fail();
}

