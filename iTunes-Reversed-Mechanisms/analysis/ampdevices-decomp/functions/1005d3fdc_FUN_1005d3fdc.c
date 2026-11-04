// name: FUN_1005d3fdc
// address: 1005d3fdc

void FUN_1005d3fdc(int *param_1,uint param_2,char param_3)

{
  char cVar1;
  int iVar2;
  long lVar3;
  undefined8 uVar4;
  int iVar5;
  undefined4 local_48;
  char *local_44;
  undefined2 local_3c;
  char *local_3a;
  long local_28;
  
  local_28 = *(long *)PTR____stack_chk_guard_10082cb58;
  if ((param_1 == (int *)0x0) || (*param_1 != 0x61727461)) {
    uVar4 = FUN_1001cc310();
    cVar1 = _os_log_type_enabled(uVar4,0x10);
    if (cVar1 != '\0') {
      local_48 = 0x8220202;
      local_44 = "Assertion failure";
      local_3c = 0x822;
      local_3a = "ArtworkArrayIsValid(inArray)";
      __os_log_error_impl(0x100000000,uVar4,0x10,"%{public}s: (%{public}s)",&local_48,0x16);
    }
    FUN_1001782e9(0,0);
  }
  else {
    param_1[5] = param_1[5] | param_2;
    *(char *)(param_1 + 6) = param_3;
    if ((param_3 != '\0') && (iVar2 = FUN_10017076e(*(undefined8 *)(param_1 + 0x12)), iVar2 != 0)) {
      iVar5 = 0;
      do {
        lVar3 = FUN_1005d3da4(param_1,iVar5);
        if (lVar3 != 0) {
          FUN_1005d3540(lVar3,param_1[5]);
        }
        iVar5 = iVar5 + 1;
      } while (iVar2 != iVar5);
    }
  }
  if (*(long *)PTR____stack_chk_guard_10082cb58 != local_28) {
                    /* WARNING: Subroutine does not return */
    ___stack_chk_fail();
  }
  return;
}

