// name: FUN_1002a91fa
// address: 1002a91fa

void FUN_1002a91fa(long param_1,long param_2)

{
  undefined8 uVar1;
  
  if (*(long *)(param_2 + 0x138) != 0) {
    FUN_10042afe8(param_1,0x55464944,param_2 + 0x38);
    FUN_10042afe8(param_1,0x55464920,param_2 + 0x38);
    uVar1 = 0x55464920;
    if (2 < *(byte *)(param_1 + 0xb)) {
      uVar1 = 0x55464944;
    }
    FUN_10042b271(param_1,uVar1,param_2 + 0x39,*(undefined1 *)(param_2 + 0x38),
                  *(undefined8 *)(param_2 + 0x138),*(undefined4 *)(param_2 + 0x140));
    return;
  }
  return;
}

