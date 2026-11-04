// name: FUN_1004aedef
// address: 1004aedef

undefined8 FUN_1004aedef(long param_1,int param_2,undefined4 param_3)

{
  undefined8 *puVar1;
  char cVar2;
  int iVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined8 *puVar6;
  undefined4 local_58;
  char *local_54;
  undefined2 local_4c;
  int local_4a;
  long local_38;
  
  local_38 = *(long *)PTR____stack_chk_guard_10082cb58;
  iVar3 = FUN_1001e9de0();
  uVar5 = 0xfffffb2f;
  if (iVar3 != -0x80) {
    if (iVar3 == 0) {
      puVar6 = *(undefined8 **)(param_1 + 0x68);
      cVar2 = FUN_1004aa626(puVar6);
      while (cVar2 != '\0') {
        puVar1 = (undefined8 *)*puVar6;
        if ((param_2 == 0) || (*(int *)(puVar6 + 0x24) == param_2)) {
          FUN_1004ac2b6(puVar6,param_3,0xffffff80,1);
        }
        cVar2 = FUN_1004aa626(puVar1);
        puVar6 = puVar1;
      }
      FUN_1001e9eb9(param_1 + 0x18);
      uVar5 = 0;
    }
    else {
      uVar4 = FUN_1001cc310();
      cVar2 = _os_log_type_enabled(uVar4,0x10);
      if (cVar2 != '\0') {
        local_58 = 0x8220202;
        local_54 = "Assertion failure";
        local_4c = 0x400;
        local_4a = iVar3;
        __os_log_error_impl(0x100000000,uVar4,0x10,"%{public}s: err == (%d)",&local_58,0x12);
      }
    }
  }
  if (*(long *)PTR____stack_chk_guard_10082cb58 == local_38) {
    return uVar5;
  }
                    /* WARNING: Subroutine does not return */
  ___stack_chk_fail();
}

