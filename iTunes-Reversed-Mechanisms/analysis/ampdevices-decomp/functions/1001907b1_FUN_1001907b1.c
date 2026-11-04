// name: FUN_1001907b1
// address: 1001907b1

bool FUN_1001907b1(undefined8 param_1)

{
  char cVar1;
  short sVar2;
  int iVar3;
  undefined8 uVar4;
  bool bVar5;
  byte local_104 [13];
  byte local_f7;
  undefined1 local_70 [80];
  long local_20;
  
  local_20 = *(long *)PTR____stack_chk_guard_10082cb58;
  iVar3 = FUN_10018e4a1(param_1,local_70);
  if (iVar3 != -0x80) {
    if (iVar3 == 0) {
      bVar5 = false;
      sVar2 = _FSGetCatalogInfo(local_70,0x20006,local_104,0,0,0);
      if (sVar2 == 0) {
        if ((local_104[0] & 0x10) == 0) {
          uVar4 = FUN_1001cc310();
          cVar1 = _os_log_type_enabled(uVar4,0x10);
          if (cVar1 != '\0') {
            FUN_100693b34(uVar4);
          }
          bVar5 = false;
          FUN_1001782e9(0,0);
        }
        else {
          bVar5 = (local_f7 & 7) == 3;
        }
        goto LAB_100190854;
      }
      if (sVar2 == -0x80) goto LAB_100190854;
      uVar4 = FUN_1001cc310();
      cVar1 = _os_log_type_enabled(uVar4,0x10);
      if (cVar1 != '\0') {
        FUN_100693baa((int)sVar2,uVar4);
      }
    }
    else {
      uVar4 = FUN_1001cc310();
      cVar1 = _os_log_type_enabled(uVar4,0x10);
      if (cVar1 != '\0') {
        FUN_100693c16(iVar3,uVar4);
      }
    }
  }
  bVar5 = false;
LAB_100190854:
  if (*(long *)PTR____stack_chk_guard_10082cb58 == local_20) {
    return bVar5;
  }
                    /* WARNING: Subroutine does not return */
  ___stack_chk_fail();
}

