// name: FUN_10054d80c
// address: 10054d80c

void FUN_10054d80c(int param_1,ulong *param_2)

{
  if (param_2 != (ulong *)0x0) {
    if (param_1 < 0x48545450) {
      if ((param_1 != 0x44574e4c) && (param_1 != 0x46494c45)) {
        return;
      }
    }
    else if (((param_1 != 0x48545450) && (param_1 != 0x53485244)) && (param_1 != 0x4d46494c)) {
      return;
    }
    *param_2 = *param_2 | 0x1c0;
    param_2[0x16] = 0xffff0000;
  }
  return;
}

