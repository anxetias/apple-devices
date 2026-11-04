// name: FUN_1001f2787
// address: 1001f2787

int FUN_1001f2787(int *param_1,long param_2,undefined4 param_3)

{
  char cVar1;
  int iVar2;
  undefined8 uVar3;
  undefined1 local_a8 [128];
  long local_28;
  
  local_28 = *(long *)PTR____stack_chk_guard_10082cb58;
  if ((param_1 == (int *)0x0) || (*param_1 != 0x786d6c65)) {
    uVar3 = FUN_1001cc310();
    cVar1 = _os_log_type_enabled(uVar3,0x10);
    if (cVar1 != '\0') {
      FUN_1006c6499(uVar3);
    }
  }
  else {
    if (param_2 != 0) {
      iVar2 = FUN_1001f25c0(param_1,param_2,0);
      if (iVar2 != -0x80) {
        if (iVar2 == 0) {
          FUN_1001e6a9c(param_3,local_a8,0x80);
          iVar2 = FUN_1001f28d2(param_1,local_a8);
          if ((iVar2 != -0x80) && (iVar2 != 0)) {
            uVar3 = FUN_1001cc310();
            cVar1 = _os_log_type_enabled(uVar3,0x10);
            if (cVar1 != '\0') {
              FUN_1006c634b(iVar2,uVar3);
            }
          }
        }
        else {
          uVar3 = FUN_1001cc310();
          cVar1 = _os_log_type_enabled(uVar3,0x10);
          if (cVar1 != '\0') {
            FUN_1006c63b7(iVar2,uVar3);
          }
        }
      }
      goto LAB_1001f285b;
    }
    uVar3 = FUN_1001cc310();
    cVar1 = _os_log_type_enabled(uVar3,0x10);
    if (cVar1 != '\0') {
      FUN_1006c6423(uVar3);
    }
  }
  FUN_1001782e9(0,0);
  iVar2 = -0x32;
LAB_1001f285b:
  if (*(long *)PTR____stack_chk_guard_10082cb58 == local_28) {
    return iVar2;
  }
                    /* WARNING: Subroutine does not return */
  ___stack_chk_fail();
}

