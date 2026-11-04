// name: FUN_1003714b1
// address: 1003714b1

undefined8 FUN_1003714b1(int *param_1,undefined2 *param_2)

{
  int *piVar1;
  int *piVar2;
  char cVar3;
  size_t sVar4;
  int *piVar5;
  undefined8 uVar6;
  int *piVar7;
  undefined4 local_48;
  char *local_44;
  undefined2 local_3c;
  char *local_3a;
  long local_28;
  
  local_28 = *(long *)PTR____stack_chk_guard_10082cb58;
  *param_2 = 0;
  cVar3 = FUN_10017cbd0();
  if ((cVar3 == '\0') || (*param_1 != 0x41464350)) {
    uVar6 = FUN_1001cc310();
    cVar3 = _os_log_type_enabled(uVar6,0x10);
    if (cVar3 != '\0') {
      local_3a = "JRFileSpecIsAFCPath(spec)";
LAB_1003715eb:
      local_3c = 0x822;
      local_44 = "Assertion failure";
      local_48 = 0x8220202;
      __os_log_error_impl(0x100000000,uVar6,0x10,"%{public}s: (%{public}s)",&local_48,0x16);
    }
  }
  else {
    piVar1 = param_1 + 7;
    sVar4 = _strlen((char *)piVar1);
    if (sVar4 != 0) {
      param_1 = (int *)((long)param_1 + sVar4 + 0x1b);
      piVar2 = param_1;
      do {
        piVar5 = piVar2;
        piVar7 = param_1;
        if (piVar5 <= piVar1) break;
        param_1 = (int *)((long)piVar7 + -1);
        piVar2 = (int *)((long)piVar5 + -1);
      } while ((char)*piVar5 == '/');
      for (; (piVar1 <= piVar5 && ((char)*piVar5 != '/')); piVar5 = (int *)((long)piVar5 + -1)) {
      }
      FUN_1001e5811((char *)((long)piVar5 + 1),(int)piVar7 - (int)piVar5,param_2);
      uVar6 = 0;
      goto LAB_100371569;
    }
    uVar6 = FUN_1001cc310();
    cVar3 = _os_log_type_enabled(uVar6,0x10);
    if (cVar3 != '\0') {
      local_3a = "pathLength != 0";
      goto LAB_1003715eb;
    }
  }
  FUN_1001782e9(0,0);
  uVar6 = 0xffffffce;
LAB_100371569:
  if (*(long *)PTR____stack_chk_guard_10082cb58 != local_28) {
                    /* WARNING: Subroutine does not return */
    ___stack_chk_fail();
  }
  return uVar6;
}

