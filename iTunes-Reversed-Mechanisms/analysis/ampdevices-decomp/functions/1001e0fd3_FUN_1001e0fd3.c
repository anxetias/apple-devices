// name: FUN_1001e0fd3
// address: 1001e0fd3

int FUN_1001e0fd3(long param_1,ulong param_2)

{
  byte bVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  byte bVar5;
  
  param_2 = param_2 & 0xffffffff;
  iVar4 = 0;
  iVar2 = 1;
  do {
    if ((int)param_2 < 1) {
      return iVar4;
    }
    bVar1 = *(byte *)(param_1 + -1 + param_2);
    bVar5 = bVar1 - 0x20;
    if (0x19 < (byte)(bVar1 + 0x9f)) {
      bVar5 = bVar1;
    }
    if ((byte)(bVar5 - 0x30) < 10) {
      iVar3 = bVar5 - 0x30;
LAB_1001e101d:
      iVar4 = iVar3 * iVar2 + iVar4;
      iVar2 = iVar2 << 4;
    }
    else if ((byte)(bVar5 + 0xbf) < 6) {
      iVar3 = bVar5 - 0x37;
      goto LAB_1001e101d;
    }
    param_2 = param_2 - 1;
    if (iVar2 == 0) {
      return iVar4;
    }
  } while( true );
}

