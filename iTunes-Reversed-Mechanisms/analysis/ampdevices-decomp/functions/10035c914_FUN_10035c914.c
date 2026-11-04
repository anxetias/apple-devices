// name: FUN_10035c914
// address: 10035c914

undefined8 FUN_10035c914(long param_1,undefined8 param_2,int param_3,uint *param_4)

{
  byte bVar1;
  char cVar2;
  int iVar3;
  undefined8 uVar4;
  uint uVar5;
  undefined1 local_468 [1056];
  undefined4 local_48;
  char *local_44;
  undefined2 local_3c;
  char *local_3a;
  long local_28;
  
  local_28 = *(long *)PTR____stack_chk_guard_10082cb58;
  iVar3 = FUN_10035c814(*(undefined8 *)(param_1 + 0x20),param_2,local_468,0);
  if (iVar3 == 0) {
    uVar5 = 1;
    if ((param_3 != 0) && (param_3 != 2)) {
      if (param_3 == 1) {
        bVar1 = FUN_100189847(local_468);
        uVar5 = (uint)bVar1;
      }
      else {
        uVar4 = FUN_1001cc310();
        cVar2 = _os_log_type_enabled(uVar4,0x10);
        if (cVar2 != '\0') {
          local_48 = 0x8220202;
          local_44 = "Assertion failure";
          local_3c = 0x822;
          local_3a = "false";
          __os_log_error_impl(0x100000000,uVar4,0x10,"%{public}s: (%{public}s)",&local_48,0x16);
        }
        uVar5 = 0;
        FUN_1001782e9(0,0);
      }
    }
    *param_4 = uVar5;
  }
  if (*(long *)PTR____stack_chk_guard_10082cb58 == local_28) {
    return 0;
  }
                    /* WARNING: Subroutine does not return */
  ___stack_chk_fail();
}

