// name: FUN_10018ed8e
// address: 10018ed8e

int FUN_10018ed8e(undefined8 param_1,undefined2 *param_2)

{
  char cVar1;
  short sVar2;
  int iVar3;
  undefined8 uVar4;
  undefined1 local_104 [80];
  undefined1 local_b4 [2];
  undefined2 local_b2;
  long local_20;
  
  local_20 = *(long *)PTR____stack_chk_guard_10082cb58;
  cVar1 = FUN_10017cbd0();
  if (cVar1 == '\0') {
    uVar4 = FUN_1001cc310();
    cVar1 = _os_log_type_enabled(uVar4,0x10);
    if (cVar1 != '\0') {
      FUN_100693540(uVar4);
    }
  }
  else {
    if (param_2 != (undefined2 *)0x0) {
      iVar3 = FUN_10018e4a1(param_1,local_104);
      if (iVar3 == 0) {
        iVar3 = 0;
        sVar2 = _FSGetCatalogInfo(local_104,4,local_b4,0,0,0);
        if (sVar2 == 0) {
          *param_2 = local_b2;
        }
        else {
          iVar3 = (int)sVar2;
        }
      }
      goto LAB_10018ee4d;
    }
    uVar4 = FUN_1001cc310();
    cVar1 = _os_log_type_enabled(uVar4,0x10);
    if (cVar1 != '\0') {
      FUN_1006934ca(uVar4);
    }
  }
  FUN_1001782e9(0,0);
  iVar3 = -0x32;
LAB_10018ee4d:
  if (*(long *)PTR____stack_chk_guard_10082cb58 == local_20) {
    return iVar3;
  }
                    /* WARNING: Subroutine does not return */
  ___stack_chk_fail();
}

