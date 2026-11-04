// name: FUN_1004ec077
// address: 1004ec077

bool FUN_1004ec077(long param_1,uint param_2)

{
  uint uVar1;
  uint uVar2;
  
  if ((*(char *)(param_1 + 0x3a2) != '\0') && (uVar1 = *(uint *)(param_1 + 0x166e0), uVar1 != 0)) {
    if ((param_2 & 4) != 0) {
      if ((param_2 & 0xc62) != 0) {
        return SUB41((uVar1 & 0x40) >> 6,0);
      }
      return SUB41((uVar1 & 0x20) >> 5,0);
    }
    if ((param_2 >> 0x15 & 1) != 0) {
      if ((param_2 & 0xc62) != 0) {
        return (bool)((byte)(uVar1 >> 8) & 1);
      }
      return (bool)((byte)uVar1 >> 7);
    }
    if ((param_2 & 0x18000) == 0) {
      if ((param_2 & 0x101) != 0) {
        return SUB41((uVar1 & 4) >> 2,0);
      }
      if ((param_2 & 0x20) != 0) {
        return SUB41((uVar1 & 8) >> 3,0);
      }
      if ((param_2 & 2) != 0) {
        return SUB41((uVar1 & 2) >> 1,0);
      }
      if ((param_2 >> 10 & 1) != 0) {
        uVar2 = 0x200;
        if (*(char *)(param_1 + 0x351) == '\0') {
          uVar2 = 2;
        }
        return (uVar2 & uVar1) != 0;
      }
      if ((param_2 & 0x40) != 0) {
        return SUB41((uVar1 & 0x10) >> 4,0);
      }
      if ((param_2 & 8) != 0) {
        return (bool)((byte)uVar1 & 1);
      }
    }
  }
  return false;
}

