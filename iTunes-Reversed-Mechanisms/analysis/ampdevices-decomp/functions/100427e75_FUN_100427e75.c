// name: FUN_100427e75
// address: 100427e75

void FUN_100427e75(byte *param_1,char *param_2,int param_3,undefined1 *param_4,ulong param_5)

{
  ulong uVar1;
  char cVar2;
  ulong uVar3;
  
  *param_4 = 0;
  if ((4 < param_3 && param_2 != (char *)0x0) && (*param_2 == '\0')) {
    uVar3 = 0;
    do {
      if (((param_5 & 0xff) == uVar3) || (cVar2 = param_2[uVar3 + 4], cVar2 == '\0')) break;
      uVar1 = uVar3 + 1;
      *param_4 = (char)uVar1;
      param_4[uVar3 + 1] = cVar2;
      uVar3 = uVar1;
    } while (param_3 - 4 != uVar1);
    if ((param_1 != (byte *)0x0) && ((*param_1 & 1) == 0)) {
      FUN_1001e7dc1(param_4);
      return;
    }
  }
  return;
}

