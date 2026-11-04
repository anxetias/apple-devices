// name: FUN_10050b533
// address: 10050b533

ulong FUN_10050b533(long param_1)

{
  int iVar1;
  undefined8 uVar2;
  ulong uVar3;
  
  iVar1 = *(int *)(param_1 + 0x66b0);
  uVar3 = 0;
  if (iVar1 < 0x69506f64) {
    if ((iVar1 != 0x69506164) && (iVar1 != 0x6950686e)) goto LAB_10050b58f;
  }
  else if ((iVar1 != 0x69506f74) && (iVar1 != 0x69506f64)) goto LAB_10050b58f;
  if ((*(char *)(param_1 + 0x14cd8) == '\0') ||
     (uVar2 = FUN_100266b26(*(undefined8 *)(param_1 + 0x66d8)), (char)uVar2 != '\0')) {
    uVar3 = 0;
  }
  else {
    uVar3 = CONCAT71((int7)((ulong)uVar2 >> 8),DAT_1008c784d) ^ 1;
  }
LAB_10050b58f:
  return uVar3 & 0xffffffffffffff01;
}

