// name: FUN_1002e1c5d
// address: 1002e1c5d

void FUN_1002e1c5d(char *param_1,long param_2,ulong *param_3)

{
  char cVar1;
  ulong uVar2;
  char *pcVar3;
  
  uVar2 = 0;
  pcVar3 = param_1;
  do {
    if (param_1 + param_2 <= pcVar3) {
      return;
    }
    cVar1 = *pcVar3;
    if ((cVar1 == '\r') || (cVar1 == '\n')) {
      if (param_3 != (ulong *)0x0) {
        *param_3 = uVar2 & 0xffffffff;
      }
      if (pcVar3 + 1 < param_1 + param_2 && cVar1 == '\r') {
        return;
      }
    }
    if (cVar1 == '\r') {
      return;
    }
    uVar2 = uVar2 + 1;
    pcVar3 = pcVar3 + 1;
  } while (cVar1 != '\n');
  return;
}

