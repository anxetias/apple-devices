// name: FUN_10042c449
// address: 10042c449

undefined8 FUN_10042c449(long param_1,int param_2,undefined8 param_3,int param_4,undefined2 param_5)

{
  char cVar1;
  char *pcVar2;
  long lVar3;
  undefined8 uVar4;
  int *piVar5;
  int iVar6;
  undefined4 local_58;
  char *local_54;
  undefined2 local_4c;
  char *local_4a;
  long local_38;
  
  local_38 = *(long *)PTR____stack_chk_guard_10082cb58;
  pcVar2 = "CNEACNEA ARC";
  while( true ) {
    if (((*(int *)((long)pcVar2 + 8) == 0) && (*(int *)((long)pcVar2 + 4) == 0)) &&
       (*(int *)pcVar2 == 0)) {
      iVar6 = param_2;
      if (param_2 == 0x20202020) goto LAB_10042c593;
      goto LAB_10042c513;
    }
    if (((*(int *)((long)pcVar2 + 8) == param_2) || (*(int *)((long)pcVar2 + 4) == param_2)) ||
       (*(int *)pcVar2 == param_2)) break;
    pcVar2 = (char *)((long)pcVar2 + 0x18);
  }
  if (*(char *)(param_1 + 0xb) == '\x03') {
    piVar5 = (int *)((long)pcVar2 + 4);
  }
  else {
    piVar5 = (int *)pcVar2;
    if (*(char *)(param_1 + 0xb) != '\x04') {
      piVar5 = (int *)((long)pcVar2 + 8);
    }
  }
  iVar6 = *piVar5;
  if ((iVar6 == param_2) || (*(code **)((long)pcVar2 + 0x10) == (code *)0x0)) {
    lVar3 = 0;
LAB_10042c4fe:
    if (iVar6 == 0x20202020) goto LAB_10042c593;
    if (lVar3 == 0) {
LAB_10042c513:
      lVar3 = FUN_1001c6429((long)param_4 + 0x18);
      if (lVar3 == 0) goto LAB_10042c571;
      *(int *)(lVar3 + 0xc) = param_4;
      FUN_1001c631b(param_3,lVar3 + 0x12,(long)param_4);
    }
    *(int *)(lVar3 + 8) = iVar6;
    *(undefined2 *)(lVar3 + 0x10) = param_5;
    *(int *)(param_1 + 0xe) =
         *(int *)(param_1 + 0xe) + *(int *)(param_1 + 0x20) + *(int *)(lVar3 + 0xc);
    FUN_1001c2470(param_1 + 0x28,lVar3);
  }
  else {
    lVar3 = (**(code **)((long)pcVar2 + 0x10))(param_1 + 4,param_3,param_4,param_2,iVar6);
    if (lVar3 != 0) goto LAB_10042c4fe;
LAB_10042c571:
    uVar4 = FUN_1001cc310();
    cVar1 = _os_log_type_enabled(uVar4,0x10);
    if (cVar1 != '\0') {
      local_58 = 0x8220202;
      local_54 = "Assertion failure";
      local_4c = 0x822;
      local_4a = "tag != nullptr";
      __os_log_error_impl(0x100000000,uVar4,0x10,"%{public}s: (%{public}s)",&local_58,0x16);
    }
    FUN_1001782e9(0,0);
  }
LAB_10042c593:
  if (*(long *)PTR____stack_chk_guard_10082cb58 != local_38) {
                    /* WARNING: Subroutine does not return */
    ___stack_chk_fail();
  }
  return 0;
}

