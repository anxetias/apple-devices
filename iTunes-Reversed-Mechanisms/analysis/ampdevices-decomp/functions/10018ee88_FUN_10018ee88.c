// name: FUN_10018ee88
// address: 10018ee88

bool FUN_10018ee88(int *param_1,uint param_2)

{
  char cVar1;
  int iVar2;
  undefined8 uVar3;
  bool bVar4;
  undefined1 local_4cc [8];
  uint local_4c4;
  uint local_4b4;
  undefined8 local_4a8;
  undefined8 uStack_4a0;
  undefined8 local_498;
  undefined1 local_488 [25];
  char local_46f [1103];
  long local_20;
  
  local_20 = *(long *)PTR____stack_chk_guard_10082cb58;
  local_4a8 = 0;
  uStack_4a0 = 0;
  local_498 = 0;
  cVar1 = FUN_10017cbd0();
  if (cVar1 == '\0') {
    uVar3 = FUN_1001cc310();
    cVar1 = _os_log_type_enabled(uVar3,0x10);
    if (cVar1 != '\0') {
      FUN_1006935b6(uVar3);
    }
    bVar4 = false;
    FUN_1001782e9(0,0);
    goto LAB_10018ef0d;
  }
  if (*param_1 == 0x504f5358) {
    iVar2 = FUN_100192d35(param_1,local_488);
    if (iVar2 == 0) {
      local_4a8 = CONCAT62(local_4a8._2_6_,5);
      uStack_4a0 = CONCAT44(uStack_4a0._4_4_,0x20000);
      bVar4 = false;
      iVar2 = _getattrlist(local_46f,&local_4a8,local_4cc,0x24,0);
      if (iVar2 != 0) goto LAB_10018ef0d;
      if ((local_4b4 & param_2) != 0) {
        bVar4 = (local_4c4 & param_2) != 0;
        goto LAB_10018ef0d;
      }
    }
  }
  bVar4 = false;
LAB_10018ef0d:
  if (*(long *)PTR____stack_chk_guard_10082cb58 == local_20) {
    return bVar4;
  }
                    /* WARNING: Subroutine does not return */
  ___stack_chk_fail();
}

