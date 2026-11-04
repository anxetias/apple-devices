// name: FUN_100642d10
// address: 100642d10

undefined8 FUN_100642d10(long param_1,long *param_2)

{
  long lVar1;
  uint uVar2;
  
  lVar1 = *param_2;
  if ((*(uint *)(*(long *)(param_1 + 8) + 0x8a4) <= *(uint *)(lVar1 + 8)) &&
     ((*(byte *)(lVar1 + 0xc4) & 4) != 0)) {
    uVar2 = FUN_100474dd0(lVar1,0);
    if ((uVar2 & 0xc62) == 0 && uVar2 != 0) {
      *(byte *)(lVar1 + 0xc4) = *(byte *)(lVar1 + 0xc4) & 0xfb;
    }
  }
  return 0;
}

