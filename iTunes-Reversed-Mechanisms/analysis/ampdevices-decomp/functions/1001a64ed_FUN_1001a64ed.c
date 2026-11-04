// name: FUN_1001a64ed
// address: 1001a64ed

char FUN_1001a64ed(undefined4 *param_1,undefined4 *param_2)

{
  int iVar1;
  undefined4 local_76;
  undefined2 local_72;
  undefined8 local_70;
  undefined4 local_64;
  undefined1 local_60 [4];
  undefined4 local_5c;
  undefined1 local_58 [32];
  long local_38;
  
  local_38 = *(long *)PTR____stack_chk_guard_10082cb58;
  if (DAT_10089cbc0 != '\0') goto LAB_1001a66dc;
  iVar1 = FUN_1001a6739(&local_64,"en0");
  if (iVar1 == 0) {
    iVar1 = FUN_1001a6783(local_64,1,&local_76);
    _IOObjectRelease(local_64);
    if (iVar1 != 0) goto LAB_1001a6570;
  }
  else {
    _IOObjectRelease();
LAB_1001a6570:
    local_64 = 0;
    iVar1 = FUN_1001a6739(&local_64,"en1");
    if (iVar1 == 0) {
      iVar1 = FUN_1001a6783(local_64,0,&local_76);
      _IOObjectRelease(local_64);
      if (iVar1 == 0) goto LAB_1001a6604;
    }
    else {
      _IOObjectRelease();
    }
    local_64 = 0;
    iVar1 = FUN_1001a6739(&local_64,"en0");
    if (iVar1 != 0) {
      _IOObjectRelease();
      goto LAB_1001a66dc;
    }
    iVar1 = FUN_1001a6783(local_64,0,&local_76);
    _IOObjectRelease(local_64);
    local_64 = 0;
    if (iVar1 != 0) goto LAB_1001a66dc;
  }
LAB_1001a6604:
  local_64 = 0;
  DAT_10089cbc0 = '\x01';
  DAT_10089cbc1 = local_76;
  DAT_10089cbc5 = local_72;
  DAT_10089cbc7 = local_76;
  DAT_10089cbcb = local_72;
  iVar1 = FUN_100179732(1,&local_70);
  if (iVar1 == 0) {
    local_60[0] = 0;
    local_5c = 0;
    FUN_10017983e(local_70,"Ethernet",8);
    FUN_10017983e(local_70,&local_76,6);
    FUN_10017983e(local_70,&local_76,6);
    FUN_10017983e(local_70,&local_76,6);
    FUN_10017983e(local_70,"Ethernet",8);
    FUN_1001799f1(local_70,local_60);
    FUN_100179a7b(local_70);
    FUN_1001c631b(local_58,&DAT_10089cbc7,6);
  }
LAB_1001a66dc:
  if (param_1 != (undefined4 *)0x0) {
    *(undefined2 *)(param_1 + 1) = DAT_10089cbc5;
    *param_1 = DAT_10089cbc1;
  }
  if (param_2 != (undefined4 *)0x0) {
    *(undefined2 *)(param_2 + 1) = DAT_10089cbcb;
    *param_2 = DAT_10089cbc7;
  }
  if (*(long *)PTR____stack_chk_guard_10082cb58 == local_38) {
    return DAT_10089cbc0;
  }
                    /* WARNING: Subroutine does not return */
  ___stack_chk_fail();
}

