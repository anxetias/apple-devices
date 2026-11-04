// name: FUN_1002b82b8
// address: 1002b82b8

uint FUN_1002b82b8(uint *param_1)

{
  uint uVar1;
  char cVar2;
  undefined1 local_14 [4];
  uint *local_10;
  
  local_10 = (uint *)0x0;
  if (param_1 != (uint *)0x0) {
    uVar1 = *param_1;
    cVar2 = FUN_1002b8190(0x66726d61,param_1 + 2,
                          (uVar1 >> 0x18 | (uVar1 & 0xff0000) >> 8 | (uVar1 & 0xff00) << 8 |
                          uVar1 << 0x18) - 8,&local_10,local_14);
    if (cVar2 != '\0') {
      uVar1 = *local_10;
      return uVar1 >> 0x18 | (uVar1 & 0xff0000) >> 8 | (uVar1 & 0xff00) << 8 | uVar1 << 0x18;
    }
  }
  return 0;
}

