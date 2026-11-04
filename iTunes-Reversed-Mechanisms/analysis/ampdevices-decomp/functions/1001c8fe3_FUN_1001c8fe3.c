// name: FUN_1001c8fe3
// address: 1001c8fe3

undefined8 FUN_1001c8fe3(long param_1,undefined8 param_2,undefined4 *param_3)

{
  char cVar1;
  undefined8 uVar2;
  uint uVar3;
  
  if ((param_1 == 0) || (*(long *)(param_1 + 0x20) == 0)) {
    uVar2 = FUN_1001cc310();
    cVar1 = _os_log_type_enabled(uVar2,0x10);
    if (cVar1 != '\0') {
      FUN_1006ab47a(uVar2);
    }
LAB_1001c9064:
    FUN_1001782e9(0,0);
    return 0xffffffce;
  }
  if (param_3 == (undefined4 *)0x0) {
    uVar2 = FUN_1001cc310();
    cVar1 = _os_log_type_enabled(uVar2,0x10);
    if (cVar1 != '\0') {
      FUN_1006ab404(uVar2);
    }
    goto LAB_1001c9064;
  }
  uVar3 = *(uint *)(*(long *)(param_1 + 0x20) + 4);
  uVar3 = uVar3 >> 0x18 | (uVar3 & 0xff0000) >> 8 | (uVar3 & 0xff00) << 8 | uVar3 << 0x18;
  if ((int)uVar3 < 0x6d657461) {
    if ((int)uVar3 < 0x696c7374) {
      if ((uVar3 == 0x63747279) || (uVar3 == 0x67727570)) {
LAB_1001c90de:
        *param_3 = 4;
        return 0;
      }
    }
    else {
      if (uVar3 == 0x696c7374) goto LAB_1001c9109;
      if ((uVar3 == 0x6c616e67) || (uVar3 == 0x6d65616e)) goto LAB_1001c90de;
    }
  }
  else if ((int)uVar3 < 0x6e616d65) {
    if ((uVar3 == 0x6d657461) || (uVar3 == 0x6d696d65)) goto LAB_1001c90de;
  }
  else {
    if (uVar3 == 0x75756964) {
      return 1;
    }
    if (uVar3 == 0x74797073) goto LAB_1001c9109;
    if (uVar3 == 0x6e616d65) goto LAB_1001c90de;
  }
  if (*(long *)(param_1 + 8) == 0) {
    return 1;
  }
  if (*(int *)(*(long *)(*(long *)(param_1 + 8) + 0x20) + 4) != 0x74736c69) {
    return 1;
  }
LAB_1001c9109:
  *param_3 = 0;
  return 0;
}

