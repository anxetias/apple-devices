// name: FUN_100287235
// address: 100287235

bool FUN_100287235(long param_1)

{
  uint uVar1;
  bool bVar2;
  
  if (*(int *)(param_1 + 0x3c) == 0x53485244) {
    uVar1 = FUN_100474227(*(undefined8 *)(param_1 + 8));
    bVar2 = uVar1 < 2;
  }
  else if (*(int *)(param_1 + 0x3c) == 0x48545450) {
    bVar2 = true;
  }
  else {
    bVar2 = false;
  }
  return bVar2;
}

