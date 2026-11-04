// name: FUN_100371d56
// address: 100371d56

int FUN_100371d56(int *param_1,undefined8 param_2,undefined4 *param_3,undefined8 param_4)

{
  char cVar1;
  undefined4 uVar2;
  int iVar3;
  int iVar4;
  undefined8 uVar5;
  undefined4 *puVar6;
  undefined4 local_458;
  char *local_454;
  undefined2 local_44c;
  char *local_44a;
  long local_38;
  
  local_38 = *(long *)PTR____stack_chk_guard_10082cb58;
  cVar1 = FUN_10017cbd0();
  if ((cVar1 == '\0') || (*param_1 != 0x41464350)) {
    uVar5 = FUN_1001cc310();
    cVar1 = _os_log_type_enabled(uVar5,0x10);
    if (cVar1 != '\0') {
      local_458 = 0x8220202;
      local_454 = "Assertion failure";
      local_44c = 0x822;
      local_44a = "JRFileSpecIsAFCPath(parentDirSpec)";
      __os_log_error_impl(0x100000000,uVar5,0x10,"%{public}s: (%{public}s)",&local_458,0x16);
    }
    FUN_1001782e9(0,0);
    iVar3 = -0x32;
  }
  else {
    puVar6 = &local_458;
    if (param_3 != (undefined4 *)0x0) {
      puVar6 = param_3;
    }
    uVar2 = FUN_1003779dc(param_1,param_2,puVar6);
    iVar3 = FUN_10036db97(uVar2);
    if (iVar3 == 0) {
      iVar4 = FUN_10036dfdc(puVar6,param_4,0);
      iVar3 = 0;
      if ((iVar4 != 0) && (cVar1 = FUN_10017fbfb(param_1), iVar3 = iVar4, cVar1 == '\0')) {
        iVar3 = -0x57f;
      }
    }
  }
  if (*(long *)PTR____stack_chk_guard_10082cb58 != local_38) {
                    /* WARNING: Subroutine does not return */
    ___stack_chk_fail();
  }
  return iVar3;
}

