// name: FUN_1001c8c35
// address: 1001c8c35

undefined8 FUN_1001c8c35(long param_1,undefined8 param_2)

{
  char cVar1;
  undefined8 uVar2;
  uint uVar3;
  undefined8 uVar4;
  
  if ((param_1 == 0) || (*(long *)(param_1 + 0x20) == 0)) {
    uVar2 = FUN_1001cc310();
    cVar1 = _os_log_type_enabled(uVar2,0x10);
    if (cVar1 != '\0') {
      FUN_1006aaf72(uVar2);
    }
    FUN_1001782e9(0,0);
    return 0xffffffce;
  }
  uVar3 = *(uint *)(*(long *)(param_1 + 0x20) + 4);
  uVar3 = uVar3 >> 0x18 | (uVar3 & 0xff0000) >> 8 | (uVar3 & 0xff00) << 8 | uVar3 << 0x18;
  uVar2 = 1;
  uVar4 = 4;
  if ((int)uVar3 < 0x6d657461) {
    if ((int)uVar3 < 0x64647461) {
      if (uVar3 == 0x63747279) goto LAB_1001c8d30;
      if (uVar3 == 0x64617461) {
        return uVar2;
      }
    }
    else {
      if (uVar3 == 0x64647461) {
        return uVar2;
      }
      if (uVar3 == 0x696c7374) goto LAB_1001c8d04;
      if (uVar3 == 0x6c616e67) goto LAB_1001c8d30;
    }
  }
  else if ((int)uVar3 < 0x74797073) {
    if ((uVar3 == 0x6d657461) || (uVar3 == 0x6d696d65)) goto LAB_1001c8d30;
    if (uVar3 == 0x74647461) {
      return uVar2;
    }
  }
  else {
    if (uVar3 == 0x75756964) {
      return uVar2;
    }
    if (uVar3 == 0x75726566) {
      return uVar2;
    }
    if (uVar3 == 0x74797073) {
LAB_1001c8d04:
      uVar4 = 0;
      goto LAB_1001c8d30;
    }
  }
  if ((*(long *)(param_1 + 8) == 0) ||
     (uVar4 = 0, *(int *)(*(long *)(*(long *)(param_1 + 8) + 0x20) + 4) != 0x74736c69)) {
    return uVar2;
  }
LAB_1001c8d30:
  uVar2 = FUN_10015c7aa(param_1,uVar4,FUN_1001c8c35,param_2);
  return uVar2;
}

