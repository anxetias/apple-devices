// name: FUN_10045b676
// address: 10045b676

int FUN_10045b676(undefined8 *param_1,int param_2,ulong *param_3)

{
  char cVar1;
  int iVar2;
  ulong uVar3;
  undefined8 uVar4;
  uint local_40;
  undefined4 uStack_3c;
  undefined4 local_38;
  char *local_34;
  undefined2 local_2c;
  int local_2a;
  long local_20;
  
  local_20 = *(long *)PTR____stack_chk_guard_10082cb58;
  if (param_2 == 8) {
    iVar2 = FUN_10045b480(*param_1,&local_40);
    if (iVar2 == -0x80) goto LAB_10045b74a;
    if (iVar2 != 0) {
      uVar4 = FUN_1001cc310();
      cVar1 = _os_log_type_enabled(uVar4,0x10);
      goto joined_r0x00010045b748;
    }
    uVar3 = CONCAT44(uStack_3c,local_40);
  }
  else {
    iVar2 = -0xd0;
    if ((param_2 != 4) || (iVar2 = FUN_10045b3c2(*param_1,&local_40), iVar2 == -0x80))
    goto LAB_10045b74a;
    if (iVar2 != 0) {
      uVar4 = FUN_1001cc310();
      cVar1 = _os_log_type_enabled(uVar4,0x10);
joined_r0x00010045b748:
      if (cVar1 != '\0') {
        local_2c = 0x400;
        local_34 = "Assertion failure";
        local_38 = 0x8220202;
        local_2a = iVar2;
        __os_log_error_impl(0x100000000,uVar4,0x10,"%{public}s: err == (%d)",&local_38,0x12);
      }
      goto LAB_10045b74a;
    }
    uVar3 = (ulong)local_40;
  }
  *param_3 = uVar3;
  iVar2 = 0;
LAB_10045b74a:
  if (*(long *)PTR____stack_chk_guard_10082cb58 == local_20) {
    return iVar2;
  }
                    /* WARNING: Subroutine does not return */
  ___stack_chk_fail();
}

