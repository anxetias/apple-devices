// name: FUN_1003e33f2
// address: 1003e33f2

undefined8 FUN_1003e33f2(long param_1)

{
  char cVar1;
  undefined8 uVar2;
  
  cVar1 = FUN_1003df2de(*(undefined4 *)(param_1 + 0x18),*(undefined8 *)(param_1 + 0x20));
  if (cVar1 != '\0') {
    uVar2 = FUN_1003e0f9c(*(undefined4 *)(param_1 + 0x18),*(undefined8 *)(param_1 + 0x20),
                          *(undefined4 *)(param_1 + 0x28),FUN_1002a927e,param_1);
    return uVar2;
  }
  return 0xfffffffc;
}

