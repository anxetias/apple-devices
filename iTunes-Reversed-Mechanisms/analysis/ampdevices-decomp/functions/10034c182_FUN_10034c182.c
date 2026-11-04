// name: FUN_10034c182
// address: 10034c182

void FUN_10034c182(long param_1,uint param_2,ulong param_3,undefined8 param_4)

{
  int iVar1;
  undefined8 uVar2;
  char cVar3;
  undefined8 uVar4;
  undefined4 local_48;
  char *local_44;
  undefined2 local_3c;
  char *local_3a;
  long local_30;
  
  local_30 = *(long *)PTR____stack_chk_guard_10082cb58;
  if ((*(uint *)(param_1 + 0x10) & param_2) != 0) {
    uVar2 = *(undefined8 *)(param_1 + 8);
    iVar1 = *(int *)(param_1 + 0x14 + (param_3 & 0xff) * 4);
    if (iVar1 == 0) {
      uVar4 = FUN_1001cc310();
      cVar3 = _os_log_type_enabled(uVar4,0x10);
      if (cVar3 != '\0') {
        local_48 = 0x8220202;
        local_44 = "Assertion failure";
        local_3c = 0x822;
        local_3a = "anchor != 0";
        __os_log_error_impl(0x100000000,uVar4,0x10,"%{public}s: (%{public}s)",&local_48,0x16);
      }
      FUN_1001782e9(0,0);
    }
    uVar4 = FUN_1001736b8(DAT_1008c4d90,0,&cf__u,iVar1);
    FUN_1001714de(param_4,uVar2,uVar4);
    FUN_10017060f(uVar4);
  }
  if (*(long *)PTR____stack_chk_guard_10082cb58 == local_30) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  ___stack_chk_fail();
}

