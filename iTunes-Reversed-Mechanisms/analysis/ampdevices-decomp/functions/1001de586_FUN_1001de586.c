// name: FUN_1001de586
// address: 1001de586

int FUN_1001de586(undefined8 param_1,ulong param_2,undefined8 param_3,undefined8 param_4)

{
  char cVar1;
  int iVar2;
  int iVar3;
  undefined8 uVar4;
  undefined1 *puVar5;
  ulong uVar6;
  uint local_23c;
  undefined1 local_238 [512];
  long local_38;
  
  local_38 = *(long *)PTR____stack_chk_guard_10082cb58;
  iVar2 = FUN_1001de2b7(param_1,param_2,0,&local_23c,0x7fffffff);
  if (iVar2 != 0) {
    uVar4 = FUN_1001cc310();
    cVar1 = _os_log_type_enabled(uVar4,0x10);
    if (cVar1 != '\0') {
      FUN_1006b975f(iVar2,uVar4);
    }
    goto LAB_1001de6cb;
  }
  uVar6 = (ulong)(int)local_23c;
  if (uVar6 < 0x201) {
    puVar5 = local_238;
  }
  else {
    puVar5 = (undefined1 *)FUN_1001c63e1(uVar6);
    if (puVar5 == (undefined1 *)0x0) {
      uVar4 = FUN_1001cc310();
      cVar1 = _os_log_type_enabled(uVar4,0x10);
      if (cVar1 != '\0') {
        FUN_1006b97cb(uVar4);
      }
      FUN_1001782e9(0,0);
      iVar2 = -0x6c;
      goto LAB_1001de6cb;
    }
    uVar6 = (ulong)local_23c;
  }
  iVar3 = FUN_1001de2b7(param_1,param_2 & 0xffffffff,puVar5,&local_23c,uVar6);
  if (iVar3 == 0) {
    iVar3 = FUN_1001dd1c1(param_3,puVar5,local_23c,0,param_4);
    iVar2 = 0;
    if (iVar3 != 0) goto LAB_1001de66a;
  }
  else {
LAB_1001de66a:
    uVar4 = FUN_1001cc310();
    cVar1 = _os_log_type_enabled(uVar4,0x10);
    if (cVar1 != '\0') {
      FUN_1006b9841(uVar4);
    }
    FUN_1001782e9(0,0);
    iVar2 = iVar3;
  }
  if (puVar5 != local_238) {
    FUN_1001c64c1(puVar5);
  }
LAB_1001de6cb:
  if (*(long *)PTR____stack_chk_guard_10082cb58 == local_38) {
    return iVar2;
  }
                    /* WARNING: Subroutine does not return */
  ___stack_chk_fail();
}

