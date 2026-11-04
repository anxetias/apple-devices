// name: FUN_10018a135
// address: 10018a135

bool FUN_10018a135(undefined8 param_1,ulong param_2)

{
  char cVar1;
  int iVar2;
  undefined8 uVar3;
  bool bVar4;
  undefined1 local_490 [1060];
  short local_6c;
  long local_28;
  
  local_28 = *(long *)PTR____stack_chk_guard_10082cb58;
  bVar4 = true;
  if (0x100000000 < param_2) {
    iVar2 = FUN_10017e137(param_1,local_490,0);
    if (iVar2 != -0x80) {
      if (iVar2 == 0) {
        bVar4 = (ushort)(local_6c - 3U) < 0xfffe;
      }
      else {
        uVar3 = FUN_1001cc310();
        cVar1 = _os_log_type_enabled(uVar3,0x10);
        if (cVar1 != '\0') {
          FUN_10068fa13(iVar2,uVar3);
        }
      }
    }
  }
  if (*(long *)PTR____stack_chk_guard_10082cb58 == local_28) {
    return bVar4;
  }
                    /* WARNING: Subroutine does not return */
  ___stack_chk_fail();
}

