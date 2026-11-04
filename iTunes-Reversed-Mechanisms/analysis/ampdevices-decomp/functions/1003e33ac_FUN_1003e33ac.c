// name: FUN_1003e33ac
// address: 1003e33ac

undefined8 FUN_1003e33ac(long param_1)

{
  char cVar1;
  undefined8 uVar2;
  
  cVar1 = FUN_1003df2de(*(undefined4 *)(param_1 + 0x18),*(undefined8 *)(param_1 + 0x20));
  if (cVar1 != '\0') {
    uVar2 = FUN_1003df966(*(undefined4 *)(param_1 + 0x18),*(undefined8 *)(param_1 + 0x20),0,
                          *(undefined4 *)(param_1 + 0x28),FUN_1002a91fa,param_1);
    return uVar2;
  }
  return 0xfffffffc;
}

