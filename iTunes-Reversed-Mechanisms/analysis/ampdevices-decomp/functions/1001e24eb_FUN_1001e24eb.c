// name: FUN_1001e24eb
// address: 1001e24eb

void FUN_1001e24eb(uint param_1,uint param_2,long param_3)

{
  char cVar1;
  ushort uVar2;
  ushort uVar3;
  undefined8 uVar4;
  uint uVar5;
  uint local_23c;
  uint local_238 [128];
  long local_38;
  
  local_38 = *(long *)PTR____stack_chk_guard_10082cb58;
  if (param_3 == 0) {
    uVar4 = FUN_1001cc310();
    cVar1 = _os_log_type_enabled(uVar4,0x10);
    if (cVar1 != '\0') {
      FUN_1006bc073(uVar4);
    }
    FUN_1001782e9(0,0);
    goto LAB_1001e26ad;
  }
  if ((param_2 & 0x20c) == 0) {
LAB_1001e269f:
    FUN_1001e7402(param_1,param_2,param_3);
  }
  else {
    uVar5 = param_1;
    if ((param_2 & 1) == 0) {
      FUN_100177f1b(param_1,local_238);
      uVar5 = local_238[0];
    }
    local_238[0] = uVar5;
    FUN_100177cff(&local_23c);
    uVar2 = FUN_1001781cf(local_23c,1);
    uVar3 = FUN_1001781cf(local_238[0],1);
    uVar5 = local_238[0] - local_23c;
    if (local_238[0] < local_23c) {
      uVar5 = -(local_238[0] - local_23c);
    }
    if (((param_2 & 0x204) == 0) || (0x2b10f < uVar5)) {
LAB_1001e262e:
      if (((param_2 & 8) == 0) || (0x93a7f < uVar5)) goto LAB_1001e269f;
      uVar5 = uVar3 | 0x27130000;
    }
    else if (uVar3 == uVar2) {
      uVar5 = ((param_2 >> 9 & 1) != 0) + 0x2713000a;
    }
    else if ((uVar2 - 1 == (uint)uVar3) || (uVar2 == 1 && uVar3 == 7)) {
      uVar5 = ((param_2 >> 9 & 1) != 0) + 0x2713000f;
    }
    else {
      if ((uVar2 + 1 != (uint)uVar3) && (uVar2 != 7 || uVar3 != 1)) goto LAB_1001e262e;
      uVar5 = ((param_2 >> 9 & 1) != 0) + 0x2713000d;
    }
    FUN_1001c34b7(uVar5,param_3);
    if ((param_2 & 0x10) != 0) {
      local_238[0] = local_238[0] & 0xffff0000;
      FUN_1001e5811(" ",1,local_238);
      FUN_1001e1890(local_238,param_3);
      FUN_1001e7402(param_1,param_2 & 0xfffffffd,local_238);
      FUN_1001e1890(local_238,param_3);
    }
  }
LAB_1001e26ad:
  if (*(long *)PTR____stack_chk_guard_10082cb58 != local_38) {
                    /* WARNING: Subroutine does not return */
    ___stack_chk_fail();
  }
  return;
}

