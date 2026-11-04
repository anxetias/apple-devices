// name: FUN_10010751a
// address: 10010751a

undefined8 FUN_10010751a(long param_1,ulong param_2)

{
  long lVar1;
  int iVar2;
  undefined8 uVar3;
  long lVar4;
  
  lVar1 = *(long *)(param_1 + 0xb28) + (param_2 & 0xffffffff) * 0x20a0;
  lVar4 = lVar1 + 0xbb0;
  iVar2 = FUN_100105c68(*(undefined8 *)(param_1 + 0x1f60),lVar4,
                        (param_2 & 0xffffffff) * 0x78 + *(long *)(param_1 + 0xb30));
  uVar3 = 0xfffffffe;
  if (iVar2 == 0) {
    if (*(char *)(lVar1 + 0x2928) != '\0') {
      uVar3 = FUN_10012401c(lVar4);
      return uVar3;
    }
    uVar3 = 0;
  }
  return uVar3;
}

