// name: FUN_10049f54a
// address: 10049f54a

void FUN_10049f54a(long param_1,uint param_2,undefined1 *param_3)

{
  ulong uVar1;
  char cVar2;
  int iVar3;
  long lVar4;
  undefined8 uVar5;
  ulong uVar6;
  ulong local_50;
  undefined4 local_48;
  ulong local_44;
  long local_38;
  
  local_38 = *(long *)PTR____stack_chk_guard_10082cb58;
  local_50 = 0;
  FUN_100383bd2(param_1 + 8,param_1,param_3,&local_50);
  uVar1 = local_50;
  if (*(ulong *)(param_1 + 0xc0) == 0) {
    uVar6 = 0;
    goto LAB_10049f84c;
  }
  if ((*(ulong *)(param_1 + 0xc0) & 1) == 0) {
LAB_10049f5a1:
    uVar6 = 0;
  }
  else if ((param_2 & 3) == 1) {
    cVar2 = FUN_1001b8428(param_1 + 200);
    if (cVar2 != '\0') goto LAB_10049f5a1;
LAB_10049f5d1:
    uVar6 = 0;
    iVar3 = FUN_1001b96de(param_1 + 200,param_3 + 0x30,0);
    if (iVar3 != 0) goto LAB_10049f5ea;
  }
  else {
    if ((param_2 & 2) == 0) goto LAB_10049f5d1;
LAB_10049f5ea:
    FUN_1001b8172(param_3 + 0x30,param_1 + 200);
    uVar6 = 0x40;
  }
  if ((*(byte *)(param_1 + 0xc0) & 2) != 0) {
    if ((param_2 & 3) == 1) {
      cVar2 = FUN_1001b8428(param_1 + 0xd8);
      if (cVar2 == '\0') {
LAB_10049f62d:
        iVar3 = FUN_1001b96de(param_1 + 0xd8,param_3 + 0x40,0);
        if (iVar3 != 0) goto LAB_10049f643;
      }
    }
    else {
      if ((param_2 & 2) == 0) goto LAB_10049f62d;
LAB_10049f643:
      FUN_1001b8172(param_3 + 0x40,param_1 + 0xd8);
      uVar6 = uVar6 | 0x80;
    }
  }
  if ((*(byte *)(param_1 + 0xc0) & 4) != 0) {
    if ((param_2 & 3) == 1) {
      cVar2 = FUN_1001b8428(param_1 + 0xe8);
      if (cVar2 == '\0') {
LAB_10049f687:
        iVar3 = FUN_1001b96de(param_1 + 0xe8,param_3 + 0x70,0);
        if (iVar3 != 0) goto LAB_10049f69d;
      }
    }
    else {
      if ((param_2 & 2) == 0) goto LAB_10049f687;
LAB_10049f69d:
      FUN_1001b8172(param_3 + 0x70,param_1 + 0xe8);
      uVar6 = uVar6 | 0x1000;
    }
  }
  if ((*(byte *)(param_1 + 0xc0) & 8) != 0) {
    if ((param_2 & 3) == 1) {
      lVar4 = FUN_1001a8610(param_1 + 0xf8);
      if (lVar4 != 0) {
LAB_10049f6e2:
        cVar2 = FUN_1001a85de(param_1 + 0xf8,param_3 + 0x50);
        if (cVar2 == '\0') goto LAB_10049f6f6;
      }
    }
    else {
      if ((param_2 & 2) == 0) goto LAB_10049f6e2;
LAB_10049f6f6:
      FUN_1001a7ad8(param_3 + 0x50,param_1 + 0xf8);
      uVar6 = uVar6 | 0x100;
    }
  }
  if (((*(byte *)(param_1 + 0xc0) & 0x10) != 0) &&
     (((param_2 & 2) != 0 || (cVar2 = FUN_1001a85de(param_1 + 0x108,param_3 + 0xd0), cVar2 == '\0'))
     )) {
    FUN_1001a7ad8(param_3 + 0xd0,param_1 + 0x108);
    uVar6 = uVar6 | 0x20000000;
  }
  if ((*(byte *)(param_1 + 0xc0) & 0x20) != 0) {
    if ((param_2 & 3) == 1) {
      cVar2 = FUN_1001b8428(param_1 + 0x118);
      if (cVar2 == '\0') {
LAB_10049f77b:
        iVar3 = FUN_1001b9c66(param_1 + 0x118,param_3 + 0xe0);
        if (iVar3 != 0) goto LAB_10049f792;
      }
    }
    else {
      if ((param_2 & 2) == 0) goto LAB_10049f77b;
LAB_10049f792:
      FUN_1001b8172(param_3 + 0xe0,param_1 + 0x118);
      uVar6 = uVar6 | 0x40000000;
    }
  }
  if (((*(byte *)(param_1 + 0xc0) & 0x40) != 0) &&
     (((param_2 & 2) != 0 || (cVar2 = FUN_1001a85de(param_1 + 0x128,param_3 + 0xf0), cVar2 == '\0'))
     )) {
    FUN_1001a7ad8(param_3 + 0xf0,param_1 + 0x128);
    uVar6 = uVar6 | 0x400000000;
  }
  if ((*(byte *)(param_1 + 0xc0) & 0x80) == 0) goto LAB_10049f84c;
  if ((param_2 & 3) == 1) {
    cVar2 = FUN_1001b8428(param_1 + 0x138);
    if (cVar2 != '\0') goto LAB_10049f84c;
LAB_10049f818:
    iVar3 = FUN_1001b96de(param_1 + 0x138,param_3 + 0x98,0);
    if (iVar3 == 0) goto LAB_10049f84c;
  }
  else if ((param_2 & 2) == 0) goto LAB_10049f818;
  FUN_1001b8172(param_3 + 0x98,param_1 + 0x138);
  uVar6 = uVar6 | 0x8000000000;
LAB_10049f84c:
  local_50 = uVar6;
  if ((uVar1 | uVar6) != 0) {
    uVar5 = FUN_1003c5880();
    cVar2 = _os_log_type_enabled(uVar5,1);
    if (cVar2 != '\0') {
      local_48 = 0x8000100;
      local_44 = uVar1 | uVar6;
      __os_log_impl(0x100000000,uVar5,1,"ch>      LIBRARY PREFS modifiedFields 0x%0.16llx",&local_48
                    ,0xc);
    }
    FUN_100279998(*param_3);
  }
  if (*(long *)PTR____stack_chk_guard_10082cb58 != local_38) {
                    /* WARNING: Subroutine does not return */
    ___stack_chk_fail();
  }
  return;
}

